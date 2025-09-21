const PRECEDENCE = {
	comment: 1000,

	call:  140,            // chains bind tighter than any binary op
	BIN:   20,             // flat, left-associative binary tier
	unary: 130,            // unary binds tighter than BIN (but below call)

	association: 11,
	associative_item: 10,
	stringConcat: 16,
	STRING: 2,
	partial: 15,
	field: 13,
	duplication: 12,
	assign: 0,
	controlstruct: 3,
	localvar: 4,
	vardef: 3,
	vardef_sequence: 2,
	closure: -1,
	class_def: 1,
	class: 20
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
		$._space_separator
	],

	// Inline declarations for optimization
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
	//	   $._object,
	//	   $._expression_statement,
	// ],

	rules: {

		source_file: $ => repeat($._expression),

		_expression: $ => choice(
			$.code_block,
			$.group,
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
			field("operator", "!"),
			field("duplication_times", $._object)
		)),

		/////////////////
		//	Functions  //
		/////////////////

		function_definition: $ => prec.left(1, seq(
			field("name", $.variable),
			'=',
			field("value", $.function_block)
		)),

		function_call: $ => prec.right(

			choice(

				// method prefixed: ar(SinOsc, 110)
				seq(
					choice(alias($.identifier, $.method_name), $.class),
					"(", optional($.parameter_call_list), ")"
				),

				// implicit new on classes type SinOsc();
				seq(
					$.class,
					seq("(", optional($.parameter_call_list), ")"),
				)

			),
			// Instance method (chainable)
			seq(
				field('receiver', $._primary),
				repeat1(
					choice(
						$.method_call,
						// This is already covered by the identifier rule, should it be more specific though?
						$.instance_variable_setter_call,
					)
				)
			)
		),

		/**
		 * _primary
		 * ----------
		 * Defines a *primary expression* — the basic building blocks that can
		 * stand alone or serve as receivers for method calls.
		 *
		 * Includes:
		 *   - number: numeric literal
		 *   - string: string literal
		 *   - symbol: symbols like \freq
		 *   - variable: variable references
		 *   - class: class identifiers
		 *   - collection: collection literals (arrays, dicts, etc.)
		 *   - code_block: `{ ... }` blocks
		 *   - group: parenthesized expressions `( ... )`
		 */
		_primary: $ => choice(
			$.number,
			$.string,
			$.symbol,
			$.variable,
			$.class,
			$.collection,
			$.code_block,
			$.group
		),

		/**
		 * method_call
		 * ------------
		 * A method call introduced by a dot `.` and followed by an identifier.
		 *
		 * Structure:
		 *   .name(args?)
		 *
		 * Notes:
		 *   - The `name` is captured as `method_name` for highlighting/queries.
		 *   - Arguments are optional:
		 *       • `()` with optional parameter list
		 *       • or an inline code block used as an argument
		 */
		method_call: $ => seq(
			".",
			field("name", alias($.identifier, $.method_name)),
			optional(choice(
				seq("(", optional($.parameter_call_list), ")"),
				$.code_block
			))
		),

		/**
		 * _postfix
		 * ---------
		 * A postfix expression: either a method-call chain or a bare primary.
		 *
		 * Cases:
		 *   - `<primary>.<method>(...)...` — one primary followed by ≥1 method calls
		 *   - `<primary>` — a bare primary
		 *
		* Notes:
		*   • `prec.left` makes chains left-associative (calls nest L→R).
		*   • `PRECEDENCE.call` keeps chains tighter than any binary operator.
		 */
		_postfix: $ => choice(
			prec.left(PRECEDENCE.call, seq(
				$._primary,
				repeat1($.method_call)
			)),
			$._primary
		),

		// This is unused
		instance_variable_setter_call: $ => prec.left(2,
			seq(
				".",
				field("name", alias($.identifier, $.method_name)),
				"_",
				// Instance.method or Instance.method()
				optional(seq("(", optional($.parameter_call_list), ")")),

			)
		),

		_expression_sequence: $ => seq(
			repeat(prec.right(1, seq($._expression_statement, ";"))),
			// Last statement in sequence
			$._expression_statement,
			optional(";")
		),

		/**
		 * code_block
		 * ----------
		 * A function/code block delimited by `{ ... }`, optionally with parameters.
		 *
		 * Examples:
		 *   { arg x; x * 2 }
		 *   { |x, y| x + y }
		 */
		code_block: $ => seq(
			'{',
			optional($.parameter_list),
			optional($._expression_sequence),
			'}'
		),

		/**
		 * group
		 * -----
		 * A parenthesized expression for grouping or immediate evaluation.
		 * Can contain regular expressions or code blocks.
		 * 
		 * Examples:
		 *   (2 + 3)           // Simple grouping
		 *   ({ "hello" })     // Immediate code block evaluation
		 */
		group: $ => seq(
			'(',
			choice(
				$._expression_sequence,  // Regular grouped expression
				$.code_block            // Immediate code block: ({ ... })
			),
			')'
		),

		/**
		 * function_block
		 * --------------
		 * Either a plain code block or one prefixed with a method name.
		 * The method name version is for special syntactic sugar.
		 */
		function_block: $ => choice(
			$.code_block,
			prec.left(seq(alias($.identifier, $.method_name), $.code_block))
		),

		/**
		 * _function_content
		 * -----------------
		 * The body of a function/code block: `{ parameter_list? expression_sequence? }`.
		 */
		// _function_content: $ => seq(
		// 	'{',
		// 	optional($.parameter_list),
		// 	optional($._expression_sequence),
		// 	'}'
		// ),

		// Definition of parameters in function
		parameter_list: $ => choice(
			seq(
				'arg',
				sepBy(',', $.argument),
				// optional(seq("...", $.argument)),
				optional(alias($.variable_argument, $.argument)),
				';'
			),
			seq(
				'|',
				sepBy(choice($._space_separator, ','),
					choice(
						$.argument,
						alias($.variable_argument, $.argument),
					),
				),
				'|'
			)
		),

		// For definition lists
		argument: $ => seq(
			field("name", $.identifier),
			field("value", optional(
				choice(
					seq("=", choice($.literal, $.collection, $.code_block)),
					$.code_block,
					// seq("(", $.literal, ")")
				)
			))
		),

		// see https://doc.sccode.org/Reference/Functions.html#Variable%20Arguments
		variable_argument: $ => seq("...", field("name", $.identifier)),


		/**
		 * parameter_call_list / named_argument
		 * ------------------------------------
		 * Argument handling for function and method calls.
		 *
		 * `parameter_call_list` is a comma-separated list of either unnamed
		 * arguments (`_object`) or named arguments.
		 *
		 * `named_argument` consists of an identifier or symbol followed by `:`
		 * and a value. The value is always stored under the `value` field,
		 * ensuring constructs like `curve: -1` parse correctly.
		 *
		 * Examples:
		 *   SinOsc.ar(440, mul: 0.5)
		 *   Env.perc(0.01, curve: -1)
		 */
		parameter_call_list: $ => sepBy1(',', choice($.named_argument, $._object)),

		named_argument: $ => seq(
			field('name', choice($.symbol, $.identifier)),
			':',
			field('value', $._object)
		),

		///////////////////////
		//	Define literal	//
		///////////////////////

		literal: $ => choice(
			$.number,
			$.symbol,
			$.char,
			$.string,
			$.bool,
		),

		/**
		 * number
		 * ------
		 * Numeric literal forms:
		 *   • integer       — e.g. 42
		 *   • float         — e.g. 3.14
		 *   • hexinteger    — e.g. 0xFF
		 *   • exponential   — e.g. 1.0e-3
		 * Note: `pi` handling was removed from the grammar.
		 */
		number: $ => choice(
			$.integer,
			$.float,
			$.hexinteger,
			$.exponential
		),

		// pi_statement: $ => seq(optional($.number), "pi"),

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
		string: $ => repeat1(
			seq(
				'"',
				repeat(choice(
					token.immediate(prec(PRECEDENCE.STRING, /[^"\\\n]+|\\\r?\n/)),
					$.escape_sequence
				)),
				'"'
			)
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
		//	Variables  //
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
			field("name", $.identifier), seq('var', field("name", $.identifier)))
		),

		instance_var: $ => seq(optional('var'), optional(choice("<", ">", "<>")), field("name", $.identifier)),
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
		//	Classes  //
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
								// Variable definition
								seq(
									choice(
										alias($.local_var, $.instance_var),
										$.instance_var,
										$.classvar,
										$.const
									),
									"=",
									$._object
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
		//	Comments  //
		////////////////

		comment: $ => choice(
			$.line_comment,
			$.block_comment
		),

		line_comment: $ => prec(PRECEDENCE.comment, token(seq('//', /.*/))),

		///////////////////
		//	Collections  //
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
					seq($.identifier, ":", alias($._object, $.item)),
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

		_indexable_object: $ => choice(
			$.collection,
			$.variable,
			$.string,
			$._postfix,
			prec.left(1, $.code_block),
			$.control_structure
		),

		indexed_collection: $ => seq(
			$._indexable_object,
			repeat($._index),
			$._index
		),

		index_subrange: $ => choice(
			seq($._numeric_expression, ".."),
			seq("..", $._numeric_expression),
			seq($._numeric_expression, "..", $._numeric_expression),
			seq($._numeric_expression, ",", $._numeric_expression, "..", $._numeric_expression),
		),

		_index: $ => seq(
			"[",
			field("index", choice($._numeric_expression, $.index_subrange)),
			"]"
		),

		arithmetic_series: $ => seq(
			"(",
			choice(
				seq($._numeric_expression, ",", $._numeric_expression, "..", $._numeric_expression),
				seq("..", $._numeric_expression),
				seq($._numeric_expression, "..", $._numeric_expression),
			),
			")"
		),

		///////////////////
		//	Expressions  //
		///////////////////

		/**
		 * binary_expression
		 * -----------------
		 * Represents any binary operator expression.
		 *
		 * Structure:
		 *   <left> <operator> <right>
		 *
		 * Notes:
		 *   • Single flat, left-associative tier (`PRECEDENCE.BIN`).
		 *   • Operands are `_postfix` so method-call chains bind tighter than binops.
		 *   • Covers all symbolic binary operators, including `**`.
		 *   • Matches SuperCollider’s L→R evaluation of binary operators.
		 *
		 * Example:
		 *   \freq.kr(440) * (Env.perc(0.01, curve: -1).ar * 48).midiratio
		 */
		binary_expression: $ => prec.left(PRECEDENCE.BIN, seq(
			field('left', $._postfix),
			field('operator', choice(
				'||', '&&', '|', '^', '&', '==', '!=', '<', '<=', '>', '>=',
				'<<', '>>', '+', '-', '++', '+/+', '*', '/', '%', '**',
				/[A-Za-z_]\w*:/
			)),
			field('right', $._postfix)
		)),

		/**
		 * unary_expression
		 * ----------------
		 * Unary operators applied to a term. Unary binds tighter than BIN,
		 * but looser than CALL (so chains still attach to the operand).
		 */
		unary_expression: $ => prec.left(PRECEDENCE.unary, seq(
			field("operator", choice('+', '-')),
			field("right", $._postfix)
		)),

		class: $ => prec(PRECEDENCE.class, field("name", /[A-Z][a-zA-Z\d_]*/)),
		identifier: $ => /(r#)?[a-zA-Zα-ωΑ-Ωµ_][a-zA-Zα-ωΑ-Ωµ\d_]*/,

		// Nil check
		// @FIXME: Should be a binary operator
		nil_check: $ => prec.left(seq($._object, choice("?", "!?", "??"), $._object)),

		// Expressions that can hold or return a single value
		_numeric_expression: $ => choice(
			$.number,
			$.variable,
			$.binary_expression,
			$.unary_expression,
			$.function_call,
			$.indexed_collection,
			$.code_block,
			$.nil_check,
			$.control_structure,
		),

		////////////////////
		//	Conditionals  //
		////////////////////

		/**
		 * control_structure
		 * -----------------
		 * Entry point for SC’s control forms. Each form accepts an expression
		 * (use `_postfix` so chains bind tighter than binops) and one or more
		 * function blocks (code blocks) as bodies/branches.
		 */
		control_structure: $ => prec(PRECEDENCE.controlstruct, choice(
			$.if, $.while, $.for, $.forby, $.case, $.switch
		)),

		/**
		 * if
		 * --
		 * Forms:
		 *   if (expr) {true} {false?}
		 *   if (expr, {true}, {false?})
		 *   expr.if {true} ({false?})
		 */
		if: $ => choice(
			// if (expr) trueFunc falseFunc
			prec.right(seq(
				field("name", "if"),
				"(",
				field("expression", $._postfix),
				")",
				field("true", $.function_block),
				optional(field("false", $.function_block))
			)),
			// if (expr, trueFunc, falseFunc)
			prec.right(seq(
				field("name", "if"),
				"(",
				field("expression", $._postfix),
				field("true", seq(",", $.function_block)),
				optional(field("false", seq(",", $.function_block))),
				")"
			)),
			// expr.if {true} ({false?})
			seq(
				prec.left(1, seq(
					field("expression", $._postfix),
					field("name", seq(".", "if"))
				)),
				choice(
					field("true", $.function_block),
					seq(
						"(",
						field("true", $.function_block),
						optional(field("false", seq(",", $.function_block))),
						")"
					)
				)
			)
		),

		/**
		 * while
		 * -----
		 * Forms:
		 *   while ( {test}, {body} )
		 *   testFunc.while {body}
		 *   while {test} {body}
		 */
		while: $ => choice(
			// while ( testFunc, bodyFunc )
			prec.left(1, seq(
				field("name", "while"),
				"(",
				field("test_func", $.function_block),
				",",
				field("body_func", $.function_block),
				")"
			)),
			// testExpr.while { body }
			seq(
				field("expression", $._postfix),
				field("name", ".while"),
				field("body_func", $.function_block)
			),
			// while { test } { body }
			seq(
				field("name", "while"),
				field("test_func", $.function_block),
				field("body_func", $.function_block)
			)
		),

		/**
		 * for / forBy
		 * -----------
		 * SC’s numeric iteration helpers.
		 */
		for: $ => choice(
			// for ( start, end, {body} )
			seq("for", "(", $._postfix, ",", $._postfix, ",", $.function_block, ")"),
			// start.for ( end, {body} )
			seq($.integer, ".for", "(", $.integer, ",", $.function_block, ")")
		),

		forby: $ => choice(
			// forBy ( start, end, step, {body} )
			seq(
				field("name", "forBy"),
				"(",
				$.integer, ",", $.integer, ",", $.integer, ",", $.function_block,
				")"
			),
			// start.forBy ( end, step, {body} )
			seq(
				$.integer,
				field("name", ".forBy"),
				"(",
				$.integer, ",", $.integer, ",", $.function_block,
				")"
			)
		),

		/**
		 * case
		 * ----
		 * One or more function blocks terminated with `;`.
		 */
		case: $ => seq(
			field("name", "case"),
			repeat($.function_block),
			";"
		),

		/**
		 * switch
		 * ------
		 * Forms:
		 *   switch ( expr, key, {body}, ... [, {default}] )
		 *   switch { expr } key {body} ... [{default}]
		 */
		switch: $ => choice(
			seq(
				field("name", "switch"),
				"(",
				field("expr", $._postfix),
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
				$.code_block, // switch { expr }
				repeat(seq($._postfix, $.function_block)),
				seq($._postfix, $.function_block)
			))
		)



	}
});
