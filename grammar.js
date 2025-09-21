const PRECEDENCE = {
	comment: 1000,

	call: 140,            // chains bind tighter than any binary op
	BIN: 20,              // flat, left-associative binary tier
	unary: 130,           // unary binds tighter than BIN (but below call)
	//keyword_message: 20,  // Same as BIN

	association: 11,
	associative_item: 10,
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

	rules: {

		source_file: $ => repeat($._expression),

		_expression: $ => choice(
			$.code_block,
			$.group,
			$.class_def,
			seq($._expression_statement, ";"),
		),

		_expression_statement: $ => choice(
			$.function_definition,
			$.function_call,
			$.binary_expression,
			$.unary_expression,
			//$.keyword_message,
			$._postfix,
			$.variable_definition,
			$.variable_definition_sequence,
			$.return_statement
		),

		// These are the values that may be assigned to a variable or argument
		_object: $ => choice(
			prec(2, $.class),
			$.association,
			//$.nil_check,
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


		/*
		 * function_call
		 * --------------
		 * Covers all forms of function/method invocation in sclang.
		 *
		 * Variants:   • Method-prefixed call:
		 *       ar(SinOsc, 110)
		 *       MyClass.someMethod(123)
		 *
		 *   • Implicit constructor:
		 *       SinOsc(440)         // equivalent to SinOsc.new(440)
		 *
		 *   • Instance method chain:
		 *       obj.method1(...).method2(...)
		 *
		 * Notes:
		 *   - Receivers in chains are `_primary` terms, not arbitrary expressions.
		 *   - Chains are left-associative and bind tighter than binary operators
		 *     (enforced via `_postfix` and CALL precedence).
		 *   - Supports instance-variable setter calls as well, though these are rare.
		 *
		 * Example:
		 *   \freq.kr(440).midiratio.sin
		 *   SinOsc.ar(440, mul: 0.5)
		 */
		function_call: $ => choice(
			// Method-prefixed call: ar(SinOsc, 110) or Class(…)
			seq(
				choice(alias($.identifier, $.method_name), $.class),
				"(", optional($.parameter_call_list), ")"
			),

			// Implicit new on classes: SinOsc(…)
			seq(
				$.class,
				"(", optional($.parameter_call_list), ")"
			),

			// Instance chain form: <primary>.<method>(...)...
			seq(
				field('receiver', $._primary),
				repeat1(choice($.method_call, $.instance_variable_setter_call))
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
		 *  - list_comprehension: `{: ... }` constructs
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
			$.list_comprehension,
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
		 * A postfix expression: either a bare primary or a chain of calls.
		 *
		 * Variants:
		 *   - `<primary>.<method>(...)...` — one primary followed by ≥1 method calls
		 *   - `<primary>` — a bare primary
		 *
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
 		 * A parenthesized expression for grouping. It can contain any expression,
		 * including a code block node; evaluation semantics are unchanged.
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
				seq($._postfix, ",", $._postfix, "..", $._postfix),  // (start, step..end)
				seq("..", $._postfix),                                // (..end)
				seq($._postfix, "..", $._postfix),                   // (start..end)
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
		 * Note: Keep a unified binary_expression and let the 
		 * semantic analyzer categorize operators (nil_check, keyword_message, etc).
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
				'?', '!?', '??',       // Nil check operators see [[nil_check]]
				'..',                  // range operator
				/[A-Za-z_]\w*:/        // See [[keyword_message]] 
			)),
			field('right', $._postfix)
		)),

		/** 
		 * keyword_message	
		 * ----------------
		 * 
		 * Unecessary. 
		 * `23 mod: 10 + 10 mod: 5 ** 2` is parsed correctly by binary_expression
		 * 
		 * 
		 * Inconsistent AST - `23 mod: 10` and `23 % 10` would have 
		 * different node types despite identical semantics
		 * 
		 * 
		 * */
		// keyword_message: $ => prec.left(PRECEDENCE.keyword_message, seq(
		// 	field('receiver', $._postfix),
		// 	field('selector', alias(/[a-zA-Z_]\w*:/, $.keyword_selector)),
		// 	field('argument', $._postfix)
		// )),

		/**
		 * unary_expression
		 * ----------------
		 * Unary operators applied to a term. Unary binds tighter than BIN,
		 * but looser than CALL (so chains still attach to the operand).
		 * 
		 * 
		 * Note: `:` is treated as a unary operator here for simplicity,
		 * r = (:1..10); 
		 * -> a Routine
		 */
		unary_expression: $ => prec.left(PRECEDENCE.unary, seq(
			field("operator", choice('+', '-', ':')),
			field("right", $._postfix)
		)),

		class: $ => prec(PRECEDENCE.class, field("name", /[A-Z][a-zA-Z\d_]*/)),
		identifier: $ => /[a-zA-Zα-ωΑ-Ωµ_][a-zA-Zα-ωΑ-Ωµ\d_]*/,

		/**
		 *  Nil check operators: ?, !?, ??
		 * ------------------------
		 * 
		 * Moved to binary_expression 
		 * 
		 * These operators check for nil values and provide defaults.
		 * Since they behave as standard binary operators with the same precedence
		 * and associativity, there's no compelling reason to separate them. 
		 * The simpler, unified approach is better unless SuperCollider has special 
		 * parsing rules for these operators that I haven't discovered yet.

		// nil_check: $ => prec.left(PRECEDENCE.BIN, seq(  // Use same precedence as BIN
		// 	field('left', $._postfix),    
		// 	field('operator', choice('?', '!?', '??')),
		// 	field('right', $._postfix)
		// )),

		// Expressions that can hold or return a single value
		_numeric_expression: $ => choice(
			$.number,
			$.variable,
			$.binary_expression,
			$.unary_expression,
			$.function_call,
			$.indexed_collection,
			$.code_block,
			//$.nil_check,
			$.control_structure,
		),


		////////////////////////
		// List Comprehension //
		////////////////////////

		/**
		 * list_comp_open
		 * --------------
		 * Token for starting a list comprehension: '{:'.
		 * Distinguished from regular code blocks ('{').
		 */
		list_comp_open: $ => token('{:'),

		/**
		 * list_comprehension
		 * ------------------
		 * Syntax:
		 *   {: <body_expr>, <qualifier1>, <qualifier2>, ... }
		 *
		 * Examples:
		 *   {: i * 2, i <- (1..10), i % 2 == 0 }
		 */
		list_comprehension: $ => seq(
			$.list_comp_open,
			field('body', choice(
				$._expression_sequence,
				$._postfix              // Allow single expressions without semicolon
			)),
			',',
			field('qualifiers', sepBy1(',', $.qualifier)),  // One or more qualifiers separated by commas
			'}'
		),

		/**
		 * qualifier
		 * ---------
		 * Qualifiers are the clauses inside comprehensions.
		 * They can be generators, guards, variable bindings,
		 * side effects, or termination conditions.
		 */
		qualifier: $ => choice(
			$.generator,
			$.guard,            // Conditional expressions to filter items
			$.var_binding,      // Local variable bindings
			$.side_effect,      // Code with side effects 
			$.termination       // Termination condition for iteration
		),

		/**
		 * generator
		 * --------------
		 * Syntax: <pattern> <- <source>
		 *
		 */
		generator: $ => seq(
			field('pattern', choice(
				$.identifier,
				$.collection  //  pattern matching like: [x,y] <- pairs
			)),
			'<-',
			field('source', $._expression)
		),

		/**
		 * Guard: just an expression that returns boolean
		 * No special syntax, distinguished by context
		 */
		guard: $ => field('guard', $._postfix),

		/**
		 * Binding: var name = expr
		 * Similar to variable declarations.
		 */
		var_binding: $ => seq(
			'var',
			field('name', $.identifier),
			'=',
			field('value', $._expression)
		),

		/**
		 * Side effect: :: expr	
		 * For inserting code with side effects like printing
		 */
		side_effect: $ => seq(
			'::',
			field('expression', $._expression)
		),

		/**
		 * Termination: :while expr
		 * Stops iteration when expression becomes false
		 */
		termination: $ => seq(
			':while',
			field('condition', $._expression)
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
