; =========================
; Comments
; =========================
(line_comment) @comment @spell
(block_comment) @comment @spell

; =========================
; Definitions / Types
; =========================
(class (name: (_) @type))
(parent_class) @type
(instance_method_name) @method
(class_method_name)    @method

; =========================
; Calls
; =========================
; Bare function/class calls: foo(...), SinOsc(...)
(function_call (method_name) @function.call)
(function_call (class)       @constructor)

; Instance method calls: obj.foo(...)
(method_call name: (method_name) @method.call)

; Keyword messages: coll collect: {...}
(keyword_message
  (selector: (keyword_selector) @method.call))

; =========================
; Parameters / Arguments
; =========================
(parameter_list (argument (identifier) @variable.parameter))
(parameter_list (argument (variable_argument (identifier) @variable.parameter)))
(named_argument (name: (identifier) @variable.parameter))
(named_argument (name: (symbol)     @variable.parameter))

; =========================
; Variables & Bindings
; =========================
(local_var       (identifier) @variable)
(instance_var    (identifier) @variable)
(classvar        (identifier) @variable)
(const           (identifier) @constant)
(builtin_var)                      @constant.builtin
(environment_var (identifier)      @variable.builtin)

; =========================
; Literals
; (use leaf kinds to avoid double-highlighting)
; =========================
(integer)      @number
(hexinteger)   @number
(float)        @number.float
(exponential)  @number.float
(pi_literal)   @number.float
(accidental)   @number
(string)       @string
(escape_sequence) @string.escape
(symbol)       @string.special.symbol
(char)         @character
(bool)         @boolean

; =========================
; Operators / Pairs
; =========================
(binary_expression (operator) @operator)
(unary_expression  (operator) @operator)

; nil-ops: highlight only the operator tokens
(nil_conditional "?") @keyword.conditional
(nil_guard      "!?") @keyword.conditional
(nil_default    "??") @keyword.conditional

; association pairs
(association "->") @operator

; duplication (x ! n)
(duplicated_statement "!" @operator)

; dotdot range
[".."] @operator

; adverb after binop: .foo / .3 / .(expr)
;;(adverb "." @operator)

; =========================
; Collections / Properties
; =========================
(associative_item (identifier) @property)
(associative_item (symbol)     @property)

; =========================
; Control keywords (token-only)
; =========================
["if" "while" "case" "switch"] @keyword.conditional
["for" "forBy"]                @keyword.repeat

; return ^
(return_statement "^") @keyword

; =========================
; List comprehensions / Generators
; =========================
(list_comp_open)  @punctuation.bracket   ; '{:'
(generator "<-")  @operator
(termination ":while") @keyword.conditional
(side_effect "::")     @operator

; =========================
; Punctuation
; =========================
[ "(" ")" "[" "]" "{" "}" "|" ] @punctuation.bracket
[ ";" "," ":" "." ]             @punctuation.delimiter
