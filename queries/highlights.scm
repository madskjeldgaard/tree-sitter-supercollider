; highlights.scm
; See this for full list: https://github.com/nvim-treesitter/nvim-treesitter/blob/master/CONTRIBUTING.md

; Comments
(line_comment) @comment @spell
(block_comment) @comment @spell

; Argument definition
(argument 
  name: (identifier) @variable.parameter)

; Variable argument
[ "..." ] @variable.parameter

; Variables
(local_var 
  name: (identifier) @variable)

(environment_var 
  name:(identifier) @variable.builtin)

(builtin_var) @constant.builtin

; Functions
(named_argument
  name: (identifier) @variable.parameter)

; Methods
(method_call
  name: (method_name) @function.method.call)

(method_name) @function.method.call

; Collections
(associative_item
  (identifier) @property)

; Classes
(class) @type
(parent_class) @type

(instance_method_name) @function.method
(class_method_name) @function.method

; Literals
(bool) @boolean
(number) @number
(float) @number.float
(string) @string
(escape_sequence) @string.escape
(symbol) @string.special.symbol

; Conditionals
[
  "if"
  "while"
  "case"
  "switch"
  "?"
  "!?"
  "??"
] @keyword.conditional

; Iterations
[ "for" "forBy" ] @keyword.repeat

; Duplication operator
[ "!" ] @keyword.repeat

; Arithmetic series operator
[ ".." ] @operator

; Operators
[
  "&&"
  "||"
  "&"
  "|"
  "^"
  "=="
  "!="
  "<"
  "<="
  ">"
  ">="
  "<<"
  ">>"
  "+"
  "-"
  "*"
  "/"
  "%"
  "="
  "@"
  "|@|"
  "@@"
  "@|@"
  "++"
  "+/+"
] @operator

; Keywords
[
  "arg"
  "classvar"
  "const"
  ; "super"
  ; "this"
  "var"
] @keyword

; Brackets
[ "(" ")" "[" "]" "{" "}" "|" ] @punctuation.bracket

; Delimeters
[ ";" "." "," ] @punctuation.delimiter
