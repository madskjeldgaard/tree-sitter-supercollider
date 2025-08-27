const PRECEDENCE = {
	comment: 1000,
	association: 11,
	associative_item: 10,
	stringConcat:16,
	STRING: 2,
	partial: 15,
	call: 14,
	field: 13,
	unary: 15,
    duplication: 12,
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
	selectorBinary: 100,
	controlstruct: 3,
	localvar: 4,
	vardef: 3,
	vardef_sequence: 2,
	closure: -1,
	class_def: 1,
	class:20,
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
	extras: $ => [/\s/, $.line_comment, $.block_comment],

	externals: $ => [
		$.block_comment,
	],

	//inline: $ => [$.keywords],

	// The name of a token that will match keywords for the purpose of the keyword extraction optimization.
	word: $ => $.identifier,
	conflicts: $ => [
		// [$.selector_binary, $.binary_expression],
		// [$.selector_binary, $.unary_expression],
		[$.switch],
		[$._expression, $._object],
	],

	// supertypes: $ => [
	//     $._object,
	//     $._expression_statement,
	// ],

	rules: {

		source_file: $ => repeat($._expression),

		_expression: $ => choice(
			$.code_block,
			$.class_def,
			seq($._expression_statement, ";"),
		),

		_expression_statement: $ => choice(
			// $.function_block,
			// $.comment,
			$.function_definition,
			$.function_call,
			$._object,
			$.variable_definition,
			$.variable_definition_sequence,
			// $.duplicated_statement,
			// $.binary_expression,
			$.return_statement
		),

		// These are the values that may be assigned to a variable or argument
		_object: $ => choice(
			prec(2, $.class),
			prec(20, $.function_call),
			$.association,
			$.nil_check,
			$.code_block,
			$.function_block,
			$.control_structure,
			$.literal,
			$.variable,
			$.binary_expression,
			$.unary_expression,
			$.collection,
			$.indexed_collection,
			$.partial,
			$.duplicated_statement,
		),

		partial: $ => prec.right(PRECEDENCE.partial, "_"),

		duplicated_statement: $ => prec.left(PRECEDENCE.duplication, seq(
            field("duplicated_object", $._object),
            field("operator","!"),
            field("duplication_times", $._object)
        )),

		/////////////////
		//  Functions  //
		/////////////////

		function_definition: $ => prec.left(1, seq(
			field("name", $.variable),
			'=',
			field("value", $.function_block)
		)),

		function_call: $ =>
		prec.right(choice(
			choice(

				// method prefixed: ar(SinOsc, 110)
				seq(
					choice(alias($.identifier, $.method_name), $.class),
					seq("(", optional($.parameter_call_list), ")"),
				),

				// implicit new on classes type SinOsc();
				seq(
					$.class,
					seq("(", optional($.parameter_call_list), ")"),
				),

			),
			// Instance method (chainable)
			seq(
				alias($._object, $.receiver),
				repeat1(
					choice(
						$.method_call,
						// This is already covered by the identifier rule, should it be more specific though?
						$.instance_variable_setter_call,
					)

				)
			)
		)),

		method_call: $ => prec.left(seq(
			".",
			field("name", optional(alias($.identifier, $.method_name))),
			// Instance.method or Instance.method()
			optional(choice(
				seq("(", optional($.parameter_call_list), ")"),
				$._function_content
			))
		)),

		// This is unused
		instance_variable_setter_call: $ => prec.left(2,
			seq(
				".",
				field("name", optional(alias($.identifier, $.method_name))),
				"_",
				// Instance.method or Instance.method()
				optional(seq("(", optional($.parameter_call_list), ")")),

			)
		),

		// class_method_call: $ => prec.left(choice(
		//     // Class.method - class method
		//     prec.left(seq(
		//         ".",
		//         field("name", alias($.identifier, $.class_method_name)),
		// optional(choice(

		// seq("(", optional($.parameter_call_list), ")"), $._function_content)
		//     ))),
		//     // Class() - implicit .new
		//     seq("(", optional($.parameter_call_list), ")")
		// )),

		_expression_sequence: $ => seq(
			repeat(prec.right(1, seq($._expression_statement, ";"))),
			// Last statement in sequence
			$._expression_statement,
			optional(";")
		),

		code_block: $ => seq(
			'(',
			optional($._expression_sequence),
			')'
		),

		function_block: $ => choice(
			$._function_content,
			prec.left(seq(alias($.identifier, $.method_name), $._function_content)),
		),

		_function_content: $ => choice(
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
			seq('arg', sepBy(',', $.argument), optional(seq("...", $.argument)), ';'),
			seq('|', sepBy(choice(' ', ','), $.argument), optional(seq("...", $.argument)), '|')
		),

		// For definition lists
		argument: $ => seq(
			field("name", $.identifier),
			field("value", optional(choice(seq("=", choice($.literal, $.collection)), seq("(", $.literal, ")"))))
		),

		// When supplying arguments to a function call
		parameter_call_list: $ => sepBy1(',', $.argument_calls),

		argument_calls: $ => choice(
			$.named_argument,
			$.unnamed_argument,
		),

		// function call is added here to allow things like Array() in params
		unnamed_argument: $ => choice($.function_call, $._object),
		named_argument: $ => prec.left(10,
			field("name", seq(
				choice($.symbol, $.identifier),
				seq(
					choice('=', ':'),
					choice($.function_call, $._object),
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
			$.bool,
			// $.pi_statement
		),

		// pi_statement: $ => seq(optional($.number), "pi"),
		number: $ => choice(
			$.integer,
			$.float,
			$.hexinteger,
			$.exponential,
			"pi",
			seq(optional($.number), "pi")
		),

		integer: $ => /\d+/,
		hexinteger: $ => /0x([a-fA-F\d])+/,
		float: $ => /\d+\.\d+/,
		exponential: $ => /-?\d+(\.\d+)?[eE]-?\d+/,
		symbol: $ => choice(
			prec.left(seq('\\', optional(choice($.identifier, /[0-9]+/, $.escape_sequence)))),
			prec.left(seq("'", optional(token.immediate(/[^"'\\]+/)), "'")),
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
				/u\{[0-9a-fA-F]+\}/
			)
		)),

		/////////////////
		//  Variables  //
		/////////////////

		variable: $ => choice(
			$.environment_var,
			$.local_var,
			$.classvar,
			// $.const, // Only works in classes?
			$.builtin_var,
			$.instance_var
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

		local_var: $ => prec(PRECEDENCE.localvar, choice(
			field("name", $.identifier), seq( 'var',  field("name", $.identifier)))
		),

		instance_var: $=> seq( optional('var'), optional(choice("<", ">", "<>")), field("name", $.identifier)),
		classvar: $ => seq('classvar', optional(choice("<", ">", "<>")), field("name", $.identifier)),
		const: $ => seq('const', optional(choice("<", ">", "<>")), field("name", $.identifier)),

		environment_var: $ => choice(
			field("name", alias(/[a-z]/, $.identifier)),
			field("name", alias(seq('~', $.identifier), $.identifier)),
		),

		variable_name: $ => $.identifier,

		variable_definition_sequence: $ => prec(PRECEDENCE.vardef_sequence,
			seq(
				sepBy(",", choice($.variable_definition, $.variable)),
				",", choice($.variable_definition, $.variable)
			)
		),
		variable_definition: $ => prec(PRECEDENCE.vardef, seq(
			field("name", $.variable),
			"=",
			field("value", choice($.class, $._object, $.function_call))
		)),

		///////////////
		//  Classes  //
		///////////////

		return_statement: $ => prec.left(seq("^", choice($._object, $.function_call))),

		// Definition of class
		class_def: $ => prec(PRECEDENCE.class_def, seq(optional("+"), $.class, optional(seq(":", alias($.class, $.parent_class))), "{",
			repeat(
				choice(
					// Variables
					seq(
						sepBy(",",
							choice(

								// Variable declaration
								choice(
									alias($.local_var, $.instance_var),
									$.instance_var,
									$.classvar
								),
								// variable definiton
								seq(
									choice(
										alias($.local_var, $.instance_var),
										$.instance_var,
										$.classvar,
										$.const
									),
									"=",
									$._object,
								),
							)
						),
						";"
					),

					// Instance method
					seq(
						alias($.identifier, $.instance_method_name), $.function_block
					),

					// Class method
					seq(
						"*", alias($.identifier, $.class_method_name), $.function_block
					),
				)
			),
			"}")),

		////////////////
		//  Comments  //
		////////////////

		comment: $ => choice(
			$.line_comment,
			$.block_comment
		),

		line_comment: $ => prec(PRECEDENCE.comment, token(seq('//', /.*/))),

		///////////////////
		//  Collections  //
		///////////////////

		ref: $ => "`",
		collection: $ => prec.left(seq(
			// Optional class prefix
			// The actual collection
			choice(
				$.arithmetic_series,
				prec.left(seq(
					optional(choice("#", $.ref)),
					optional(
						choice(
							optional(
								alias($.class, $.collection_type)
							)
						)
					),
					"[",
					$._collection_sequence,
					"]"
				)),
				seq(
					"(",
					$._paired_associative_sequence,
					")"
				),
			)
		)),

		_collection_sequence: $ => seq(sepBy1(",", choice(
			$.associative_item,
			$._object
		)), optional(",")),

		_paired_associative_sequence: $ => seq(sepBy1(",", $.associative_item), optional(",")),

		// See this link for more info
		// https://doc.sccode.org/Reference/Key-Value-Pairs.html
		association: $ => prec(
			PRECEDENCE.association,
			seq(
				prec.left($._object),
				prec(PRECEDENCE.assign, "->"),
				prec.right($._object)
			)
		),

		associative_item: $ => prec(PRECEDENCE.associative_item,
			seq(
				choice(
					seq($.identifier, ":",  alias($._object,  $.item)),
					$.association
				)
			)
		),

		// These are unused at the moment
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

		indexed_collection: $ => seq(
			$.variable,
			repeat($._index),
			$._index
		),

		_index: $ => choice(seq("[",
			field("index",
				choice(
					$.literal,
					$.variable,
					// Subrange
					choice(
						seq($.integer, ".."),
						seq("..", $.integer),
						seq($.integer, "..", $.integer),
					)
				)),
			"]"
		),
			// clipAt
			seq("|@|", field("index", $.integer)),
			// wrapAt
			seq("@@", field("index", $.integer)),
			// foldAt
			seq("@|@", field("index", $.integer)),
		),

		arithmetic_series: $ => seq(
			"(",
			choice(
				seq($.number, ",", $.number, "..", $.number),
				seq("..", $.number),
				seq($.number, "..", $.number),
			),
			")"
		),

		///////////////////
		//  Expressions  //
		///////////////////
		// "Selector as binary operator"
		// selector_binary: $ => prec(PRECEDENCE.selectorBinary, prec.left(seq(
		// 	field('left', $._object),
		// 	field('operator', prec.right(seq($.identifier, ":"))),
		// 	field('right', $._object)
		// ))),
		binary_expression: $ => {
			const table = [

				// "Selector as binary operator"
				// @TODO
				[PRECEDENCE.selectorBinary, alias(/(r#)?[a-zA-Zα-ωΑ-Ωµ_][a-zA-Zα-ωΑ-Ωµ\d_]*:/, $.method_name)],

				// "Regular" binary operators
				[PRECEDENCE.and, '&&'],
				[PRECEDENCE.or, '||'],
				[PRECEDENCE.bitand, '&'],
				[PRECEDENCE.bitor, '|'],
				[PRECEDENCE.comparative, choice('==', '!=', '<', '<=', '>', '>=')],
				[PRECEDENCE.shift, choice('<<', '>>')],
				[PRECEDENCE.additive, choice('+', '-', '++')],
				[PRECEDENCE.multiplicative, choice('*', '/', '%', prec.left("**"))],
				[PRECEDENCE.assign, '='],

				// String concatenation
				[PRECEDENCE.stringConcat, "+/+"]
			];

			return choice(...table.map(([precedence, operator]) => prec.left(precedence, seq(
				field('left', $._object),
				field('operator', operator),
				field('right', $._object),
			))));
		},

		unary_expression: $ => {
			const table = [
				[PRECEDENCE.unary, '-'],
				[PRECEDENCE.unary, '*'],
				// Example of this in usage to create a routine:
				// (:1..)
				[PRECEDENCE.unary, ':'],
			];

			return choice(...table.map(([precedence, operator]) => prec.left(precedence, seq(
				field("operator", operator),
				field("right", choice($._object))
			))));
		},

		class: $ => prec(PRECEDENCE.class, field("name", /[A-Z]+[a-zA-Z\d_]*/)),
		identifier: $ => /(r#)?[a-zA-Zα-ωΑ-Ωµ_][a-zA-Zα-ωΑ-Ωµ\d_]*/,

		// Nil check
		// @FIXME: Should be a binary operator
		nil_check: $ => prec.left(seq($._object, choice("?", "!?", "??"), $._object)),

		////////////////////
		//  Conditionals  //
		////////////////////

		control_structure: $ => prec(PRECEDENCE.controlstruct, choice(
			$.if, $.while, $.for, $.forby, $.case, $.switch
		)),

		if: $ => choice(
			// if (expr) trueFunc falseFunc
			prec.right(
				seq(
					field("name", "if"),
					"(",
					field("expression", prec.left(
						choice($.function_call, $._object)
					)),
					")",
					field("true", $.function_block),
					optional(field("false", $.function_block)),
				)
			),
			// if (expr, trueFunc, falseFunc);
			prec.right(
				seq(
					field("name", "if"),
					"(",
					field("expression", prec.left(
						choice($.function_call, $._object)
					)),
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
						field("expression", choice($.function_call, $._object)),
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
				field("expression", choice($.function_call, $._object)),
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
				choice($.function_call, $._object),
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
					seq(
						choice($.function_call, $._object),
						$.function_block
					)
				),
				seq(
					choice($.function_call, $._object),
					$.function_block
				),
			))
		),

	}
});
