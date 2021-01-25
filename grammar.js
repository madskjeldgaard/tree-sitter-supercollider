// Good information here:
//
// The SCIDE lexer file:
// https://github.com/supercollider/supercollider/blob/608bb981162c2c26f0a32c09d82557b29774a32e/editors/sc-ide/core/sc_lexer.cpp
//
//
// TODO:
// - Unary
// - Class

const PRECEDENCE = {
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
		[$.unnamed_argument, $.named_argument]
	],

	rules: {

		source_file: $ => repeat($._expression),

		_expression: $ => choice(
			$.code_block,
			seq($._expression_statement, ";"),
		),

		_expression_statement: $ => choice(
			$.function_block,
			$.function_definition,
			$.function_call,
			$.variable_definition,
			$.binary_expression,
			// $.return_statement
		),

		// These are the values that may be assigned to a variable or argument
		_value: $ => choice(
			$.literals,
			$.variable,
			$.function_block,
			$.binary_expression
		),

		/////////////////
		//  Functions  //
		/////////////////
		
		function_definition: $ => prec.left(1, seq(
			($.variable),
			'=',
			$.function_block
		)),

		function_call: $ => seq(
			$.variable, 
			".", 
			optional($.identifier), 
			"(", 
			$.parameter_call_list, 
			")"
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
		argument: $ => seq($.identifier, optional(seq("=", $.literals))),

		// When supplying arguments to a function call
		parameter_call_list: $ => sepBy1(',', $.argument_calls),

		argument_calls: $ => choice(
			$.named_argument,
			$.unnamed_argument,
		),

		unnamed_argument: $ => choice($.variable, $.literals),
		named_argument: $ => prec.left(1, seq(
			optional("\\"),
			$.identifier,
			optional(
				seq(
					choice('=', ':'), 
					choice($.literals, $.variable)
				)
			)
		)
		),

		///////////////////////
		//  Define literals  //
		///////////////////////
		
		literals: $ => choice(
			$.number,
			$.symbol,
			$.char,
			$.string
		),
		number: $ => choice(
			$.integer, 
			$.float,
			$.hexinteger
		),
		integer: $=>/\d+/,
		hexinteger: $=> /0x(\\d|[a-f]|[A-F])+/,
		float: $=> seq($.integer, ".", $.integer),
		symbol: $ => choice(
			seq('\\', $.identifier),
			seq("'", $.identifier, "'"),
		),
		char: $ => /\$./,
		string: $ => seq("\"", optional($.identifier), "\""),

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

		local_var: $ => seq('var', $.identifier),
		classvar: $ => seq('classvar', $.identifier),
		environment_var: $ => seq('~', $.identifier),

		variable_definition: $ => seq($.variable, "=", $._value),

		identifier: $ => /[a-zA-Zα-ωΑ-Ωµ_][a-zA-Zα-ωΑ-Ωµ\d_]*/,

		///////////////
		//  Classes  //
		///////////////

		return_statement: $ => seq("^", choice($.variable, $.literals)),

		////////////////
		//  Comments  //
		////////////////

		comment: $ => choice(
			$.line_comment,
			$.block_comment
		),

		line_comment: $ => token(seq( '//', /.*/)),

		block_comment: $ => token(seq(
			'/*',
			/[^*]*\*+([^/*][^*]*\*+)*/,
			'/'
		)),

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
			];

			return choice(...table.map(([precedence, operator]) => prec.left(precedence, seq(
				field('left', $._value),
				field('operator', operator),
				field('right', $._value),
			))));
		},


	}
});

