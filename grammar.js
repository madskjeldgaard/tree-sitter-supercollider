// Good information here:
//
// The SCIDE lexer file:
// https://github.com/supercollider/supercollider/blob/608bb981162c2c26f0a32c09d82557b29774a32e/editors/sc-ide/core/sc_lexer.cpp
//
//
// TODO:
//
// - Chainable commands
// - Conditional
// - Unary?
// - Return statement should include function returns
// - collection with name prefixed vs class clash

/*

keywords 
"arg"
"classvar"
"const"
"super"
"this"
"var"

builtins
"inf"
"nil"
"thisFunction"
"thisFunctionDef"
"thisMethod"
"thisProcess"
"thisThread"
"currentEnvironment"
"topEnvironment"

*/


const PRECEDENCE = {
    STRING: 2,
    call: 14,
    field: 13,
    unary: 11,
    multiplicative: 10,
    additive: 9,
    shift: 8,
    bitand: 7,
    bitxor: 6,
    bitor: 5,
    comparative: 4,
    and: 3,
    or: 2,
    range: 1,
    assign: 0,
    closure: -1,
}

function sepBy1(sep, rule) {
    return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
    return optional(sepBy1(sep, rule))
}

module.exports = grammar({
    name: 'supercollider',

    // Ignore whitespace and comments
    extras: $ => [/\s/, $.comment],

    // The name of a token that will match keywords for the purpose of the keyword extraction optimization.
    word: $ => $.identifier,
    conflicts: $ => [
        [$.unnamed_argument, $.named_argument],
        [$.variable_definition, $.function_definition],
        [$._collection_types, $.class],
        [$.collection, $.code_block]
        // [$.instance_method_call, $.collection],
        // [$._expression_statement, $._object],
        // [$.function_block, $.function_definition, $.function_call],
    ],

    // supertypes: $ => [
    //     $._object,
    //     $._expression_statement,
    // ],

    rules: {

        source_file: $ => repeat($._expression),

        _expression: $ => choice(
            $.code_block,
            seq($._expression_statement, ";"),
        ),

        _expression_statement: $ => choice(
            // $.function_block,
            $.function_definition,
            $.function_call,
            $._object,
            $.variable_definition,
            // $.binary_expression,
            // $.return_statement
        ),

        // These are the values that may be assigned to a variable or argument
        _object: $ => choice(
            $.literal,
            $.variable,
            $.function_block,
            $.binary_expression,
            $.collection,
            $.control_structure
        ),

        /////////////////
        //  Functions  //
        /////////////////

        function_definition: $ => prec.left(1, seq(
            $.variable,
            '=',
            $.function_block
        )),

        // TODO: Class vs instance/variable
        function_call: $ =>
            choice(
                // Class method
                seq(
                    $.class,
                    $.class_method_call
                ),
                // Instance method
                seq(
                    alias($._object, $.receiver),
                    $.instance_method_call
                )
            ),

        instance_method_call: $ => seq(
            ".",
            optional(alias($.identifier, $.method_name)),
            // Instance.method or Instance.method()
            optional(seq("(", optional($.parameter_call_list), ")")),
        ),

        class_method_call: $ => choice(
            // Class.method - class method
            seq(
                ".",
                alias($.identifier, $.class_method_name),
                optional(seq("(", optional($.parameter_call_list), ")"))
            ),
            // Class() - implicit .new
            seq("(", optional($.parameter_call_list), ")")
        ),

        function_block: $ => seq(
            '{',
            optional($.parameter_list),
            repeat($._expression),
            '}'
        ),


        // Definition of parameters in function
        parameter_list: $ => choice(
            seq('arg', sepBy(',', $.argument), ';'),
            seq('|', sepBy(',', $.argument), '|')
        ),

        // For definition lists
        argument: $ => seq($.identifier, optional(seq("=", $.literal))),

        // When supplying arguments to a function call
        parameter_call_list: $ => sepBy1(',', $.argument_calls),

        argument_calls: $ => choice(
            $.named_argument,
            $.unnamed_argument,
        ),

        unnamed_argument: $ => choice($.variable, $.literal),
        named_argument: $ => prec.left(1, seq(
            optional("\\"),
            $.identifier,
            optional(
                seq(
                    choice('=', ':'),
                    choice($.literal, $.variable)
                )
            )
        )),

        ///////////////////////
        //  Define literal  //
        ///////////////////////

        literal: $ => choice(
            $.number,
            $.symbol,
            $.char,
            $.string,
            $.bool
        ),
        number: $ => choice(
            $.integer,
            $.float,
            $.hexinteger
        ),
        integer: $ => /\d+/,
        hexinteger: $ => /0x(\\d|[a-f]|[A-F])+/,
        float: $ => /\d+\.\d+/,
        symbol: $ => choice(
            seq('\\', choice($.identifier, /[0-9]+/)),
            seq("'", choice($.identifier, /[0-9]+/), "'"),
        ),
        char: $ => /\$./,

        // Taken from https://github.com/tree-sitter/tree-sitter-javascript/blob/83f6a2d900a2dc245e4717ccd05c2a362443cd87/grammar.js#L808
        string: $ =>
            seq(
                '"',
                repeat(choice(
                    token.immediate(prec(PRECEDENCE.STRING, /[^"\\\n]+|\\\r?\n/)),
                    $.escape_sequence
                )),
                '"'
            ),

        bool: $ => choice("true", "false"),

        // TODO: Is this necessary in SC?
        escape_sequence: $ => token.immediate(seq(
            '\\',
            choice(
                /[^xu0-7]/,
                /[0-7]{1,3}/,
                /x[0-9a-fA-F]{2}/,
                /u[0-9a-fA-F]{4}/,
                /u{[0-9a-fA-F]+}/
            )
        )),

        //////////////
        //  Blocks  //
        //////////////
        code_block: $ => seq(
            '(',
            repeat($._expression),
            ')'
        ),

        /////////////////
        //  Variables  //
        /////////////////

        variable: $ => choice(
            $.environment_var,
            $.local_var,
            $.classvar
        ),

        // TODO: is this a good way to detect local variables in use?
        local_var: $ => choice(
            $.identifier,
            seq('var', $.identifier)
        ),
        classvar: $ => seq('classvar', $.identifier),
        environment_var: $ => choice(
            /[a-z]/,
            seq('~', $.identifier),
        ),

        variable_name: $ => $.identifier,

        variable_definition: $ => seq($.variable, "=", $._object),
        // naked_statement: $ => seq($._object),

        ///////////////
        //  Classes  //
        ///////////////


        // return_statement: $ => 
        // choice(
        // 	// $._end_of_function,
        // 	seq("^", $._object),
        // ),
        // _end_of_function: $ => seq($._object, optional(";"), optional(/\n}/), "}"),

        ////////////////
        //  Comments  //
        ////////////////

        comment: $ => choice(
            $.line_comment,
            $.block_comment
        ),

        line_comment: $ => token(seq('//', /.*/)),

        block_comment: $ => token(seq(
            '/*',
            /[^*]*\*+([^/*][^*]*\*+)*/,
            '/'
        )),

        ///////////////////
        //  Collections  //
        ///////////////////

        collection: $ => seq(
            // Optional class prefix
            // optional($._collection_types),
            // The actual collection
            choice(
                seq("[", $._collection_sequence, "]"),
                seq("(", $._collection_sequence, ")"),
            )
        ),
        _collection_sequence: $ => sepBy1(",", choice(
            $.associative_item,
            $._object
        )),
        associative_item: $ => seq(
            choice(
                prec.left(1, seq($.symbol, choice(prec(PRECEDENCE.assign, "->"), ","))),
                seq($.identifier, ":")
            ),
            alias($._object, $.item)
        ),

        _collection_types: $ => choice($._unordered_collection_types, $._ordered_collection_types),
        _unordered_collection_types: $ => choice(
            "Bag",
            "Dictionary",
            "Environment",
            "Event",
            "IdentityBag",
            "IdentityDictionary",
            "IdentitySet",
            "LazyEnvir",
            "MultiLevelIdentityDictionary",
            "ObjectTable",
            "Set",
            "TwoWayIdentityDictionary"
        ),

        _ordered_collection_types: $ => choice(
            "Array",
            "Array2D",
            "ArrayedCollection",
            "DoubleArray",
            "FloatArray",
            "Int16Array",
            "Int32Array",
            "Int8Array",
            "LinkedList",
            "List",
            "Order",
            "OrderedIdentitySet",
            "Pair",
            "PriorityQueue",
            "RawArray",
            "SequenceableCollection",
            "Signal",
            "SortedList",
            "SparseArray",
            "String",
            "SymbolArray",
        ),

        ///////////////////
        //  Expressions  //
        ///////////////////
        binary_expression: $ => {
            const table = [
                [PRECEDENCE.and, '&&'],
                [PRECEDENCE.or, '||'],
                [PRECEDENCE.bitand, '&'],
                [PRECEDENCE.bitor, '|'],
                [PRECEDENCE.bitxor, '^'],
                [PRECEDENCE.comparative, choice('==', '!=', '<', '<=', '>', '>=')],
                [PRECEDENCE.shift, choice('<<', '>>')],
                [PRECEDENCE.additive, choice('+', '-')],
                [PRECEDENCE.multiplicative, choice('*', '/', '%')],
                [PRECEDENCE.assign, '=']
            ];

            return choice(...table.map(([precedence, operator]) => prec.left(precedence, seq(
                field('left', $._object),
                field('operator', operator),
                field('right', $._object),
            ))));
        },

        class: $ => /[A-Z][a-zA-Z\d_]*/,
        identifier: $ => /[a-z_][a-zA-Z\d_]*/,

        ////////////////////
        //  Conditionals  //
        ////////////////////

        control_structure: $ => choice(
            $.if
        ),


        if: $ => choice(
            // if (expr, trueFunc, falseFunc);
            seq(
                "if",
                "(",
                field("expression", $._object),
                field("true", seq(",", $.function_block)),
                optional(field("false", seq(",", $.function_block))),
                ")"
            ),

            // expr.if (trueFunc, falseFunc);
            seq(
                field("expression", $._object),
                ".if",
                choice(
                    // expr.if{truefunc}
                    field("true", $.function_block),
                    // expr.if({truefunc}, {falsefunc})
                    seq(
                        "(",
                        field("true", $.function_block),
                        optional(field("false",
                            seq(",", $.function_block))),
                        ")"
                    )
                )
            )
        )



    }
});
