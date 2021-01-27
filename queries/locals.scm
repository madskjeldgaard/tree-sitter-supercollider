; The local variables query is different from the highlights query in that, while the highlights query uses arbitrary capture names which can then be mapped to colors, the locals variable query uses a fixed set of capture names, each of which has a special meaning.
; The capture names are as follows:
; @local.scope - indicates that a syntax node introduces a new local scope.
; @local.definition - indicates that a syntax node contains the name of a definition within the current local scope.
; @local.reference - indicates that a syntax node contains the name which may refer to an earlier definition within some enclosing scope.


; Scopes
[
 (function_call)
 (code_block)
 (function_block)
] @local.scope

; Definitions
(argument name: (identifier) @local.definition) 

(variable_definition
  name: (variable (local_var (identifier))) 
  @local.definition
)

(identifier) @local.reference
