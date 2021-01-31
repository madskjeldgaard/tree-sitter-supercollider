; highlights.scm
; See how nvim treesitter uses tags: https://github.com/nvim-treesitter/nvim-treesitter/blob/7edf1d1c2bfb4bdc53319494697ca2947920b69e/lua/nvim-treesitter/highlight.lua
; Otherwise,
;Available tags:
;@constant
;@function
;@function.method
;@variable
;@variable.parameter
;@variable.builtin
;@property
;@punctuation.bracket
;@punctuation.delimiter
;@punctuation.special
;@keyword
;@string
;@string.special
;@embedded
;@constructor
;@attribute
;@escape

; comments
(comment) @comment

; Argument definition

; Fixme: Should be attribute but nvim-treesitter doesn't supprt it at the moment
(argument name: (identifier) @parameter) 
;(argument name: (identifier) @parameter)  

; Variables
(local_var name: (identifier) @variable)
(environment_var name:(identifier) @variable.builtin)
(builtin_var) @constant

; (variable) @variable

; Functions
(function_definition
  name: (variable) @function)

; For function calls
(named_argument 
  name: (identifier) @property) 

; Methods
(instance_method_call 
        name: (method_name) @function)
(class_method_call 
        name: (class_method_name) @method)

; Classes
(class) @keyword

; Literals
(number) @number
(pi_statement) @constant.builtin
(float) @float

(string) @string
(symbol) @string.special

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
] @operator


; Keywords
[
"arg"
"classvar"
; "const"
; "super"
; "this"
"var"
] @type

; Brackets
[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
  "|"
] @punctuation.bracket

; Delimeters
[
  ";"
  "."
  ","
] @punctuation.delimiter

; control structure
(control_structure) @conditional

(escape_sequence) @escape

; SinOsc.ar()!2
;(duplicated_statement) @repeat

; Builtins
; ((identifier) @variable.builtin
;  (#match? @variable.builtin "^(inf|nil|thisFunction|thisFunctionDef|thisMethod|thisProcess|thisThread|currentEnvironment|topEnvironment)$")
;  (#is-not? local))
