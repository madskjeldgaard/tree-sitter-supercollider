# [WIP] tree-sitter-supercollider
[SuperCollider](https://supercollider.github.io/) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

Note: This is massively a work in progress!

## TODO:
- Conditionals
- Things in paranthesis may be treated as an expression
- Allow statements with no semicolon at the end
- Chained methods
- Syntax highlighting
- A million other things

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

## Resources

- [The javascript tree-sitter grammar is a good reference](https://github.com/tree-sitter/tree-sitter-javascript)
- [A nice talk about what tree-sitter is and what it does](https://www.youtube.com/watch?v=Jes3bD6P0To)
- [Symbolic notation in SuperCollider](http://doc.sccode.org/Overviews/SymbolicNotations.html)
- [Creating parsers](https://tree-sitter.github.io/tree-sitter/creating-parsers)
- [the SCIDE lexer](https://github.com/supercollider/supercollider/blob/608bb981162c2c26f0a32c09d82557b29774a32e/editors/sc-ide/core/sc_lexer.cpp) 

