# [WIP] tree-sitter-supercollider
[SuperCollider](https://supercollider.github.io/) grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter)

Note: This is massively a work in progress!

## TODO:
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

A suite of automatic tests are defined in the the test dir. Run them like this:
```bash
tree-sitter generate && tree-sitter test
```

## Resources

- [A nice talk about what tree-sitter is and what it does](https://www.youtube.com/watch?v=Jes3bD6P0To)
- [Symbolic notation in SuperCollider](http://doc.sccode.org/Overviews/SymbolicNotations.html)
- [Creating parsers](https://tree-sitter.github.io/tree-sitter/creating-parsers)
- [the SCIDE lexer](https://github.com/supercollider/supercollider/blob/608bb981162c2c26f0a32c09d82557b29774a32e/editors/sc-ide/core/sc_lexer.cpp) 

