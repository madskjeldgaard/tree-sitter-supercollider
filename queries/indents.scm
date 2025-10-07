[
  (function_block)
  (code_block)
  (group)
  (binary_expression)
  (keyword_message)
  (collection)
  (indexed_collection)
  (list_comprehension)
  (parameter_call_list)
  (function_call)
  (class_def)
  (class_var_declaration)
  (instance_var_declaration)
  (const_declaration)
  (variable_declarations)
  (variable_definition)
  (control_structure)
  (return_statement)
] @indent

[
  "("
  ")"
  "{"
  "}"
  "["
  "]"
] @branch

(parameter_call_list) @branch

[
  (block_comment)
  (line_comment)
] @ignore
