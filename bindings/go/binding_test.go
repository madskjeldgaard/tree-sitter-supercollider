package tree_sitter_tree_sitter_supercollider_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_tree_sitter_supercollider "github.com/tree-sitter/tree-sitter-tree_sitter_supercollider/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_tree_sitter_supercollider.Language())
	if language == nil {
		t.Errorf("Error loading TreeSitterSupercollider grammar")
	}
}
