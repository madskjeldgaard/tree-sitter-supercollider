#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 208
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 4
#define TOKEN_COUNT 88
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_if = 3,
  anon_sym_while = 4,
  anon_sym_EQ = 5,
  anon_sym_DOT = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_arg = 11,
  anon_sym_COMMA = 12,
  anon_sym_PIPE = 13,
  anon_sym_BSLASH = 14,
  anon_sym_COLON = 15,
  sym_integer = 16,
  sym_hexinteger = 17,
  sym_float = 18,
  aux_sym_symbol_token1 = 19,
  anon_sym_SQUOTE = 20,
  sym_char = 21,
  anon_sym_DQUOTE = 22,
  aux_sym_string_token1 = 23,
  anon_sym_true = 24,
  anon_sym_false = 25,
  sym_escape_sequence = 26,
  anon_sym_var = 27,
  anon_sym_classvar = 28,
  aux_sym_environment_var_token1 = 29,
  anon_sym_TILDE = 30,
  sym_line_comment = 31,
  sym_block_comment = 32,
  anon_sym_LBRACK = 33,
  anon_sym_RBRACK = 34,
  anon_sym_DASH_GT = 35,
  anon_sym_Bag = 36,
  anon_sym_Dictionary = 37,
  anon_sym_Environment = 38,
  anon_sym_Event = 39,
  anon_sym_IdentityBag = 40,
  anon_sym_IdentityDictionary = 41,
  anon_sym_IdentitySet = 42,
  anon_sym_LazyEnvir = 43,
  anon_sym_MultiLevelIdentityDictionary = 44,
  anon_sym_ObjectTable = 45,
  anon_sym_Set = 46,
  anon_sym_TwoWayIdentityDictionary = 47,
  anon_sym_Array = 48,
  anon_sym_Array2D = 49,
  anon_sym_ArrayedCollection = 50,
  anon_sym_DoubleArray = 51,
  anon_sym_FloatArray = 52,
  anon_sym_Int16Array = 53,
  anon_sym_Int32Array = 54,
  anon_sym_Int8Array = 55,
  anon_sym_LinkedList = 56,
  anon_sym_List = 57,
  anon_sym_Order = 58,
  anon_sym_OrderedIdentitySet = 59,
  anon_sym_Pair = 60,
  anon_sym_PriorityQueue = 61,
  anon_sym_RawArray = 62,
  anon_sym_SequenceableCollection = 63,
  anon_sym_Signal = 64,
  anon_sym_SortedList = 65,
  anon_sym_SparseArray = 66,
  anon_sym_String = 67,
  anon_sym_SymbolArray = 68,
  anon_sym_AMP_AMP = 69,
  anon_sym_PIPE_PIPE = 70,
  anon_sym_AMP = 71,
  anon_sym_CARET = 72,
  anon_sym_EQ_EQ = 73,
  anon_sym_BANG_EQ = 74,
  anon_sym_LT = 75,
  anon_sym_LT_EQ = 76,
  anon_sym_GT = 77,
  anon_sym_GT_EQ = 78,
  anon_sym_LT_LT = 79,
  anon_sym_GT_GT = 80,
  anon_sym_PLUS = 81,
  anon_sym_DASH = 82,
  anon_sym_STAR = 83,
  anon_sym_SLASH = 84,
  anon_sym_PERCENT = 85,
  sym_class = 86,
  anon_sym_DOTwhile = 87,
  sym_source_file = 88,
  sym__expression = 89,
  sym__expression_statement = 90,
  sym__object = 91,
  sym_function_definition = 92,
  sym_function_call = 93,
  sym_instance_method_call = 94,
  sym_class_method_call = 95,
  sym__expression_sequence = 96,
  sym_code_block = 97,
  sym_function_block = 98,
  sym_parameter_list = 99,
  sym_argument = 100,
  sym_parameter_call_list = 101,
  sym_argument_calls = 102,
  sym_unnamed_argument = 103,
  sym_named_argument = 104,
  sym_literal = 105,
  sym_number = 106,
  sym_symbol = 107,
  sym_string = 108,
  sym_bool = 109,
  sym_variable = 110,
  sym_local_var = 111,
  sym_classvar = 112,
  sym_environment_var = 113,
  sym_variable_definition = 114,
  sym_comment = 115,
  sym_collection = 116,
  sym__collection_sequence = 117,
  sym__paired_associative_sequence = 118,
  sym_associative_item = 119,
  sym_binary_expression = 120,
  sym_control_structure = 121,
  sym_if = 122,
  sym_while = 123,
  aux_sym_source_file_repeat1 = 124,
  aux_sym__expression_sequence_repeat1 = 125,
  aux_sym_parameter_list_repeat1 = 126,
  aux_sym_parameter_call_list_repeat1 = 127,
  aux_sym_string_repeat1 = 128,
  aux_sym__collection_sequence_repeat1 = 129,
  aux_sym__paired_associative_sequence_repeat1 = 130,
  alias_sym_class_method_name = 131,
  alias_sym_item = 132,
  alias_sym_method_name = 133,
  alias_sym_receiver = 134,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_if] = "if",
  [anon_sym_while] = "while",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_arg] = "arg",
  [anon_sym_COMMA] = ",",
  [anon_sym_PIPE] = "|",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_COLON] = ":",
  [sym_integer] = "integer",
  [sym_hexinteger] = "hexinteger",
  [sym_float] = "float",
  [aux_sym_symbol_token1] = "symbol_token1",
  [anon_sym_SQUOTE] = "'",
  [sym_char] = "char",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_var] = "var",
  [anon_sym_classvar] = "classvar",
  [aux_sym_environment_var_token1] = "environment_var_token1",
  [anon_sym_TILDE] = "~",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_Bag] = "Bag",
  [anon_sym_Dictionary] = "Dictionary",
  [anon_sym_Environment] = "Environment",
  [anon_sym_Event] = "Event",
  [anon_sym_IdentityBag] = "IdentityBag",
  [anon_sym_IdentityDictionary] = "IdentityDictionary",
  [anon_sym_IdentitySet] = "IdentitySet",
  [anon_sym_LazyEnvir] = "LazyEnvir",
  [anon_sym_MultiLevelIdentityDictionary] = "MultiLevelIdentityDictionary",
  [anon_sym_ObjectTable] = "ObjectTable",
  [anon_sym_Set] = "Set",
  [anon_sym_TwoWayIdentityDictionary] = "TwoWayIdentityDictionary",
  [anon_sym_Array] = "Array",
  [anon_sym_Array2D] = "Array2D",
  [anon_sym_ArrayedCollection] = "ArrayedCollection",
  [anon_sym_DoubleArray] = "DoubleArray",
  [anon_sym_FloatArray] = "FloatArray",
  [anon_sym_Int16Array] = "Int16Array",
  [anon_sym_Int32Array] = "Int32Array",
  [anon_sym_Int8Array] = "Int8Array",
  [anon_sym_LinkedList] = "LinkedList",
  [anon_sym_List] = "List",
  [anon_sym_Order] = "Order",
  [anon_sym_OrderedIdentitySet] = "OrderedIdentitySet",
  [anon_sym_Pair] = "Pair",
  [anon_sym_PriorityQueue] = "PriorityQueue",
  [anon_sym_RawArray] = "RawArray",
  [anon_sym_SequenceableCollection] = "SequenceableCollection",
  [anon_sym_Signal] = "Signal",
  [anon_sym_SortedList] = "SortedList",
  [anon_sym_SparseArray] = "SparseArray",
  [anon_sym_String] = "String",
  [anon_sym_SymbolArray] = "SymbolArray",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [sym_class] = "class",
  [anon_sym_DOTwhile] = ".while",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym__expression_statement] = "_expression_statement",
  [sym__object] = "_object",
  [sym_function_definition] = "function_definition",
  [sym_function_call] = "function_call",
  [sym_instance_method_call] = "instance_method_call",
  [sym_class_method_call] = "class_method_call",
  [sym__expression_sequence] = "_expression_sequence",
  [sym_code_block] = "code_block",
  [sym_function_block] = "function_block",
  [sym_parameter_list] = "parameter_list",
  [sym_argument] = "argument",
  [sym_parameter_call_list] = "parameter_call_list",
  [sym_argument_calls] = "argument_calls",
  [sym_unnamed_argument] = "unnamed_argument",
  [sym_named_argument] = "named_argument",
  [sym_literal] = "literal",
  [sym_number] = "number",
  [sym_symbol] = "symbol",
  [sym_string] = "string",
  [sym_bool] = "bool",
  [sym_variable] = "variable",
  [sym_local_var] = "local_var",
  [sym_classvar] = "classvar",
  [sym_environment_var] = "environment_var",
  [sym_variable_definition] = "variable_definition",
  [sym_comment] = "comment",
  [sym_collection] = "collection",
  [sym__collection_sequence] = "_collection_sequence",
  [sym__paired_associative_sequence] = "_paired_associative_sequence",
  [sym_associative_item] = "associative_item",
  [sym_binary_expression] = "binary_expression",
  [sym_control_structure] = "control_structure",
  [sym_if] = "if",
  [sym_while] = "while",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__expression_sequence_repeat1] = "_expression_sequence_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_parameter_call_list_repeat1] = "parameter_call_list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__collection_sequence_repeat1] = "_collection_sequence_repeat1",
  [aux_sym__paired_associative_sequence_repeat1] = "_paired_associative_sequence_repeat1",
  [alias_sym_class_method_name] = "class_method_name",
  [alias_sym_item] = "item",
  [alias_sym_method_name] = "method_name",
  [alias_sym_receiver] = "receiver",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_arg] = anon_sym_arg,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_integer] = sym_integer,
  [sym_hexinteger] = sym_hexinteger,
  [sym_float] = sym_float,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_char] = sym_char,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_classvar] = anon_sym_classvar,
  [aux_sym_environment_var_token1] = aux_sym_environment_var_token1,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_Bag] = anon_sym_Bag,
  [anon_sym_Dictionary] = anon_sym_Dictionary,
  [anon_sym_Environment] = anon_sym_Environment,
  [anon_sym_Event] = anon_sym_Event,
  [anon_sym_IdentityBag] = anon_sym_IdentityBag,
  [anon_sym_IdentityDictionary] = anon_sym_IdentityDictionary,
  [anon_sym_IdentitySet] = anon_sym_IdentitySet,
  [anon_sym_LazyEnvir] = anon_sym_LazyEnvir,
  [anon_sym_MultiLevelIdentityDictionary] = anon_sym_MultiLevelIdentityDictionary,
  [anon_sym_ObjectTable] = anon_sym_ObjectTable,
  [anon_sym_Set] = anon_sym_Set,
  [anon_sym_TwoWayIdentityDictionary] = anon_sym_TwoWayIdentityDictionary,
  [anon_sym_Array] = anon_sym_Array,
  [anon_sym_Array2D] = anon_sym_Array2D,
  [anon_sym_ArrayedCollection] = anon_sym_ArrayedCollection,
  [anon_sym_DoubleArray] = anon_sym_DoubleArray,
  [anon_sym_FloatArray] = anon_sym_FloatArray,
  [anon_sym_Int16Array] = anon_sym_Int16Array,
  [anon_sym_Int32Array] = anon_sym_Int32Array,
  [anon_sym_Int8Array] = anon_sym_Int8Array,
  [anon_sym_LinkedList] = anon_sym_LinkedList,
  [anon_sym_List] = anon_sym_List,
  [anon_sym_Order] = anon_sym_Order,
  [anon_sym_OrderedIdentitySet] = anon_sym_OrderedIdentitySet,
  [anon_sym_Pair] = anon_sym_Pair,
  [anon_sym_PriorityQueue] = anon_sym_PriorityQueue,
  [anon_sym_RawArray] = anon_sym_RawArray,
  [anon_sym_SequenceableCollection] = anon_sym_SequenceableCollection,
  [anon_sym_Signal] = anon_sym_Signal,
  [anon_sym_SortedList] = anon_sym_SortedList,
  [anon_sym_SparseArray] = anon_sym_SparseArray,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_SymbolArray] = anon_sym_SymbolArray,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_class] = sym_class,
  [anon_sym_DOTwhile] = anon_sym_DOTwhile,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym__expression_statement] = sym__expression_statement,
  [sym__object] = sym__object,
  [sym_function_definition] = sym_function_definition,
  [sym_function_call] = sym_function_call,
  [sym_instance_method_call] = sym_instance_method_call,
  [sym_class_method_call] = sym_class_method_call,
  [sym__expression_sequence] = sym__expression_sequence,
  [sym_code_block] = sym_code_block,
  [sym_function_block] = sym_function_block,
  [sym_parameter_list] = sym_parameter_list,
  [sym_argument] = sym_argument,
  [sym_parameter_call_list] = sym_parameter_call_list,
  [sym_argument_calls] = sym_argument_calls,
  [sym_unnamed_argument] = sym_unnamed_argument,
  [sym_named_argument] = sym_named_argument,
  [sym_literal] = sym_literal,
  [sym_number] = sym_number,
  [sym_symbol] = sym_symbol,
  [sym_string] = sym_string,
  [sym_bool] = sym_bool,
  [sym_variable] = sym_variable,
  [sym_local_var] = sym_local_var,
  [sym_classvar] = sym_classvar,
  [sym_environment_var] = sym_environment_var,
  [sym_variable_definition] = sym_variable_definition,
  [sym_comment] = sym_comment,
  [sym_collection] = sym_collection,
  [sym__collection_sequence] = sym__collection_sequence,
  [sym__paired_associative_sequence] = sym__paired_associative_sequence,
  [sym_associative_item] = sym_associative_item,
  [sym_binary_expression] = sym_binary_expression,
  [sym_control_structure] = sym_control_structure,
  [sym_if] = sym_if,
  [sym_while] = sym_while,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__expression_sequence_repeat1] = aux_sym__expression_sequence_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_parameter_call_list_repeat1] = aux_sym_parameter_call_list_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym__collection_sequence_repeat1] = aux_sym__collection_sequence_repeat1,
  [aux_sym__paired_associative_sequence_repeat1] = aux_sym__paired_associative_sequence_repeat1,
  [alias_sym_class_method_name] = alias_sym_class_method_name,
  [alias_sym_item] = alias_sym_item,
  [alias_sym_method_name] = alias_sym_method_name,
  [alias_sym_receiver] = alias_sym_receiver,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_arg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_hexinteger] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_classvar] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_environment_var_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Bag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Dictionary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Environment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IdentityBag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IdentityDictionary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IdentitySet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LazyEnvir] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MultiLevelIdentityDictionary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ObjectTable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TwoWayIdentityDictionary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Array2D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ArrayedCollection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DoubleArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FloatArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int16Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int32Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Int8Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LinkedList] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_List] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Order] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OrderedIdentitySet] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Pair] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PriorityQueue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RawArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SequenceableCollection] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Signal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SortedList] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SparseArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SymbolArray] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [sym_class] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOTwhile] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__object] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_instance_method_call] = {
    .visible = true,
    .named = true,
  },
  [sym_class_method_call] = {
    .visible = true,
    .named = true,
  },
  [sym__expression_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_code_block] = {
    .visible = true,
    .named = true,
  },
  [sym_function_block] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_call_list] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_calls] = {
    .visible = true,
    .named = true,
  },
  [sym_unnamed_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_named_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_local_var] = {
    .visible = true,
    .named = true,
  },
  [sym_classvar] = {
    .visible = true,
    .named = true,
  },
  [sym_environment_var] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_collection] = {
    .visible = true,
    .named = true,
  },
  [sym__collection_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym__paired_associative_sequence] = {
    .visible = false,
    .named = true,
  },
  [sym_associative_item] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_control_structure] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expression_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_call_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__collection_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__paired_associative_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_class_method_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_item] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_method_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_receiver] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_body_func = 1,
  field_expression = 2,
  field_false = 3,
  field_left = 4,
  field_operator = 5,
  field_right = 6,
  field_test_func = 7,
  field_true = 8,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_body_func] = "body_func",
  [field_expression] = "expression",
  [field_false] = "false",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_test_func] = "test_func",
  [field_true] = "true",
};

static const TSFieldMapSlice ts_field_map_slices[13] = {
  [3] = {.index = 0, .length = 3},
  [5] = {.index = 3, .length = 2},
  [7] = {.index = 5, .length = 2},
  [8] = {.index = 7, .length = 3},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 5},
  [12] = {.index = 19, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [3] =
    {field_body_func, 2},
    {field_expression, 0},
  [5] =
    {field_expression, 0},
    {field_true, 3},
  [7] =
    {field_expression, 2},
    {field_true, 3},
    {field_true, 4},
  [10] =
    {field_body_func, 4},
    {field_test_func, 2},
  [12] =
    {field_expression, 0},
    {field_true, 4},
  [14] =
    {field_expression, 2},
    {field_false, 5},
    {field_false, 6},
    {field_true, 3},
    {field_true, 4},
  [19] =
    {field_expression, 0},
    {field_false, 5},
    {field_false, 6},
    {field_true, 4},
};

static TSSymbol ts_alias_sequences[13][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_receiver,
  },
  [2] = {
    [1] = alias_sym_class_method_name,
  },
  [4] = {
    [1] = alias_sym_method_name,
  },
  [6] = {
    [2] = alias_sym_item,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym__object, 3,
    sym__object,
    alias_sym_item,
    alias_sym_receiver,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '%') ADVANCE(116);
      if (lookahead == '&') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(114);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == 'A') ADVANCE(296);
      if (lookahead == 'B') ADVANCE(145);
      if (lookahead == 'D') ADVANCE(220);
      if (lookahead == 'E') ADVANCE(259);
      if (lookahead == 'F') ADVANCE(245);
      if (lookahead == 'I') ADVANCE(185);
      if (lookahead == 'L') ADVANCE(146);
      if (lookahead == 'M') ADVANCE(353);
      if (lookahead == 'O') ADVANCE(169);
      if (lookahead == 'P') ADVANCE(147);
      if (lookahead == 'R') ADVANCE(148);
      if (lookahead == 'S') ADVANCE(191);
      if (lookahead == 'T') ADVANCE(361);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == '^') ADVANCE(102);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '|') ADVANCE(37);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(383);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '\r') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(59);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(61);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(62);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 9:
      if (lookahead == '\\') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(385);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == '{') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '%') ADVANCE(116);
      if (lookahead == '&') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(114);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(112);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(107);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == ']') ADVANCE(64);
      if (lookahead == '^') ADVANCE(102);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '|') ADVANCE(37);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(383);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '[') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(383);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'w') ADVANCE(12);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(100);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_hexinteger);
      if (lookahead == '\\') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(50);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(56);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_Bag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_Dictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_Environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_Event);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_IdentityBag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_IdentityDictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_IdentitySet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LazyEnvir);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_MultiLevelIdentityDictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_ObjectTable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_Set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_TwoWayIdentityDictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_Array);
      if (lookahead == '2') ADVANCE(131);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_Array2D);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_ArrayedCollection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DoubleArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_FloatArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_Int16Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_Int32Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_Int8Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LinkedList);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_List);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_Order);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_OrderedIdentitySet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_Pair);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_PriorityQueue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RawArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SequenceableCollection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_Signal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SortedList);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SparseArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SymbolArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(99);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '>') ADVANCE(110);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(65);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(61);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '1') ADVANCE(119);
      if (lookahead == '3') ADVANCE(118);
      if (lookahead == '8') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '2') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '6') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'B') ADVANCE(152);
      if (lookahead == 'D') ADVANCE(239);
      if (lookahead == 'S') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'C') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'C') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'D') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'D') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'D') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'E') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'I') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'I') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'I') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'L') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'L') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'L') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'Q') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'S') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'T') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'W') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(382);
      if (lookahead == 'i') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(243);
      if (lookahead == 'r') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(291);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead == 'o') ADVANCE(299);
      if (lookahead == 'p') ADVANCE(153);
      if (lookahead == 't') ADVANCE(297);
      if (lookahead == 'y') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'j') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'k') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'm') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'm') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(358);
      if (lookahead == 'v') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(244);
      if (lookahead == 's') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'q') ADVANCE(356);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 's') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 's') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 's') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'v') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'v') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'v') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'w') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'w') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'z') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(384);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_DOTwhile);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead == 'v') ADVANCE(6);
      if (lookahead == 'w') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(8);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'f') ADVANCE(12);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'h') ADVANCE(15);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      END_STATE();
    case 9:
      if (lookahead == 'g') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_arg);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_classvar);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 24},
  [19] = {.lex_state = 24},
  [20] = {.lex_state = 24},
  [21] = {.lex_state = 24},
  [22] = {.lex_state = 24},
  [23] = {.lex_state = 24},
  [24] = {.lex_state = 24},
  [25] = {.lex_state = 24},
  [26] = {.lex_state = 24},
  [27] = {.lex_state = 24},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 24},
  [30] = {.lex_state = 24},
  [31] = {.lex_state = 24},
  [32] = {.lex_state = 24},
  [33] = {.lex_state = 24},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 24},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 24},
  [84] = {.lex_state = 24},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 24},
  [87] = {.lex_state = 24},
  [88] = {.lex_state = 24},
  [89] = {.lex_state = 24},
  [90] = {.lex_state = 24},
  [91] = {.lex_state = 24},
  [92] = {.lex_state = 24},
  [93] = {.lex_state = 24},
  [94] = {.lex_state = 24},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 24},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 24},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 24},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 24},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 24},
  [148] = {.lex_state = 24},
  [149] = {.lex_state = 24},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 24},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 24},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 24},
  [168] = {.lex_state = 24},
  [169] = {.lex_state = 24},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 24},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 24},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {(TSStateId)(-1)},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_arg] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_hexinteger] = ACTIONS(1),
    [aux_sym_symbol_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_classvar] = ACTIONS(1),
    [aux_sym_environment_var_token1] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_Bag] = ACTIONS(1),
    [anon_sym_Dictionary] = ACTIONS(1),
    [anon_sym_Environment] = ACTIONS(1),
    [anon_sym_Event] = ACTIONS(1),
    [anon_sym_IdentityBag] = ACTIONS(1),
    [anon_sym_IdentityDictionary] = ACTIONS(1),
    [anon_sym_IdentitySet] = ACTIONS(1),
    [anon_sym_LazyEnvir] = ACTIONS(1),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(1),
    [anon_sym_ObjectTable] = ACTIONS(1),
    [anon_sym_Set] = ACTIONS(1),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(1),
    [anon_sym_Array] = ACTIONS(1),
    [anon_sym_Array2D] = ACTIONS(1),
    [anon_sym_ArrayedCollection] = ACTIONS(1),
    [anon_sym_DoubleArray] = ACTIONS(1),
    [anon_sym_FloatArray] = ACTIONS(1),
    [anon_sym_Int16Array] = ACTIONS(1),
    [anon_sym_Int32Array] = ACTIONS(1),
    [anon_sym_Int8Array] = ACTIONS(1),
    [anon_sym_LinkedList] = ACTIONS(1),
    [anon_sym_List] = ACTIONS(1),
    [anon_sym_Order] = ACTIONS(1),
    [anon_sym_OrderedIdentitySet] = ACTIONS(1),
    [anon_sym_Pair] = ACTIONS(1),
    [anon_sym_PriorityQueue] = ACTIONS(1),
    [anon_sym_RawArray] = ACTIONS(1),
    [anon_sym_SequenceableCollection] = ACTIONS(1),
    [anon_sym_Signal] = ACTIONS(1),
    [anon_sym_SortedList] = ACTIONS(1),
    [anon_sym_SparseArray] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_SymbolArray] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_class] = ACTIONS(1),
    [anon_sym_DOTwhile] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(187),
    [sym__expression] = STATE(90),
    [sym__expression_statement] = STATE(186),
    [sym__object] = STATE(75),
    [sym_function_definition] = STATE(142),
    [sym_function_call] = STATE(142),
    [sym_code_block] = STATE(12),
    [sym_function_block] = STATE(43),
    [sym_literal] = STATE(43),
    [sym_number] = STATE(69),
    [sym_symbol] = STATE(69),
    [sym_string] = STATE(69),
    [sym_bool] = STATE(69),
    [sym_variable] = STATE(80),
    [sym_local_var] = STATE(45),
    [sym_classvar] = STATE(45),
    [sym_environment_var] = STATE(45),
    [sym_variable_definition] = STATE(142),
    [sym_comment] = STATE(1),
    [sym_collection] = STATE(43),
    [sym_binary_expression] = STATE(43),
    [sym_control_structure] = STATE(43),
    [sym_if] = STATE(46),
    [sym_while] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(19),
    [sym_integer] = ACTIONS(21),
    [sym_hexinteger] = ACTIONS(23),
    [sym_float] = ACTIONS(23),
    [anon_sym_SQUOTE] = ACTIONS(25),
    [sym_char] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_true] = ACTIONS(31),
    [anon_sym_false] = ACTIONS(31),
    [anon_sym_var] = ACTIONS(33),
    [anon_sym_classvar] = ACTIONS(35),
    [aux_sym_environment_var_token1] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(39),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(41),
    [sym_class] = ACTIONS(43),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 36,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_class,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_arg,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    STATE(2), 1,
      sym_comment,
    STATE(7), 1,
      sym_parameter_list,
    STATE(14), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(75), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(123), 1,
      sym__expression_statement,
    STATE(170), 1,
      sym__expression_sequence,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(142), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 6,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [124] = 35,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_class,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_arg,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    STATE(3), 1,
      sym_comment,
    STATE(10), 1,
      sym_parameter_list,
    STATE(14), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(75), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(123), 1,
      sym__expression_statement,
    STATE(182), 1,
      sym__expression_sequence,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(142), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 6,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [245] = 35,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_class,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 1,
      anon_sym_arg,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    STATE(4), 1,
      sym_comment,
    STATE(8), 1,
      sym_parameter_list,
    STATE(14), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(75), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(123), 1,
      sym__expression_statement,
    STATE(205), 1,
      sym__expression_sequence,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(142), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 6,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [366] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(5), 1,
      sym_comment,
    ACTIONS(55), 16,
      anon_sym_if,
      anon_sym_while,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      sym_identifier,
    ACTIONS(53), 31,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BSLASH,
      sym_hexinteger,
      sym_float,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      sym_class,
      anon_sym_DOTwhile,
  [427] = 34,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_class,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(51), 1,
      sym_symbol,
    STATE(75), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(118), 1,
      sym_associative_item,
    STATE(123), 1,
      sym__expression_statement,
    STATE(183), 1,
      sym__paired_associative_sequence,
    STATE(185), 1,
      sym__expression_sequence,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 3,
      sym_number,
      sym_string,
      sym_bool,
    STATE(142), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(43), 6,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [544] = 33,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_class,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(75), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(123), 1,
      sym__expression_statement,
    STATE(166), 1,
      sym__expression_sequence,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(142), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 6,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [659] = 32,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_class,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(75), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(123), 1,
      sym__expression_statement,
    STATE(180), 1,
      sym__expression_sequence,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(142), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 6,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [771] = 33,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_class,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_source_file_repeat1,
    STATE(12), 1,
      sym_code_block,
    STATE(75), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(90), 1,
      sym__expression,
    STATE(186), 1,
      sym__expression_statement,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(142), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [885] = 32,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_class,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(75), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(123), 1,
      sym__expression_statement,
    STATE(194), 1,
      sym__expression_sequence,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(142), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 6,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [997] = 32,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_if,
    ACTIONS(75), 1,
      anon_sym_while,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_LBRACE,
    ACTIONS(84), 1,
      anon_sym_BSLASH,
    ACTIONS(87), 1,
      sym_integer,
    ACTIONS(93), 1,
      anon_sym_SQUOTE,
    ACTIONS(96), 1,
      sym_char,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_var,
    ACTIONS(108), 1,
      anon_sym_classvar,
    ACTIONS(111), 1,
      aux_sym_environment_var_token1,
    ACTIONS(114), 1,
      anon_sym_TILDE,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      sym_class,
    STATE(12), 1,
      sym_code_block,
    STATE(75), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(90), 1,
      sym__expression,
    STATE(186), 1,
      sym__expression_statement,
    ACTIONS(90), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(102), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(142), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1109] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(12), 1,
      sym_comment,
    ACTIONS(129), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(125), 9,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
    ACTIONS(123), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      sym_float,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      sym_class,
    ACTIONS(127), 15,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [1170] = 29,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(131), 1,
      sym_identifier,
    ACTIONS(134), 1,
      anon_sym_if,
    ACTIONS(137), 1,
      anon_sym_while,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      anon_sym_BSLASH,
    ACTIONS(149), 1,
      sym_integer,
    ACTIONS(155), 1,
      anon_sym_SQUOTE,
    ACTIONS(158), 1,
      sym_char,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      anon_sym_var,
    ACTIONS(170), 1,
      anon_sym_classvar,
    ACTIONS(173), 1,
      aux_sym_environment_var_token1,
    ACTIONS(176), 1,
      anon_sym_TILDE,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      sym_class,
    STATE(75), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(176), 1,
      sym__expression_statement,
    ACTIONS(152), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(164), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(13), 2,
      sym_comment,
      aux_sym__expression_sequence_repeat1,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(142), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 6,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1274] = 30,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_class,
    STATE(13), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(14), 1,
      sym_comment,
    STATE(75), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(135), 1,
      sym__expression_statement,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(142), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 6,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1380] = 28,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(15), 1,
      sym_comment,
    STATE(51), 1,
      sym_symbol,
    STATE(77), 1,
      sym__object,
    STATE(112), 1,
      sym_associative_item,
    STATE(179), 1,
      sym__collection_sequence,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 3,
      sym_number,
      sym_string,
      sym_bool,
    STATE(43), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1478] = 27,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      sym_identifier,
    STATE(16), 1,
      sym_comment,
    STATE(51), 1,
      sym_symbol,
    STATE(82), 1,
      sym__object,
    STATE(156), 1,
      sym_associative_item,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 3,
      sym_number,
      sym_string,
      sym_bool,
    STATE(43), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1573] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_comment,
    STATE(76), 1,
      sym_function_block,
    STATE(78), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 6,
      sym_code_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1665] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym_comment,
    STATE(68), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1755] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_comment,
    STATE(52), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1845] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_comment,
    STATE(67), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1935] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_comment,
    STATE(65), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2025] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_comment,
    STATE(61), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2115] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_comment,
    STATE(60), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2205] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_comment,
    STATE(79), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2295] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_comment,
    STATE(58), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2385] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_comment,
    STATE(56), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2475] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_comment,
    STATE(85), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2565] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_comment,
    STATE(37), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2655] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_while,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_comment,
    STATE(53), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(46), 2,
      sym_if,
      sym_while,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(43), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2745] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(189), 1,
      anon_sym_BSLASH,
    STATE(30), 1,
      sym_comment,
    STATE(108), 1,
      sym_argument_calls,
    STATE(191), 1,
      sym_parameter_call_list,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(152), 2,
      sym_literal,
      sym_variable,
    STATE(163), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [2821] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_BSLASH,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_comment,
    STATE(108), 1,
      sym_argument_calls,
    STATE(197), 1,
      sym_parameter_call_list,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(152), 2,
      sym_literal,
      sym_variable,
    STATE(163), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [2897] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_BSLASH,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      sym_comment,
    STATE(108), 1,
      sym_argument_calls,
    STATE(201), 1,
      sym_parameter_call_list,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(152), 2,
      sym_literal,
      sym_variable,
    STATE(163), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [2973] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_BSLASH,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym_comment,
    STATE(108), 1,
      sym_argument_calls,
    STATE(195), 1,
      sym_parameter_call_list,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(152), 2,
      sym_literal,
      sym_variable,
    STATE(163), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [3049] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(34), 1,
      sym_comment,
    ACTIONS(199), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(197), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [3090] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(35), 1,
      sym_comment,
    ACTIONS(203), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(201), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [3131] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(36), 1,
      sym_comment,
    ACTIONS(207), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(205), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [3171] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    STATE(37), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(211), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 15,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOTwhile,
  [3217] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(38), 1,
      sym_comment,
    ACTIONS(221), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(219), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [3257] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(39), 1,
      sym_comment,
    ACTIONS(225), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(223), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [3297] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(40), 1,
      sym_comment,
    ACTIONS(229), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(227), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [3337] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(41), 1,
      sym_comment,
    ACTIONS(233), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(231), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [3377] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_BSLASH,
    STATE(42), 1,
      sym_comment,
    STATE(172), 1,
      sym_argument_calls,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(152), 2,
      sym_literal,
      sym_variable,
    STATE(163), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [3447] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(43), 1,
      sym_comment,
    ACTIONS(129), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(127), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [3487] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(44), 1,
      sym_comment,
    ACTIONS(237), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(235), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [3527] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(45), 1,
      sym_comment,
    ACTIONS(241), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(239), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [3567] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(46), 1,
      sym_comment,
    ACTIONS(245), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(243), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [3607] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(47), 1,
      sym_comment,
    ACTIONS(249), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(247), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [3647] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(255), 1,
      anon_sym_COLON,
    STATE(48), 1,
      sym_comment,
    ACTIONS(253), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(251), 18,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [3689] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(49), 1,
      sym_comment,
    ACTIONS(253), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(251), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [3729] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(50), 1,
      sym_comment,
    ACTIONS(259), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(257), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [3769] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(51), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(263), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(261), 16,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [3811] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(52), 1,
      sym_comment,
    ACTIONS(211), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(209), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [3851] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      sym_comment,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(211), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 17,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DOTwhile,
  [3895] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(54), 1,
      sym_comment,
    ACTIONS(267), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(265), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [3935] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(55), 1,
      sym_comment,
    ACTIONS(271), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(269), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [3975] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(273), 1,
      anon_sym_PIPE,
    ACTIONS(275), 1,
      anon_sym_AMP,
    ACTIONS(277), 1,
      anon_sym_CARET,
    STATE(56), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(279), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(211), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 12,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTwhile,
  [4029] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(57), 1,
      sym_comment,
    ACTIONS(283), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(281), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [4069] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(275), 1,
      anon_sym_AMP,
    STATE(58), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(279), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(211), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTwhile,
  [4119] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(59), 1,
      sym_comment,
    ACTIONS(287), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(285), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [4159] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    STATE(60), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(279), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(211), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTwhile,
  [4207] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(273), 1,
      anon_sym_PIPE,
    ACTIONS(275), 1,
      anon_sym_AMP,
    ACTIONS(277), 1,
      anon_sym_CARET,
    ACTIONS(289), 1,
      anon_sym_AMP_AMP,
    STATE(61), 1,
      sym_comment,
    ACTIONS(211), 2,
      anon_sym_EQ,
      anon_sym_DOT,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(279), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(293), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(209), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_DOTwhile,
  [4267] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(62), 1,
      sym_comment,
    ACTIONS(297), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(295), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [4307] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(63), 1,
      sym_comment,
    ACTIONS(301), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(299), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [4347] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(64), 1,
      sym_comment,
    ACTIONS(305), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(303), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [4387] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(273), 1,
      anon_sym_PIPE,
    ACTIONS(275), 1,
      anon_sym_AMP,
    ACTIONS(277), 1,
      anon_sym_CARET,
    STATE(65), 1,
      sym_comment,
    ACTIONS(211), 2,
      anon_sym_EQ,
      anon_sym_DOT,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(279), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(293), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(209), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOTwhile,
  [4445] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(66), 1,
      sym_comment,
    ACTIONS(309), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(307), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [4485] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(275), 1,
      anon_sym_AMP,
    ACTIONS(277), 1,
      anon_sym_CARET,
    STATE(67), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(279), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(211), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 12,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_DOTwhile,
  [4537] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(211), 1,
      anon_sym_EQ,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(273), 1,
      anon_sym_PIPE,
    ACTIONS(275), 1,
      anon_sym_AMP,
    ACTIONS(277), 1,
      anon_sym_CARET,
    ACTIONS(289), 1,
      anon_sym_AMP_AMP,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(313), 1,
      anon_sym_PIPE_PIPE,
    STATE(68), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(279), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(293), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(209), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOTwhile,
  [4601] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(69), 1,
      sym_comment,
    ACTIONS(263), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(261), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [4641] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(70), 1,
      sym_comment,
    ACTIONS(317), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(315), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [4681] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(71), 1,
      sym_comment,
    ACTIONS(321), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(319), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [4721] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(72), 1,
      sym_comment,
    ACTIONS(325), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(323), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [4761] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(73), 1,
      sym_comment,
    ACTIONS(329), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(327), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [4801] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(74), 1,
      sym_comment,
    ACTIONS(333), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(331), 19,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [4841] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(273), 1,
      anon_sym_PIPE,
    ACTIONS(275), 1,
      anon_sym_AMP,
    ACTIONS(277), 1,
      anon_sym_CARET,
    ACTIONS(289), 1,
      anon_sym_AMP_AMP,
    ACTIONS(313), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(339), 1,
      anon_sym_DOT,
    ACTIONS(341), 1,
      anon_sym_DOTwhile,
    STATE(75), 1,
      sym_comment,
    STATE(128), 1,
      sym_instance_method_call,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(279), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(293), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(291), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4908] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(76), 1,
      sym_comment,
    ACTIONS(343), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(129), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(127), 14,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [4948] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(273), 1,
      anon_sym_PIPE,
    ACTIONS(275), 1,
      anon_sym_AMP,
    ACTIONS(277), 1,
      anon_sym_CARET,
    ACTIONS(289), 1,
      anon_sym_AMP_AMP,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(313), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(341), 1,
      anon_sym_DOTwhile,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_comment,
    STATE(119), 1,
      aux_sym__collection_sequence_repeat1,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(279), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(293), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5016] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(273), 1,
      anon_sym_PIPE,
    ACTIONS(275), 1,
      anon_sym_AMP,
    ACTIONS(277), 1,
      anon_sym_CARET,
    ACTIONS(289), 1,
      anon_sym_AMP_AMP,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(313), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(341), 1,
      anon_sym_DOTwhile,
    STATE(78), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(279), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(293), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(349), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(291), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5080] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(273), 1,
      anon_sym_PIPE,
    ACTIONS(275), 1,
      anon_sym_AMP,
    ACTIONS(277), 1,
      anon_sym_CARET,
    ACTIONS(289), 1,
      anon_sym_AMP_AMP,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(313), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(341), 1,
      anon_sym_DOTwhile,
    STATE(79), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(279), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(293), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(351), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(291), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5144] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(353), 1,
      anon_sym_EQ,
    STATE(80), 1,
      sym_comment,
    ACTIONS(129), 6,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(127), 17,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_DOTwhile,
  [5184] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    STATE(81), 1,
      sym_comment,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(171), 2,
      sym_literal,
      sym_variable,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [5247] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(273), 1,
      anon_sym_PIPE,
    ACTIONS(275), 1,
      anon_sym_AMP,
    ACTIONS(277), 1,
      anon_sym_CARET,
    ACTIONS(289), 1,
      anon_sym_AMP_AMP,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(313), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(341), 1,
      anon_sym_DOTwhile,
    STATE(82), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(279), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(293), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(355), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(291), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5310] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_var,
    ACTIONS(35), 1,
      anon_sym_classvar,
    ACTIONS(37), 1,
      aux_sym_environment_var_token1,
    ACTIONS(39), 1,
      anon_sym_TILDE,
    STATE(83), 1,
      sym_comment,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_literal,
      sym_variable,
    STATE(45), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [5373] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(84), 1,
      sym_comment,
    ACTIONS(357), 9,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
    ACTIONS(359), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      sym_float,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      sym_class,
  [5409] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(217), 1,
      anon_sym_SLASH,
    ACTIONS(273), 1,
      anon_sym_PIPE,
    ACTIONS(275), 1,
      anon_sym_AMP,
    ACTIONS(277), 1,
      anon_sym_CARET,
    ACTIONS(289), 1,
      anon_sym_AMP_AMP,
    ACTIONS(311), 1,
      anon_sym_DOT,
    ACTIONS(313), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(341), 1,
      anon_sym_DOTwhile,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      sym_comment,
    ACTIONS(213), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(215), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(279), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(293), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5471] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(86), 1,
      sym_comment,
    ACTIONS(363), 9,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
    ACTIONS(365), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      sym_float,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      sym_class,
  [5507] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(87), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(367), 9,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
    ACTIONS(369), 11,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      sym_float,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      sym_class,
  [5545] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(88), 1,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(367), 9,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
    ACTIONS(369), 11,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      sym_float,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      sym_class,
  [5583] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(89), 1,
      sym_comment,
    ACTIONS(375), 9,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
    ACTIONS(377), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      sym_float,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      sym_class,
  [5619] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(90), 1,
      sym_comment,
    ACTIONS(381), 9,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
    ACTIONS(379), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      sym_float,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      sym_class,
  [5654] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(91), 1,
      sym_comment,
    ACTIONS(385), 9,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
    ACTIONS(383), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      sym_float,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      sym_class,
  [5689] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(92), 1,
      sym_comment,
    ACTIONS(367), 9,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
    ACTIONS(369), 11,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      sym_float,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_LBRACK,
      sym_class,
  [5723] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(21), 1,
      sym_integer,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      sym_comment,
    STATE(148), 1,
      sym_literal,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(387), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(69), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [5765] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(389), 1,
      anon_sym_BSLASH,
    ACTIONS(391), 1,
      sym_integer,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(397), 1,
      sym_char,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      sym_comment,
    STATE(148), 1,
      sym_literal,
    ACTIONS(393), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(401), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(173), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [5807] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(407), 1,
      anon_sym_if,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    STATE(95), 1,
      sym_comment,
    ACTIONS(405), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [5831] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(411), 1,
      sym_identifier,
    STATE(96), 1,
      sym_comment,
    STATE(154), 1,
      sym_symbol,
    STATE(159), 1,
      sym_associative_item,
  [5856] = 7,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(413), 1,
      anon_sym_DQUOTE,
    ACTIONS(415), 1,
      aux_sym_string_token1,
    ACTIONS(417), 1,
      sym_escape_sequence,
    ACTIONS(419), 1,
      sym_line_comment,
    STATE(97), 1,
      sym_comment,
    STATE(99), 1,
      aux_sym_string_repeat1,
  [5878] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    STATE(98), 1,
      sym_comment,
    ACTIONS(421), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [5896] = 7,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(415), 1,
      aux_sym_string_token1,
    ACTIONS(417), 1,
      sym_escape_sequence,
    ACTIONS(419), 1,
      sym_line_comment,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    STATE(99), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym_string_repeat1,
  [5918] = 6,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(419), 1,
      sym_line_comment,
    ACTIONS(427), 1,
      anon_sym_DQUOTE,
    ACTIONS(429), 1,
      aux_sym_string_token1,
    ACTIONS(432), 1,
      sym_escape_sequence,
    STATE(100), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [5938] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(101), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(437), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5956] = 7,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(415), 1,
      aux_sym_string_token1,
    ACTIONS(417), 1,
      sym_escape_sequence,
    ACTIONS(419), 1,
      sym_line_comment,
    ACTIONS(439), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_string_repeat1,
  [5978] = 7,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(415), 1,
      aux_sym_string_token1,
    ACTIONS(417), 1,
      sym_escape_sequence,
    ACTIONS(419), 1,
      sym_line_comment,
    ACTIONS(441), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      aux_sym_string_repeat1,
    STATE(103), 1,
      sym_comment,
  [6000] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(445), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_comment,
    ACTIONS(443), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6018] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(105), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(447), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [6036] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_comment,
    STATE(189), 1,
      sym_function_block,
  [6055] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(451), 1,
      anon_sym_RPAREN,
    ACTIONS(453), 1,
      anon_sym_COMMA,
    STATE(107), 2,
      sym_comment,
      aux_sym__paired_associative_sequence_repeat1,
  [6072] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      sym_comment,
    STATE(140), 1,
      aux_sym_parameter_call_list_repeat1,
  [6091] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(109), 1,
      sym_comment,
    ACTIONS(460), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6106] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      sym_function_block,
    STATE(110), 1,
      sym_comment,
  [6125] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(111), 1,
      sym_comment,
    ACTIONS(464), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6140] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
    STATE(112), 1,
      sym_comment,
    STATE(119), 1,
      aux_sym__collection_sequence_repeat1,
  [6159] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(469), 1,
      anon_sym_PIPE,
    STATE(113), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [6176] = 5,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(419), 1,
      sym_line_comment,
    ACTIONS(473), 1,
      aux_sym_string_token1,
    STATE(114), 1,
      sym_comment,
    ACTIONS(471), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [6193] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_comment,
    STATE(188), 1,
      sym_function_block,
  [6212] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(475), 1,
      sym_identifier,
    ACTIONS(477), 1,
      anon_sym_PIPE,
    STATE(116), 1,
      sym_comment,
    STATE(129), 1,
      sym_argument,
  [6231] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(477), 1,
      anon_sym_SEMI,
    ACTIONS(479), 1,
      sym_identifier,
    STATE(117), 1,
      sym_comment,
    STATE(130), 1,
      sym_argument,
  [6250] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      sym_comment,
    STATE(136), 1,
      aux_sym__paired_associative_sequence_repeat1,
  [6269] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    ACTIONS(485), 1,
      anon_sym_RBRACK,
    STATE(119), 1,
      sym_comment,
    STATE(134), 1,
      aux_sym__collection_sequence_repeat1,
  [6288] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(469), 1,
      anon_sym_SEMI,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    STATE(120), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [6305] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(121), 1,
      sym_comment,
    ACTIONS(490), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6320] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(122), 1,
      sym_comment,
    STATE(157), 1,
      sym_function_block,
  [6339] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(492), 1,
      anon_sym_SEMI,
    STATE(123), 1,
      sym_comment,
    ACTIONS(494), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6356] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(124), 1,
      sym_comment,
    STATE(203), 1,
      sym_function_block,
  [6375] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      sym_comment,
    STATE(193), 1,
      sym_function_block,
  [6394] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_function_block,
    STATE(126), 1,
      sym_comment,
  [6413] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(127), 1,
      sym_comment,
    ACTIONS(496), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6428] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(128), 1,
      sym_comment,
    ACTIONS(498), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6443] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_PIPE,
    STATE(129), 1,
      sym_comment,
    STATE(132), 1,
      aux_sym_parameter_list_repeat1,
  [6462] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(502), 1,
      anon_sym_SEMI,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      sym_comment,
    STATE(131), 1,
      aux_sym_parameter_list_repeat1,
  [6481] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    ACTIONS(506), 1,
      anon_sym_SEMI,
    STATE(120), 1,
      aux_sym_parameter_list_repeat1,
    STATE(131), 1,
      sym_comment,
  [6500] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(500), 1,
      anon_sym_COMMA,
    ACTIONS(506), 1,
      anon_sym_PIPE,
    STATE(113), 1,
      aux_sym_parameter_list_repeat1,
    STATE(132), 1,
      sym_comment,
  [6519] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(510), 1,
      anon_sym_EQ,
    STATE(133), 1,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6536] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(355), 1,
      anon_sym_RBRACK,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    STATE(134), 2,
      sym_comment,
      aux_sym__collection_sequence_repeat1,
  [6553] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(515), 1,
      anon_sym_SEMI,
    STATE(135), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6570] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym__paired_associative_sequence_repeat1,
    STATE(136), 1,
      sym_comment,
  [6589] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(137), 1,
      sym_comment,
    ACTIONS(519), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6604] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(138), 1,
      sym_comment,
    ACTIONS(521), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6619] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(139), 1,
      sym_comment,
    ACTIONS(523), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6634] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      sym_comment,
    STATE(144), 1,
      aux_sym_parameter_call_list_repeat1,
  [6653] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    ACTIONS(449), 1,
      anon_sym_LPAREN,
    STATE(141), 1,
      sym_comment,
    STATE(174), 1,
      sym_function_block,
  [6672] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(142), 1,
      sym_comment,
    ACTIONS(335), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6687] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(143), 1,
      sym_comment,
    ACTIONS(527), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6702] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    ACTIONS(531), 1,
      anon_sym_COMMA,
    STATE(144), 2,
      sym_comment,
      aux_sym_parameter_call_list_repeat1,
  [6719] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(534), 1,
      anon_sym_EQ,
    STATE(145), 1,
      sym_comment,
    ACTIONS(508), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [6736] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(146), 1,
      sym_comment,
    ACTIONS(536), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6751] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(538), 1,
      anon_sym_DOT,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_class_method_call,
    STATE(147), 1,
      sym_comment,
  [6770] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(148), 1,
      sym_comment,
    ACTIONS(542), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [6785] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(149), 1,
      sym_comment,
    ACTIONS(469), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [6800] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(546), 1,
      aux_sym_symbol_token1,
    STATE(150), 1,
      sym_comment,
  [6816] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(151), 1,
      sym_comment,
    ACTIONS(548), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6830] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(152), 1,
      sym_comment,
    ACTIONS(550), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6844] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(153), 1,
      sym_comment,
    ACTIONS(552), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [6858] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(154), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [6872] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(475), 1,
      sym_identifier,
    STATE(149), 1,
      sym_argument,
    STATE(155), 1,
      sym_comment,
  [6888] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(156), 1,
      sym_comment,
    ACTIONS(355), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6902] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(554), 1,
      anon_sym_RPAREN,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      sym_comment,
  [6918] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(158), 1,
      sym_comment,
    ACTIONS(546), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [6932] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(159), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6946] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(160), 1,
      sym_comment,
    ACTIONS(558), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [6960] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(161), 1,
      sym_comment,
    ACTIONS(560), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [6974] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(162), 1,
      sym_comment,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [6988] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(163), 1,
      sym_comment,
    ACTIONS(562), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7002] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(479), 1,
      sym_identifier,
    STATE(149), 1,
      sym_argument,
    STATE(164), 1,
      sym_comment,
  [7018] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(165), 1,
      sym_comment,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [7032] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      sym_comment,
  [7048] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(167), 1,
      sym_comment,
    ACTIONS(285), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [7062] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(168), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [7076] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(169), 1,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [7090] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(170), 1,
      sym_comment,
  [7106] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(171), 1,
      sym_comment,
    ACTIONS(568), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7120] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(172), 1,
      sym_comment,
    ACTIONS(529), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7134] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(173), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [7148] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      sym_comment,
  [7164] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(175), 1,
      sym_comment,
    ACTIONS(247), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [7178] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(574), 1,
      anon_sym_SEMI,
    STATE(176), 1,
      sym_comment,
  [7191] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(576), 1,
      sym_identifier,
    STATE(177), 1,
      sym_comment,
  [7204] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(578), 1,
      sym_identifier,
    STATE(178), 1,
      sym_comment,
  [7217] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(580), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      sym_comment,
  [7230] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      sym_comment,
  [7243] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(582), 1,
      anon_sym_SQUOTE,
    STATE(181), 1,
      sym_comment,
  [7256] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(182), 1,
      sym_comment,
  [7269] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      sym_comment,
  [7282] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(255), 1,
      anon_sym_COLON,
    STATE(184), 1,
      sym_comment,
  [7295] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      sym_comment,
  [7308] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(586), 1,
      anon_sym_SEMI,
    STATE(186), 1,
      sym_comment,
  [7321] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(588), 1,
      ts_builtin_sym_end,
    STATE(187), 1,
      sym_comment,
  [7334] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    STATE(188), 1,
      sym_comment,
  [7347] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_comment,
  [7360] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(594), 1,
      sym_identifier,
    STATE(190), 1,
      sym_comment,
  [7373] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym_comment,
  [7386] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
    STATE(192), 1,
      sym_comment,
  [7399] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      sym_comment,
  [7412] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    STATE(194), 1,
      sym_comment,
  [7425] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      sym_comment,
  [7438] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(604), 1,
      anon_sym_if,
    STATE(196), 1,
      sym_comment,
  [7451] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      sym_comment,
  [7464] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      sym_comment,
  [7477] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(610), 1,
      sym_identifier,
    STATE(199), 1,
      sym_comment,
  [7490] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(612), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      sym_comment,
  [7503] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      sym_comment,
  [7516] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(616), 1,
      anon_sym_SQUOTE,
    STATE(202), 1,
      sym_comment,
  [7529] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      sym_comment,
  [7542] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(620), 1,
      anon_sym_LPAREN,
    STATE(204), 1,
      sym_comment,
  [7555] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      sym_comment,
  [7568] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(622), 1,
      anon_sym_LPAREN,
    STATE(206), 1,
      sym_comment,
  [7581] = 1,
    ACTIONS(624), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 124,
  [SMALL_STATE(4)] = 245,
  [SMALL_STATE(5)] = 366,
  [SMALL_STATE(6)] = 427,
  [SMALL_STATE(7)] = 544,
  [SMALL_STATE(8)] = 659,
  [SMALL_STATE(9)] = 771,
  [SMALL_STATE(10)] = 885,
  [SMALL_STATE(11)] = 997,
  [SMALL_STATE(12)] = 1109,
  [SMALL_STATE(13)] = 1170,
  [SMALL_STATE(14)] = 1274,
  [SMALL_STATE(15)] = 1380,
  [SMALL_STATE(16)] = 1478,
  [SMALL_STATE(17)] = 1573,
  [SMALL_STATE(18)] = 1665,
  [SMALL_STATE(19)] = 1755,
  [SMALL_STATE(20)] = 1845,
  [SMALL_STATE(21)] = 1935,
  [SMALL_STATE(22)] = 2025,
  [SMALL_STATE(23)] = 2115,
  [SMALL_STATE(24)] = 2205,
  [SMALL_STATE(25)] = 2295,
  [SMALL_STATE(26)] = 2385,
  [SMALL_STATE(27)] = 2475,
  [SMALL_STATE(28)] = 2565,
  [SMALL_STATE(29)] = 2655,
  [SMALL_STATE(30)] = 2745,
  [SMALL_STATE(31)] = 2821,
  [SMALL_STATE(32)] = 2897,
  [SMALL_STATE(33)] = 2973,
  [SMALL_STATE(34)] = 3049,
  [SMALL_STATE(35)] = 3090,
  [SMALL_STATE(36)] = 3131,
  [SMALL_STATE(37)] = 3171,
  [SMALL_STATE(38)] = 3217,
  [SMALL_STATE(39)] = 3257,
  [SMALL_STATE(40)] = 3297,
  [SMALL_STATE(41)] = 3337,
  [SMALL_STATE(42)] = 3377,
  [SMALL_STATE(43)] = 3447,
  [SMALL_STATE(44)] = 3487,
  [SMALL_STATE(45)] = 3527,
  [SMALL_STATE(46)] = 3567,
  [SMALL_STATE(47)] = 3607,
  [SMALL_STATE(48)] = 3647,
  [SMALL_STATE(49)] = 3689,
  [SMALL_STATE(50)] = 3729,
  [SMALL_STATE(51)] = 3769,
  [SMALL_STATE(52)] = 3811,
  [SMALL_STATE(53)] = 3851,
  [SMALL_STATE(54)] = 3895,
  [SMALL_STATE(55)] = 3935,
  [SMALL_STATE(56)] = 3975,
  [SMALL_STATE(57)] = 4029,
  [SMALL_STATE(58)] = 4069,
  [SMALL_STATE(59)] = 4119,
  [SMALL_STATE(60)] = 4159,
  [SMALL_STATE(61)] = 4207,
  [SMALL_STATE(62)] = 4267,
  [SMALL_STATE(63)] = 4307,
  [SMALL_STATE(64)] = 4347,
  [SMALL_STATE(65)] = 4387,
  [SMALL_STATE(66)] = 4445,
  [SMALL_STATE(67)] = 4485,
  [SMALL_STATE(68)] = 4537,
  [SMALL_STATE(69)] = 4601,
  [SMALL_STATE(70)] = 4641,
  [SMALL_STATE(71)] = 4681,
  [SMALL_STATE(72)] = 4721,
  [SMALL_STATE(73)] = 4761,
  [SMALL_STATE(74)] = 4801,
  [SMALL_STATE(75)] = 4841,
  [SMALL_STATE(76)] = 4908,
  [SMALL_STATE(77)] = 4948,
  [SMALL_STATE(78)] = 5016,
  [SMALL_STATE(79)] = 5080,
  [SMALL_STATE(80)] = 5144,
  [SMALL_STATE(81)] = 5184,
  [SMALL_STATE(82)] = 5247,
  [SMALL_STATE(83)] = 5310,
  [SMALL_STATE(84)] = 5373,
  [SMALL_STATE(85)] = 5409,
  [SMALL_STATE(86)] = 5471,
  [SMALL_STATE(87)] = 5507,
  [SMALL_STATE(88)] = 5545,
  [SMALL_STATE(89)] = 5583,
  [SMALL_STATE(90)] = 5619,
  [SMALL_STATE(91)] = 5654,
  [SMALL_STATE(92)] = 5689,
  [SMALL_STATE(93)] = 5723,
  [SMALL_STATE(94)] = 5765,
  [SMALL_STATE(95)] = 5807,
  [SMALL_STATE(96)] = 5831,
  [SMALL_STATE(97)] = 5856,
  [SMALL_STATE(98)] = 5878,
  [SMALL_STATE(99)] = 5896,
  [SMALL_STATE(100)] = 5918,
  [SMALL_STATE(101)] = 5938,
  [SMALL_STATE(102)] = 5956,
  [SMALL_STATE(103)] = 5978,
  [SMALL_STATE(104)] = 6000,
  [SMALL_STATE(105)] = 6018,
  [SMALL_STATE(106)] = 6036,
  [SMALL_STATE(107)] = 6055,
  [SMALL_STATE(108)] = 6072,
  [SMALL_STATE(109)] = 6091,
  [SMALL_STATE(110)] = 6106,
  [SMALL_STATE(111)] = 6125,
  [SMALL_STATE(112)] = 6140,
  [SMALL_STATE(113)] = 6159,
  [SMALL_STATE(114)] = 6176,
  [SMALL_STATE(115)] = 6193,
  [SMALL_STATE(116)] = 6212,
  [SMALL_STATE(117)] = 6231,
  [SMALL_STATE(118)] = 6250,
  [SMALL_STATE(119)] = 6269,
  [SMALL_STATE(120)] = 6288,
  [SMALL_STATE(121)] = 6305,
  [SMALL_STATE(122)] = 6320,
  [SMALL_STATE(123)] = 6339,
  [SMALL_STATE(124)] = 6356,
  [SMALL_STATE(125)] = 6375,
  [SMALL_STATE(126)] = 6394,
  [SMALL_STATE(127)] = 6413,
  [SMALL_STATE(128)] = 6428,
  [SMALL_STATE(129)] = 6443,
  [SMALL_STATE(130)] = 6462,
  [SMALL_STATE(131)] = 6481,
  [SMALL_STATE(132)] = 6500,
  [SMALL_STATE(133)] = 6519,
  [SMALL_STATE(134)] = 6536,
  [SMALL_STATE(135)] = 6553,
  [SMALL_STATE(136)] = 6570,
  [SMALL_STATE(137)] = 6589,
  [SMALL_STATE(138)] = 6604,
  [SMALL_STATE(139)] = 6619,
  [SMALL_STATE(140)] = 6634,
  [SMALL_STATE(141)] = 6653,
  [SMALL_STATE(142)] = 6672,
  [SMALL_STATE(143)] = 6687,
  [SMALL_STATE(144)] = 6702,
  [SMALL_STATE(145)] = 6719,
  [SMALL_STATE(146)] = 6736,
  [SMALL_STATE(147)] = 6751,
  [SMALL_STATE(148)] = 6770,
  [SMALL_STATE(149)] = 6785,
  [SMALL_STATE(150)] = 6800,
  [SMALL_STATE(151)] = 6816,
  [SMALL_STATE(152)] = 6830,
  [SMALL_STATE(153)] = 6844,
  [SMALL_STATE(154)] = 6858,
  [SMALL_STATE(155)] = 6872,
  [SMALL_STATE(156)] = 6888,
  [SMALL_STATE(157)] = 6902,
  [SMALL_STATE(158)] = 6918,
  [SMALL_STATE(159)] = 6932,
  [SMALL_STATE(160)] = 6946,
  [SMALL_STATE(161)] = 6960,
  [SMALL_STATE(162)] = 6974,
  [SMALL_STATE(163)] = 6988,
  [SMALL_STATE(164)] = 7002,
  [SMALL_STATE(165)] = 7018,
  [SMALL_STATE(166)] = 7032,
  [SMALL_STATE(167)] = 7048,
  [SMALL_STATE(168)] = 7062,
  [SMALL_STATE(169)] = 7076,
  [SMALL_STATE(170)] = 7090,
  [SMALL_STATE(171)] = 7106,
  [SMALL_STATE(172)] = 7120,
  [SMALL_STATE(173)] = 7134,
  [SMALL_STATE(174)] = 7148,
  [SMALL_STATE(175)] = 7164,
  [SMALL_STATE(176)] = 7178,
  [SMALL_STATE(177)] = 7191,
  [SMALL_STATE(178)] = 7204,
  [SMALL_STATE(179)] = 7217,
  [SMALL_STATE(180)] = 7230,
  [SMALL_STATE(181)] = 7243,
  [SMALL_STATE(182)] = 7256,
  [SMALL_STATE(183)] = 7269,
  [SMALL_STATE(184)] = 7282,
  [SMALL_STATE(185)] = 7295,
  [SMALL_STATE(186)] = 7308,
  [SMALL_STATE(187)] = 7321,
  [SMALL_STATE(188)] = 7334,
  [SMALL_STATE(189)] = 7347,
  [SMALL_STATE(190)] = 7360,
  [SMALL_STATE(191)] = 7373,
  [SMALL_STATE(192)] = 7386,
  [SMALL_STATE(193)] = 7399,
  [SMALL_STATE(194)] = 7412,
  [SMALL_STATE(195)] = 7425,
  [SMALL_STATE(196)] = 7438,
  [SMALL_STATE(197)] = 7451,
  [SMALL_STATE(198)] = 7464,
  [SMALL_STATE(199)] = 7477,
  [SMALL_STATE(200)] = 7490,
  [SMALL_STATE(201)] = 7503,
  [SMALL_STATE(202)] = 7516,
  [SMALL_STATE(203)] = 7529,
  [SMALL_STATE(204)] = 7542,
  [SMALL_STATE(205)] = 7555,
  [SMALL_STATE(206)] = 7568,
  [SMALL_STATE(207)] = 7581,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(206),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(204),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(158),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(160),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(199),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(177),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(190),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object, 1),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(49),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(206),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(204),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(6),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(3),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(158),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(47),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(47),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(160),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(69),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(102),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(71),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(199),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(177),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(74),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(190),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(15),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(147),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 6),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 6),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 5),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 5),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 4, .production_id = 7),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4, .production_id = 7),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6, .production_id = 10),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6, .production_id = 10),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 8, .production_id = 12),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 8, .production_id = 12),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 4),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_structure, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_structure, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 3, .production_id = 5),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 3, .production_id = 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 8, .production_id = 11),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 8, .production_id = 11),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 6, .production_id = 9),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 6, .production_id = 9),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classvar, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classvar, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_var, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_var, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6, .production_id = 8),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6, .production_id = 8),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_var, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_var, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_sequence, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_item, 3, .production_id = 6),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__collection_sequence_repeat1, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 1),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 2, .production_id = 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(114),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(114),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 2, .production_id = 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__paired_associative_sequence_repeat1, 2),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__paired_associative_sequence_repeat1, 2), SHIFT_REPEAT(96),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_call_list, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 4, .production_id = 4),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(155),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paired_associative_sequence, 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_sequence, 2),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(164),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 5, .production_id = 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__collection_sequence_repeat1, 2), SHIFT_REPEAT(16),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paired_associative_sequence, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 5, .production_id = 4),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 4, .production_id = 2),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_call_list, 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_call_list_repeat1, 2),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_call_list_repeat1, 2), SHIFT_REPEAT(42),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 4),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnamed_argument, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_calls, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [588] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_supercollider(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
