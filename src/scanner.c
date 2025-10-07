#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <tree_sitter/parser.h>
#include <wctype.h>

#ifdef TS_DEBUG
#include <stdio.h>
#define DBG(fmt, ...) fprintf(stderr, "[scanner] " fmt "\n", ##__VA_ARGS__)
#else
#define DBG(fmt, ...) ((void)0)
#endif

#ifdef SC_ASCII_ONLY
#include <ctype.h>
static inline bool sc_is_alpha(int32_t c) {
  return c > 0 && (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}
static inline bool sc_is_alnum(int32_t c) {
  return c > 0 && (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z') ||
                    ('0' <= c && c <= '9'));
}
#else
static inline bool sc_is_alpha(int32_t c) { return iswalpha(c); }
static inline bool sc_is_alnum(int32_t c) { return iswalnum(c); }
#endif

typedef struct {
  unsigned hash_depth;
} ScannerState;

static inline void skip_ws(TSLexer *lx) {
  while (lx->lookahead &&
         (lx->lookahead == ' ' || lx->lookahead == '\t' ||
          lx->lookahead == '\r' || lx->lookahead == '\n' ||
          lx->lookahead == '\f')) {
    lx->advance(lx, true);
  }
}

// NOTE: do NOT include ':' here; it's reserved for keyword selectors in sclang.
static inline bool is_op_lead(int32_t c) {
  unsigned char ch = (unsigned char)c;
  return strchr("@+-*/<>!?|&^%.", ch) != NULL; // '.' added
}

static bool is_complete_op(const char *op, unsigned len) {
  static const char *ops2[] = {
    "@@", "++", "--", "**", "<<", ">>", "<>",
    "<=", ">=", "==", "!=", "&&", "||", "!?",
    "??", "..", "->", "<-", NULL
  };
  static const char *ops3[] = {
    "@|@", "+++", "---", "<<*", ">>*",
    "+>>", "**>", "+/+", "...", NULL
  };

  if (len == 1)
    // ':' REMOVED (keyword selectors); keep division, etc.
    return strchr("@+-*/%|&^!?<>", op[0]) != NULL;

  const char **ops = (len == 2) ? ops2 : (len == 3) ? ops3 : NULL;
  if (!ops) return false;

  for (const char **p = ops; *p; ++p)
    if (strncmp(op, *p, len) == 0)
      return true;

  return false;
}

static bool is_prefix_of_op(const char *op, unsigned len) {
  // Add ".." so "..." can extend properly
  static const char *prefixes[] = {"@|", "<<", ">>", "++", "+>", "--", "..", NULL};

  if (len == 1) return is_op_lead(op[0]);

  if (len == 2) {
    for (const char **p = prefixes; *p; ++p) {
      if (strncmp(op, *p, len) == 0) return true;
    }
  }
  return false;
}

static bool scan_block_comment(TSLexer *lx) {
  int depth = 1, prev = 0;
  for (;;) {
    int32_t c = lx->lookahead;
    if (!c) {
      // Treat unterminated as success so the parser can recover
      return true;
    }
    lx->advance(lx, false);
    if (prev == '/' && c == '*') depth++;
    if (prev == '*' && c == '/') {
      if (--depth == 0) return true;
    }
    prev = c;
  }
}

enum TokenType {
  BLOCK_COMMENT,
  //LIST_COMP_OPEN, // maybe better handle in grammar with token.immediate(':')
  OP_SYM,
  HASH_OPEN,
  HASH_CLOSE,
  SYMBOL_IN_HASH
};

void *tree_sitter_supercollider_external_scanner_create(void) {
  ScannerState *st = (ScannerState *)calloc(1, sizeof(ScannerState));
  DBG("create");
  return st;
}

void tree_sitter_supercollider_external_scanner_destroy(void *payload) {
  DBG("destroy");
  free(payload);
}

unsigned tree_sitter_supercollider_external_scanner_serialize(void *payload,
                                                              char *buffer) {
  if (!payload || !buffer) return 0;
  ScannerState *st = (ScannerState *)payload;
  buffer[0] = (char)(st->hash_depth & 0xFF);
  buffer[1] = (char)((st->hash_depth >> 8) & 0xFF);
  DBG("serialize depth=%u", st->hash_depth);
  return 2;
}

void tree_sitter_supercollider_external_scanner_deserialize(void *payload,
                                                            const char *buffer,
                                                            unsigned length) {
  if (!payload) return;
  ScannerState *st = (ScannerState *)payload;
  if (length >= 2) {
    st->hash_depth = ((unsigned char)buffer[0]) |
                     (((unsigned char)buffer[1]) << 8);
  } else if (length == 1) {
    st->hash_depth = (unsigned char)buffer[0];
  } else {
    st->hash_depth = 0;
  }
  DBG("deserialize depth=%u", st->hash_depth);
}

bool tree_sitter_supercollider_external_scanner_scan(void *payload, TSLexer *lx,
                                                     const bool *valid) {
  ScannerState *st = (ScannerState *)payload;

  skip_ws(lx);

  // ---- HASH_OPEN: "#[" ----
  if (valid[HASH_OPEN] && lx->lookahead == '#') {
    lx->advance(lx, false); // consume '#'
    if (lx->lookahead == '[') {
      lx->advance(lx, false); // consume '['
      st->hash_depth = 1;
      lx->result_symbol = HASH_OPEN;
      DBG("HASH_OPEN depth=1");
      return true;
    } else {
      // If a bare '#' is not meaningful in sclang, this is safe.
      // If it *is* meaningful, we'd need to avoid consuming unless '[' follows.
      return false;
    }
  }

  if (st->hash_depth > 0) {
    if (lx->lookahead == '#') {
      lx->advance(lx, false);
      if (lx->lookahead == '[') {
        lx->advance(lx, false);
        st->hash_depth++;
        DBG("nested #[ depth=%u", st->hash_depth);
        // Not a token boundary itself
        return false;
      }
      return false;
    }

    if (valid[HASH_CLOSE] && lx->lookahead == ']') {
      lx->advance(lx, false);
      if (st->hash_depth > 0) st->hash_depth--;
      DBG("] depth=%u", st->hash_depth);
      if (st->hash_depth == 0) {
        lx->result_symbol = HASH_CLOSE;
        return true;
      }
      return false;
    }

    if (valid[SYMBOL_IN_HASH]) {
      if (sc_is_alpha(lx->lookahead) || lx->lookahead == '_') {
        do {
          lx->advance(lx, false);
        } while (sc_is_alnum(lx->lookahead) || lx->lookahead == '_');
        lx->result_symbol = SYMBOL_IN_HASH;
        return true;
      }
    }
  }

  // ---- OPERATORS and BLOCK COMMENTS (merged) ----
  if (valid[OP_SYM] && is_op_lead(lx->lookahead)) {

    // Special-case: start with '/'
    if (lx->lookahead == '/') {
      lx->advance(lx, false); // consume '/'

      // If immediately '/*' and BLOCK_COMMENT is valid, divert to comment
      if (valid[BLOCK_COMMENT] && lx->lookahead == '*') {
        lx->advance(lx, false); // consume '*'
        if (!scan_block_comment(lx)) return false;
        lx->result_symbol = BLOCK_COMMENT;
        return true;
      }

      // Otherwise, parse '/' as an operator start
      char buf[4] = {'/', 0, 0, 0};
      unsigned len = 1;
      bool had_complete = is_complete_op(buf, len);
      lx->mark_end(lx);

      while (len < 3 && is_op_lead(lx->lookahead)) {
        buf[len++] = (char)lx->lookahead;
        lx->advance(lx, false);
        if (is_complete_op(buf, len)) {
          had_complete = true;
          lx->mark_end(lx);
        }
        if (!is_prefix_of_op(buf, len)) break;
      }

      if (had_complete) {
        lx->result_symbol = OP_SYM;
        return true;
      }
      return false;
    }

    // Normal operator path (not starting with '/')
    char buf[4] = {0};
    unsigned len = 0;
    bool had_complete = false;

    while (len < 3 && is_op_lead(lx->lookahead)) {
      buf[len++] = (char)lx->lookahead;
      lx->advance(lx, false);
      if (is_complete_op(buf, len)) {
        had_complete = true;
        lx->mark_end(lx);
      }
      if (!is_prefix_of_op(buf, len)) break;
    }

    if (had_complete) {
      lx->result_symbol = OP_SYM;
      return true;
    }
    return false;
  }

  //  intentionally do NOT implement LIST_COMP_OPEN "{:" here,
  // because external scanners can't peek without consuming. Handle it
  // in the grammar with `{` followed by `token.immediate(':')`.

  return false;
}
