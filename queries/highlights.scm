; =========================
; Comments
; =========================
(line_comment) @comment @spell
(block_comment) @comment @spell

; =========================
; Definitions / Types
; =========================
(class)        @type ; we can capture the whole node here
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
  selector: (keyword_selector) @method.call) ; fix typo

; =========================
; Parameters / Arguments
; =========================
(parameter_list "arg" @keyword) ; capture the 'arg' keyword
(parameter_list (argument (identifier) @variable.parameter)) ; variable_argument is aliased to argument in grammar.js
(named_argument name: (identifier) @variable.parameter) ; fix typo
(named_argument name: (symbol)     @variable.parameter) ; fix typo

; =========================
; Variables & Bindings
; =========================
[ "var" "classvar" "const"] @keyword ; capture the variable keywords
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
; operator is a field with unamed nodes so we need to capture them explicitly
(binary_expression 
  operator: [
    "||" "&&" "|" "^" "&" "==" "!=" "<" "<=" ">" ">="
    "<<" ">>" "+" "-" "++" "+/+" "*" "/" "%" "**"
  ] @operator)
(unary_expression  operator: ["+" "-" ":"] @operator)
["="] @operator

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

; is this used ?
; adverb after binop: .foo / .3 / .(expr)
; (adverb "." @operator)

; =========================
; Collections / Properties
; =========================
(associative_item (identifier) @property)
(associative_item ":"          @property) ; no 'symbol' node in associative_item

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
