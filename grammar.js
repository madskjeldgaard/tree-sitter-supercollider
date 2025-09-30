const PRECEDENCE = {
  comment: 1000,

  call: 140,           // postfix chains bind tighter than any binary op
  unary: 130,          // tighter than BIN, looser than call
  BIN: 20,             // flat, left-associative binary tier
  keyword_message: 19, // below BIN to preserve L→R evaluation

  association: 11,
  associative_item: 10,
  partial: 15,
  field: 13,
  duplication: 12,
  localvar: 4,
  vardef: 3,
  vardef_sequence: 2,
  STRING: 2,
  class_def: 1,
  class: 20
};

function sepBy1(sep, rule) { return seq(rule, repeat(seq(sep, rule))); }
function sepBy(sep, rule) { return optional(sepBy1(sep, rule)); }

module.exports = grammar({
  name: 'supercollider',
  word: $ => $.identifier,
  extras: $ => [/\s/, $.line_comment, $.block_comment],
  externals: $ => [$.block_comment, $._space_separator],

  // Optional 
  // supertypes: $ => [ $._expression, $._object, $._primary ],

  conflicts: $ => [
    [$.switch],
    [$._expression, $._object],
    [$._primary, $.function_block],
    [$._primary, $.collection],
  ],

  rules: {
    source_file: $ => repeat($._expression),

    _expression: $ => choice(
      $.class_def,
      seq($._expression_statement, ";"),
    ),

    _expression_statement: $ => choice(
      $.function_definition,
      $.function_call,
      $.binary_expression,
      $.unary_expression,
      $.keyword_message,
      $._postfix,
      $.variable_definition,
      $.variable_definition_sequence,
      $.return_statement
    ),

    // ===== Expression building blocks =====
    _object: $ => choice(
      $.association,
      $.nil_conditional,
      $.nil_guard,
      $.nil_default,
      $.function_block,
      $.control_structure,
      $.binary_expression,
      $.unary_expression,
      $.indexed_collection,
      $.partial,
      $.duplicated_statement,
      $.keyword_message,
      $._postfix
    ),

    _primary: $ => choice(
      $.literal,
      $.variable,
      $.class,
      $.collection,
      $.list_comprehension,
      $.code_block,
      $.group
    ),

    partial: $ => prec.right(PRECEDENCE.partial, "_"),

    duplicated_statement: $ => prec.left(PRECEDENCE.duplication, seq(
      field("duplicated_object", $._object),
      field("operator", "!"),
      field("duplication_times", $._object)
    )),

    // ===== Functions / Calls / Chaining =====
    function_definition: $ => prec.left(1, seq(
      field("name", $.variable),
      '=',
      field("value", $.function_block)
    )),

    function_call: $ => seq(
      choice(alias($.identifier, $.method_name), $.class),
      "(", optional($.parameter_call_list), ")"
    ),

    method_call: $ => prec.right(seq(
      ".",
      field("name", alias($.identifier, $.method_name)),
      optional(choice(
        seq("(", optional($.parameter_call_list), ")"),
        $.code_block
      ))
    )),

    _postfix: $ => choice(
      prec.left(PRECEDENCE.call, seq($._primary, repeat1($.method_call))),
      $._primary
    ),

    instance_variable_setter_call: $ => prec.left(2, seq(
      ".", field("name", alias($.identifier, $.method_name)), "_",
      optional(seq("(", optional($.parameter_call_list), ")"))
    )),

    _expression_sequence: $ => seq(
      repeat(prec.right(1, seq($._expression_statement, ";"))),
      $._expression_statement,
      optional(";")
    ),

    code_block: $ => seq(
      '{',
      optional($.parameter_list),
      optional($._expression_sequence),
      '}'
    ),

    group: $ => seq('(', $._expression_sequence, ')'),

    function_block: $ => choice(
      $.code_block,
      prec.left(seq(alias($.identifier, $.method_name), $.code_block))
    ),

    parameter_list: $ => choice(
      seq('arg', sepBy(',', $.argument), optional(alias($.variable_argument, $.argument)), ';'),
      seq('|', sepBy(choice($._space_separator, ','), choice($.argument, alias($.variable_argument, $.argument))), '|')
    ),

    argument: $ => seq(
      field("name", $.identifier),
      field("value", optional(choice(
        seq("=", choice($.literal, $.collection, $.code_block)),
        $.code_block
      )))
    ),

    variable_argument: $ => seq("...", field("name", $.identifier)),

    parameter_call_list: $ => sepBy1(',', choice($.named_argument, $._object)),

    named_argument: $ => seq(
      field('name', choice($.symbol, $.identifier)),
      ':',
      field('value', $._object)
    ),

    // ===== Literals / Tokens =====
    literal: $ => choice($.number, $.symbol, $.char, $.string, $.bool),

    integer: $ => /\d+/,
    hexinteger: $ => /0x([a-fA-F\d])+/,
    float: $ => /\d+\.\d+/,
    exponential: $ => /-?\d+(\.\d+)?[eE]-?\d+/,

    pi_literal: $ => choice(
      'pi',                          // π
      seq(choice($.integer, $.float), 'pi') // 2pi, 2.5pi
    ),

    accidental: $ => /\d+[sb]+/,    // e.g. 12s, 4bb, 7ss

    number: $ => choice(
      $.integer,
      $.float,
      $.hexinteger,
      $.exponential,
      $.pi_literal,
      $.accidental
    ),

    symbol: $ => choice(
      prec.left(seq('\\', optional(choice($.identifier, /[0-9]+/, $.escape_sequence)))),
      prec.left(seq("'", optional(token.immediate(/[^"'\\]+/)), "'")),
    ),

    char: $ => /\$./,

    string: $ => repeat1(seq(
      '"',
      repeat(choice(
        token.immediate(prec(PRECEDENCE.STRING, /[^"\\\n]+|\\\r?\n/)),
        $.escape_sequence
      )),
      '"'
    )),

    bool: $ => choice("true", "false"),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xu0-7]/,
        /[0-7]{1,3}/,
        /x[0-9a-fA-F]{2}/,
        /u[0-9a-fA-F]{4}/,
        /u\{[0-9a-fA-F]+\}/
      )
    )),

    identifier: $ => /[\p{L}_][\p{L}\p{N}_]*/u,

    class: $ => prec(PRECEDENCE.class, field("name", /[A-Z][a-zA-Z\d_]*/)),

    // ===== Variables / Bindings =====
    variable: $ => choice(
      $.environment_var,
      $.classvar,
      $.builtin_var,
      $.instance_var,
      $.local_var
    ),

    builtin_var: $ => field("name", choice(
      "inf", "nil",
      "thisFunction", "thisFunctionDef", "thisMethod",
      "thisProcess", "thisThread",
      "currentEnvironment", "topEnvironment"
    )),

    local_var: $ => prec(PRECEDENCE.localvar, seq('var', field("name", $.identifier))),
    instance_var: $ => seq(optional('var'), optional(choice("<", ">", "<>")), field("name", $.identifier)),
    classvar: $ => seq('classvar', optional(choice("<", ">", "<>")), field("name", $.identifier)),
    const: $ => seq('const', optional(choice("<", ">", "<>")), field("name", $.identifier)),

    environment_var: $ => choice(
      field("name", alias(/[a-z]/, $.identifier)),
      field("name", alias(seq('~', $.identifier), $.identifier)),
    ),

    variable_name: $ => $.identifier,

    variable_definition_sequence: $ => prec(PRECEDENCE.vardef_sequence, seq(
      sepBy(",", choice($.variable_definition, $.variable)),
      ",", choice($.variable_definition, $.variable)
    )),

    variable_definition: $ => prec(PRECEDENCE.vardef, seq(
      field("name", $.variable),
      "=",
      field("value", $._object)
    )),

    return_statement: $ => prec.left(seq("^", choice($._object, $.function_call))),

    // ===== Collections / Indexing =====
    ref: $ => "`",

    collection: $ => prec.left(seq(
      choice(
        $.arithmetic_series,
        prec.left(seq(
          optional(choice("#", $.ref)),
          optional(optional(alias($.class, $.collection_type))),
          "[", $._collection_sequence, "]"
        )),
        seq("(", $._paired_associative_sequence, ")")
      )
    )),

    _collection_sequence: $ => seq(
      sepBy1(",", choice($.associative_item, $._object)),
      optional(",")
    ),

    _paired_associative_sequence: $ => seq(sepBy1(",", $.associative_item), optional(",")),

    association: $ => prec(PRECEDENCE.association, seq(
      prec.left($._object),
      prec(PRECEDENCE.assign, "->"),
      prec.right($._object)
    )),

    associative_item: $ => prec(PRECEDENCE.associative_item,
      seq(choice(seq($.identifier, ":", alias($._object, $.item)), $.association))
    ),

    _indexable_object: $ => choice(
      $._postfix,
      prec.left(1, $.code_block),
      $.control_structure
    ),

    indexed_collection: $ => seq($._indexable_object, repeat($._index), $._index),

    index_subrange: $ => choice(
      seq($._numeric_expression, ".."),
      seq("..", $._numeric_expression),
      seq($._numeric_expression, "..", $._numeric_expression),
      seq($._numeric_expression, ",", $._numeric_expression, "..", $._numeric_expression),
    ),

    _index: $ => seq("[", field("index", choice($._numeric_expression, $.index_subrange)), "]"),

    // ===== Arithmetic Series / Numeric Expr =====
    arithmetic_series: $ => seq(
      "(",
      choice(
        seq($._postfix, ",", $._postfix, "..", $._postfix), // (start, step..end)
        seq("..", $._postfix),                              // (..end)
        seq($._postfix, "..", $._postfix)                   // (start..end)
      ),
      ")"
    ),

    _numeric_expression: $ => choice(
      $._postfix,
      $.binary_expression,
      $.unary_expression,
      $.function_call,
      $.indexed_collection,
      $.control_structure
    ),

    // ===== Binary / Keyword / Unary =====
    binary_expression: $ => prec.left(PRECEDENCE.BIN, seq(
      field('left', $._postfix),
      field('operator', choice(
        '||', '&&', '|', '^', '&', '==', '!=', '<', '<=', '>', '>=',
        '<<', '>>', '+', '-', '++', '+/+', '*', '/', '%', '**'
      )),
      field('right', $._postfix)
    )),

    keyword_message: $ => prec.left(PRECEDENCE.keyword_message, seq(
      field('receiver', $._postfix),
      field('selector', alias(/[a-zA-Z_]\w*:/, $.keyword_selector)),
      field('argument', $._postfix)
    )),

    unary_expression: $ => prec.left(PRECEDENCE.unary, seq(
      field("operator", choice('+', '-', ':')),
      field("right", $._postfix)
    )),

    // ===== Nil-ops =====
    nil_conditional: $ => prec.left(PRECEDENCE.BIN, choice(
      seq(field('condition', $._postfix), '?', field('if_not_nil', $._postfix)),
      seq(field('condition', $._postfix), '?', field('if_not_nil', $.code_block), field('if_nil', $.code_block))
    )),

    nil_guard: $ => prec.left(PRECEDENCE.BIN, seq(
      field('value', $._postfix), '!?', field('action', choice($._postfix, $.code_block))
    )),

    nil_default: $ => prec.left(PRECEDENCE.BIN, seq(
      field('value', $._postfix), '??', field('default', choice($._postfix, $.code_block))
    )),

    // ===== List Comprehension =====
    list_comp_open: $ => token('{:'),

    list_comprehension: $ => prec(1, seq(
      $.list_comp_open,
      field('body', choice($._expression_sequence, $._postfix)),
      ',',
      field('qualifiers', sepBy1(',', $.qualifier)),
      '}'
    )),

    qualifier: $ => choice($.generator, $.guard, $.var_binding, $.side_effect, $.termination),

    generator: $ => seq(
      field('pattern', choice($.identifier, $.collection)),
      '<-',
      field('source', $._expression)
    ),

    guard: $ => field('guard', $._postfix),

    var_binding: $ => seq('var', field('name', $.identifier), '=', field('value', $._expression)),

    side_effect: $ => seq('::', field('expression', $._expression)),

    termination: $ => seq(':while', field('condition', $._expression)),

    // ===== Control Structures =====
    control_structure: $ => prec(PRECEDENCE.controlstruct, choice(
      $.if, $.while, $.for, $.forby, $.case, $.switch
    )),

    if: $ => choice(
      prec.right(seq(
        field("name", "if"), "(", field("expression", $._postfix), ")",
        field("true", $.function_block),
        optional(field("false", $.function_block))
      )),
      prec.right(seq(
        field("name", "if"), "(", field("expression", $._postfix),
        field("true", seq(",", $.function_block)),
        optional(field("false", seq(",", $.function_block))), ")"
      )),
      seq(
        prec.left(1, seq(field("expression", $._postfix), field("name", seq(".", "if")))),
        choice(
          field("true", $.function_block),
          seq("(", field("true", $.function_block), optional(field("false", seq(",", $.function_block))), ")")
        )
      )
    ),

    while: $ => choice(
      prec.left(1, seq(field("name", "while"), "(", field("test_func", $.function_block), ",", field("body_func", $.function_block), ")")),
      seq(field("expression", $._postfix), field("name", ".while"), field("body_func", $.function_block)),
      seq(field("name", "while"), field("test_func", $.function_block), field("body_func", $.function_block))
    ),

    for: $ => choice(
      seq("for", "(", $._postfix, ",", $._postfix, ",", $.function_block, ")"),
      seq($.integer, ".for", "(", $.integer, ",", $.function_block, ")")
    ),

    forby: $ => choice(
      seq(field("name", "forBy"), "(", $.integer, ",", $.integer, ",", $.integer, ",", $.function_block, ")"),
      seq($.integer, field("name", ".forBy"), "(", $.integer, ",", $.integer, ",", $.function_block, ")")
    ),

    case: $ => seq(field("name", "case"), repeat($.function_block), ";"),

    switch: $ => choice(
      seq(
        field("name", "switch"), "(",
        field("expr", $._postfix), ",",
        sepBy(",", seq($._object, ",", $.function_block)), ",",
        seq($._object, ",", $.function_block),
        optional(seq(",", $.function_block)),
        ")"
      ),
      prec.right(seq(field("name", "switch"), $.code_block, repeat(seq($._postfix, $.function_block)), seq($._postfix, $.function_block)))
    ),

    // ===== Classes =====
    class_def: $ => prec(PRECEDENCE.class_def, seq(
      optional("+"), $.class, optional(seq(":", alias($.class, $.parent_class))), "{",
      repeat(choice(
        // vars / var defs
        seq(sepBy(",", choice(
          choice(alias($.local_var, $.instance_var), $.instance_var, $.classvar),
          seq(choice(alias($.local_var, $.instance_var), $.instance_var, $.classvar, $.const), "=", $._object)
        )), ";"),
        // instance methods
        seq(alias($.identifier, $.instance_method_name), $.function_block),
        // class methods
        seq("*", alias($.identifier, $.class_method_name), $.function_block)
      )),
      "}"
    )),

    comment: $ => choice($.line_comment, $.block_comment),
    line_comment: $ => prec(PRECEDENCE.comment, token(seq('//', /.*/))),

    // Helper rules kept for reference
    _collection_types: $ => choice($._unordered_collection_types, $._ordered_collection_types),

    _unordered_collection_types: $ => choice(
      "Bag", "Dictionary", "Environment", "Event", "IdentityBag", "IdentityDictionary",
      "IdentitySet", "LazyEnvir", "MultiLevelIdentityDictionary", "ObjectTable",
      "Set", "TwoWayIdentityDictionary"
    ),

    _ordered_collection_types: $ => choice(
      "Array", "Array2D", "ArrayedCollection", "DoubleArray", "FloatArray", "Int16Array",
      "Int32Array", "Int8Array", "LinkedList", "List", "Order", "OrderedIdentitySet",
      "Pair", "PriorityQueue", "RawArray", "SequenceableCollection", "Signal",
      "SortedList", "SparseArray", "String", "SymbolArray"
    ),
  }
});
// End of grammar.js
