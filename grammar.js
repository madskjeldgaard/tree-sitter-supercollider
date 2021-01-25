// Good information here:
//
// The SCIDE lexer file:
// https://github.com/supercollider/supercollider/blob/608bb981162c2c26f0a32c09d82557b29774a32e/editors/sc-ide/core/sc_lexer.cpp

module.exports = grammar({
	name: 'supercollider',

	 // The name of a token that will match keywords for the purpose of the keyword extraction optimization.
	word: $ => $.identifier,
	conflicts: $ => [
		[$.unnamed_argument, $.named_argument]
	],


	rules: {

		source_file: $ => repeat($._expression),

		_expression: $ => seq($._expression_statement, ";"),

		_expression_statement: $ => choice(
			$.function_block,
			$.function_definition,
			$.function_call,
			$.variable_definition,
			$.return_statement
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
			optional("value"), 
			"(", 
			$.parameter_call_list, 
			")"
		),

		// Definition of parameters in function
		parameter_list: $ => choice(
			seq('arg', sepBy(',', $.argument), ';'),
			seq('|', sepBy(',', $.argument), '|')
		),

		// When supplying arguments to a function call
		parameter_call_list: $ => seq($.argument, optional(sepBy(',', $.argument))),
		argument: $ => choice(
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
		),
		number: $ => choice($.integer, $.float),
		integer: $=>/\d+/,
		hexinteger: $=> /0x(\\d|[a-f]|[A-F])+/,
		float: $=> seq($.integer, ".", $.integer),
		symbol: $ => choice(
			seq('\\', $.identifier),
			seq("'", $.identifier, "'"),
		),
		char: $ => /\$./,

		//////////////
		//  Blocks  //
		//////////////
		
		block: $ => choice(
			$._code_block,
			// $._function_block
		),

		function_block: $ => seq(
			'{',
			optional($.parameter_list),
			repeat($._expression),
			'}'
		),

		_code_block: $ => seq(
			'(',
			repeat($._expression),
			')'
		),

		
		_definition: $=> seq(
			$.variable,
			'='
		),

		variable: $ => choice(
			$.environment_var,
			$.local_var
		),

		variable_definition: $ => seq($.variable, "=", $._value),

		local_var: $ => seq('var', $.identifier),
		environment_var: $ => seq('~', $.identifier),

		identifier: $ => /[a-zA-Zα-ωΑ-Ωµ_][a-zA-Zα-ωΑ-Ωµ\d_]*/,

		return_statement: $ => seq("^", choice($.variable, $.literals)),
	}
});

function commaSeq(rule) {
	return seq(rule, repeat(seq(',', rule)))
}

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}
