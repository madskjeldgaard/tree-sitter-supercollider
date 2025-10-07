const PRECEDENCE = {
  comment: 1000,
  call: 140,
  unary: 130,
  BIN: 20,
  keyword_message: 19,
  association: 11,
  associative_item: 10,
  partial: 15,
  STRING: 2,
  class_def: 1,
  control_struct: 5,
};

const sepBy1 = (sep, rule) => seq(rule, repeat(seq(sep, rule)));
const sepBy = (sep, rule) => optional(sepBy1(sep, rule));

module.exports = grammar({
  name: 'supercollider',

  supertypes: $ => [$._expression, $._object, $._primary],
  word: $ => $.identifier,
  extras: $ => [/\s/, $.line_comment, $.block_comment],

  externals: $ => [
    $.block_comment,
    $.OP_SYM,
    $.HASH_OPEN,
    $.HASH_CLOSE,
    $.SYMBOL_IN_HASH, // kept to align with scanner's #[ ... ] stateful lexing
  ],

  conflicts: $ => [
    [$.switch],
    [$._expression, $._object],
    [$._primary, $.function_block],
    [$._primary, $.collection],
    [$.group, $.collection],
    [$.function_block, $.code_block],
  ],

  rules: {
    source_file: $ => repeat($._expression),

    _expression: $ => choice(
      $.class_def,
      seq($._expression_statement, optional(";")),
    ),

    _expression_statement: $ => choice(
      $.function_definition,
      $.function_call,
      $.binary_expression,
      $.unary_expression,
      $.keyword_message,
      $._postfix,
      $.variable_definition,
      $.return_statement
    ),

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
      $.keyword_message,
      $._postfix
    ),

    _primary: $ => choice(
      $.literal,
      $.variable,
      $.class,
      $.collection,
      $.literal_array,
      $.list_comprehension,
      $.code_block,
      $.group,
      $.ref
    ),

    partial: $ => prec.right(PRECEDENCE.partial, "_"),
    ref: $ => prec(PRECEDENCE.call, seq('`', $._postfix)),

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

    value_call: $ => seq(".", "(", optional($.parameter_call_list), ")"),

    _postfix: $ => choice(
      prec.left(PRECEDENCE.call, seq(
        $._primary,
        repeat1(choice($.method_call, $.value_call, $.instance_variable_setter))
      )),
      $._primary
    ),

    instance_variable_setter: $ => seq(
      ".", field("name", alias($.identifier, $.setter_name)), "_",
      optional(seq("(", optional($.parameter_call_list), ")"))
    ),

    expression_sequence: $ => seq(
      repeat(seq($._expression_statement, optional(";"))),
      $._expression_statement,
      optional(";")
    ),

    code_block: $ => seq(
      '{',
      optional($.parameter_list),
      optional($.variable_declarations),
      optional($.expression_sequence),
      '}'
    ),

    group: $ => seq('(', $.expression_sequence, ')'),

    function_block: $ => choice(
      $.code_block,
      prec.left(seq(alias($.identifier, $.method_name), $.code_block))
    ),

    parameter_list: $ => choice(
      seq('arg', sepBy(',', $.argument), optional($.variable_argument), ';'),
      seq('|', sepBy(',', choice($.argument, $.variable_argument)), '|')
    ),

    argument: $ => seq(
      field("name", $.identifier),
      optional(seq("=", field("default", choice($.literal, $.collection, $.code_block))))
    ),

    variable_argument: $ => seq("...", field("name", $.identifier)),

    variable_declarations: $ => repeat1(seq(
      'var', sepBy1(',', seq($.identifier, optional(seq('=', $._object)))), ';'
    )),

    parameter_call_list: $ => sepBy1(',', choice($.named_argument, $._object)),

    named_argument: $ => seq(
      field('name', choice($.symbol, $.identifier)),
      ':',
      field('value', $._object)
    ),

    literal: $ => choice($.number, $.symbol, $.char, $.string, $.concatenated_string, $.bool),

    integer: $ => /\d+/,
    hexinteger: $ => /0x[0-9a-fA-F]+/,
    radix_integer: $ => /([2-9]|[1-2][0-9]|3[0-6])r[0-9a-zA-Z]+/,
    float: $ => /\d+\.\d+/,
    radix_float: $ => /([2-9]|[1-2][0-9]|3[0-6])r[0-9a-zA-Z]+\.[0-9a-zA-Z]+/,
    exponential: $ => /-?\d+(\.\d+)?[eE][+-]?\d+/,
    pi_literal: $ => choice('pi', seq(optional(choice($.integer, $.float)), 'pi')),
    accidental: $ => /\d+[sb]+(\d{1,3})?/,

    number: $ => choice(
      $.integer, $.float, $.hexinteger,
      $.radix_integer, $.radix_float, $.exponential,
      $.pi_literal, $.accidental
    ),

    symbol: $ => choice(
      prec.left(seq('\\', optional(choice($.identifier, /[0-9]+/)))),
      seq("'", repeat(choice(token.immediate(/[^'\\]+/), $.escape_sequence)), "'"),
      $.SYMBOL_IN_HASH
    ),

    char: $ => /\$(?:\.|[^\n])/,

    string: $ => seq(
      '"',
      repeat(choice(
        token.immediate(prec(PRECEDENCE.STRING, /[^"\n\\]+/)),
        $.escape_sequence
      )),
      '"'
    ),

    concatenated_string: $ => seq($.string, repeat1($.string)),
    bool: $ => choice("true", "false"),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(/[\'"tnrfv]/, /[0-7]{1,3}/, /x[0-9a-fA-F]{2}/, /u[0-9a-fA-F]{4}/, /u\{[0-9a-fA-F]+}/)
    )),

    identifier: $ => token(choice(
      /[\p{L}_][\p{L}\p{N}_]*/u,
      /[A-Za-z_][A-Za-z0-9_]*/
    )),

    class: $ => field("name", /[A-Z][a-zA-Z\d_]*/),

    variable: $ => choice(
      $.environment_var,
      $.builtin_var,
      $.interpreter_var,
      $.identifier
    ),

    builtin_var: $ => field("name", choice(
      "inf", "nil", "pi", "true", "false",
      "this", "super",
      "thisFunction", "thisFunctionDef", "thisMethod",
      "thisProcess", "thisThread",
      "currentEnvironment", "topEnvironment"
    )),

    interpreter_var: $ => field("name", /[a-z]/),
    environment_var: $ => seq('~', field("name", $.identifier)),
    variable_definition: $ => seq(field("name", $.variable), "=", field("value", $._object)),

    return_statement: $ => prec.left(seq("^", $._object)),

    collection: $ => prec.left(seq(
      choice(
        $.arithmetic_series,
        prec.left(seq(
          optional('`'),
          optional(alias($.class, $.collection_type)),
          "[", $._collection_sequence, "]"
        )),
        seq("(", $._paired_associative_sequence, ")")
      )
    )),

    literal_array: $ => seq(
      $.HASH_OPEN,
      sepBy(",", choice($.literal, $.SYMBOL_IN_HASH)),
      $.HASH_CLOSE
    ),

    _collection_sequence: $ => seq(sepBy1(",", choice($.associative_item, $._object)), optional(",")),
    _paired_associative_sequence: $ => seq(sepBy1(",", $.associative_item), optional(",")),

    association: $ => prec(PRECEDENCE.association,
      seq(field("left", $._object), "->", field("right", $._object))
    ),

    associative_item: $ => prec(PRECEDENCE.associative_item, choice(
      seq(choice($.identifier, $.symbol, $.string), ":", $._object),
      $.association
    )),

    _indexable_object: $ => choice($._postfix, prec.left(1, $.code_block), $.control_structure),

    indexed_collection: $ => seq($._indexable_object, repeat1($._index)),

    index_subrange: $ => choice(
      seq($._numeric_expression, ".."),
      seq("..", $._numeric_expression),
      seq($._numeric_expression, "..", $._numeric_expression),
      seq($._numeric_expression, ",", $._numeric_expression, "..", $._numeric_expression),
    ),

    _index: $ => seq("[", field("index", choice($._numeric_expression, $.index_subrange)), "]"),

    arithmetic_series: $ => seq(
      "(",
      choice(
        seq($._postfix, ",", $._postfix, "..", $._postfix),
        seq("..", $._postfix),
        seq($._postfix, "..", $._postfix)
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

    binary_operator: $ => choice(
      $.OP_SYM,
      '==', '!=', '<=', '>=', '<', '>'
    ),

    binary_expression: $ => prec.left(PRECEDENCE.BIN, seq(
      field('left', $._postfix),
      field('operator', $.binary_operator),
      field('right', $._postfix)
    )),

    keyword_message: $ => prec.left(PRECEDENCE.keyword_message, seq(
      field('receiver', $._postfix),
      repeat1(seq(
        field('selector', alias(/[A-Za-z_]\w*:/, $.keyword_selector)),
        field('argument', $._object)
      ))
    )),

    unary_expression: $ => prec.left(PRECEDENCE.unary, seq(
      field("operator", choice('+', '-', ':')),
      field("right", $._postfix)
    )),

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

    // Rewritten: no external LIST_COMP_OPEN — use '{' + immediate ':'.
    list_comprehension: $ => prec(1, seq(
      '{',
      token.immediate(':'),               // enforce "{:" with no extras
      field('body', choice($.expression_sequence, $._postfix)),
      ',',
      field('qualifiers', sepBy1(',', $.qualifier)),
      '}'
    )),

    qualifier: $ => prec.left(1, choice($.generator, $.guard, $.var_binding, $.side_effect, $.termination)),
    generator: $ => seq(field('pattern', choice($.identifier, $.collection)), '<-', field('source', $._object)),
    guard: $ => field('condition', $._postfix),
    var_binding: $ => seq('var', field('name', $.identifier), '=', field('value', $._object)),
    side_effect: $ => seq('::', field('expression', $._object)),
    termination: $ => seq(':while', field('condition', $._object)),

    control_structure: $ => prec(PRECEDENCE.control_struct, choice($.if, $.while, $.for, $.forby, $.case, $.switch)),

    if: $ => choice(
      prec.right(seq(
        "if", "(", field("condition", $._object), ",",
        field("true_branch", $.function_block),
        optional(seq(",", field("false_branch", $.function_block))),
        ")"
      )),
      prec.right(seq(
        field("condition", $._postfix), ".if",
        choice(
          seq(field("true_branch", $.function_block), optional(field("false_branch", $.function_block))),
          seq("(", field("true_branch", $.function_block), optional(seq(",", field("false_branch", $.function_block))), ")")
        )
      ))
    ),

    while: $ => choice(
      seq("while", "(", field("test_func", $.function_block), ",", field("body_func", $.function_block), ")"),
      seq(field("test", $._postfix), ".while", field("body_func", $.function_block))
    ),

    for: $ => choice(
      seq("for", "(", field("start", $._object), ",", field("end", $._object), ",", field("func", $.function_block), ")"),
      seq(field("count", $.integer), ".for", "(", field("func", $.function_block), ")")
    ),

    forby: $ => choice(
      seq("forBy", "(", field("start", $._object), ",", field("end", $._object), ",", field("step", $._object), ",", field("func", $.function_block), ")"),
      seq(field("start", $.integer), ".forBy", "(", field("end", $._object), ",", field("step", $._object), ",", field("func", $.function_block), ")")
    ),

    case: $ => seq("case", repeat1(seq(field("test", $.function_block), field("action", $.function_block)))),

    switch: $ => choice(
      seq("switch", "(", field("value", $._object), ",",
        repeat(seq(field("case_value", $._object), ",", field("case_action", $.function_block), ",")),
        optional(field("default_action", $.function_block)), ")"
      ),
      seq(field("value", $._postfix), ".switch",
        repeat1(seq(field("case_value", $._object), field("case_action", $.function_block))),
        optional(field("default_action", $.function_block))
      )
    ),

    class_def: $ => prec(PRECEDENCE.class_def, seq(
      optional("+"), $.class, optional(seq(":", alias($.class, $.parent_class))), "{",
      repeat(choice(
        $.class_var_declaration,
        $.instance_var_declaration,
        $.const_declaration,
        $.instance_method,
        $.class_method
      )),
      "}"
    )),

    class_var_declaration: $ => seq(
      'classvar',
      sepBy1(',', seq(
        optional(choice("<", ">", "<>")),
        field("name", $.identifier),
        optional(seq('=', field("value", $._object)))
      )),
      ';'
    ),

    instance_var_declaration: $ => seq(
      'var',
      sepBy1(',', seq(
        optional(choice("<", ">", "<>")),
        field("name", $.identifier),
        optional(seq('=', field("value", $._object)))
      )),
      ';'
    ),

    const_declaration: $ => seq(
      'const',
      sepBy1(',', seq(
        optional(choice("<", ">", "<>")),
        field("name", $.identifier),
        seq('=', field("value", $._object))
      )),
      ';'
    ),

    instance_method: $ => seq(
      field("name", alias($.identifier, $.instance_method_name)),
      field("body", $.function_block)
    ),

    class_method: $ => seq(
      "*",
      field("name", alias($.identifier, $.class_method_name)),
      field("body", $.function_block)
    ),

    comment: $ => choice($.line_comment, $.block_comment),
    line_comment: $ => prec(PRECEDENCE.comment, token(seq('//', /.*/))),
  }
});
