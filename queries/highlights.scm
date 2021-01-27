; highlights.scm
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
(argument name: (identifier) @attribute) 

; Variables
(local_var name: (identifier) @variable.parameter)
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
        name: (method_name) @function.method)
(class_method_call 
        name: (class_method_name) @constructor)

; Classes
(class) @keyword

; Literals
(number) @number
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
(control_structure) @keyword

(escape_sequence) @escape

; Builtins
; ((identifier) @variable.builtin
;  (#match? @variable.builtin "^(inf|nil|thisFunction|thisFunctionDef|thisMethod|thisProcess|thisThread|currentEnvironment|topEnvironment)$")
;  (#is-not? local))
