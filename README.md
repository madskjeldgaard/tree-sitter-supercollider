# tree-sitter-supercollider
[SuperCollider](https://supercollider.github.io/) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).

SuperCollider is a programming language for sound. Tree-sitter is a really smart code parser.

This project defines a grammar (the "rules" of the language) for SuperCollider in a way that allows tree-sitter to do fast and very precise analysis of the code, while it is being typed. 

This allows a very high level of precision in syntax highlighting (see below) and error detection making it faster and easier to write code. 

## Status: Experimental
Note: This grammar is experimental

## Features

![screenshot of grammar in action](/assets/screen1.png)

- Scoped syntax highlighting (tree-sitter can tell the difference between local variables, environment variables and arguments inside of code blocks / functions)
- Very precise error messages (if a node fails, tree-sitter can tell pretty easily where it failed and why - for example if you are missing a semi colon in the middle of a function)
- Editor agnostic - tree-sitter grammars can be implemented in any editor via [tree-sitter's language bindings](https://tree-sitter.github.io/tree-sitter/using-parsers)

## TODO:

This grammar is still a work in progress. Here are some of the things still missing:

- implicit Class.new ( Class() ) in parameter lists
- unary operators (-1, -100)
- Allow both Array[1,2,3] and Array.new() at the same time
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

### Testing

Ideally, all rules in the grammar should be accompanied by at least one unit test. 

These are found in `test/corpus` and named `<subject>.txt`. See [this part of the tree-sitter docs on how to create tests](https://tree-sitter.github.io/tree-sitter/creating-parsers#command-test).

Run them like this:
```bash
tree-sitter generate && tree-sitter test
```

## Resources

- [The javascript tree-sitter grammar is a good reference](https://github.com/tree-sitter/tree-sitter-javascript)
- [A nice talk about what tree-sitter is and what it does](https://www.youtube.com/watch?v=Jes3bD6P0To)
- [Symbolic notation in SuperCollider](http://doc.sccode.org/Overviews/SymbolicNotations.html)
- [Syntax shortcuts in SuperCollider](http://doc.sccode.org/Reference/Syntax-Shortcuts.html)
- [Creating parsers](https://tree-sitter.github.io/tree-sitter/creating-parsers)
- [the SCIDE lexer](https://github.com/supercollider/supercollider/blob/608bb981162c2c26f0a32c09d82557b29774a32e/editors/sc-ide/core/sc_lexer.cpp) 

