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
  return (c > 0 && ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')));
}
static inline bool sc_is_alnum(int32_t c) {
  return (c > 0 && ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
                    (c >= '0' && c <= '9')));
}
#else
static inline bool sc_is_alpha(int32_t c) { return iswalpha(c); }
static inline bool sc_is_alnum(int32_t c) { return iswalnum(c); }
#endif

typedef struct {
  unsigned hash_depth;
} ScannerState;

static inline void skip_ws(TSLexer *lx) {
  int32_t c;
  while ((c = lx->lookahead) &&
         (c == ' ' || c == '\t' || c == '\r' || c == '\n' || c == '\f'))
    lx->advance(lx, true);
}

static inline bool is_op_lead(int32_t c) {
  return strchr("@+-*/<>!?|&^%:", c) != NULL;
}

static bool is_complete_op(const char *op, unsigned len) {
  static const char *ops2[] = {"@@", "++", "--", "**", "<<", ">>", "<>",
                               "<=", ">=", "==", "!=", "&&", "||", "!?",
                               "??", "..", "->", "<-", NULL};
  static const char *ops3[] = {"@|@", "+++", "---", "<<*", ">>*",
                               "+>>", "**>", "+/+", "...", NULL};

  if (len == 1)
    return strchr("@+-*/%|&^!?<>:", op[0]) != NULL;

  const char **ops = (len == 2) ? ops2 : (len == 3) ? ops3 : NULL;
  if (!ops)
    return false;

  for (const char **p = ops; *p; ++p)
    if (strncmp(op, *p, len) == 0)
      return true;

  return false;
}

static bool is_prefix_of_op(const char *op, unsigned len) {
  if (len == 1)
    return is_op_lead(op[0]);
  if (len == 2) {
    return (op[0] == '@' && op[1] == '|') || (op[0] == '<' && op[1] == '<') ||
           (op[0] == '>' && op[1] == '>') ||
           (op[0] == '+' && (op[1] == '+' || op[1] == '>')) ||
           (op[0] == '-' && op[1] == '-');
  }
  return false;
}

static bool scan_block_comment(TSLexer *lx) {
  int depth = 1, prev = 0;
  while (1) {
    int32_t c = lx->lookahead;
    if (!c)
      return false;
    lx->advance(lx, false);
    if (prev == '/' && c == '*')
      depth++;
    if (prev == '*' && c == '/') {
      if (--depth == 0)
        return true;
    }
    prev = c;
  }
}

enum TokenType {
  BLOCK_COMMENT,
  LIST_COMP_OPEN,
  OP_SYM,
  HASH_OPEN,
  HASH_CLOSE,
  SYMBOL_IN_HASH
};

void *tree_sitter_supercollider_external_scanner_create(void) {
  ScannerState *st = calloc(1, sizeof(ScannerState));
  DBG("create");
  return st;
}

void tree_sitter_supercollider_external_scanner_destroy(void *payload) {
  DBG("destroy");
  free(payload);
}

unsigned tree_sitter_supercollider_external_scanner_serialize(void *payload,
                                                              char *buffer) {
  if (!payload || !buffer)
    return 0;
  ScannerState *st = (ScannerState *)payload;
  buffer[0] = (char)st->hash_depth;
  DBG("serialize depth=%u", st->hash_depth);
  return 1;
}

void tree_sitter_supercollider_external_scanner_deserialize(void *payload,
                                                            const char *buffer,
                                                            unsigned length) {
  if (!payload)
    return;
  ScannerState *st = (ScannerState *)payload;
  st->hash_depth = (length >= 1) ? (unsigned char)buffer[0] : 0;
  DBG("deserialize depth=%u", st->hash_depth);
}

bool tree_sitter_supercollider_external_scanner_scan(void *payload, TSLexer *lx,
                                                     const bool *valid) {
  ScannerState *st = (ScannerState *)payload;

  skip_ws(lx);

  int32_t lookahead = lx->lookahead;
  if (valid[BLOCK_COMMENT] && lookahead == '/') {
    lx->advance(lx, false);
    if (lx->lookahead == '*') {
      lx->advance(lx, false);
      if (!scan_block_comment(lx))
        return false;
      lx->result_symbol = BLOCK_COMMENT;
      return true;
    }
    return false;
  }

  if (valid[LIST_COMP_OPEN] && lookahead == '{') {
    lx->advance(lx, false);
    if (lx->lookahead == ':') {
      lx->advance(lx, false);
      lx->result_symbol = LIST_COMP_OPEN;
      return true;
    }
    return false;
  }

  if (valid[HASH_OPEN] && lookahead == '#') {
    lx->advance(lx, false);
    if (lx->lookahead == '[') {
      lx->advance(lx, false);
      st->hash_depth = 1;
      lx->result_symbol = HASH_OPEN;
      DBG("HASH_OPEN depth=1");
      return true;
    }
    return false;
  }

  if (st->hash_depth > 0) {
    if (lookahead == '#') {
      lx->advance(lx, false);
      if (lx->lookahead == '[') {
        lx->advance(lx, false);
        st->hash_depth++;
        DBG("nested #[ depth=%u", st->hash_depth);
        return false;
      }
      return false;
    }
  }

  if (st->hash_depth > 0 && valid[HASH_CLOSE] && lookahead == ']') {
    lx->advance(lx, false);
    if (st->hash_depth > 0)
      st->hash_depth--;
    DBG("] depth=%u", st->hash_depth);
    if (st->hash_depth == 0) {
      lx->result_symbol = HASH_CLOSE;
      return true;
    }
    return false;
  }

  if (st->hash_depth > 0 && valid[SYMBOL_IN_HASH]) {
    if (sc_is_alpha(lookahead) || lookahead == '_') {
      do {
        lx->advance(lx, false);
      } while (sc_is_alnum(lx->lookahead) || lx->lookahead == '_');
      lx->result_symbol = SYMBOL_IN_HASH;
      return true;
    }
  }

  if (valid[OP_SYM] && is_op_lead(lookahead)) {
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
      if (!is_prefix_of_op(buf, len))
        break;
    }
    if (had_complete) {
      lx->result_symbol = OP_SYM;
      return true;
    }
    return false;
  }
  return false;
}