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
#define STATE_COUNT 217
#define LARGE_STATE_COUNT 38
#define SYMBOL_COUNT 136
#define ALIAS_COUNT 4
#define TOKEN_COUNT 90
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
  anon_sym_POUND = 33,
  anon_sym_BQUOTE = 34,
  anon_sym_LBRACK = 35,
  anon_sym_RBRACK = 36,
  anon_sym_DASH_GT = 37,
  anon_sym_Bag = 38,
  anon_sym_Dictionary = 39,
  anon_sym_Environment = 40,
  anon_sym_Event = 41,
  anon_sym_IdentityBag = 42,
  anon_sym_IdentityDictionary = 43,
  anon_sym_IdentitySet = 44,
  anon_sym_LazyEnvir = 45,
  anon_sym_MultiLevelIdentityDictionary = 46,
  anon_sym_ObjectTable = 47,
  anon_sym_Set = 48,
  anon_sym_TwoWayIdentityDictionary = 49,
  anon_sym_Array = 50,
  anon_sym_Array2D = 51,
  anon_sym_ArrayedCollection = 52,
  anon_sym_DoubleArray = 53,
  anon_sym_FloatArray = 54,
  anon_sym_Int16Array = 55,
  anon_sym_Int32Array = 56,
  anon_sym_Int8Array = 57,
  anon_sym_LinkedList = 58,
  anon_sym_List = 59,
  anon_sym_Order = 60,
  anon_sym_OrderedIdentitySet = 61,
  anon_sym_Pair = 62,
  anon_sym_PriorityQueue = 63,
  anon_sym_RawArray = 64,
  anon_sym_SequenceableCollection = 65,
  anon_sym_Signal = 66,
  anon_sym_SortedList = 67,
  anon_sym_SparseArray = 68,
  anon_sym_String = 69,
  anon_sym_SymbolArray = 70,
  anon_sym_AMP_AMP = 71,
  anon_sym_PIPE_PIPE = 72,
  anon_sym_AMP = 73,
  anon_sym_CARET = 74,
  anon_sym_EQ_EQ = 75,
  anon_sym_BANG_EQ = 76,
  anon_sym_LT = 77,
  anon_sym_LT_EQ = 78,
  anon_sym_GT = 79,
  anon_sym_GT_EQ = 80,
  anon_sym_LT_LT = 81,
  anon_sym_GT_GT = 82,
  anon_sym_PLUS = 83,
  anon_sym_DASH = 84,
  anon_sym_STAR = 85,
  anon_sym_SLASH = 86,
  anon_sym_PERCENT = 87,
  sym_class = 88,
  anon_sym_DOTwhile = 89,
  sym_source_file = 90,
  sym__expression = 91,
  sym__expression_statement = 92,
  sym__object = 93,
  sym_function_definition = 94,
  sym_function_call = 95,
  sym_instance_method_call = 96,
  sym_class_method_call = 97,
  sym__expression_sequence = 98,
  sym_code_block = 99,
  sym_function_block = 100,
  sym_parameter_list = 101,
  sym_argument = 102,
  sym_parameter_call_list = 103,
  sym_argument_calls = 104,
  sym_unnamed_argument = 105,
  sym_named_argument = 106,
  sym_literal = 107,
  sym_number = 108,
  sym_symbol = 109,
  sym_string = 110,
  sym_bool = 111,
  sym_variable = 112,
  sym_local_var = 113,
  sym_classvar = 114,
  sym_environment_var = 115,
  sym_variable_definition = 116,
  sym_comment = 117,
  sym_collection = 118,
  sym__collection_sequence = 119,
  sym__paired_associative_sequence = 120,
  sym_associative_item = 121,
  sym__collection_types = 122,
  sym__unordered_collection_types = 123,
  sym__ordered_collection_types = 124,
  sym_binary_expression = 125,
  sym_control_structure = 126,
  sym_if = 127,
  sym_while = 128,
  aux_sym_source_file_repeat1 = 129,
  aux_sym__expression_sequence_repeat1 = 130,
  aux_sym_parameter_list_repeat1 = 131,
  aux_sym_parameter_call_list_repeat1 = 132,
  aux_sym_string_repeat1 = 133,
  aux_sym__collection_sequence_repeat1 = 134,
  aux_sym__paired_associative_sequence_repeat1 = 135,
  alias_sym_class_method_name = 136,
  alias_sym_item = 137,
  alias_sym_method_name = 138,
  alias_sym_receiver = 139,
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
  [anon_sym_POUND] = "#",
  [anon_sym_BQUOTE] = "`",
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
  [sym__collection_types] = "collection_type",
  [sym__unordered_collection_types] = "_unordered_collection_types",
  [sym__ordered_collection_types] = "_ordered_collection_types",
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
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
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
  [sym__collection_types] = sym__collection_types,
  [sym__unordered_collection_types] = sym__unordered_collection_types,
  [sym__ordered_collection_types] = sym__ordered_collection_types,
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
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
  [sym__collection_types] = {
    .visible = true,
    .named = true,
  },
  [sym__unordered_collection_types] = {
    .visible = false,
    .named = true,
  },
  [sym__ordered_collection_types] = {
    .visible = false,
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
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '&') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(117);
      if (lookahead == '0') ADVANCE(42);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(109);
      if (lookahead == 'A') ADVANCE(298);
      if (lookahead == 'B') ADVANCE(147);
      if (lookahead == 'D') ADVANCE(222);
      if (lookahead == 'E') ADVANCE(261);
      if (lookahead == 'F') ADVANCE(247);
      if (lookahead == 'I') ADVANCE(187);
      if (lookahead == 'L') ADVANCE(148);
      if (lookahead == 'M') ADVANCE(355);
      if (lookahead == 'O') ADVANCE(171);
      if (lookahead == 'P') ADVANCE(149);
      if (lookahead == 'R') ADVANCE(150);
      if (lookahead == 'S') ADVANCE(193);
      if (lookahead == 'T') ADVANCE(363);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '^') ADVANCE(104);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '|') ADVANCE(37);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(385);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(386);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(106);
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
      if (lookahead == 'e') ADVANCE(387);
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
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '%') ADVANCE(118);
      if (lookahead == '&') ADVANCE(103);
      if (lookahead == '\'') ADVANCE(47);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(35);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(117);
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == ';') ADVANCE(26);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '>') ADVANCE(109);
      if (lookahead == 'A') ADVANCE(298);
      if (lookahead == 'B') ADVANCE(147);
      if (lookahead == 'D') ADVANCE(222);
      if (lookahead == 'E') ADVANCE(261);
      if (lookahead == 'F') ADVANCE(247);
      if (lookahead == 'I') ADVANCE(187);
      if (lookahead == 'L') ADVANCE(148);
      if (lookahead == 'M') ADVANCE(355);
      if (lookahead == 'O') ADVANCE(171);
      if (lookahead == 'P') ADVANCE(149);
      if (lookahead == 'R') ADVANCE(150);
      if (lookahead == 'S') ADVANCE(193);
      if (lookahead == 'T') ADVANCE(363);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == ']') ADVANCE(66);
      if (lookahead == '^') ADVANCE(104);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '|') ADVANCE(37);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(385);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '#') ADVANCE(63);
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
      if (lookahead == 'A') ADVANCE(298);
      if (lookahead == 'B') ADVANCE(147);
      if (lookahead == 'D') ADVANCE(222);
      if (lookahead == 'E') ADVANCE(261);
      if (lookahead == 'F') ADVANCE(247);
      if (lookahead == 'I') ADVANCE(187);
      if (lookahead == 'L') ADVANCE(148);
      if (lookahead == 'M') ADVANCE(355);
      if (lookahead == 'O') ADVANCE(171);
      if (lookahead == 'P') ADVANCE(149);
      if (lookahead == 'R') ADVANCE(150);
      if (lookahead == 'S') ADVANCE(193);
      if (lookahead == 'T') ADVANCE(363);
      if (lookahead == '[') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '`') ADVANCE(64);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(385);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(386);
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
      if (lookahead == '=') ADVANCE(105);
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
      if (lookahead == '|') ADVANCE(102);
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
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_Bag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_Dictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_Environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_Event);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_IdentityBag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_IdentityDictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_IdentitySet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LazyEnvir);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_MultiLevelIdentityDictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_ObjectTable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_Set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_TwoWayIdentityDictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_Array);
      if (lookahead == '2') ADVANCE(133);
      if (lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_Array2D);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ArrayedCollection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DoubleArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_FloatArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_Int16Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_Int32Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_Int8Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LinkedList);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_List);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_Order);
      if (lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_OrderedIdentitySet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_Pair);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PriorityQueue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RawArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SequenceableCollection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_Signal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SortedList);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_SparseArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SymbolArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(101);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(111);
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(112);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(67);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(61);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '1') ADVANCE(121);
      if (lookahead == '3') ADVANCE(120);
      if (lookahead == '8') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '2') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '6') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'B') ADVANCE(154);
      if (lookahead == 'D') ADVANCE(241);
      if (lookahead == 'S') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'C') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'C') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'D') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'D') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'D') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'E') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'I') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'I') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'I') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'L') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'L') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'L') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'Q') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'S') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'T') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'W') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(384);
      if (lookahead == 'i') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'r') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(205);
      if (lookahead == 'n') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(293);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead == 'o') ADVANCE(301);
      if (lookahead == 'p') ADVANCE(155);
      if (lookahead == 't') ADVANCE(299);
      if (lookahead == 'y') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'o') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'j') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'k') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'm') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'm') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(360);
      if (lookahead == 'v') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(246);
      if (lookahead == 's') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'q') ADVANCE(358);
      if (lookahead == 't') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 's') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 's') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 's') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'v') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'v') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'v') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'w') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'w') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'z') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(385);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(385);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(386);
      END_STATE();
    case 387:
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
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 23},
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
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 24},
  [36] = {.lex_state = 24},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 24},
  [39] = {.lex_state = 24},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 24},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 24},
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
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 24},
  [101] = {.lex_state = 24},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 24},
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
  [126] = {.lex_state = 24},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 24},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 24},
  [140] = {.lex_state = 24},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 24},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 24},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 24},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 24},
  [168] = {.lex_state = 24},
  [169] = {.lex_state = 24},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 24},
  [172] = {.lex_state = 24},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 7},
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
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {(TSStateId)(-1)},
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
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
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
    [sym__expression] = STATE(43),
    [sym__expression_statement] = STATE(202),
    [sym__object] = STATE(87),
    [sym_function_definition] = STATE(142),
    [sym_function_call] = STATE(142),
    [sym_code_block] = STATE(18),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(88),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_variable_definition] = STATE(142),
    [sym_comment] = STATE(1),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(45),
    [anon_sym_Dictionary] = ACTIONS(45),
    [anon_sym_Environment] = ACTIONS(45),
    [anon_sym_Event] = ACTIONS(45),
    [anon_sym_IdentityBag] = ACTIONS(45),
    [anon_sym_IdentityDictionary] = ACTIONS(45),
    [anon_sym_IdentitySet] = ACTIONS(45),
    [anon_sym_LazyEnvir] = ACTIONS(45),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(45),
    [anon_sym_ObjectTable] = ACTIONS(45),
    [anon_sym_Set] = ACTIONS(45),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(45),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(47),
    [anon_sym_ArrayedCollection] = ACTIONS(47),
    [anon_sym_DoubleArray] = ACTIONS(47),
    [anon_sym_FloatArray] = ACTIONS(47),
    [anon_sym_Int16Array] = ACTIONS(47),
    [anon_sym_Int32Array] = ACTIONS(47),
    [anon_sym_Int8Array] = ACTIONS(47),
    [anon_sym_LinkedList] = ACTIONS(47),
    [anon_sym_List] = ACTIONS(47),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(47),
    [anon_sym_Pair] = ACTIONS(47),
    [anon_sym_PriorityQueue] = ACTIONS(47),
    [anon_sym_RawArray] = ACTIONS(47),
    [anon_sym_SequenceableCollection] = ACTIONS(47),
    [anon_sym_Signal] = ACTIONS(47),
    [anon_sym_SortedList] = ACTIONS(47),
    [anon_sym_SparseArray] = ACTIONS(47),
    [anon_sym_String] = ACTIONS(47),
    [anon_sym_SymbolArray] = ACTIONS(47),
    [sym_class] = ACTIONS(49),
  },
  [2] = {
    [sym__expression_statement] = STATE(145),
    [sym__object] = STATE(87),
    [sym_function_definition] = STATE(142),
    [sym_function_call] = STATE(142),
    [sym__expression_sequence] = STATE(180),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_parameter_list] = STATE(6),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(88),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_variable_definition] = STATE(142),
    [sym_comment] = STATE(2),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [aux_sym__expression_sequence_repeat1] = STATE(12),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_arg] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(57),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(45),
    [anon_sym_Dictionary] = ACTIONS(45),
    [anon_sym_Environment] = ACTIONS(45),
    [anon_sym_Event] = ACTIONS(45),
    [anon_sym_IdentityBag] = ACTIONS(45),
    [anon_sym_IdentityDictionary] = ACTIONS(45),
    [anon_sym_IdentitySet] = ACTIONS(45),
    [anon_sym_LazyEnvir] = ACTIONS(45),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(45),
    [anon_sym_ObjectTable] = ACTIONS(45),
    [anon_sym_Set] = ACTIONS(45),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(45),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(47),
    [anon_sym_ArrayedCollection] = ACTIONS(47),
    [anon_sym_DoubleArray] = ACTIONS(47),
    [anon_sym_FloatArray] = ACTIONS(47),
    [anon_sym_Int16Array] = ACTIONS(47),
    [anon_sym_Int32Array] = ACTIONS(47),
    [anon_sym_Int8Array] = ACTIONS(47),
    [anon_sym_LinkedList] = ACTIONS(47),
    [anon_sym_List] = ACTIONS(47),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(47),
    [anon_sym_Pair] = ACTIONS(47),
    [anon_sym_PriorityQueue] = ACTIONS(47),
    [anon_sym_RawArray] = ACTIONS(47),
    [anon_sym_SequenceableCollection] = ACTIONS(47),
    [anon_sym_Signal] = ACTIONS(47),
    [anon_sym_SortedList] = ACTIONS(47),
    [anon_sym_SparseArray] = ACTIONS(47),
    [anon_sym_String] = ACTIONS(47),
    [anon_sym_SymbolArray] = ACTIONS(47),
    [sym_class] = ACTIONS(49),
  },
  [3] = {
    [sym__expression_statement] = STATE(145),
    [sym__object] = STATE(87),
    [sym_function_definition] = STATE(142),
    [sym_function_call] = STATE(142),
    [sym__expression_sequence] = STATE(206),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_parameter_list] = STATE(11),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(88),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_variable_definition] = STATE(142),
    [sym_comment] = STATE(3),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [aux_sym__expression_sequence_repeat1] = STATE(12),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_arg] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(57),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(45),
    [anon_sym_Dictionary] = ACTIONS(45),
    [anon_sym_Environment] = ACTIONS(45),
    [anon_sym_Event] = ACTIONS(45),
    [anon_sym_IdentityBag] = ACTIONS(45),
    [anon_sym_IdentityDictionary] = ACTIONS(45),
    [anon_sym_IdentitySet] = ACTIONS(45),
    [anon_sym_LazyEnvir] = ACTIONS(45),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(45),
    [anon_sym_ObjectTable] = ACTIONS(45),
    [anon_sym_Set] = ACTIONS(45),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(45),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(47),
    [anon_sym_ArrayedCollection] = ACTIONS(47),
    [anon_sym_DoubleArray] = ACTIONS(47),
    [anon_sym_FloatArray] = ACTIONS(47),
    [anon_sym_Int16Array] = ACTIONS(47),
    [anon_sym_Int32Array] = ACTIONS(47),
    [anon_sym_Int8Array] = ACTIONS(47),
    [anon_sym_LinkedList] = ACTIONS(47),
    [anon_sym_List] = ACTIONS(47),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(47),
    [anon_sym_Pair] = ACTIONS(47),
    [anon_sym_PriorityQueue] = ACTIONS(47),
    [anon_sym_RawArray] = ACTIONS(47),
    [anon_sym_SequenceableCollection] = ACTIONS(47),
    [anon_sym_Signal] = ACTIONS(47),
    [anon_sym_SortedList] = ACTIONS(47),
    [anon_sym_SparseArray] = ACTIONS(47),
    [anon_sym_String] = ACTIONS(47),
    [anon_sym_SymbolArray] = ACTIONS(47),
    [sym_class] = ACTIONS(49),
  },
  [4] = {
    [sym__expression_statement] = STATE(145),
    [sym__object] = STATE(87),
    [sym_function_definition] = STATE(142),
    [sym_function_call] = STATE(142),
    [sym__expression_sequence] = STATE(214),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_parameter_list] = STATE(7),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(88),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_variable_definition] = STATE(142),
    [sym_comment] = STATE(4),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [aux_sym__expression_sequence_repeat1] = STATE(12),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_arg] = ACTIONS(55),
    [anon_sym_PIPE] = ACTIONS(57),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(45),
    [anon_sym_Dictionary] = ACTIONS(45),
    [anon_sym_Environment] = ACTIONS(45),
    [anon_sym_Event] = ACTIONS(45),
    [anon_sym_IdentityBag] = ACTIONS(45),
    [anon_sym_IdentityDictionary] = ACTIONS(45),
    [anon_sym_IdentitySet] = ACTIONS(45),
    [anon_sym_LazyEnvir] = ACTIONS(45),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(45),
    [anon_sym_ObjectTable] = ACTIONS(45),
    [anon_sym_Set] = ACTIONS(45),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(45),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(47),
    [anon_sym_ArrayedCollection] = ACTIONS(47),
    [anon_sym_DoubleArray] = ACTIONS(47),
    [anon_sym_FloatArray] = ACTIONS(47),
    [anon_sym_Int16Array] = ACTIONS(47),
    [anon_sym_Int32Array] = ACTIONS(47),
    [anon_sym_Int8Array] = ACTIONS(47),
    [anon_sym_LinkedList] = ACTIONS(47),
    [anon_sym_List] = ACTIONS(47),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(47),
    [anon_sym_Pair] = ACTIONS(47),
    [anon_sym_PriorityQueue] = ACTIONS(47),
    [anon_sym_RawArray] = ACTIONS(47),
    [anon_sym_SequenceableCollection] = ACTIONS(47),
    [anon_sym_Signal] = ACTIONS(47),
    [anon_sym_SortedList] = ACTIONS(47),
    [anon_sym_SparseArray] = ACTIONS(47),
    [anon_sym_String] = ACTIONS(47),
    [anon_sym_SymbolArray] = ACTIONS(47),
    [sym_class] = ACTIONS(49),
  },
  [5] = {
    [sym__expression_statement] = STATE(145),
    [sym__object] = STATE(87),
    [sym_function_definition] = STATE(142),
    [sym_function_call] = STATE(142),
    [sym__expression_sequence] = STATE(209),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(59),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(88),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_variable_definition] = STATE(142),
    [sym_comment] = STATE(5),
    [sym_collection] = STATE(70),
    [sym__paired_associative_sequence] = STATE(213),
    [sym_associative_item] = STATE(152),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [aux_sym__expression_sequence_repeat1] = STATE(12),
    [sym_identifier] = ACTIONS(59),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(61),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(45),
    [anon_sym_Dictionary] = ACTIONS(45),
    [anon_sym_Environment] = ACTIONS(45),
    [anon_sym_Event] = ACTIONS(45),
    [anon_sym_IdentityBag] = ACTIONS(45),
    [anon_sym_IdentityDictionary] = ACTIONS(45),
    [anon_sym_IdentitySet] = ACTIONS(45),
    [anon_sym_LazyEnvir] = ACTIONS(45),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(45),
    [anon_sym_ObjectTable] = ACTIONS(45),
    [anon_sym_Set] = ACTIONS(45),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(45),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(47),
    [anon_sym_ArrayedCollection] = ACTIONS(47),
    [anon_sym_DoubleArray] = ACTIONS(47),
    [anon_sym_FloatArray] = ACTIONS(47),
    [anon_sym_Int16Array] = ACTIONS(47),
    [anon_sym_Int32Array] = ACTIONS(47),
    [anon_sym_Int8Array] = ACTIONS(47),
    [anon_sym_LinkedList] = ACTIONS(47),
    [anon_sym_List] = ACTIONS(47),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(47),
    [anon_sym_Pair] = ACTIONS(47),
    [anon_sym_PriorityQueue] = ACTIONS(47),
    [anon_sym_RawArray] = ACTIONS(47),
    [anon_sym_SequenceableCollection] = ACTIONS(47),
    [anon_sym_Signal] = ACTIONS(47),
    [anon_sym_SortedList] = ACTIONS(47),
    [anon_sym_SparseArray] = ACTIONS(47),
    [anon_sym_String] = ACTIONS(47),
    [anon_sym_SymbolArray] = ACTIONS(47),
    [sym_class] = ACTIONS(49),
  },
  [6] = {
    [sym__expression_statement] = STATE(145),
    [sym__object] = STATE(87),
    [sym_function_definition] = STATE(142),
    [sym_function_call] = STATE(142),
    [sym__expression_sequence] = STATE(174),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(88),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_variable_definition] = STATE(142),
    [sym_comment] = STATE(6),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [aux_sym__expression_sequence_repeat1] = STATE(12),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(63),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(65),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(45),
    [anon_sym_Dictionary] = ACTIONS(45),
    [anon_sym_Environment] = ACTIONS(45),
    [anon_sym_Event] = ACTIONS(45),
    [anon_sym_IdentityBag] = ACTIONS(45),
    [anon_sym_IdentityDictionary] = ACTIONS(45),
    [anon_sym_IdentitySet] = ACTIONS(45),
    [anon_sym_LazyEnvir] = ACTIONS(45),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(45),
    [anon_sym_ObjectTable] = ACTIONS(45),
    [anon_sym_Set] = ACTIONS(45),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(45),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(47),
    [anon_sym_ArrayedCollection] = ACTIONS(47),
    [anon_sym_DoubleArray] = ACTIONS(47),
    [anon_sym_FloatArray] = ACTIONS(47),
    [anon_sym_Int16Array] = ACTIONS(47),
    [anon_sym_Int32Array] = ACTIONS(47),
    [anon_sym_Int8Array] = ACTIONS(47),
    [anon_sym_LinkedList] = ACTIONS(47),
    [anon_sym_List] = ACTIONS(47),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(47),
    [anon_sym_Pair] = ACTIONS(47),
    [anon_sym_PriorityQueue] = ACTIONS(47),
    [anon_sym_RawArray] = ACTIONS(47),
    [anon_sym_SequenceableCollection] = ACTIONS(47),
    [anon_sym_Signal] = ACTIONS(47),
    [anon_sym_SortedList] = ACTIONS(47),
    [anon_sym_SparseArray] = ACTIONS(47),
    [anon_sym_String] = ACTIONS(47),
    [anon_sym_SymbolArray] = ACTIONS(47),
    [sym_class] = ACTIONS(49),
  },
  [7] = {
    [sym__expression_statement] = STATE(145),
    [sym__object] = STATE(87),
    [sym_function_definition] = STATE(142),
    [sym_function_call] = STATE(142),
    [sym__expression_sequence] = STATE(190),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(88),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_variable_definition] = STATE(142),
    [sym_comment] = STATE(7),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [aux_sym__expression_sequence_repeat1] = STATE(12),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(65),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(45),
    [anon_sym_Dictionary] = ACTIONS(45),
    [anon_sym_Environment] = ACTIONS(45),
    [anon_sym_Event] = ACTIONS(45),
    [anon_sym_IdentityBag] = ACTIONS(45),
    [anon_sym_IdentityDictionary] = ACTIONS(45),
    [anon_sym_IdentitySet] = ACTIONS(45),
    [anon_sym_LazyEnvir] = ACTIONS(45),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(45),
    [anon_sym_ObjectTable] = ACTIONS(45),
    [anon_sym_Set] = ACTIONS(45),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(45),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(47),
    [anon_sym_ArrayedCollection] = ACTIONS(47),
    [anon_sym_DoubleArray] = ACTIONS(47),
    [anon_sym_FloatArray] = ACTIONS(47),
    [anon_sym_Int16Array] = ACTIONS(47),
    [anon_sym_Int32Array] = ACTIONS(47),
    [anon_sym_Int8Array] = ACTIONS(47),
    [anon_sym_LinkedList] = ACTIONS(47),
    [anon_sym_List] = ACTIONS(47),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(47),
    [anon_sym_Pair] = ACTIONS(47),
    [anon_sym_PriorityQueue] = ACTIONS(47),
    [anon_sym_RawArray] = ACTIONS(47),
    [anon_sym_SequenceableCollection] = ACTIONS(47),
    [anon_sym_Signal] = ACTIONS(47),
    [anon_sym_SortedList] = ACTIONS(47),
    [anon_sym_SparseArray] = ACTIONS(47),
    [anon_sym_String] = ACTIONS(47),
    [anon_sym_SymbolArray] = ACTIONS(47),
    [sym_class] = ACTIONS(49),
  },
  [8] = {
    [sym_comment] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym_identifier] = ACTIONS(69),
    [anon_sym_SEMI] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(69),
    [anon_sym_while] = ACTIONS(69),
    [anon_sym_EQ] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(69),
    [anon_sym_LPAREN] = ACTIONS(67),
    [anon_sym_RPAREN] = ACTIONS(67),
    [anon_sym_LBRACE] = ACTIONS(67),
    [anon_sym_RBRACE] = ACTIONS(67),
    [anon_sym_COMMA] = ACTIONS(67),
    [anon_sym_PIPE] = ACTIONS(69),
    [anon_sym_BSLASH] = ACTIONS(67),
    [sym_integer] = ACTIONS(69),
    [sym_hexinteger] = ACTIONS(67),
    [sym_float] = ACTIONS(67),
    [anon_sym_SQUOTE] = ACTIONS(67),
    [sym_char] = ACTIONS(67),
    [anon_sym_DQUOTE] = ACTIONS(67),
    [anon_sym_true] = ACTIONS(69),
    [anon_sym_false] = ACTIONS(69),
    [anon_sym_var] = ACTIONS(69),
    [anon_sym_classvar] = ACTIONS(69),
    [aux_sym_environment_var_token1] = ACTIONS(69),
    [anon_sym_TILDE] = ACTIONS(67),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(67),
    [anon_sym_BQUOTE] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_RBRACK] = ACTIONS(67),
    [anon_sym_Bag] = ACTIONS(69),
    [anon_sym_Dictionary] = ACTIONS(69),
    [anon_sym_Environment] = ACTIONS(69),
    [anon_sym_Event] = ACTIONS(69),
    [anon_sym_IdentityBag] = ACTIONS(69),
    [anon_sym_IdentityDictionary] = ACTIONS(69),
    [anon_sym_IdentitySet] = ACTIONS(69),
    [anon_sym_LazyEnvir] = ACTIONS(69),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(69),
    [anon_sym_ObjectTable] = ACTIONS(69),
    [anon_sym_Set] = ACTIONS(69),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(69),
    [anon_sym_Array] = ACTIONS(69),
    [anon_sym_Array2D] = ACTIONS(69),
    [anon_sym_ArrayedCollection] = ACTIONS(69),
    [anon_sym_DoubleArray] = ACTIONS(69),
    [anon_sym_FloatArray] = ACTIONS(69),
    [anon_sym_Int16Array] = ACTIONS(69),
    [anon_sym_Int32Array] = ACTIONS(69),
    [anon_sym_Int8Array] = ACTIONS(69),
    [anon_sym_LinkedList] = ACTIONS(69),
    [anon_sym_List] = ACTIONS(69),
    [anon_sym_Order] = ACTIONS(69),
    [anon_sym_OrderedIdentitySet] = ACTIONS(69),
    [anon_sym_Pair] = ACTIONS(69),
    [anon_sym_PriorityQueue] = ACTIONS(69),
    [anon_sym_RawArray] = ACTIONS(69),
    [anon_sym_SequenceableCollection] = ACTIONS(69),
    [anon_sym_Signal] = ACTIONS(69),
    [anon_sym_SortedList] = ACTIONS(69),
    [anon_sym_SparseArray] = ACTIONS(69),
    [anon_sym_String] = ACTIONS(69),
    [anon_sym_SymbolArray] = ACTIONS(69),
    [anon_sym_AMP_AMP] = ACTIONS(67),
    [anon_sym_PIPE_PIPE] = ACTIONS(67),
    [anon_sym_AMP] = ACTIONS(69),
    [anon_sym_CARET] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(69),
    [anon_sym_LT_EQ] = ACTIONS(67),
    [anon_sym_GT] = ACTIONS(69),
    [anon_sym_GT_EQ] = ACTIONS(67),
    [anon_sym_LT_LT] = ACTIONS(67),
    [anon_sym_GT_GT] = ACTIONS(67),
    [anon_sym_PLUS] = ACTIONS(67),
    [anon_sym_DASH] = ACTIONS(67),
    [anon_sym_STAR] = ACTIONS(67),
    [anon_sym_SLASH] = ACTIONS(69),
    [anon_sym_PERCENT] = ACTIONS(67),
    [sym_class] = ACTIONS(69),
    [anon_sym_DOTwhile] = ACTIONS(67),
  },
  [9] = {
    [sym__expression] = STATE(43),
    [sym__expression_statement] = STATE(202),
    [sym__object] = STATE(87),
    [sym_function_definition] = STATE(142),
    [sym_function_call] = STATE(142),
    [sym_code_block] = STATE(18),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(88),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_variable_definition] = STATE(142),
    [sym_comment] = STATE(9),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(71),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(45),
    [anon_sym_Dictionary] = ACTIONS(45),
    [anon_sym_Environment] = ACTIONS(45),
    [anon_sym_Event] = ACTIONS(45),
    [anon_sym_IdentityBag] = ACTIONS(45),
    [anon_sym_IdentityDictionary] = ACTIONS(45),
    [anon_sym_IdentitySet] = ACTIONS(45),
    [anon_sym_LazyEnvir] = ACTIONS(45),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(45),
    [anon_sym_ObjectTable] = ACTIONS(45),
    [anon_sym_Set] = ACTIONS(45),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(45),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(47),
    [anon_sym_ArrayedCollection] = ACTIONS(47),
    [anon_sym_DoubleArray] = ACTIONS(47),
    [anon_sym_FloatArray] = ACTIONS(47),
    [anon_sym_Int16Array] = ACTIONS(47),
    [anon_sym_Int32Array] = ACTIONS(47),
    [anon_sym_Int8Array] = ACTIONS(47),
    [anon_sym_LinkedList] = ACTIONS(47),
    [anon_sym_List] = ACTIONS(47),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(47),
    [anon_sym_Pair] = ACTIONS(47),
    [anon_sym_PriorityQueue] = ACTIONS(47),
    [anon_sym_RawArray] = ACTIONS(47),
    [anon_sym_SequenceableCollection] = ACTIONS(47),
    [anon_sym_Signal] = ACTIONS(47),
    [anon_sym_SortedList] = ACTIONS(47),
    [anon_sym_SparseArray] = ACTIONS(47),
    [anon_sym_String] = ACTIONS(47),
    [anon_sym_SymbolArray] = ACTIONS(47),
    [sym_class] = ACTIONS(49),
  },
  [10] = {
    [sym__expression] = STATE(43),
    [sym__expression_statement] = STATE(202),
    [sym__object] = STATE(87),
    [sym_function_definition] = STATE(142),
    [sym_function_call] = STATE(142),
    [sym_code_block] = STATE(18),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(88),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_variable_definition] = STATE(142),
    [sym_comment] = STATE(10),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_identifier] = ACTIONS(75),
    [anon_sym_if] = ACTIONS(78),
    [anon_sym_while] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_BSLASH] = ACTIONS(90),
    [sym_integer] = ACTIONS(93),
    [sym_hexinteger] = ACTIONS(96),
    [sym_float] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [sym_char] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(108),
    [anon_sym_false] = ACTIONS(108),
    [anon_sym_var] = ACTIONS(111),
    [anon_sym_classvar] = ACTIONS(114),
    [aux_sym_environment_var_token1] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(120),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(123),
    [anon_sym_BQUOTE] = ACTIONS(123),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_Bag] = ACTIONS(129),
    [anon_sym_Dictionary] = ACTIONS(129),
    [anon_sym_Environment] = ACTIONS(129),
    [anon_sym_Event] = ACTIONS(129),
    [anon_sym_IdentityBag] = ACTIONS(129),
    [anon_sym_IdentityDictionary] = ACTIONS(129),
    [anon_sym_IdentitySet] = ACTIONS(129),
    [anon_sym_LazyEnvir] = ACTIONS(129),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(129),
    [anon_sym_ObjectTable] = ACTIONS(129),
    [anon_sym_Set] = ACTIONS(129),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(129),
    [anon_sym_Array] = ACTIONS(132),
    [anon_sym_Array2D] = ACTIONS(132),
    [anon_sym_ArrayedCollection] = ACTIONS(132),
    [anon_sym_DoubleArray] = ACTIONS(132),
    [anon_sym_FloatArray] = ACTIONS(132),
    [anon_sym_Int16Array] = ACTIONS(132),
    [anon_sym_Int32Array] = ACTIONS(132),
    [anon_sym_Int8Array] = ACTIONS(132),
    [anon_sym_LinkedList] = ACTIONS(132),
    [anon_sym_List] = ACTIONS(132),
    [anon_sym_Order] = ACTIONS(132),
    [anon_sym_OrderedIdentitySet] = ACTIONS(132),
    [anon_sym_Pair] = ACTIONS(132),
    [anon_sym_PriorityQueue] = ACTIONS(132),
    [anon_sym_RawArray] = ACTIONS(132),
    [anon_sym_SequenceableCollection] = ACTIONS(132),
    [anon_sym_Signal] = ACTIONS(132),
    [anon_sym_SortedList] = ACTIONS(132),
    [anon_sym_SparseArray] = ACTIONS(132),
    [anon_sym_String] = ACTIONS(132),
    [anon_sym_SymbolArray] = ACTIONS(132),
    [sym_class] = ACTIONS(135),
  },
  [11] = {
    [sym__expression_statement] = STATE(145),
    [sym__object] = STATE(87),
    [sym_function_definition] = STATE(142),
    [sym_function_call] = STATE(142),
    [sym__expression_sequence] = STATE(189),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(88),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_variable_definition] = STATE(142),
    [sym_comment] = STATE(11),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [aux_sym__expression_sequence_repeat1] = STATE(12),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(63),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(45),
    [anon_sym_Dictionary] = ACTIONS(45),
    [anon_sym_Environment] = ACTIONS(45),
    [anon_sym_Event] = ACTIONS(45),
    [anon_sym_IdentityBag] = ACTIONS(45),
    [anon_sym_IdentityDictionary] = ACTIONS(45),
    [anon_sym_IdentitySet] = ACTIONS(45),
    [anon_sym_LazyEnvir] = ACTIONS(45),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(45),
    [anon_sym_ObjectTable] = ACTIONS(45),
    [anon_sym_Set] = ACTIONS(45),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(45),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(47),
    [anon_sym_ArrayedCollection] = ACTIONS(47),
    [anon_sym_DoubleArray] = ACTIONS(47),
    [anon_sym_FloatArray] = ACTIONS(47),
    [anon_sym_Int16Array] = ACTIONS(47),
    [anon_sym_Int32Array] = ACTIONS(47),
    [anon_sym_Int8Array] = ACTIONS(47),
    [anon_sym_LinkedList] = ACTIONS(47),
    [anon_sym_List] = ACTIONS(47),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(47),
    [anon_sym_Pair] = ACTIONS(47),
    [anon_sym_PriorityQueue] = ACTIONS(47),
    [anon_sym_RawArray] = ACTIONS(47),
    [anon_sym_SequenceableCollection] = ACTIONS(47),
    [anon_sym_Signal] = ACTIONS(47),
    [anon_sym_SortedList] = ACTIONS(47),
    [anon_sym_SparseArray] = ACTIONS(47),
    [anon_sym_String] = ACTIONS(47),
    [anon_sym_SymbolArray] = ACTIONS(47),
    [sym_class] = ACTIONS(49),
  },
  [12] = {
    [sym__expression_statement] = STATE(129),
    [sym__object] = STATE(87),
    [sym_function_definition] = STATE(142),
    [sym_function_call] = STATE(142),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(88),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_variable_definition] = STATE(142),
    [sym_comment] = STATE(12),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [aux_sym__expression_sequence_repeat1] = STATE(13),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(45),
    [anon_sym_Dictionary] = ACTIONS(45),
    [anon_sym_Environment] = ACTIONS(45),
    [anon_sym_Event] = ACTIONS(45),
    [anon_sym_IdentityBag] = ACTIONS(45),
    [anon_sym_IdentityDictionary] = ACTIONS(45),
    [anon_sym_IdentitySet] = ACTIONS(45),
    [anon_sym_LazyEnvir] = ACTIONS(45),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(45),
    [anon_sym_ObjectTable] = ACTIONS(45),
    [anon_sym_Set] = ACTIONS(45),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(45),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(47),
    [anon_sym_ArrayedCollection] = ACTIONS(47),
    [anon_sym_DoubleArray] = ACTIONS(47),
    [anon_sym_FloatArray] = ACTIONS(47),
    [anon_sym_Int16Array] = ACTIONS(47),
    [anon_sym_Int32Array] = ACTIONS(47),
    [anon_sym_Int8Array] = ACTIONS(47),
    [anon_sym_LinkedList] = ACTIONS(47),
    [anon_sym_List] = ACTIONS(47),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(47),
    [anon_sym_Pair] = ACTIONS(47),
    [anon_sym_PriorityQueue] = ACTIONS(47),
    [anon_sym_RawArray] = ACTIONS(47),
    [anon_sym_SequenceableCollection] = ACTIONS(47),
    [anon_sym_Signal] = ACTIONS(47),
    [anon_sym_SortedList] = ACTIONS(47),
    [anon_sym_SparseArray] = ACTIONS(47),
    [anon_sym_String] = ACTIONS(47),
    [anon_sym_SymbolArray] = ACTIONS(47),
    [sym_class] = ACTIONS(49),
  },
  [13] = {
    [sym__expression_statement] = STATE(205),
    [sym__object] = STATE(87),
    [sym_function_definition] = STATE(142),
    [sym_function_call] = STATE(142),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(88),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_variable_definition] = STATE(142),
    [sym_comment] = STATE(13),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [aux_sym__expression_sequence_repeat1] = STATE(13),
    [sym_identifier] = ACTIONS(138),
    [anon_sym_if] = ACTIONS(141),
    [anon_sym_while] = ACTIONS(144),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_BSLASH] = ACTIONS(153),
    [sym_integer] = ACTIONS(156),
    [sym_hexinteger] = ACTIONS(159),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [sym_char] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [anon_sym_true] = ACTIONS(171),
    [anon_sym_false] = ACTIONS(171),
    [anon_sym_var] = ACTIONS(174),
    [anon_sym_classvar] = ACTIONS(177),
    [aux_sym_environment_var_token1] = ACTIONS(180),
    [anon_sym_TILDE] = ACTIONS(183),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(186),
    [anon_sym_BQUOTE] = ACTIONS(186),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_Bag] = ACTIONS(192),
    [anon_sym_Dictionary] = ACTIONS(192),
    [anon_sym_Environment] = ACTIONS(192),
    [anon_sym_Event] = ACTIONS(192),
    [anon_sym_IdentityBag] = ACTIONS(192),
    [anon_sym_IdentityDictionary] = ACTIONS(192),
    [anon_sym_IdentitySet] = ACTIONS(192),
    [anon_sym_LazyEnvir] = ACTIONS(192),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(192),
    [anon_sym_ObjectTable] = ACTIONS(192),
    [anon_sym_Set] = ACTIONS(192),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(192),
    [anon_sym_Array] = ACTIONS(195),
    [anon_sym_Array2D] = ACTIONS(195),
    [anon_sym_ArrayedCollection] = ACTIONS(195),
    [anon_sym_DoubleArray] = ACTIONS(195),
    [anon_sym_FloatArray] = ACTIONS(195),
    [anon_sym_Int16Array] = ACTIONS(195),
    [anon_sym_Int32Array] = ACTIONS(195),
    [anon_sym_Int8Array] = ACTIONS(195),
    [anon_sym_LinkedList] = ACTIONS(195),
    [anon_sym_List] = ACTIONS(195),
    [anon_sym_Order] = ACTIONS(195),
    [anon_sym_OrderedIdentitySet] = ACTIONS(195),
    [anon_sym_Pair] = ACTIONS(195),
    [anon_sym_PriorityQueue] = ACTIONS(195),
    [anon_sym_RawArray] = ACTIONS(195),
    [anon_sym_SequenceableCollection] = ACTIONS(195),
    [anon_sym_Signal] = ACTIONS(195),
    [anon_sym_SortedList] = ACTIONS(195),
    [anon_sym_SparseArray] = ACTIONS(195),
    [anon_sym_String] = ACTIONS(195),
    [anon_sym_SymbolArray] = ACTIONS(195),
    [sym_class] = ACTIONS(198),
  },
  [14] = {
    [sym__object] = STATE(98),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_parameter_call_list] = STATE(186),
    [sym_argument_calls] = STATE(117),
    [sym_unnamed_argument] = STATE(162),
    [sym_named_argument] = STATE(162),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(14),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [sym_identifier] = ACTIONS(201),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(203),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(205),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [15] = {
    [sym__object] = STATE(98),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_parameter_call_list] = STATE(208),
    [sym_argument_calls] = STATE(117),
    [sym_unnamed_argument] = STATE(162),
    [sym_named_argument] = STATE(162),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(15),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [sym_identifier] = ACTIONS(201),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(205),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [16] = {
    [sym__object] = STATE(98),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_parameter_call_list] = STATE(215),
    [sym_argument_calls] = STATE(117),
    [sym_unnamed_argument] = STATE(162),
    [sym_named_argument] = STATE(162),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(16),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [sym_identifier] = ACTIONS(201),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(205),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [17] = {
    [sym__object] = STATE(98),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_parameter_call_list] = STATE(188),
    [sym_argument_calls] = STATE(117),
    [sym_unnamed_argument] = STATE(162),
    [sym_named_argument] = STATE(162),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(17),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [sym_identifier] = ACTIONS(201),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(215),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(205),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [18] = {
    [sym_comment] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(217),
    [sym_identifier] = ACTIONS(219),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_if] = ACTIONS(219),
    [anon_sym_while] = ACTIONS(219),
    [anon_sym_EQ] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(223),
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_LBRACE] = ACTIONS(217),
    [anon_sym_PIPE] = ACTIONS(223),
    [anon_sym_BSLASH] = ACTIONS(217),
    [sym_integer] = ACTIONS(219),
    [sym_hexinteger] = ACTIONS(217),
    [sym_float] = ACTIONS(217),
    [anon_sym_SQUOTE] = ACTIONS(217),
    [sym_char] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [anon_sym_true] = ACTIONS(219),
    [anon_sym_false] = ACTIONS(219),
    [anon_sym_var] = ACTIONS(219),
    [anon_sym_classvar] = ACTIONS(219),
    [aux_sym_environment_var_token1] = ACTIONS(219),
    [anon_sym_TILDE] = ACTIONS(217),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(217),
    [anon_sym_BQUOTE] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_Bag] = ACTIONS(219),
    [anon_sym_Dictionary] = ACTIONS(219),
    [anon_sym_Environment] = ACTIONS(219),
    [anon_sym_Event] = ACTIONS(219),
    [anon_sym_IdentityBag] = ACTIONS(219),
    [anon_sym_IdentityDictionary] = ACTIONS(219),
    [anon_sym_IdentitySet] = ACTIONS(219),
    [anon_sym_LazyEnvir] = ACTIONS(219),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(219),
    [anon_sym_ObjectTable] = ACTIONS(219),
    [anon_sym_Set] = ACTIONS(219),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(219),
    [anon_sym_Array] = ACTIONS(219),
    [anon_sym_Array2D] = ACTIONS(219),
    [anon_sym_ArrayedCollection] = ACTIONS(219),
    [anon_sym_DoubleArray] = ACTIONS(219),
    [anon_sym_FloatArray] = ACTIONS(219),
    [anon_sym_Int16Array] = ACTIONS(219),
    [anon_sym_Int32Array] = ACTIONS(219),
    [anon_sym_Int8Array] = ACTIONS(219),
    [anon_sym_LinkedList] = ACTIONS(219),
    [anon_sym_List] = ACTIONS(219),
    [anon_sym_Order] = ACTIONS(219),
    [anon_sym_OrderedIdentitySet] = ACTIONS(219),
    [anon_sym_Pair] = ACTIONS(219),
    [anon_sym_PriorityQueue] = ACTIONS(219),
    [anon_sym_RawArray] = ACTIONS(219),
    [anon_sym_SequenceableCollection] = ACTIONS(219),
    [anon_sym_Signal] = ACTIONS(219),
    [anon_sym_SortedList] = ACTIONS(219),
    [anon_sym_SparseArray] = ACTIONS(219),
    [anon_sym_String] = ACTIONS(219),
    [anon_sym_SymbolArray] = ACTIONS(219),
    [anon_sym_AMP_AMP] = ACTIONS(221),
    [anon_sym_PIPE_PIPE] = ACTIONS(221),
    [anon_sym_AMP] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(221),
    [anon_sym_EQ_EQ] = ACTIONS(221),
    [anon_sym_BANG_EQ] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_LT_EQ] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(223),
    [anon_sym_GT_EQ] = ACTIONS(221),
    [anon_sym_LT_LT] = ACTIONS(221),
    [anon_sym_GT_GT] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(221),
    [sym_class] = ACTIONS(219),
    [anon_sym_DOTwhile] = ACTIONS(221),
  },
  [19] = {
    [sym__object] = STATE(98),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_argument_calls] = STATE(181),
    [sym_unnamed_argument] = STATE(162),
    [sym_named_argument] = STATE(162),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(19),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [sym_identifier] = ACTIONS(201),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(205),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [20] = {
    [sym__object] = STATE(91),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(59),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(20),
    [sym_collection] = STATE(70),
    [sym__collection_sequence] = STATE(207),
    [sym_associative_item] = STATE(146),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [sym_identifier] = ACTIONS(59),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [21] = {
    [sym__object] = STATE(91),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(59),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(21),
    [sym_collection] = STATE(70),
    [sym__collection_sequence] = STATE(184),
    [sym_associative_item] = STATE(146),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [sym_identifier] = ACTIONS(59),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [22] = {
    [sym__object] = STATE(97),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(59),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(22),
    [sym_collection] = STATE(70),
    [sym_associative_item] = STATE(160),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [sym_identifier] = ACTIONS(59),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [23] = {
    [sym__object] = STATE(95),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(23),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [24] = {
    [sym__object] = STATE(61),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(24),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [25] = {
    [sym__object] = STATE(85),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(25),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [26] = {
    [sym__object] = STATE(60),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(26),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [27] = {
    [sym__object] = STATE(54),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(27),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [28] = {
    [sym__object] = STATE(86),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(28),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [29] = {
    [sym__object] = STATE(51),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(29),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [30] = {
    [sym__object] = STATE(50),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(30),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [31] = {
    [sym__object] = STATE(96),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(31),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [32] = {
    [sym__object] = STATE(63),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(32),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [33] = {
    [sym__object] = STATE(49),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(33),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [34] = {
    [sym__object] = STATE(94),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(92),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(34),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [35] = {
    [sym__object] = STATE(99),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(35),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [36] = {
    [sym__object] = STATE(93),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(36),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
  [37] = {
    [sym__object] = STATE(74),
    [sym_code_block] = STATE(70),
    [sym_function_block] = STATE(70),
    [sym_literal] = STATE(70),
    [sym_number] = STATE(82),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(82),
    [sym_bool] = STATE(82),
    [sym_variable] = STATE(70),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_comment] = STATE(37),
    [sym_collection] = STATE(70),
    [sym__collection_types] = STATE(176),
    [sym__unordered_collection_types] = STATE(170),
    [sym__ordered_collection_types] = STATE(170),
    [sym_binary_expression] = STATE(70),
    [sym_control_structure] = STATE(70),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
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
    [anon_sym_POUND] = ACTIONS(41),
    [anon_sym_BQUOTE] = ACTIONS(41),
    [anon_sym_LBRACK] = ACTIONS(43),
    [anon_sym_Bag] = ACTIONS(207),
    [anon_sym_Dictionary] = ACTIONS(207),
    [anon_sym_Environment] = ACTIONS(207),
    [anon_sym_Event] = ACTIONS(207),
    [anon_sym_IdentityBag] = ACTIONS(207),
    [anon_sym_IdentityDictionary] = ACTIONS(207),
    [anon_sym_IdentitySet] = ACTIONS(207),
    [anon_sym_LazyEnvir] = ACTIONS(207),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(207),
    [anon_sym_ObjectTable] = ACTIONS(207),
    [anon_sym_Set] = ACTIONS(207),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(207),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(209),
    [anon_sym_ArrayedCollection] = ACTIONS(209),
    [anon_sym_DoubleArray] = ACTIONS(209),
    [anon_sym_FloatArray] = ACTIONS(209),
    [anon_sym_Int16Array] = ACTIONS(209),
    [anon_sym_Int32Array] = ACTIONS(209),
    [anon_sym_Int8Array] = ACTIONS(209),
    [anon_sym_LinkedList] = ACTIONS(209),
    [anon_sym_List] = ACTIONS(209),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(209),
    [anon_sym_Pair] = ACTIONS(209),
    [anon_sym_PriorityQueue] = ACTIONS(209),
    [anon_sym_RawArray] = ACTIONS(209),
    [anon_sym_SequenceableCollection] = ACTIONS(209),
    [anon_sym_Signal] = ACTIONS(209),
    [anon_sym_SortedList] = ACTIONS(209),
    [anon_sym_SparseArray] = ACTIONS(209),
    [anon_sym_String] = ACTIONS(209),
    [anon_sym_SymbolArray] = ACTIONS(209),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(38), 1,
      sym_comment,
    ACTIONS(227), 14,
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
      anon_sym_POUND,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(225), 43,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      anon_sym_Bag,
      anon_sym_Dictionary,
      anon_sym_Environment,
      anon_sym_Event,
      anon_sym_IdentityBag,
      anon_sym_IdentityDictionary,
      anon_sym_IdentitySet,
      anon_sym_LazyEnvir,
      anon_sym_MultiLevelIdentityDictionary,
      anon_sym_ObjectTable,
      anon_sym_Set,
      anon_sym_TwoWayIdentityDictionary,
      anon_sym_Array,
      anon_sym_Array2D,
      anon_sym_ArrayedCollection,
      anon_sym_DoubleArray,
      anon_sym_FloatArray,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_Int8Array,
      anon_sym_LinkedList,
      anon_sym_List,
      anon_sym_Order,
      anon_sym_OrderedIdentitySet,
      anon_sym_Pair,
      anon_sym_PriorityQueue,
      anon_sym_RawArray,
      anon_sym_SequenceableCollection,
      anon_sym_Signal,
      anon_sym_SortedList,
      anon_sym_SparseArray,
      anon_sym_String,
      anon_sym_SymbolArray,
      sym_class,
      sym_identifier,
  [71] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(39), 1,
      sym_comment,
    ACTIONS(231), 14,
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
      anon_sym_POUND,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(229), 43,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      anon_sym_Bag,
      anon_sym_Dictionary,
      anon_sym_Environment,
      anon_sym_Event,
      anon_sym_IdentityBag,
      anon_sym_IdentityDictionary,
      anon_sym_IdentitySet,
      anon_sym_LazyEnvir,
      anon_sym_MultiLevelIdentityDictionary,
      anon_sym_ObjectTable,
      anon_sym_Set,
      anon_sym_TwoWayIdentityDictionary,
      anon_sym_Array,
      anon_sym_Array2D,
      anon_sym_ArrayedCollection,
      anon_sym_DoubleArray,
      anon_sym_FloatArray,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_Int8Array,
      anon_sym_LinkedList,
      anon_sym_List,
      anon_sym_Order,
      anon_sym_OrderedIdentitySet,
      anon_sym_Pair,
      anon_sym_PriorityQueue,
      anon_sym_RawArray,
      anon_sym_SequenceableCollection,
      anon_sym_Signal,
      anon_sym_SortedList,
      anon_sym_SparseArray,
      anon_sym_String,
      anon_sym_SymbolArray,
      sym_class,
      sym_identifier,
  [142] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(40), 1,
      sym_comment,
    ACTIONS(237), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(235), 12,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      sym_float,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(233), 43,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      anon_sym_Bag,
      anon_sym_Dictionary,
      anon_sym_Environment,
      anon_sym_Event,
      anon_sym_IdentityBag,
      anon_sym_IdentityDictionary,
      anon_sym_IdentitySet,
      anon_sym_LazyEnvir,
      anon_sym_MultiLevelIdentityDictionary,
      anon_sym_ObjectTable,
      anon_sym_Set,
      anon_sym_TwoWayIdentityDictionary,
      anon_sym_Array,
      anon_sym_Array2D,
      anon_sym_ArrayedCollection,
      anon_sym_DoubleArray,
      anon_sym_FloatArray,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_Int8Array,
      anon_sym_LinkedList,
      anon_sym_List,
      anon_sym_Order,
      anon_sym_OrderedIdentitySet,
      anon_sym_Pair,
      anon_sym_PriorityQueue,
      anon_sym_RawArray,
      anon_sym_SequenceableCollection,
      anon_sym_Signal,
      anon_sym_SortedList,
      anon_sym_SparseArray,
      anon_sym_String,
      anon_sym_SymbolArray,
      sym_class,
      sym_identifier,
  [215] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(41), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(235), 12,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      sym_float,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(233), 43,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      anon_sym_Bag,
      anon_sym_Dictionary,
      anon_sym_Environment,
      anon_sym_Event,
      anon_sym_IdentityBag,
      anon_sym_IdentityDictionary,
      anon_sym_IdentitySet,
      anon_sym_LazyEnvir,
      anon_sym_MultiLevelIdentityDictionary,
      anon_sym_ObjectTable,
      anon_sym_Set,
      anon_sym_TwoWayIdentityDictionary,
      anon_sym_Array,
      anon_sym_Array2D,
      anon_sym_ArrayedCollection,
      anon_sym_DoubleArray,
      anon_sym_FloatArray,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_Int8Array,
      anon_sym_LinkedList,
      anon_sym_List,
      anon_sym_Order,
      anon_sym_OrderedIdentitySet,
      anon_sym_Pair,
      anon_sym_PriorityQueue,
      anon_sym_RawArray,
      anon_sym_SequenceableCollection,
      anon_sym_Signal,
      anon_sym_SortedList,
      anon_sym_SparseArray,
      anon_sym_String,
      anon_sym_SymbolArray,
      sym_class,
      sym_identifier,
  [288] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(42), 1,
      sym_comment,
    ACTIONS(243), 14,
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
      anon_sym_POUND,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(241), 43,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      anon_sym_Bag,
      anon_sym_Dictionary,
      anon_sym_Environment,
      anon_sym_Event,
      anon_sym_IdentityBag,
      anon_sym_IdentityDictionary,
      anon_sym_IdentitySet,
      anon_sym_LazyEnvir,
      anon_sym_MultiLevelIdentityDictionary,
      anon_sym_ObjectTable,
      anon_sym_Set,
      anon_sym_TwoWayIdentityDictionary,
      anon_sym_Array,
      anon_sym_Array2D,
      anon_sym_ArrayedCollection,
      anon_sym_DoubleArray,
      anon_sym_FloatArray,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_Int8Array,
      anon_sym_LinkedList,
      anon_sym_List,
      anon_sym_Order,
      anon_sym_OrderedIdentitySet,
      anon_sym_Pair,
      anon_sym_PriorityQueue,
      anon_sym_RawArray,
      anon_sym_SequenceableCollection,
      anon_sym_Signal,
      anon_sym_SortedList,
      anon_sym_SparseArray,
      anon_sym_String,
      anon_sym_SymbolArray,
      sym_class,
      sym_identifier,
  [359] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(43), 1,
      sym_comment,
    ACTIONS(245), 13,
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
      anon_sym_POUND,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(247), 43,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      anon_sym_Bag,
      anon_sym_Dictionary,
      anon_sym_Environment,
      anon_sym_Event,
      anon_sym_IdentityBag,
      anon_sym_IdentityDictionary,
      anon_sym_IdentitySet,
      anon_sym_LazyEnvir,
      anon_sym_MultiLevelIdentityDictionary,
      anon_sym_ObjectTable,
      anon_sym_Set,
      anon_sym_TwoWayIdentityDictionary,
      anon_sym_Array,
      anon_sym_Array2D,
      anon_sym_ArrayedCollection,
      anon_sym_DoubleArray,
      anon_sym_FloatArray,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_Int8Array,
      anon_sym_LinkedList,
      anon_sym_List,
      anon_sym_Order,
      anon_sym_OrderedIdentitySet,
      anon_sym_Pair,
      anon_sym_PriorityQueue,
      anon_sym_RawArray,
      anon_sym_SequenceableCollection,
      anon_sym_Signal,
      anon_sym_SortedList,
      anon_sym_SparseArray,
      anon_sym_String,
      anon_sym_SymbolArray,
      sym_class,
      sym_identifier,
  [429] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(44), 1,
      sym_comment,
    ACTIONS(249), 13,
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
      anon_sym_POUND,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(251), 43,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      anon_sym_Bag,
      anon_sym_Dictionary,
      anon_sym_Environment,
      anon_sym_Event,
      anon_sym_IdentityBag,
      anon_sym_IdentityDictionary,
      anon_sym_IdentitySet,
      anon_sym_LazyEnvir,
      anon_sym_MultiLevelIdentityDictionary,
      anon_sym_ObjectTable,
      anon_sym_Set,
      anon_sym_TwoWayIdentityDictionary,
      anon_sym_Array,
      anon_sym_Array2D,
      anon_sym_ArrayedCollection,
      anon_sym_DoubleArray,
      anon_sym_FloatArray,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_Int8Array,
      anon_sym_LinkedList,
      anon_sym_List,
      anon_sym_Order,
      anon_sym_OrderedIdentitySet,
      anon_sym_Pair,
      anon_sym_PriorityQueue,
      anon_sym_RawArray,
      anon_sym_SequenceableCollection,
      anon_sym_Signal,
      anon_sym_SortedList,
      anon_sym_SparseArray,
      anon_sym_String,
      anon_sym_SymbolArray,
      sym_class,
      sym_identifier,
  [499] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(45), 1,
      sym_comment,
    ACTIONS(235), 12,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      sym_float,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_TILDE,
      anon_sym_POUND,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(233), 43,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      anon_sym_Bag,
      anon_sym_Dictionary,
      anon_sym_Environment,
      anon_sym_Event,
      anon_sym_IdentityBag,
      anon_sym_IdentityDictionary,
      anon_sym_IdentitySet,
      anon_sym_LazyEnvir,
      anon_sym_MultiLevelIdentityDictionary,
      anon_sym_ObjectTable,
      anon_sym_Set,
      anon_sym_TwoWayIdentityDictionary,
      anon_sym_Array,
      anon_sym_Array2D,
      anon_sym_ArrayedCollection,
      anon_sym_DoubleArray,
      anon_sym_FloatArray,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_Int8Array,
      anon_sym_LinkedList,
      anon_sym_List,
      anon_sym_Order,
      anon_sym_OrderedIdentitySet,
      anon_sym_Pair,
      anon_sym_PriorityQueue,
      anon_sym_RawArray,
      anon_sym_SequenceableCollection,
      anon_sym_Signal,
      anon_sym_SortedList,
      anon_sym_SparseArray,
      anon_sym_String,
      anon_sym_SymbolArray,
      sym_class,
      sym_identifier,
  [568] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(46), 1,
      sym_comment,
    ACTIONS(255), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(253), 19,
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
  [609] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(47), 1,
      sym_comment,
    ACTIONS(259), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(257), 19,
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
  [650] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(48), 1,
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
  [690] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(269), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      anon_sym_AMP,
    ACTIONS(273), 1,
      anon_sym_CARET,
    ACTIONS(281), 1,
      anon_sym_SLASH,
    STATE(49), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(267), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 12,
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
  [744] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(267), 1,
      anon_sym_EQ,
    ACTIONS(269), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      anon_sym_AMP,
    ACTIONS(273), 1,
      anon_sym_CARET,
    ACTIONS(281), 1,
      anon_sym_SLASH,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_AMP_AMP,
    ACTIONS(287), 1,
      anon_sym_PIPE_PIPE,
    STATE(50), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(265), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOTwhile,
  [808] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(271), 1,
      anon_sym_AMP,
    ACTIONS(273), 1,
      anon_sym_CARET,
    ACTIONS(281), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(267), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 12,
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
  [860] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(52), 1,
      sym_comment,
    ACTIONS(295), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(293), 19,
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
  [900] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(53), 1,
      sym_comment,
    ACTIONS(299), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(297), 19,
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
  [940] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(269), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      anon_sym_AMP,
    ACTIONS(273), 1,
      anon_sym_CARET,
    ACTIONS(281), 1,
      anon_sym_SLASH,
    STATE(54), 1,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_EQ,
      anon_sym_DOT,
    ACTIONS(275), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(265), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOTwhile,
  [998] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(55), 1,
      sym_comment,
    ACTIONS(303), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(301), 19,
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
  [1038] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(56), 1,
      sym_comment,
    ACTIONS(307), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(305), 19,
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
  [1078] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(57), 1,
      sym_comment,
    ACTIONS(311), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(309), 19,
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
  [1118] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(58), 1,
      sym_comment,
    ACTIONS(315), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(313), 19,
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
  [1158] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(59), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(319), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(317), 16,
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
  [1200] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(269), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      anon_sym_AMP,
    ACTIONS(273), 1,
      anon_sym_CARET,
    ACTIONS(281), 1,
      anon_sym_SLASH,
    ACTIONS(285), 1,
      anon_sym_AMP_AMP,
    STATE(60), 1,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_EQ,
      anon_sym_DOT,
    ACTIONS(275), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(265), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_DOTwhile,
  [1260] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(281), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(267), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 13,
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
  [1308] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(62), 1,
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
  [1348] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(271), 1,
      anon_sym_AMP,
    ACTIONS(281), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(267), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 13,
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
  [1398] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(321), 1,
      anon_sym_COLON,
    STATE(64), 1,
      sym_comment,
    ACTIONS(329), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(327), 18,
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
  [1440] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(65), 1,
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
  [1480] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(66), 1,
      sym_comment,
    ACTIONS(337), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(335), 19,
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
  [1520] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(67), 1,
      sym_comment,
    ACTIONS(341), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(339), 19,
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
  [1560] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(68), 1,
      sym_comment,
    ACTIONS(345), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(343), 19,
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
  [1600] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(69), 1,
      sym_comment,
    ACTIONS(349), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(347), 19,
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
  [1640] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(70), 1,
      sym_comment,
    ACTIONS(223), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(221), 19,
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
  [1680] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(71), 1,
      sym_comment,
    ACTIONS(353), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(351), 19,
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
  [1720] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(72), 1,
      sym_comment,
    ACTIONS(357), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(355), 19,
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
  [1760] = 5,
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
  [1800] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(281), 1,
      anon_sym_SLASH,
    STATE(74), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(267), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 15,
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
  [1846] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(75), 1,
      sym_comment,
    ACTIONS(361), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(359), 19,
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
  [1886] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(76), 1,
      sym_comment,
    ACTIONS(365), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(363), 19,
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
  [1926] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(77), 1,
      sym_comment,
    ACTIONS(369), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(367), 19,
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
  [1966] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(78), 1,
      sym_comment,
    ACTIONS(373), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(371), 19,
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
  [2006] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(79), 1,
      sym_comment,
    ACTIONS(377), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(375), 19,
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
  [2046] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(80), 1,
      sym_comment,
    ACTIONS(381), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(379), 19,
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
  [2086] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(81), 1,
      sym_comment,
    ACTIONS(385), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(383), 19,
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
  [2126] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(82), 1,
      sym_comment,
    ACTIONS(319), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(317), 19,
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
  [2166] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(83), 1,
      sym_comment,
    ACTIONS(389), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(387), 19,
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
  [2206] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(84), 1,
      sym_comment,
    ACTIONS(393), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(391), 19,
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
  [2246] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(85), 1,
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
  [2286] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(281), 1,
      anon_sym_SLASH,
    STATE(86), 1,
      sym_comment,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(267), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(265), 17,
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
  [2330] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(269), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      anon_sym_AMP,
    ACTIONS(273), 1,
      anon_sym_CARET,
    ACTIONS(281), 1,
      anon_sym_SLASH,
    ACTIONS(285), 1,
      anon_sym_AMP_AMP,
    ACTIONS(287), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(399), 1,
      anon_sym_DOT,
    ACTIONS(401), 1,
      anon_sym_DOTwhile,
    STATE(87), 1,
      sym_comment,
    STATE(136), 1,
      sym_instance_method_call,
    ACTIONS(275), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(395), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2397] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(403), 1,
      anon_sym_EQ,
    STATE(88), 1,
      sym_comment,
    ACTIONS(223), 6,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(221), 17,
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
  [2437] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(405), 1,
      anon_sym_EQ,
    ACTIONS(409), 1,
      anon_sym_COLON,
    STATE(89), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(259), 6,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(257), 14,
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
  [2481] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(411), 1,
      anon_sym_COLON,
    STATE(90), 1,
      sym_comment,
    ACTIONS(329), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(327), 16,
      anon_sym_RPAREN,
      anon_sym_COMMA,
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
  [2521] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(269), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      anon_sym_AMP,
    ACTIONS(273), 1,
      anon_sym_CARET,
    ACTIONS(281), 1,
      anon_sym_SLASH,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_AMP_AMP,
    ACTIONS(287), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(401), 1,
      anon_sym_DOTwhile,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(415), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym_comment,
    STATE(115), 1,
      aux_sym__collection_sequence_repeat1,
    ACTIONS(275), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2589] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(92), 1,
      sym_comment,
    ACTIONS(417), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(223), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(221), 14,
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
  [2629] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(269), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      anon_sym_AMP,
    ACTIONS(273), 1,
      anon_sym_CARET,
    ACTIONS(281), 1,
      anon_sym_SLASH,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_AMP_AMP,
    ACTIONS(287), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(401), 1,
      anon_sym_DOTwhile,
    STATE(93), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(419), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2693] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(269), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      anon_sym_AMP,
    ACTIONS(273), 1,
      anon_sym_CARET,
    ACTIONS(281), 1,
      anon_sym_SLASH,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_AMP_AMP,
    ACTIONS(287), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(401), 1,
      anon_sym_DOTwhile,
    STATE(94), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(421), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2757] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(269), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      anon_sym_AMP,
    ACTIONS(273), 1,
      anon_sym_CARET,
    ACTIONS(281), 1,
      anon_sym_SLASH,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_AMP_AMP,
    ACTIONS(287), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(401), 1,
      anon_sym_DOTwhile,
    STATE(95), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(423), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2820] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(269), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      anon_sym_AMP,
    ACTIONS(273), 1,
      anon_sym_CARET,
    ACTIONS(281), 1,
      anon_sym_SLASH,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_AMP_AMP,
    ACTIONS(287), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(401), 1,
      anon_sym_DOTwhile,
    STATE(96), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(425), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2883] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(269), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      anon_sym_AMP,
    ACTIONS(273), 1,
      anon_sym_CARET,
    ACTIONS(281), 1,
      anon_sym_SLASH,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_AMP_AMP,
    ACTIONS(287), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(401), 1,
      anon_sym_DOTwhile,
    STATE(97), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(427), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2946] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(269), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      anon_sym_AMP,
    ACTIONS(273), 1,
      anon_sym_CARET,
    ACTIONS(281), 1,
      anon_sym_SLASH,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_AMP_AMP,
    ACTIONS(287), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(401), 1,
      anon_sym_DOTwhile,
    STATE(98), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(429), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3009] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(269), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      anon_sym_AMP,
    ACTIONS(273), 1,
      anon_sym_CARET,
    ACTIONS(281), 1,
      anon_sym_SLASH,
    ACTIONS(283), 1,
      anon_sym_DOT,
    ACTIONS(285), 1,
      anon_sym_AMP_AMP,
    ACTIONS(287), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(401), 1,
      anon_sym_DOTwhile,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(279), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(291), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(289), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3071] = 12,
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
    STATE(100), 1,
      sym_comment,
    STATE(140), 1,
      sym_literal,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(433), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(82), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [3113] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(435), 1,
      anon_sym_BSLASH,
    ACTIONS(437), 1,
      sym_integer,
    ACTIONS(441), 1,
      anon_sym_SQUOTE,
    ACTIONS(443), 1,
      sym_char,
    ACTIONS(445), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_comment,
    STATE(140), 1,
      sym_literal,
    ACTIONS(439), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(447), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(157), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [3155] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(449), 1,
      sym_identifier,
    ACTIONS(453), 1,
      anon_sym_if,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_comment,
    ACTIONS(451), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3179] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(103), 1,
      sym_comment,
    STATE(152), 1,
      sym_associative_item,
    STATE(178), 1,
      sym_symbol,
    STATE(192), 1,
      sym__paired_associative_sequence,
  [3207] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(104), 1,
      sym_comment,
    STATE(173), 1,
      sym_associative_item,
    STATE(178), 1,
      sym_symbol,
  [3232] = 7,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(459), 1,
      anon_sym_DQUOTE,
    ACTIONS(461), 1,
      aux_sym_string_token1,
    ACTIONS(463), 1,
      sym_escape_sequence,
    ACTIONS(465), 1,
      sym_line_comment,
    STATE(105), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym_string_repeat1,
  [3254] = 6,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(465), 1,
      sym_line_comment,
    ACTIONS(467), 1,
      anon_sym_DQUOTE,
    ACTIONS(469), 1,
      aux_sym_string_token1,
    ACTIONS(472), 1,
      sym_escape_sequence,
    STATE(106), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [3274] = 7,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(461), 1,
      aux_sym_string_token1,
    ACTIONS(463), 1,
      sym_escape_sequence,
    ACTIONS(465), 1,
      sym_line_comment,
    ACTIONS(475), 1,
      anon_sym_DQUOTE,
    STATE(106), 1,
      aux_sym_string_repeat1,
    STATE(107), 1,
      sym_comment,
  [3296] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(479), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_comment,
    ACTIONS(477), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3314] = 7,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(461), 1,
      aux_sym_string_token1,
    ACTIONS(463), 1,
      sym_escape_sequence,
    ACTIONS(465), 1,
      sym_line_comment,
    ACTIONS(481), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      aux_sym_string_repeat1,
    STATE(109), 1,
      sym_comment,
  [3336] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_comment,
    ACTIONS(483), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3354] = 7,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(461), 1,
      aux_sym_string_token1,
    ACTIONS(463), 1,
      sym_escape_sequence,
    ACTIONS(465), 1,
      sym_line_comment,
    ACTIONS(487), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      aux_sym_string_repeat1,
    STATE(111), 1,
      sym_comment,
  [3376] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(112), 1,
      sym_comment,
    STATE(182), 1,
      sym_function_block,
  [3395] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(491), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_PIPE,
    STATE(113), 1,
      sym_comment,
    STATE(126), 1,
      sym_argument,
  [3414] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_PIPE,
    STATE(114), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [3431] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym__collection_sequence_repeat1,
  [3450] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(502), 1,
      anon_sym_EQ,
    STATE(116), 1,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3467] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      sym_comment,
    STATE(153), 1,
      aux_sym_parameter_call_list_repeat1,
  [3486] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(118), 1,
      sym_comment,
    ACTIONS(510), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3501] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(119), 1,
      sym_comment,
    STATE(198), 1,
      sym_function_block,
  [3520] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(512), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_function_block,
    STATE(120), 1,
      sym_comment,
  [3539] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(121), 1,
      sym_comment,
    ACTIONS(514), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3554] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(122), 1,
      sym_comment,
    ACTIONS(516), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3569] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_comment,
    STATE(197), 1,
      sym_function_block,
  [3588] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(124), 1,
      sym_comment,
    ACTIONS(518), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3603] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(125), 1,
      sym_comment,
    ACTIONS(520), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3618] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_PIPE,
    STATE(126), 1,
      sym_comment,
    STATE(150), 1,
      aux_sym_parameter_list_repeat1,
  [3637] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(524), 1,
      anon_sym_SEMI,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      sym_comment,
    STATE(149), 1,
      aux_sym_parameter_list_repeat1,
  [3656] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(528), 1,
      anon_sym_EQ,
    STATE(128), 1,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3673] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(530), 1,
      anon_sym_SEMI,
    STATE(129), 1,
      sym_comment,
    ACTIONS(237), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3690] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      sym_comment,
    STATE(143), 1,
      aux_sym__paired_associative_sequence_repeat1,
  [3709] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    STATE(131), 2,
      sym_comment,
      aux_sym_parameter_call_list_repeat1,
  [3726] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(541), 1,
      anon_sym_DOT,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    STATE(132), 1,
      sym_comment,
    STATE(141), 1,
      sym_class_method_call,
  [3745] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(133), 1,
      sym_comment,
    ACTIONS(545), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3760] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    STATE(134), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [3777] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(135), 1,
      sym_comment,
    STATE(156), 1,
      sym_function_block,
  [3796] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(136), 1,
      sym_comment,
    ACTIONS(550), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3811] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      sym_comment,
    STATE(204), 1,
      sym_function_block,
  [3830] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_function_block,
    STATE(138), 1,
      sym_comment,
  [3849] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(139), 1,
      sym_comment,
    ACTIONS(498), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3864] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(140), 1,
      sym_comment,
    ACTIONS(552), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3879] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(141), 1,
      sym_comment,
    ACTIONS(554), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3894] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(142), 1,
      sym_comment,
    ACTIONS(395), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3909] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    STATE(143), 2,
      sym_comment,
      aux_sym__paired_associative_sequence_repeat1,
  [3926] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(489), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym_comment,
    STATE(200), 1,
      sym_function_block,
  [3945] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(561), 1,
      anon_sym_SEMI,
    STATE(145), 1,
      sym_comment,
    ACTIONS(563), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3962] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    ACTIONS(415), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      aux_sym__collection_sequence_repeat1,
    STATE(146), 1,
      sym_comment,
  [3981] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(493), 1,
      anon_sym_SEMI,
    ACTIONS(565), 1,
      sym_identifier,
    STATE(127), 1,
      sym_argument,
    STATE(147), 1,
      sym_comment,
  [4000] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(148), 1,
      sym_comment,
    ACTIONS(567), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [4015] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    ACTIONS(569), 1,
      anon_sym_SEMI,
    STATE(134), 1,
      aux_sym_parameter_list_repeat1,
    STATE(149), 1,
      sym_comment,
  [4034] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    ACTIONS(569), 1,
      anon_sym_PIPE,
    STATE(114), 1,
      aux_sym_parameter_list_repeat1,
    STATE(150), 1,
      sym_comment,
  [4053] = 5,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(465), 1,
      sym_line_comment,
    ACTIONS(573), 1,
      aux_sym_string_token1,
    STATE(151), 1,
      sym_comment,
    ACTIONS(571), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [4070] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym__paired_associative_sequence_repeat1,
    STATE(152), 1,
      sym_comment,
  [4089] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_parameter_call_list_repeat1,
    STATE(153), 1,
      sym_comment,
  [4108] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(427), 1,
      anon_sym_RBRACK,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    STATE(154), 2,
      sym_comment,
      aux_sym__collection_sequence_repeat1,
  [4125] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(155), 1,
      sym_comment,
    ACTIONS(582), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [4140] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      sym_comment,
  [4156] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(157), 1,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4170] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(565), 1,
      sym_identifier,
    STATE(139), 1,
      sym_argument,
    STATE(158), 1,
      sym_comment,
  [4186] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(159), 1,
      sym_comment,
    ACTIONS(588), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [4200] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(160), 1,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4214] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(491), 1,
      sym_identifier,
    STATE(139), 1,
      sym_argument,
    STATE(161), 1,
      sym_comment,
  [4230] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(162), 1,
      sym_comment,
    ACTIONS(590), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4244] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(163), 1,
      sym_comment,
    ACTIONS(592), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [4258] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(164), 1,
      sym_comment,
    ACTIONS(594), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [4272] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(165), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4286] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(594), 1,
      aux_sym_symbol_token1,
    ACTIONS(596), 1,
      sym_identifier,
    STATE(166), 1,
      sym_comment,
  [4302] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(167), 1,
      sym_comment,
    ACTIONS(253), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4316] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(168), 1,
      sym_comment,
    ACTIONS(297), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4330] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(169), 1,
      sym_comment,
    ACTIONS(257), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4344] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(170), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4358] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(171), 1,
      sym_comment,
    ACTIONS(387), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4372] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(172), 1,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4386] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(173), 1,
      sym_comment,
    ACTIONS(556), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4400] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      sym_comment,
  [4416] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(175), 1,
      sym_comment,
    ACTIONS(604), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [4430] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(606), 1,
      anon_sym_LPAREN,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(176), 1,
      sym_comment,
  [4446] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(177), 1,
      sym_comment,
    ACTIONS(610), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4460] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(178), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4474] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(179), 1,
      sym_comment,
    ACTIONS(612), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4488] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(180), 1,
      sym_comment,
  [4504] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(181), 1,
      sym_comment,
    ACTIONS(536), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4518] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      sym_comment,
  [4534] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(618), 1,
      sym_identifier,
    STATE(183), 1,
      sym_comment,
  [4547] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(620), 1,
      anon_sym_RBRACK,
    STATE(184), 1,
      sym_comment,
  [4560] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(321), 1,
      anon_sym_COLON,
    STATE(185), 1,
      sym_comment,
  [4573] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(622), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      sym_comment,
  [4586] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(624), 1,
      ts_builtin_sym_end,
    STATE(187), 1,
      sym_comment,
  [4599] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(626), 1,
      anon_sym_RPAREN,
    STATE(188), 1,
      sym_comment,
  [4612] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_comment,
  [4625] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
    STATE(190), 1,
      sym_comment,
  [4638] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
    STATE(191), 1,
      sym_comment,
  [4651] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(630), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      sym_comment,
  [4664] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(632), 1,
      sym_identifier,
    STATE(193), 1,
      sym_comment,
  [4677] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(634), 1,
      sym_identifier,
    STATE(194), 1,
      sym_comment,
  [4690] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(636), 1,
      anon_sym_SQUOTE,
    STATE(195), 1,
      sym_comment,
  [4703] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(638), 1,
      anon_sym_if,
    STATE(196), 1,
      sym_comment,
  [4716] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(640), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      sym_comment,
  [4729] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(642), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      sym_comment,
  [4742] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
    STATE(199), 1,
      sym_comment,
  [4755] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      sym_comment,
  [4768] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(648), 1,
      sym_identifier,
    STATE(201), 1,
      sym_comment,
  [4781] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(650), 1,
      anon_sym_SEMI,
    STATE(202), 1,
      sym_comment,
  [4794] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(652), 1,
      anon_sym_RBRACE,
    STATE(203), 1,
      sym_comment,
  [4807] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(654), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      sym_comment,
  [4820] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(656), 1,
      anon_sym_SEMI,
    STATE(205), 1,
      sym_comment,
  [4833] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      sym_comment,
  [4846] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(630), 1,
      anon_sym_RBRACK,
    STATE(207), 1,
      sym_comment,
  [4859] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(658), 1,
      anon_sym_RPAREN,
    STATE(208), 1,
      sym_comment,
  [4872] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(660), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      sym_comment,
  [4885] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(662), 1,
      anon_sym_LPAREN,
    STATE(210), 1,
      sym_comment,
  [4898] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(664), 1,
      anon_sym_SQUOTE,
    STATE(211), 1,
      sym_comment,
  [4911] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(666), 1,
      anon_sym_LPAREN,
    STATE(212), 1,
      sym_comment,
  [4924] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      sym_comment,
  [4937] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(214), 1,
      sym_comment,
  [4950] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym_comment,
  [4963] = 1,
    ACTIONS(670), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(38)] = 0,
  [SMALL_STATE(39)] = 71,
  [SMALL_STATE(40)] = 142,
  [SMALL_STATE(41)] = 215,
  [SMALL_STATE(42)] = 288,
  [SMALL_STATE(43)] = 359,
  [SMALL_STATE(44)] = 429,
  [SMALL_STATE(45)] = 499,
  [SMALL_STATE(46)] = 568,
  [SMALL_STATE(47)] = 609,
  [SMALL_STATE(48)] = 650,
  [SMALL_STATE(49)] = 690,
  [SMALL_STATE(50)] = 744,
  [SMALL_STATE(51)] = 808,
  [SMALL_STATE(52)] = 860,
  [SMALL_STATE(53)] = 900,
  [SMALL_STATE(54)] = 940,
  [SMALL_STATE(55)] = 998,
  [SMALL_STATE(56)] = 1038,
  [SMALL_STATE(57)] = 1078,
  [SMALL_STATE(58)] = 1118,
  [SMALL_STATE(59)] = 1158,
  [SMALL_STATE(60)] = 1200,
  [SMALL_STATE(61)] = 1260,
  [SMALL_STATE(62)] = 1308,
  [SMALL_STATE(63)] = 1348,
  [SMALL_STATE(64)] = 1398,
  [SMALL_STATE(65)] = 1440,
  [SMALL_STATE(66)] = 1480,
  [SMALL_STATE(67)] = 1520,
  [SMALL_STATE(68)] = 1560,
  [SMALL_STATE(69)] = 1600,
  [SMALL_STATE(70)] = 1640,
  [SMALL_STATE(71)] = 1680,
  [SMALL_STATE(72)] = 1720,
  [SMALL_STATE(73)] = 1760,
  [SMALL_STATE(74)] = 1800,
  [SMALL_STATE(75)] = 1846,
  [SMALL_STATE(76)] = 1886,
  [SMALL_STATE(77)] = 1926,
  [SMALL_STATE(78)] = 1966,
  [SMALL_STATE(79)] = 2006,
  [SMALL_STATE(80)] = 2046,
  [SMALL_STATE(81)] = 2086,
  [SMALL_STATE(82)] = 2126,
  [SMALL_STATE(83)] = 2166,
  [SMALL_STATE(84)] = 2206,
  [SMALL_STATE(85)] = 2246,
  [SMALL_STATE(86)] = 2286,
  [SMALL_STATE(87)] = 2330,
  [SMALL_STATE(88)] = 2397,
  [SMALL_STATE(89)] = 2437,
  [SMALL_STATE(90)] = 2481,
  [SMALL_STATE(91)] = 2521,
  [SMALL_STATE(92)] = 2589,
  [SMALL_STATE(93)] = 2629,
  [SMALL_STATE(94)] = 2693,
  [SMALL_STATE(95)] = 2757,
  [SMALL_STATE(96)] = 2820,
  [SMALL_STATE(97)] = 2883,
  [SMALL_STATE(98)] = 2946,
  [SMALL_STATE(99)] = 3009,
  [SMALL_STATE(100)] = 3071,
  [SMALL_STATE(101)] = 3113,
  [SMALL_STATE(102)] = 3155,
  [SMALL_STATE(103)] = 3179,
  [SMALL_STATE(104)] = 3207,
  [SMALL_STATE(105)] = 3232,
  [SMALL_STATE(106)] = 3254,
  [SMALL_STATE(107)] = 3274,
  [SMALL_STATE(108)] = 3296,
  [SMALL_STATE(109)] = 3314,
  [SMALL_STATE(110)] = 3336,
  [SMALL_STATE(111)] = 3354,
  [SMALL_STATE(112)] = 3376,
  [SMALL_STATE(113)] = 3395,
  [SMALL_STATE(114)] = 3414,
  [SMALL_STATE(115)] = 3431,
  [SMALL_STATE(116)] = 3450,
  [SMALL_STATE(117)] = 3467,
  [SMALL_STATE(118)] = 3486,
  [SMALL_STATE(119)] = 3501,
  [SMALL_STATE(120)] = 3520,
  [SMALL_STATE(121)] = 3539,
  [SMALL_STATE(122)] = 3554,
  [SMALL_STATE(123)] = 3569,
  [SMALL_STATE(124)] = 3588,
  [SMALL_STATE(125)] = 3603,
  [SMALL_STATE(126)] = 3618,
  [SMALL_STATE(127)] = 3637,
  [SMALL_STATE(128)] = 3656,
  [SMALL_STATE(129)] = 3673,
  [SMALL_STATE(130)] = 3690,
  [SMALL_STATE(131)] = 3709,
  [SMALL_STATE(132)] = 3726,
  [SMALL_STATE(133)] = 3745,
  [SMALL_STATE(134)] = 3760,
  [SMALL_STATE(135)] = 3777,
  [SMALL_STATE(136)] = 3796,
  [SMALL_STATE(137)] = 3811,
  [SMALL_STATE(138)] = 3830,
  [SMALL_STATE(139)] = 3849,
  [SMALL_STATE(140)] = 3864,
  [SMALL_STATE(141)] = 3879,
  [SMALL_STATE(142)] = 3894,
  [SMALL_STATE(143)] = 3909,
  [SMALL_STATE(144)] = 3926,
  [SMALL_STATE(145)] = 3945,
  [SMALL_STATE(146)] = 3962,
  [SMALL_STATE(147)] = 3981,
  [SMALL_STATE(148)] = 4000,
  [SMALL_STATE(149)] = 4015,
  [SMALL_STATE(150)] = 4034,
  [SMALL_STATE(151)] = 4053,
  [SMALL_STATE(152)] = 4070,
  [SMALL_STATE(153)] = 4089,
  [SMALL_STATE(154)] = 4108,
  [SMALL_STATE(155)] = 4125,
  [SMALL_STATE(156)] = 4140,
  [SMALL_STATE(157)] = 4156,
  [SMALL_STATE(158)] = 4170,
  [SMALL_STATE(159)] = 4186,
  [SMALL_STATE(160)] = 4200,
  [SMALL_STATE(161)] = 4214,
  [SMALL_STATE(162)] = 4230,
  [SMALL_STATE(163)] = 4244,
  [SMALL_STATE(164)] = 4258,
  [SMALL_STATE(165)] = 4272,
  [SMALL_STATE(166)] = 4286,
  [SMALL_STATE(167)] = 4302,
  [SMALL_STATE(168)] = 4316,
  [SMALL_STATE(169)] = 4330,
  [SMALL_STATE(170)] = 4344,
  [SMALL_STATE(171)] = 4358,
  [SMALL_STATE(172)] = 4372,
  [SMALL_STATE(173)] = 4386,
  [SMALL_STATE(174)] = 4400,
  [SMALL_STATE(175)] = 4416,
  [SMALL_STATE(176)] = 4430,
  [SMALL_STATE(177)] = 4446,
  [SMALL_STATE(178)] = 4460,
  [SMALL_STATE(179)] = 4474,
  [SMALL_STATE(180)] = 4488,
  [SMALL_STATE(181)] = 4504,
  [SMALL_STATE(182)] = 4518,
  [SMALL_STATE(183)] = 4534,
  [SMALL_STATE(184)] = 4547,
  [SMALL_STATE(185)] = 4560,
  [SMALL_STATE(186)] = 4573,
  [SMALL_STATE(187)] = 4586,
  [SMALL_STATE(188)] = 4599,
  [SMALL_STATE(189)] = 4612,
  [SMALL_STATE(190)] = 4625,
  [SMALL_STATE(191)] = 4638,
  [SMALL_STATE(192)] = 4651,
  [SMALL_STATE(193)] = 4664,
  [SMALL_STATE(194)] = 4677,
  [SMALL_STATE(195)] = 4690,
  [SMALL_STATE(196)] = 4703,
  [SMALL_STATE(197)] = 4716,
  [SMALL_STATE(198)] = 4729,
  [SMALL_STATE(199)] = 4742,
  [SMALL_STATE(200)] = 4755,
  [SMALL_STATE(201)] = 4768,
  [SMALL_STATE(202)] = 4781,
  [SMALL_STATE(203)] = 4794,
  [SMALL_STATE(204)] = 4807,
  [SMALL_STATE(205)] = 4820,
  [SMALL_STATE(206)] = 4833,
  [SMALL_STATE(207)] = 4846,
  [SMALL_STATE(208)] = 4859,
  [SMALL_STATE(209)] = 4872,
  [SMALL_STATE(210)] = 4885,
  [SMALL_STATE(211)] = 4898,
  [SMALL_STATE(212)] = 4911,
  [SMALL_STATE(213)] = 4924,
  [SMALL_STATE(214)] = 4937,
  [SMALL_STATE(215)] = 4950,
  [SMALL_STATE(216)] = 4963,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(212),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(210),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(175),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(111),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(183),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(194),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(201),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(176),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(177),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(179),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(73),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(212),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(210),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(5),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(4),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(164),
  [156] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(69),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(69),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(175),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(82),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(111),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(83),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(183),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(194),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(78),
  [183] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(201),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(176),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(21),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(177),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(179),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(132),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classvar, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classvar, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 4),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 2),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_var, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_var, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 4, .production_id = 7),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4, .production_id = 7),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 4),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_structure, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_structure, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 8, .production_id = 12),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 8, .production_id = 12),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 5),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 5),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6, .production_id = 8),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6, .production_id = 8),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 6, .production_id = 9),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 6, .production_id = 9),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 6),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 6),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_var, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_var, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 8, .production_id = 11),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 8, .production_id = 11),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6, .production_id = 10),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6, .production_id = 10),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 3, .production_id = 5),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 3, .production_id = 5),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_sequence, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_item, 3, .production_id = 6),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 4),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__collection_sequence_repeat1, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnamed_argument, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(151),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(151),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 2, .production_id = 4),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 2, .production_id = 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(161),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_sequence, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_call_list, 1),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 5, .production_id = 4),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 5, .production_id = 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 4, .production_id = 4),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 4),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paired_associative_sequence, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_call_list_repeat1, 2),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_call_list_repeat1, 2), SHIFT_REPEAT(19),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 4, .production_id = 2),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(158),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__paired_associative_sequence_repeat1, 2),
  [558] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__paired_associative_sequence_repeat1, 2), SHIFT_REPEAT(104),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 1),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paired_associative_sequence, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_call_list, 2),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__collection_sequence_repeat1, 2), SHIFT_REPEAT(22),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 3),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_calls, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_types, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unordered_collection_types, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordered_collection_types, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [624] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
