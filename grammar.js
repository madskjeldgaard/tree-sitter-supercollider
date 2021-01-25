// Good information here:
//
// The SCIDE lexer file:
// https://github.com/supercollider/supercollider/blob/608bb981162c2c26f0a32c09d82557b29774a32e/editors/sc-ide/core/sc_lexer.cpp
//
//
// TODO:
// - Unary
// - Binary
// - Block comments

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}
module.exports = grammar({
	name: 'supercollider',

	extras: $ => [/\s/, $.line_comment],

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
			// $.return_statement
		),

		_value: $ => choice(
			$.literals,
			$.variable,
			$.function_block
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
			$.local_var
		),

		variable_definition: $ => seq($.variable, "=", $._value),

		local_var: $ => seq('var', $.identifier),
		environment_var: $ => seq('~', $.identifier),

		identifier: $ => /[a-zA-Zα-ωΑ-Ωµ_][a-zA-Zα-ωΑ-Ωµ\d_]*/,

		return_statement: $ => seq("^", choice($.variable, $.literals)),

		////////////////
		//  Comments  //
		////////////////

		comment: $ => choice(
			$.line_comment,
			// $.block_comment
		),

		line_comment: $ => token(seq( '//', /.*/)),

		// block_comment: $ => seq(),

	}
});

