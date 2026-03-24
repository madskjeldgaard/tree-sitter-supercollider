[![Tree-sitter Test](https://github.com/madskjeldgaard/tree-sitter-supercollider/actions/workflows/ci.yml/badge.svg)](https://github.com/madskjeldgaard/tree-sitter-supercollider/actions/workflows/ci.yml)

<!-- START doctoc generated TOC please keep comment here to allow auto update -->
<!-- DON'T EDIT THIS SECTION, INSTEAD RE-RUN doctoc TO UPDATE -->
**Table of Contents**  *generated with [DocToc](https://github.com/thlorenz/doctoc)*

- [tree-sitter-supercollider](#tree-sitter-supercollider)
  - [Contributing](#contributing)
    - [Overview](#overview)
    - [Resources](#resources)
      - [Tree-sitter resources:](#tree-sitter-resources)
      - [SuperCollider language resources:](#supercollider-language-resources)
    - [Testing](#testing)
  - [Status: Experimental but almost fully implemented](#status-experimental-but-almost-fully-implemented)
  - [Features](#features)
  - [Showcase:](#showcase)
  - [Try it out](#try-it-out)
  - [Trying with nvim-treesitter](#trying-with-nvim-treesitter)
    - [Install locally in nvim](#install-locally-in-nvim)

<!-- END doctoc generated TOC please keep comment here to allow auto update -->
![live parsing of code](/assets/playground2.gif)
_SuperCollider code (on the right) being parsed live by tree-sitter (on the left) using the nvim-playground plugin. Notice how quickly and incrementally it parses the code and includes the precise location of language features of the code_

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

**Get table of contents for all definitions using [nvim-treesitter-refactor](https://github.com/nvim-treesitter/nvim-treesitter-refactor) and navigate the document using those:**

![definitions](/assets/definitions.gif)

**Rename all instances of a variable using [nvim-treesitter-refactor](https://github.com/nvim-treesitter/nvim-treesitter-refactor):**

![smart rename](/assets/smartrename.gif)

**Using [nvim-treesitter's playground to get a live view of the parser tree while writing code](https://github.com/nvim-treesitter/playground):**

![playground](/assets/playground.gif)

## Try it out

See node tree parsing in action
```bash
tree-sitter generate && tree-sitter parse example-file.scd
```
See highlighting in action
```bash
tree-sitter generate && tree-sitter highlight example-file.scd
```

## Trying with nvim-treesitter

Install [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter) to use this grammar with NeoVim and follow their instructions for [installing grammars](https://github.com/nvim-treesitter/nvim-treesitter#setup). Installing the latest release of `tree-sitter-supercollider` is usually done by adding `supercollider` to the list of languages installed by `nvim-treesitter` in your nvim config:

```lua
require('nvim-treesitter').install { 'supercollider' }
```

or by running this command in nvim:

```vim
:TSInstall supercollider
```

### Install locally in nvim
For development purposes it may be helpful to install your supercollider grammar locally.
With nvim-treesitter, this requires creating a `User TSUpdate` autocommand in your nvim config. For installation from a local folder:

```lua
vim.api.nvim_create_autocmd('User', { pattern = 'TSUpdate',
callback = function()
    require('nvim-treesitter.parsers').supercollider = {
        install_info = {
            path = "~/code/tree-sitter-supercollider",
            queries = 'queries'
        };
    }
end})
```

Or to install the `develop` branch:

```lua
vim.api.nvim_create_autocmd('User', { pattern = 'TSUpdate',
callback = function()
    require('nvim-treesitter.parsers').supercollider = {
        install_info = {
            url = 'https://github.com/madskjeldgaard/tree-sitter-supercollider',
            branch = 'develop',
            queries = 'queries'
        };
    }
end})
```

For more information, see nvim-treesitter [README: adding custom languages](https://github.com/nvim-treesitter/nvim-treesitter#adding-custom-languages).

## Contributing
Help WANTED. This project is too big to be handled by one person, and so any and all help would be appreciated.

If you want to help out, you can either identify and open up issues (example: Find some language feature that has not been defined in the grammar yet or some code that makes tree-sitter fail), resolve existing ones or write tests.

Pull requests are especially appreciated.

### Overview
The source code is divided up like this:

- **grammar.js** - This is where the syntax and grammar is defined.
- **test/corpus/** - All unit tests sit here as .txt files
- **queries/*.scm** - Syntax highlighting, code folding and indentation
- **src/scanner.c** - A C file defining external scanners for more complex matching tasks

New features and fixes are merged on branch `develop` first. Maintainance workflow for new releases would be:
- update version: run `tree-sitter version --bump`
- merge `develop` to `main`
- add tag for the new version
- file pull requests to update [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter), [nvim-treesitter-textobjects](https://github.com/nvim-treesitter/nvim-treesitter-textobjects) and [nvim-treesitter-context](https://github.com/nvim-treesitter/nvim-treesitter-context) if necessary.

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


