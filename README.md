# tree-sitter-supercollider
[SuperCollider](https://supercollider.github.io/) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

SuperCollider is a programming language for sound. Tree-sitter is a really smart code parser.

This project defines a grammar (the "rules" of the language) for SuperCollider in a way that allows tree-sitter to do fast and very precise analysis of the code, while it is being typed. 

Among other things, this allows for a very high level of precision in syntax highlighting (see below) and analyzing/traversing source code with equal precision.

## Status: Experimental
Note: This grammar is experimental. Most of sclang is now implemented 

## Features

![screenshot of grammar in action](/assets/screen1.png)

![screenshot of grammar in action2](/assets/benjolin.png)


- Scoped syntax highlighting (tree-sitter can tell the difference between local variables, environment variables and arguments inside of code blocks / functions)
- Very precise error messages (if a node fails, tree-sitter can tell pretty easily where it failed and why - for example if you are missing a semi colon in the middle of a function)
- Editor agnostic - tree-sitter grammars can be implemented in any editor via [tree-sitter's language bindings](https://tree-sitter.github.io/tree-sitter/using-parsers)

## TODO:

Most of the language has been implemented in the grammar, except for some of the more esoteric parts of the language:

- Empty symbols as names eg `SynthDef(\, {})`
- Syntax shortcuts / esoteric stuff: http://doc.sccode.org/Reference/Syntax-Shortcuts.html
	- selector (method name) as a binary operator
	- trailing-block arguments
	- selectors for binary operators
	- list comprehensions
	- Ref using the \` shorthand
	- be able to parse `(:1..) select: _.isPrime nextN: 10;` properly
	- multiple assignment
	- special partial operator situation: (a: _);
- Classes
	- Class return statements - should these be demarcated somehow?
- Make function calls _objects
- Single expressions with no semicolon in a file (this even legal sc?)
- implicit Class.new ( Class() ) in parameter lists

## Try it out

See node tree parsing in action
```bash
tree-sitter generate && tree-sitter parse example-file.scd
```
See highlighting in action
```bash
tree-sitter generate && tree-sitter highlight example-file.scd
```

## Parsing examples

Here are some examples of code parsing using this grammar where you can see the precision of tree-sitter in action.

This call to a UGen
```
(
SinOsc.ar(freq: 441, mul:0.25);
)
```
Is parsed as the following node tree:

```
(source_file [0, 0] - [3, 0]
  (code_block [0, 0] - [2, 1]
    (function_call [1, 0] - [1, 30]
      (class [1, 0] - [1, 6])
      (class_method_call [1, 6] - [1, 9]
        name: (class_method_name [1, 7] - [1, 9]))
      (class_method_call [1, 9] - [1, 30]
        (parameter_call_list [1, 10] - [1, 29]
          (argument_calls [1, 10] - [1, 19]
            (named_argument [1, 10] - [1, 19]
              name: (identifier [1, 10] - [1, 14])
              name: (literal [1, 16] - [1, 19]
                (number [1, 16] - [1, 19]
                  (integer [1, 16] - [1, 19])))))
          (argument_calls [1, 21] - [1, 29]
            (named_argument [1, 21] - [1, 29]
              name: (identifier [1, 21] - [1, 24])
              name: (literal [1, 25] - [1, 29]
                (number [1, 25] - [1, 29]
                  (float [1, 25] - [1, 29]))))))))))
```
This simple function definition 
```
(
f = {
	arg oneArg=10, anotherArg=2; 
	oneArg+anotherArg 
};
)
```
is parsed as
```
(source_file [0, 0] - [6, 0]
  (code_block [0, 0] - [5, 1]
    (function_definition [1, 0] - [4, 1]
      name: (variable [1, 0] - [1, 1]
        (environment_var [1, 0] - [1, 1]
          name: (identifier [1, 0] - [1, 1])))
      value: (function_block [1, 4] - [4, 1]
        (parameter_list [2, 1] - [2, 29]
          (argument [2, 5] - [2, 14]
            name: (identifier [2, 5] - [2, 11])
            value: (literal [2, 12] - [2, 14]
              (number [2, 12] - [2, 14]
                (integer [2, 12] - [2, 14]))))
          (argument [2, 16] - [2, 28]
            name: (identifier [2, 16] - [2, 26])
            value: (literal [2, 27] - [2, 28]
              (number [2, 27] - [2, 28]
                (integer [2, 27] - [2, 28])))))
        (binary_expression [3, 1] - [3, 18]
          left: (variable [3, 1] - [3, 7]
            (local_var [3, 1] - [3, 7]
              name: (identifier [3, 1] - [3, 7])))
          right: (variable [3, 8] - [3, 18]
            (local_var [3, 8] - [3, 18]
              name: (identifier [3, 8] - [3, 18]))))))))
```

## Development
I welcome everyone to commit pull requests to fix up things, add features or help out.
If you just experience an issue and don't feel like making a pull request, feel free to open an issue and we will hopefully solve it ASAP.

### Overview
The source code is divided up like this:

- **grammar.js** - This is where the syntax and grammar is defined.
- **test/corpus/** - All unit tests sit here as .txt files
- **queries/*.scm** - Syntax highlighting, code folding and indentation
- **src/scanner.c** - A C file defining external scanners for more complex matching tasks

### Resources
Here are some helpful resources for developers who want to contribute:

#### Tree-sitter resources:
- [Creating parsers](https://tree-sitter.github.io/tree-sitter/creating-parsers) - The official tree-sitter documentation for creating parsers
- [The javascript tree-sitter grammar is a good reference](https://github.com/tree-sitter/tree-sitter-javascript)
- [A nice talk about what tree-sitter is and what it does](https://www.youtube.com/watch?v=Jes3bD6P0To)

#### SuperCollider language resources:
There is no official spec for he SuperCollider language (hehe), but these links are somewhat helpful:
- [Literals in SuperCollider](http://doc.sccode.org/Reference/Literals.html)
- [Symbolic notation in SuperCollider](http://doc.sccode.org/Overviews/SymbolicNotations.html)
- [Syntax shortcuts in SuperCollider](http://doc.sccode.org/Reference/Syntax-Shortcuts.html)
- [the SCIDE lexer](https://github.com/supercollider/supercollider/blob/608bb981162c2c26f0a32c09d82557b29774a32e/editors/sc-ide/core/sc_lexer.cpp) 

### Testing

Ideally, all rules in the grammar should be accompanied by at least one unit test. 

These are found in `test/corpus` and named `<subject>.txt`. See [this part of the tree-sitter docs on how to create tests](https://tree-sitter.github.io/tree-sitter/creating-parsers#command-test).

Run them like this:
```bash
tree-sitter generate && tree-sitter test
```

Before pushing a pull request, make sure that it passes all tests.

## Trying with nvim-treesitter

Install [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter) to use this grammar with NeoVim and follow their instructions for installing grammars.

### Install locally in nvim
For development purposes it may be helpful to install your supercollider grammar locally:

Add this to your nvim config (change path in `url` to that of the tree sitter supercollider repo on your system if it you've downloaded it somewhere):

```lua
-- tree-sitter-supercollider
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
parser_config.supercollider = {
	install_info = {
		-- url = "~/code/tree-sitter-supercollider",
		url = "https://github.com/madskjeldgaard/tree-sitter-supercollider",
		files = {"src/parser.c"},
		maintainer = "@madskjeldgaard"
	},
	filetype = "supercollider", -- if filetype does not agrees with parser name
}
```


