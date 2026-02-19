/// <reference types="tree-sitter-cli/dsl" />

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
	indexing: 1,
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
		$._space_separator
	],

	//inline: $ => [$.keywords],

	// The name of a token that will match keywords for the purpose of the keyword extraction optimization.
	word: $ => $.identifier,
	conflicts: $ => [
		// [$.selector_binary, $.binary_expression],
		// [$.selector_binary, $.unary_expression],
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
			$.class_def,
			seq($._expression_statement, ";"),
			seq($._expression_statement, "\n"),
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
		//	Functions  //
		/////////////////

		function_definition: $ => prec.left(1, seq(
			field("name", $.variable),
			'=',
			field("value", $.function_block)
		)),

		function_call: $ =>
			prec.right(choice(
				// method prefixed: ar(SinOsc, 110)
				seq(
					field("name", $.identifier),
					choice(
						seq("(",
							field("receiver", $._argument_calls),
							choice(
								field("arguments", alias($._additional_args, $.parameter_call_list)),
								")",
							)
						),
						// fork {}
						seq(
							field("receiver", $.function_block), 
							optional(field("arguments", alias($._additional_block_args, $.parameter_call_list)))
						)
					)
				),
				// implicit new on classes type SinOsc() or Pspawner {};
				seq(field("receiver", $.class), field("arguments", $.parameter_call_list)),
				// Instance method (chainable as nested calls)
				seq(
					field("receiver", $._object),
					$._method_call
				)
			)),

		_additional_args: $ => prec(1, seq(
			optional(seq(",", sepBy(",", $._argument_calls))),
			")",
			repeat($.function_block)
		)),
		_additional_block_args: $ => prec(1, repeat1($.function_block)),

		_method_call: $ => prec.left(seq(
			".",
			// optional(alias($.identifier, $.method_name)),
			optional(field("name", $.identifier)),
			// Instance.method or Instance.method()
			optional(field("arguments", $.parameter_call_list))
		)),

		_expression_sequence: $ => seq(
			repeat(prec.right(1, seq($._expression_statement, ";"))),
			// Last statement in sequence
			$._expression_statement,
			optional(";"),
			optional(seq($.return_statement, optional(";")))
		),

		code_block: $ => seq(
			'(',
			optional($._expression_sequence),
			')'
		),

		function_block: $ => choice(
			seq(
				'{',
				optional($.parameter_list),
				optional($._expression_sequence),
				'}'
			),
			seq(
				seq("(", "{"),
				optional($.parameter_list),
				optional($._expression_sequence),
				seq(")", "}"),
			),
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

		// call(1,2,3) {}, call {} {}
		parameter_call_list: $ => choice(
			seq("(", optional(sepBy1(',', $._argument_calls)), ")", repeat($.function_block)),
			repeat1($.function_block)
		),

		_argument_calls: $ => choice(
			$.named_argument,
			$.unnamed_argument,
		),

		// function call is added here to allow things like Array() in params
		unnamed_argument: $ => choice($.function_call, $._object),
		named_argument: $ => prec.left(10, seq(
			field("name", choice($.symbol, $.identifier)),
			choice('=', ':'),
			field("value", choice($.function_call, $._object))
		)),

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

		number: $ => choice(
			$.integer,
			$.float,
			$.hexinteger,
			$.exponential,
			seq(optional($.number), "pi")
		),

		integer: $ => /\d+/,
		hexinteger: $ => /0x([a-fA-F\d])+/,
		float: $ => /\d+\.\d+/,
		exponential: $ => /-?\d+(\.\d+)?[eE]-?\d+/,
		// symbol: $ => choice(
		// 	prec.left(seq('\\', optional(choice($.identifier, /[0-9]+/, $.escape_sequence)))),
		// 	prec.left(seq("'", optional(token.immediate(/[^"'\\]+/)), "'")),
		// ),
		symbol: $ => choice(
			seq( '\\', token.immediate(prec(PRECEDENCE.STRING-1, /[a-zA-Zα-ωΑ-Ωµ\d_]*/))),
			seq( "'", token.immediate(prec(PRECEDENCE.STRING, /([^']|\\')*/)), "'")
		),
		// match $ followed by any char or escaped char (e.g. $a, $\n, $\\, $\2)
		char: $ => /\$(?:[^\\]|\\.)/,

		string: $ => repeat1(
			seq(
				'"',
				repeat(choice(
					token.immediate(prec(PRECEDENCE.STRING, /[^"\\]+/)),
					token.immediate(prec(PRECEDENCE.STRING, /\\[^nrtfv"]/)),
					alias(/\\[nrtfv"]/, $.escape_sequence),
				)),
				'"',
			)
		),

		bool: $ => choice("true", "false"),

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
			choice(
				field("name", $.variable),
				seq("#", sepBy1(",", field("name", $.variable)))
			),
			"=",
			field("value", choice($.class, $._object, $.function_call))
		)),

		///////////////
		//	Classes  //
		///////////////

		return_statement: $ => prec.left(seq("^", choice($._object, $.function_call))),

		// Definition of class
		class_def: $ => prec(PRECEDENCE.class_def, seq(
			optional("+"), $.class, optional(seq(":", alias($.class, $.parent_class))), 
			"{", field("body", $.class_def_body), "}")),

		class_def_body: $ => repeat1(
			choice(
				// Variables
				prec(PRECEDENCE.localvar+1, seq(
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
				)),

				// Instance method
				prec(PRECEDENCE.call + 1, seq(
					alias($.identifier, $.instance_method_name), $.function_block
				)),

				// Class method
				prec(PRECEDENCE.call + 1, seq(
					"*", alias($.identifier, $.class_method_name), $.function_block
				)),
			)
		),

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
					seq($.identifier, ":",	alias($._object,  $.item)),
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
			$.function_call,
			prec.left(1, $.code_block),
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
		// "Selector as binary operator"
		// selector_binary: $ => prec(PRECEDENCE.selectorBinary, prec.left(seq(
		//	field('left', $._object),
		//	field('operator', prec.right(seq($.identifier, ":"))),
		//	field('right', $._object)
		// ))),
		binary_expression: $ => {
			/** @type [number, string|Rule][] */
			const table = [

				// "Selector as binary operator"
				// @TODO
				[PRECEDENCE.selectorBinary, alias(/(r#)?[a-zA-Zα-ωΑ-Ωµ_][a-zA-Zα-ωΑ-Ωµ\d_]*:/, $.method_name)],

				// "Regular" binary operators
				[PRECEDENCE.and, '&&'],
				[PRECEDENCE.or, '||'],
				[PRECEDENCE.bitand, '&'],
				[PRECEDENCE.bitor, '|'],
				[PRECEDENCE.comparative, choice('===', '!==', '==', '!=', '<', '<=', '>', '>=')],
				[PRECEDENCE.shift, choice('<<', '>>')],
				[PRECEDENCE.additive, choice('+', '-', '++')],
				[PRECEDENCE.multiplicative, choice('*', '/', '%', prec.left("**"))],
				[PRECEDENCE.assign, '='],

				// String concatenation
				[PRECEDENCE.stringConcat, "+/+"],

				// Indexing (see https://doc.sccode.org/Overviews/SymbolicNotations.html#SequenceableCollection%20operators)
				[PRECEDENCE.indexing, choice("@", "@@", "|@|", "@|@")],
			];

			return choice(...table.map(([precedence, operator]) => prec.left(precedence, seq(
				field('left', $._object),
				field('operator', operator),
				field('right', $._object),
			))));
		},

		unary_expression: $ => {
			/** @type [number, string|Rule][] */
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
		),
	}
});
