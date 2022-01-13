[
  (_object)
  (binary_expression)
  (code_block)
  (function_block)
  (function_call)
  (collection)
  (indexed_collection)
  (parameter_call_list)
  (method_call)
  (class_def)
  (control_structure)
  (return_statement)
] @indent

[
  (parameter_call_list (argument))
  "("
  ")"
  "{"
  "}"
  "["
  "]"
] @branch

[
  (comment)
  (line_comment)
] @ignore
