/*

keywords 
"arg"
"classvar"
"const"
"super"
"this"
"var"

builtins

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
    controlstruct: 3,
    localvar: 4,
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

    inline: $ => [$.keywords],

    // The name of a token that will match keywords for the purpose of the keyword extraction optimization.
    word: $ => $.identifier,
    conflicts: $ => [
        [$.unnamed_argument, $.named_argument],
        [$.variable_definition, $.function_definition],
        [$._collection_types, $.class],
        [$.collection, $.code_block],
        [$.local_var, $.if],
        [$.switch]
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
            $.code_block,
            $.control_structure,
            $.literal,
            $.variable,
            $.function_block,
            $.binary_expression,
            $.collection,
        ),

        // keywords: $ => choice("if", "while"),

        /////////////////
        //  Functions  //
        /////////////////

        function_definition: $ => prec.left(1, seq(
            field("name", $.variable),
            '=',
            field("value", $.function_block)
        )),

        // TODO: Class vs instance/variable
        function_call: $ =>
            choice(
                // Class method
                seq(
                    $.class,
                    repeat1(
                        seq(
                            $.class_method_call
                        )
                    )
                ),

                // Instance method (chainable)
                seq(
                    alias($._object, $.receiver),
                    repeat1(
                        seq(
                            $.instance_method_call
                        )
                    )
                )
            ),

        instance_method_call: $ => prec.left(seq(
            ".",
            field("name", optional(alias($.identifier, $.method_name))),
            // Instance.method or Instance.method()
            optional(seq("(", optional($.parameter_call_list), ")")),
        )),

        class_method_call: $ => prec.left(choice(
            // Class.method - class method
            seq(
                ".",
                field("name", alias($.identifier, $.class_method_name)),
                optional(seq("(", optional($.parameter_call_list), ")"))
            ),
            // Class() - implicit .new
            seq("(", optional($.parameter_call_list), ")")
        )),

        _expression_sequence: $ => seq(
            repeat(prec.right(1, seq($._expression_statement, ";"))),
            // Last statement in sequence
            $._expression_statement,
            optional(";")
        ),

        // TODO: Make tolerant to non semicoloned expression
        code_block: $ => seq(
            '(',
            $._expression_sequence,
            ')'
        ),

        function_block: $ => choice(
            seq(
                '{',
                optional($.parameter_list),
                // optional(seq($._expression_statement, ";")),
                optional(
                    $._expression_sequence
                ),
                '}'
            ),
            seq(
                seq("(", "{"),
                optional($.parameter_list),
                optional(
                    $._expression_sequence
                ),
                seq(")", "}"),
            ),
        ),


        // Definition of parameters in function
        parameter_list: $ => choice(
            seq('arg', sepBy(',', $.argument), ';'),
            seq('|', sepBy(',', $.argument), '|')
        ),

        // For definition lists
        argument: $ => seq(
            field("name", $.identifier),
            field("value", optional(seq("=", $.literal)))
        ),

        // When supplying arguments to a function call
        parameter_call_list: $ => sepBy1(',', $.argument_calls),

        argument_calls: $ => choice(
            $.named_argument,
            $.unnamed_argument,
        ),

        // function call is added here to allow things like Array() in params
        unnamed_argument: $ => choice($.function_call, $._object),
        named_argument: $ => prec.left(1, field("name", seq(
            field("name",
                seq(optional("\\"),
                    $.identifier)
            ),
            optional(
                seq(
                    choice('=', ':'),
                    choice($.function_call, $._object),
                )
            )
        ))),

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

        /////////////////
        //  Variables  //
        /////////////////

        variable: $ => choice(
            $.environment_var,
            $.local_var,
            $.classvar,
            $.builtin_var
        ),
        builtin_var: $ => field("name", choice(
            "inf",
            "nil",
            "thisFunction",
            "thisFunctionDef",
            "thisMethod",
            "thisProcess",
            "thisThread",
            "currentEnvironment",
            "topEnvironment"
        )),

        // TODO: is this a good way to detect local variables in use?
        local_var: $ => prec(PRECEDENCE.localvar, choice(
            field("name", $.identifier),
            seq(
                'var',
                field("name", $.identifier)
            )
        )),

        classvar: $ => seq('classvar', field("name", $.identifier)),
        environment_var: $ => choice(
            field("name", alias(/[a-z]/, $.identifier)),
            field("name", seq('~', $.identifier)),
        ),

        variable_name: $ => $.identifier,

        variable_definition: $ => seq(
            field("name", $.variable),
            "=",
            field("value", $._object)
        ),
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
            optional(choice(
                alias($._collection_types, $.collection_type),
                choice("#", "`")
            )),
            // The actual collection
            choice(
                seq("[", $._collection_sequence, "]"),
                seq("(", $._paired_associative_sequence, ")"),
            )
        ),
        _collection_sequence: $ => sepBy1(",", choice(
            $.associative_item,
            $._object
        )),
        _paired_associative_sequence: $ => sepBy1(",", $.associative_item),
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

        class: $ => field("name", /[A-Z]+[a-zA-Z\d_]*/),
        identifier: $ => /[a-z_][a-zA-Z\d_]*/,

        ////////////////////
        //  Conditionals  //
        ////////////////////

        control_structure: $ => prec(PRECEDENCE.controlstruct, choice(
            $.if, $.while, $.for, $.forby, $.case, $.switch
        )),

        if: $ => choice(
            // if (expr, trueFunc, falseFunc);
            prec.right(
                seq(
                    field("name", "if"),
                    "(",
                    field("expression", $._object),
                    field("true", seq(",", $.function_block)),
                    optional(field("false", seq(",", $.function_block))),
                    ")"
                )
            ),

            // TODO: Should/could this be covered by the instance method rules?
            // expr.if (trueFunc, falseFunc);
            seq(
                prec.left(1,
                    seq(
                        field("expression", $._object),
                        field("name", seq(".", "if"))
                    )
                ),
                choice(
                    // expr.if{truefunc}
                    field("true", $.function_block),
                    choice(
                        // expr.if({truefunc}) or expr.if{truefunc};
                        choice(
                            seq(field("true", $.function_block)),
                            seq("(", field("true", $.function_block), ")"),
                        ),
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
        ),

        while: $ => choice(
            // while ( testFunc, bodyFunc );
            prec.left(1, seq(
                field("name", "while"),
                "(",
                field("test_func", $.function_block),
                ",",
                field("body_func", $.function_block),
                ")"
            )),
            // testFunc.while( bodyFunc );
            seq(
                field("expression", $._object),
                field("name", ".while"),
                field("body_func", $.function_block),
            ),
        ),

        for: $ => choice(
            // for ( startValue, endValue, function )
            seq("for", "(", $.integer, ",", $.integer, ",", $.function_block, ")"),
            // startValue.for ( endValue, function )
            seq($.integer, ".for", "(", $.integer, ",", $.function_block, ")")
        ),
        forby: $ => choice(
            // forBy ( startValue, endValue, stepValue, function );
            seq(
                field("name", "forBy"),
                "(",
                $.integer,
                ",",
                $.integer,
                ",",
                $.integer,
                ",",
                $.function_block,
                ")"
            ),
            // startValue.forBy ( endValue, stepValue, function );
            seq(
                $.integer,
                field("name", ".forBy"),
                "(",
                $.integer,
                ",",
                $.integer,
                ",",
                $.function_block,
                ")"
            )
        ),

        case: $ => seq(
            field("name", "case"),
            repeat($.function_block),
            ";"
        ),

        switch: $ => choice(
            seq(
                field("name", "switch"),
                "(",
                $._object,
                ",",
                sepBy(
                    ",",
                    seq($._object, ",", $.function_block)
                ),
                ",",
                seq($._object, ",", $.function_block),
                optional(seq(",", $.function_block)),
                ")"
            ),
            prec.right(seq(
                field("name", "switch"),
                $.code_block,
                // "(", $._object, ")",
                repeat(
                    seq($._object, $.function_block)
                ),
                seq($._object, $.function_block),
            ))
        ),

    }
});
