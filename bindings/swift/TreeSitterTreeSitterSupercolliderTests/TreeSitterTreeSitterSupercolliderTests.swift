import XCTest
import SwiftTreeSitter
import TreeSitterTreeSitterSupercollider

final class TreeSitterTreeSitterSupercolliderTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_tree_sitter_supercollider())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading TreeSitterSupercollider grammar")
    }
}
