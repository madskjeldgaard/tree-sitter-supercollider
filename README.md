# tree-sitter-supercollider
[SuperCollider](https://supercollider.github.io/) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

SuperCollider is a programming language for sound. Tree-sitter is a really smart code parser.

This project defines a grammar (the "rules" of the language) for SuperCollider in a way that allows tree-sitter to do fast and very precise analysis of the code, while it is being typed. 

Among other things, this allows for a very high level of precision in syntax highlighting (see below) and analyzing/traversing source code with equal precision.

## Status: Experimental but almost fully implemented
Most of sclang is now implemented, except for a few of the more esoteric things (see issues/todolist) and generally works well. Yet, it is still early days and so expect bugs and changes to happen.

## Features



- Scoped syntax highlighting (tree-sitter can tell the difference between local variables, environment variables and arguments inside of code blocks / functions)
- Very precise error messages (if a node fails, tree-sitter can tell pretty easily where it failed and why - for example if you are missing a semi colon in the middle of a function)
- Editor agnostic - tree-sitter grammars can be implemented in any editor via [tree-sitter's language bindings](https://tree-sitter.github.io/tree-sitter/using-parsers)

## Showcase:

**Syntax highlighting**

Syntax highlighting a supercollider document in the terminal using the command `tree-sitter highlight <somedocument>.scd`:

![screenshot of grammar in action2](/assets/benjolin.png)

**Get table of contents for all definitions using [nvim-treesitter-refactor](github.com/nvim-treesitter/nvim-treesitter-refactor) and navigate the document using those:**

![definitions](/assets/definitions.gif)

**Rename all instances of a variable using [nvim-treesitter-refactor](github.com/nvim-treesitter/nvim-treesitter-refactor):**

![smart rename](/assets/smartrename.gif)

**Using [nvim-treesitter's playground to get a live view of the parser tree while writing code](https://github.com/nvim-treesitter/playground):**

![playground](/assets/playground.gif)

## TODO:

Most of the language has been implemented in the grammar, except for some of the more esoteric parts of the language:


- Single expressions with no semicolon in a file 
- Syntax shortcuts / esoteric stuff: http://doc.sccode.org/Reference/Syntax-Shortcuts.html
	- selector (method name) as a binary operator
	- trailing-block arguments
	- selectors for binary operators
	- list comprehensions
	- Ref using the \` shorthand
	- be able to parse `(:1..) select: _.isPrime nextN: 10;` properly
	- special partial operator situation: (a: _);

## Try it out

See node tree parsing in action
```bash
tree-sitter generate && tree-sitter parse example-file.scd
```
See highlighting in action
```bash
tree-sitter generate && tree-sitter highlight example-file.scd
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


