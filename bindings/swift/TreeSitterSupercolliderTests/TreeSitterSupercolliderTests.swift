import XCTest
import SwiftTreeSitter
import TreeSitterSupercollider

final class TreeSitterSupercolliderTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_supercollider())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading SuperCollider grammar")
    }
}
