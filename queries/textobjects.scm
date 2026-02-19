; conditional:
; needs two queries because of true.if(true, false) vs if(true) { true } { false }
(function_call
  name: (_) @_name
  (#eq? @_name "if")
  receiver: (_) @conditional.condition
  arguments: (parameter_call_list
    (_) @conditional.inner
  )?) @conditional.outer

(function_call
  receiver: (_) @conditional.condition
  name: (_) @_name
  (#eq? @_name "if")
  arguments: (parameter_call_list
    (_) @conditional.inner
  )?) @conditional.outer

; loops
(function_call
  name: (identifier) @_fname
  (#eq? @_fname "while")
  arguments: (parameter_call_list
    (_) @loop.inner)?) @loop.outer

(function_call
  name: (identifier) @_fname
  (#eq? @_fname "for")
  arguments: (parameter_call_list
    (_) @loop.inner .)?) @loop.outer

(function_call
  name: (identifier) @_fname
  (#eq? @_fname "forBy")
  arguments: (parameter_call_list
    (_) @loop.inner .)?) @loop.outer


(code_block
  (_)* @block.inner) @block.outer

(class_def
  (class_def_body) @class.inner) @class.outer

(line_comment) @comment.outer

(block_comment) @comment.outer

(function_block
  (_) @function.inner) @function.outer

;parameters
((parameter_call_list
  "," @_start
  .
  (_) @parameter.inner)
  (#make-range! "parameter.outer" @_start @parameter.inner))

((parameter_call_list
  .
  (_) @parameter.inner
  .
  ","? @_end)
  (#make-range! "parameter.outer" @parameter.inner @_end))

(((symbol)?
  (identifier)
  "," @_start
  .
  ((method_name)
    (function_call
      (_))) @parameter.inner)
  (#make-range! "parameter.outer" @_start @parameter.inner))

(((symbol)?
  (identifier)
  .
  ((method_name)
    (function_call
      (_))) @parameter.inner
  .
  ","? @_end)
  (#make-range! "parameter.outer" @parameter.inner @_end))

