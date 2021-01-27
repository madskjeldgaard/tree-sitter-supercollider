# [WIP] tree-sitter-supercollider
[SuperCollider](https://supercollider.github.io/) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

Note: This is massively a work in progress!

## TODO:

### Parsing
- Class method calls as object (and class names)
- implicit Class.new ( Class() ) in parameter lists
- Syntax shortcuts: http://doc.sccode.org/Reference/Syntax-Shortcuts.html
	- instance var setter method
	- trailing-block arguments
	- partial application
	- selectors for binary operators
	- list comprehensions
	- a ref \`
- Collections
	- (from(,step)..to) arithmetic series
	- Array indices
		- Assign to array indices ala x[2] = "yo";
	- index slicing in arrays / subranges
- Classes
	- Class return statements
- Single expressions with no semicolon in a file (this even legal sc?)

### Syntax highlighting
- All Syntax highlighting :)

## Try it out

See node tree parsing in action
```bash
tree-sitter generate && tree-sitter parse example-file.scd
```

See highlighting in action
```bash
tree-sitter generate && tree-sitter highlight example-file.scd
```

## Testing

Ideally, all rules in the grammar should be accompanied by at least one unit test. 

These are found in `test/corpus` and named `<subject>.txt`. See [this part of the tree-sitter docs on how to create tests](https://tree-sitter.github.io/tree-sitter/creating-parsers#command-test).

Run them like this:
```bash
tree-sitter generate && tree-sitter test
```

## Parsing examples

This call to a UGen
```
SinOsc.ar(freq: 441, mul:0.25);
```
Is parsed as the following node tree:

```
(source_file 
  (function_call 
    (class )
    (class_method_call 
      (class_method_name ))
    (class_method_call 
      (parameter_call_list 
        (argument_calls 
          (named_argument 
            (identifier )
            (literal 
              (number 
                (integer )))))
        (argument_calls 
          (named_argument 
            (identifier )
            (literal 
              (number 
                (float )))))))))
```

This simply function definition 
```
f = {arg oneArg=10, anotherArg=2; oneArg+anotherArg; };
```
is parsed as
```
(source_file 
  (function_definition 
    (variable 
      (environment_var ))
    (function_block 
      (parameter_list 
        (argument 
          (identifier )
          (literal 
            (number 
              (integer ))))
        (argument 
          (identifier )
          (literal 
            (number 
              (integer )))))
      (binary_expression 
        left: (variable 
          (local_var 
            (identifier )))
        right: (variable 
          (local_var 
            (identifier )))))))
```

## Resources

- [The javascript tree-sitter grammar is a good reference](https://github.com/tree-sitter/tree-sitter-javascript)
- [A nice talk about what tree-sitter is and what it does](https://www.youtube.com/watch?v=Jes3bD6P0To)
- [Symbolic notation in SuperCollider](http://doc.sccode.org/Overviews/SymbolicNotations.html)
- [Syntax shortcuts in SuperCollider](http://doc.sccode.org/Reference/Syntax-Shortcuts.html)
- [Creating parsers](https://tree-sitter.github.io/tree-sitter/creating-parsers)
- [the SCIDE lexer](https://github.com/supercollider/supercollider/blob/608bb981162c2c26f0a32c09d82557b29774a32e/editors/sc-ide/core/sc_lexer.cpp) 

