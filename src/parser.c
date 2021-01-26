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
#define STATE_COUNT 209
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
  anon_sym_EQ = 3,
  anon_sym_DOT = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_arg = 9,
  anon_sym_COMMA = 10,
  anon_sym_PIPE = 11,
  anon_sym_BSLASH = 12,
  anon_sym_COLON = 13,
  sym_integer = 14,
  sym_hexinteger = 15,
  sym_float = 16,
  aux_sym_symbol_token1 = 17,
  anon_sym_SQUOTE = 18,
  sym_char = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_string_token1 = 21,
  anon_sym_true = 22,
  anon_sym_false = 23,
  sym_escape_sequence = 24,
  anon_sym_var = 25,
  anon_sym_classvar = 26,
  aux_sym_environment_var_token1 = 27,
  anon_sym_TILDE = 28,
  sym_line_comment = 29,
  sym_block_comment = 30,
  anon_sym_LBRACK = 31,
  anon_sym_RBRACK = 32,
  anon_sym_DASH_GT = 33,
  anon_sym_Bag = 34,
  anon_sym_Dictionary = 35,
  anon_sym_Environment = 36,
  anon_sym_Event = 37,
  anon_sym_IdentityBag = 38,
  anon_sym_IdentityDictionary = 39,
  anon_sym_IdentitySet = 40,
  anon_sym_LazyEnvir = 41,
  anon_sym_MultiLevelIdentityDictionary = 42,
  anon_sym_ObjectTable = 43,
  anon_sym_Set = 44,
  anon_sym_TwoWayIdentityDictionary = 45,
  anon_sym_Array = 46,
  anon_sym_Array2D = 47,
  anon_sym_ArrayedCollection = 48,
  anon_sym_DoubleArray = 49,
  anon_sym_FloatArray = 50,
  anon_sym_Int16Array = 51,
  anon_sym_Int32Array = 52,
  anon_sym_Int8Array = 53,
  anon_sym_LinkedList = 54,
  anon_sym_List = 55,
  anon_sym_Order = 56,
  anon_sym_OrderedIdentitySet = 57,
  anon_sym_Pair = 58,
  anon_sym_PriorityQueue = 59,
  anon_sym_RawArray = 60,
  anon_sym_SequenceableCollection = 61,
  anon_sym_Signal = 62,
  anon_sym_SortedList = 63,
  anon_sym_SparseArray = 64,
  anon_sym_String = 65,
  anon_sym_SymbolArray = 66,
  anon_sym_AMP_AMP = 67,
  anon_sym_PIPE_PIPE = 68,
  anon_sym_AMP = 69,
  anon_sym_CARET = 70,
  anon_sym_EQ_EQ = 71,
  anon_sym_BANG_EQ = 72,
  anon_sym_LT = 73,
  anon_sym_LT_EQ = 74,
  anon_sym_GT = 75,
  anon_sym_GT_EQ = 76,
  anon_sym_LT_LT = 77,
  anon_sym_GT_GT = 78,
  anon_sym_PLUS = 79,
  anon_sym_DASH = 80,
  anon_sym_STAR = 81,
  anon_sym_SLASH = 82,
  anon_sym_PERCENT = 83,
  sym_class = 84,
  anon_sym_if = 85,
  anon_sym_while = 86,
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
  [anon_sym_if] = "if",
  [anon_sym_while] = "while",
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
  [anon_sym_if] = anon_sym_if,
  [anon_sym_while] = anon_sym_while,
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
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
      if (eof) ADVANCE(24);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '%') ADVANCE(114);
      if (lookahead == '&') ADVANCE(100);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '-') ADVANCE(111);
      if (lookahead == '.') ADVANCE(29);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '0') ADVANCE(41);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '<') ADVANCE(104);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == 'A') ADVANCE(294);
      if (lookahead == 'B') ADVANCE(143);
      if (lookahead == 'D') ADVANCE(218);
      if (lookahead == 'E') ADVANCE(257);
      if (lookahead == 'F') ADVANCE(243);
      if (lookahead == 'I') ADVANCE(183);
      if (lookahead == 'L') ADVANCE(144);
      if (lookahead == 'M') ADVANCE(351);
      if (lookahead == 'O') ADVANCE(167);
      if (lookahead == 'P') ADVANCE(145);
      if (lookahead == 'R') ADVANCE(146);
      if (lookahead == 'S') ADVANCE(189);
      if (lookahead == 'T') ADVANCE(359);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == '^') ADVANCE(101);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '~') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(381);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(58);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(61);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 9:
      if (lookahead == '\\') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(383);
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
      if (lookahead == '}') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
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
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '$') ADVANCE(22);
      if (lookahead == '\'') ADVANCE(46);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(31);
      if (lookahead == ',') ADVANCE(34);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(39);
      if (lookahead == ';') ADVANCE(25);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '[') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '|') ADVANCE(35);
      if (lookahead == '}') ADVANCE(33);
      if (lookahead == '~') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(381);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'w') ADVANCE(12);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(99);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_hexinteger);
      if (lookahead == '\\') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(52);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(49);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(55);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_Bag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_Dictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_Environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_Event);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_IdentityBag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_IdentityDictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_IdentitySet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LazyEnvir);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_MultiLevelIdentityDictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_ObjectTable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_Set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_TwoWayIdentityDictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_Array);
      if (lookahead == '2') ADVANCE(129);
      if (lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_Array2D);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ArrayedCollection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DoubleArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_FloatArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_Int16Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_Int32Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_Int8Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LinkedList);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_List);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_Order);
      if (lookahead == 'e') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_OrderedIdentitySet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_Pair);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_PriorityQueue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RawArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SequenceableCollection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_Signal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SortedList);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SparseArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SymbolArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(98);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(108);
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(107);
      if (lookahead == '>') ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(64);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(60);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '1') ADVANCE(117);
      if (lookahead == '3') ADVANCE(116);
      if (lookahead == '8') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '2') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '6') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'B') ADVANCE(150);
      if (lookahead == 'D') ADVANCE(237);
      if (lookahead == 'S') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'C') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'C') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'D') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'D') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'D') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'E') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'I') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'I') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'I') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'L') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'L') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'L') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'Q') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'S') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'T') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'W') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(380);
      if (lookahead == 'i') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(223);
      if (lookahead == 'r') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(201);
      if (lookahead == 'n') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(289);
      if (lookahead == 'i') ADVANCE(217);
      if (lookahead == 'o') ADVANCE(297);
      if (lookahead == 'p') ADVANCE(151);
      if (lookahead == 't') ADVANCE(295);
      if (lookahead == 'y') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'o') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'j') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'k') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'm') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'm') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(356);
      if (lookahead == 'v') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(242);
      if (lookahead == 's') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'q') ADVANCE(354);
      if (lookahead == 't') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 's') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 's') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'v') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'v') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'v') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'w') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'w') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'z') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(382);
      END_STATE();
    case 383:
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
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 23},
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
  [80] = {.lex_state = 23},
  [81] = {.lex_state = 23},
  [82] = {.lex_state = 23},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 23},
  [85] = {.lex_state = 23},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 23},
  [88] = {.lex_state = 23},
  [89] = {.lex_state = 23},
  [90] = {.lex_state = 23},
  [91] = {.lex_state = 23},
  [92] = {.lex_state = 23},
  [93] = {.lex_state = 23},
  [94] = {.lex_state = 23},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 23},
  [110] = {.lex_state = 23},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 23},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 23},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 23},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 23},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 23},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 23},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 23},
  [163] = {.lex_state = 23},
  [164] = {.lex_state = 23},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 23},
  [168] = {.lex_state = 23},
  [169] = {.lex_state = 23},
  [170] = {.lex_state = 23},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
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
  [208] = {(TSStateId)(-1)},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_DOTwhile] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(180),
    [sym__expression] = STATE(91),
    [sym__expression_statement] = STATE(177),
    [sym__object] = STATE(73),
    [sym_function_definition] = STATE(132),
    [sym_function_call] = STATE(132),
    [sym_code_block] = STATE(88),
    [sym_function_block] = STATE(60),
    [sym_literal] = STATE(60),
    [sym_number] = STATE(55),
    [sym_symbol] = STATE(55),
    [sym_string] = STATE(55),
    [sym_bool] = STATE(55),
    [sym_variable] = STATE(74),
    [sym_local_var] = STATE(56),
    [sym_classvar] = STATE(56),
    [sym_environment_var] = STATE(56),
    [sym_variable_definition] = STATE(132),
    [sym_comment] = STATE(1),
    [sym_collection] = STATE(60),
    [sym_binary_expression] = STATE(60),
    [sym_control_structure] = STATE(60),
    [sym_if] = STATE(36),
    [sym_while] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [sym_integer] = ACTIONS(15),
    [sym_hexinteger] = ACTIONS(17),
    [sym_float] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [sym_char] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_var] = ACTIONS(27),
    [anon_sym_classvar] = ACTIONS(29),
    [aux_sym_environment_var_token1] = ACTIONS(31),
    [anon_sym_TILDE] = ACTIONS(33),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_class] = ACTIONS(37),
    [anon_sym_if] = ACTIONS(39),
    [anon_sym_while] = ACTIONS(41),
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
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_class,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
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
    STATE(12), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(73), 1,
      sym__object,
    STATE(74), 1,
      sym_variable,
    STATE(137), 1,
      sym__expression_statement,
    STATE(152), 1,
      sym__expression_sequence,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(132), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [123] = 35,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_class,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_arg,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    STATE(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_parameter_list,
    STATE(12), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(73), 1,
      sym__object,
    STATE(74), 1,
      sym_variable,
    STATE(137), 1,
      sym__expression_statement,
    STATE(207), 1,
      sym__expression_sequence,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(132), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [243] = 35,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_class,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 1,
      anon_sym_arg,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    STATE(4), 1,
      sym_comment,
    STATE(10), 1,
      sym_parameter_list,
    STATE(12), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(73), 1,
      sym__object,
    STATE(74), 1,
      sym_variable,
    STATE(137), 1,
      sym__expression_statement,
    STATE(195), 1,
      sym__expression_sequence,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(132), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [363] = 34,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_class,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(5), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(41), 1,
      sym_symbol,
    STATE(73), 1,
      sym__object,
    STATE(74), 1,
      sym_variable,
    STATE(137), 1,
      sym__expression_statement,
    STATE(148), 1,
      sym_associative_item,
    STATE(201), 1,
      sym__expression_sequence,
    STATE(204), 1,
      sym__paired_associative_sequence,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(55), 3,
      sym_number,
      sym_string,
      sym_bool,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(132), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(60), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [479] = 32,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_class,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(73), 1,
      sym__object,
    STATE(74), 1,
      sym_variable,
    STATE(88), 1,
      sym_code_block,
    STATE(91), 1,
      sym__expression,
    STATE(177), 1,
      sym__expression_statement,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(132), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [591] = 33,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_class,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(73), 1,
      sym__object,
    STATE(74), 1,
      sym_variable,
    STATE(137), 1,
      sym__expression_statement,
    STATE(151), 1,
      sym__expression_sequence,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(132), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [705] = 32,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(74), 1,
      anon_sym_BSLASH,
    ACTIONS(77), 1,
      sym_integer,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(86), 1,
      sym_char,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_var,
    ACTIONS(98), 1,
      anon_sym_classvar,
    ACTIONS(101), 1,
      aux_sym_environment_var_token1,
    ACTIONS(104), 1,
      anon_sym_TILDE,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      sym_class,
    ACTIONS(113), 1,
      anon_sym_if,
    ACTIONS(116), 1,
      anon_sym_while,
    STATE(73), 1,
      sym__object,
    STATE(74), 1,
      sym_variable,
    STATE(88), 1,
      sym_code_block,
    STATE(91), 1,
      sym__expression,
    STATE(177), 1,
      sym__expression_statement,
    ACTIONS(80), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(92), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(8), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(132), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [817] = 32,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_class,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(73), 1,
      sym__object,
    STATE(74), 1,
      sym_variable,
    STATE(137), 1,
      sym__expression_statement,
    STATE(206), 1,
      sym__expression_sequence,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(132), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [928] = 32,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_class,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(73), 1,
      sym__object,
    STATE(74), 1,
      sym_variable,
    STATE(137), 1,
      sym__expression_statement,
    STATE(202), 1,
      sym__expression_sequence,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(132), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1039] = 29,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_BSLASH,
    ACTIONS(131), 1,
      sym_integer,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      sym_char,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_var,
    ACTIONS(152), 1,
      anon_sym_classvar,
    ACTIONS(155), 1,
      aux_sym_environment_var_token1,
    ACTIONS(158), 1,
      anon_sym_TILDE,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    ACTIONS(164), 1,
      sym_class,
    ACTIONS(167), 1,
      anon_sym_if,
    ACTIONS(170), 1,
      anon_sym_while,
    STATE(73), 1,
      sym__object,
    STATE(74), 1,
      sym_variable,
    STATE(198), 1,
      sym__expression_statement,
    ACTIONS(134), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(146), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(11), 2,
      sym_comment,
      aux_sym__expression_sequence_repeat1,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(132), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1142] = 30,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_class,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(73), 1,
      sym__object,
    STATE(74), 1,
      sym_variable,
    STATE(122), 1,
      sym__expression_statement,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(132), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1247] = 28,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(13), 1,
      sym_comment,
    STATE(41), 1,
      sym_symbol,
    STATE(77), 1,
      sym__object,
    STATE(139), 1,
      sym_associative_item,
    STATE(181), 1,
      sym__collection_sequence,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(55), 3,
      sym_number,
      sym_string,
      sym_bool,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(60), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1344] = 27,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(14), 1,
      sym_comment,
    STATE(41), 1,
      sym_symbol,
    STATE(79), 1,
      sym__object,
    STATE(154), 1,
      sym_associative_item,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(55), 3,
      sym_number,
      sym_string,
      sym_bool,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(60), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1438] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_comment,
    STATE(63), 1,
      sym__object,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1527] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_comment,
    STATE(64), 1,
      sym__object,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1616] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_comment,
    STATE(62), 1,
      sym__object,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1705] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_comment,
    STATE(57), 1,
      sym__object,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1794] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_comment,
    STATE(35), 1,
      sym__object,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1883] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_comment,
    STATE(54), 1,
      sym__object,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1972] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_comment,
    STATE(53), 1,
      sym__object,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2061] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_comment,
    STATE(49), 1,
      sym__object,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2150] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_comment,
    STATE(45), 1,
      sym__object,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2239] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_comment,
    STATE(37), 1,
      sym__object,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2328] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_comment,
    STATE(83), 1,
      sym__object,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2417] = 26,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_comment,
    STATE(75), 1,
      sym__object,
    STATE(76), 1,
      sym_function_block,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 5,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2508] = 25,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_if,
    ACTIONS(41), 1,
      anon_sym_while,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_comment,
    STATE(78), 1,
      sym__object,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 2,
      sym_if,
      sym_while,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(60), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2597] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(177), 1,
      anon_sym_BSLASH,
    STATE(28), 1,
      sym_comment,
    STATE(114), 1,
      sym_argument_calls,
    STATE(187), 1,
      sym_parameter_call_list,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(158), 2,
      sym_literal,
      sym_variable,
    STATE(166), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [2673] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_BSLASH,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_comment,
    STATE(114), 1,
      sym_argument_calls,
    STATE(194), 1,
      sym_parameter_call_list,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(158), 2,
      sym_literal,
      sym_variable,
    STATE(166), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [2749] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_BSLASH,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      sym_comment,
    STATE(114), 1,
      sym_argument_calls,
    STATE(191), 1,
      sym_parameter_call_list,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(158), 2,
      sym_literal,
      sym_variable,
    STATE(166), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [2825] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_BSLASH,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      sym_comment,
    STATE(114), 1,
      sym_argument_calls,
    STATE(192), 1,
      sym_parameter_call_list,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(158), 2,
      sym_literal,
      sym_variable,
    STATE(166), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [2901] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(32), 1,
      sym_comment,
    ACTIONS(187), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(185), 19,
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
  [2942] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(33), 1,
      sym_comment,
    ACTIONS(191), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(189), 19,
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
  [2983] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(34), 1,
      sym_comment,
    ACTIONS(195), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(193), 19,
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
  [3023] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      anon_sym_AMP,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    STATE(35), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(207), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(199), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 13,
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
  [3073] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(36), 1,
      sym_comment,
    ACTIONS(213), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(211), 19,
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
  [3113] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(199), 1,
      anon_sym_EQ,
    ACTIONS(201), 1,
      anon_sym_AMP,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_PIPE,
    ACTIONS(219), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(223), 1,
      anon_sym_CARET,
    STATE(37), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(207), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(227), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(197), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOTwhile,
  [3177] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(233), 1,
      anon_sym_COLON,
    STATE(38), 1,
      sym_comment,
    ACTIONS(231), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(229), 18,
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
  [3219] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(39), 1,
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
  [3259] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(40), 1,
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
  [3299] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(41), 1,
      sym_comment,
    ACTIONS(233), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(245), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(243), 16,
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
  [3341] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_BSLASH,
    STATE(42), 1,
      sym_comment,
    STATE(172), 1,
      sym_argument_calls,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(158), 2,
      sym_literal,
      sym_variable,
    STATE(166), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [3411] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(43), 1,
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
  [3451] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(44), 1,
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
  [3491] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      anon_sym_AMP,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(223), 1,
      anon_sym_CARET,
    STATE(45), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(207), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(199), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 12,
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
  [3543] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(46), 1,
      sym_comment,
    ACTIONS(257), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(255), 19,
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
  [3583] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(47), 1,
      sym_comment,
    ACTIONS(261), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(259), 19,
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
  [3623] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(48), 1,
      sym_comment,
    ACTIONS(265), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(263), 19,
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
  [3663] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      anon_sym_AMP,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(217), 1,
      anon_sym_PIPE,
    ACTIONS(223), 1,
      anon_sym_CARET,
    STATE(49), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_EQ,
      anon_sym_DOT,
    ACTIONS(203), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(207), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(227), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(197), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOTwhile,
  [3721] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(50), 1,
      sym_comment,
    ACTIONS(269), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(267), 19,
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
  [3761] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(51), 1,
      sym_comment,
    ACTIONS(273), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(271), 19,
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
  [3801] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(52), 1,
      sym_comment,
    ACTIONS(277), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(275), 19,
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
  [3841] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      anon_sym_AMP,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(217), 1,
      anon_sym_PIPE,
    ACTIONS(219), 1,
      anon_sym_AMP_AMP,
    ACTIONS(223), 1,
      anon_sym_CARET,
    STATE(53), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_EQ,
      anon_sym_DOT,
    ACTIONS(203), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(207), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(227), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(197), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_DOTwhile,
  [3901] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    STATE(54), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(207), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(199), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 13,
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
  [3949] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(55), 1,
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
  [3989] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(56), 1,
      sym_comment,
    ACTIONS(281), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(279), 19,
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
  [4029] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      anon_sym_AMP,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(217), 1,
      anon_sym_PIPE,
    ACTIONS(223), 1,
      anon_sym_CARET,
    STATE(57), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(207), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(199), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 12,
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
  [4083] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(58), 1,
      sym_comment,
    ACTIONS(285), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(283), 19,
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
  [4123] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(59), 1,
      sym_comment,
    ACTIONS(289), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(287), 19,
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
  [4163] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(60), 1,
      sym_comment,
    ACTIONS(293), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(291), 19,
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
  [4203] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(61), 1,
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
  [4243] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    STATE(62), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(207), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(199), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 15,
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
  [4289] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    STATE(63), 1,
      sym_comment,
    ACTIONS(207), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(199), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 17,
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
  [4333] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(64), 1,
      sym_comment,
    ACTIONS(199), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(197), 19,
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
  [4373] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(65), 1,
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
  [4413] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(66), 1,
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
  [4453] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(67), 1,
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
  [4493] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(68), 1,
      sym_comment,
    ACTIONS(313), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(311), 19,
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
  [4533] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(69), 1,
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
  [4573] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(70), 1,
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
  [4613] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(71), 1,
      sym_comment,
    ACTIONS(231), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(229), 19,
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
  [4653] = 5,
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
  [4693] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      anon_sym_AMP,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(217), 1,
      anon_sym_PIPE,
    ACTIONS(219), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(223), 1,
      anon_sym_CARET,
    ACTIONS(329), 1,
      anon_sym_EQ,
    ACTIONS(331), 1,
      anon_sym_DOT,
    ACTIONS(333), 1,
      anon_sym_DOTwhile,
    STATE(73), 1,
      sym_comment,
    STATE(128), 1,
      sym_instance_method_call,
    ACTIONS(203), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(207), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(227), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(225), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4760] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(335), 1,
      anon_sym_EQ,
    STATE(74), 1,
      sym_comment,
    ACTIONS(293), 6,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(291), 17,
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
  [4800] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      anon_sym_AMP,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_PIPE,
    ACTIONS(219), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(223), 1,
      anon_sym_CARET,
    ACTIONS(329), 1,
      anon_sym_EQ,
    ACTIONS(333), 1,
      anon_sym_DOTwhile,
    STATE(75), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(207), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(227), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(337), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(225), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4864] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(76), 1,
      sym_comment,
    ACTIONS(339), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(293), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(291), 14,
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
  [4904] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      anon_sym_AMP,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_PIPE,
    ACTIONS(219), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(223), 1,
      anon_sym_CARET,
    ACTIONS(329), 1,
      anon_sym_EQ,
    ACTIONS(333), 1,
      anon_sym_DOTwhile,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      sym_comment,
    STATE(117), 1,
      aux_sym__collection_sequence_repeat1,
    ACTIONS(203), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(207), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(227), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4972] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      anon_sym_AMP,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_PIPE,
    ACTIONS(219), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(223), 1,
      anon_sym_CARET,
    ACTIONS(329), 1,
      anon_sym_EQ,
    ACTIONS(333), 1,
      anon_sym_DOTwhile,
    STATE(78), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(207), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(227), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(345), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(225), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5036] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      anon_sym_AMP,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_PIPE,
    ACTIONS(219), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(223), 1,
      anon_sym_CARET,
    ACTIONS(329), 1,
      anon_sym_EQ,
    ACTIONS(333), 1,
      anon_sym_DOTwhile,
    STATE(79), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(207), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(227), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(347), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(225), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5099] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    STATE(80), 1,
      sym_comment,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(173), 2,
      sym_literal,
      sym_variable,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [5162] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_var,
    ACTIONS(29), 1,
      anon_sym_classvar,
    ACTIONS(31), 1,
      aux_sym_environment_var_token1,
    ACTIONS(33), 1,
      anon_sym_TILDE,
    STATE(81), 1,
      sym_comment,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(171), 2,
      sym_literal,
      sym_variable,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [5225] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(82), 1,
      sym_comment,
    ACTIONS(349), 9,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
    ACTIONS(351), 13,
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
  [5261] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      anon_sym_AMP,
    ACTIONS(209), 1,
      anon_sym_SLASH,
    ACTIONS(215), 1,
      anon_sym_DOT,
    ACTIONS(217), 1,
      anon_sym_PIPE,
    ACTIONS(219), 1,
      anon_sym_AMP_AMP,
    ACTIONS(221), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(223), 1,
      anon_sym_CARET,
    ACTIONS(329), 1,
      anon_sym_EQ,
    ACTIONS(333), 1,
      anon_sym_DOTwhile,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(207), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(227), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5323] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(84), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(355), 9,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
    ACTIONS(357), 11,
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
  [5361] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(85), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(355), 9,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
    ACTIONS(357), 11,
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
  [5399] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(86), 1,
      sym_comment,
    ACTIONS(363), 9,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
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
  [5435] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(87), 1,
      sym_comment,
    ACTIONS(367), 9,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
    ACTIONS(369), 13,
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
  [5471] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(88), 1,
      sym_comment,
    ACTIONS(373), 9,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
    ACTIONS(371), 12,
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
  [5506] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(89), 1,
      sym_comment,
    ACTIONS(377), 9,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
    ACTIONS(375), 12,
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
  [5541] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(90), 1,
      sym_comment,
    ACTIONS(381), 9,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
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
  [5576] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(91), 1,
      sym_comment,
    ACTIONS(385), 9,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
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
  [5611] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(92), 1,
      sym_comment,
    ACTIONS(355), 9,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
    ACTIONS(357), 11,
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
  [5645] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_integer,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      sym_char,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      sym_comment,
    STATE(135), 1,
      sym_literal,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(387), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(55), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [5687] = 12,
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
    STATE(135), 1,
      sym_literal,
    ACTIONS(393), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(401), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(169), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [5729] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(405), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_comment,
    STATE(148), 1,
      sym_associative_item,
    STATE(176), 1,
      sym_symbol,
    STATE(204), 1,
      sym__paired_associative_sequence,
  [5760] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(407), 1,
      sym_identifier,
    ACTIONS(411), 1,
      anon_sym_LPAREN,
    ACTIONS(413), 1,
      anon_sym_if,
    STATE(96), 1,
      sym_comment,
    ACTIONS(409), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [5784] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(97), 1,
      sym_comment,
    STATE(165), 1,
      sym_associative_item,
    STATE(176), 1,
      sym_symbol,
  [5809] = 7,
    ACTIONS(415), 1,
      anon_sym_DQUOTE,
    ACTIONS(417), 1,
      aux_sym_string_token1,
    ACTIONS(419), 1,
      sym_escape_sequence,
    ACTIONS(421), 1,
      sym_line_comment,
    ACTIONS(423), 1,
      sym_block_comment,
    STATE(98), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym_string_repeat1,
  [5831] = 7,
    ACTIONS(417), 1,
      aux_sym_string_token1,
    ACTIONS(419), 1,
      sym_escape_sequence,
    ACTIONS(421), 1,
      sym_line_comment,
    ACTIONS(423), 1,
      sym_block_comment,
    ACTIONS(425), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      aux_sym_string_repeat1,
    STATE(99), 1,
      sym_comment,
  [5853] = 6,
    ACTIONS(421), 1,
      sym_line_comment,
    ACTIONS(423), 1,
      sym_block_comment,
    ACTIONS(427), 1,
      anon_sym_DQUOTE,
    ACTIONS(429), 1,
      aux_sym_string_token1,
    ACTIONS(432), 1,
      sym_escape_sequence,
    STATE(100), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [5873] = 5,
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
  [5891] = 7,
    ACTIONS(417), 1,
      aux_sym_string_token1,
    ACTIONS(419), 1,
      sym_escape_sequence,
    ACTIONS(421), 1,
      sym_line_comment,
    ACTIONS(423), 1,
      sym_block_comment,
    ACTIONS(439), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      aux_sym_string_repeat1,
    STATE(102), 1,
      sym_comment,
  [5913] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
    STATE(103), 1,
      sym_comment,
    ACTIONS(441), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [5931] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(447), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_comment,
    ACTIONS(445), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [5949] = 7,
    ACTIONS(417), 1,
      aux_sym_string_token1,
    ACTIONS(419), 1,
      sym_escape_sequence,
    ACTIONS(421), 1,
      sym_line_comment,
    ACTIONS(423), 1,
      sym_block_comment,
    ACTIONS(449), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_string_repeat1,
    STATE(105), 1,
      sym_comment,
  [5971] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(106), 1,
      sym_comment,
    ACTIONS(229), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(451), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [5989] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(107), 1,
      sym_comment,
    ACTIONS(453), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6004] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(455), 1,
      sym_identifier,
    ACTIONS(457), 1,
      anon_sym_SEMI,
    STATE(108), 1,
      sym_comment,
    STATE(120), 1,
      sym_argument,
  [6023] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_PIPE,
    STATE(109), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [6040] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(464), 1,
      anon_sym_EQ,
    STATE(110), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [6057] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym_comment,
    STATE(190), 1,
      sym_function_block,
  [6076] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(470), 1,
      anon_sym_DOT,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    STATE(112), 1,
      sym_comment,
    STATE(134), 1,
      sym_class_method_call,
  [6095] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(113), 1,
      sym_comment,
    ACTIONS(474), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6110] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      sym_comment,
    STATE(140), 1,
      aux_sym_parameter_call_list_repeat1,
  [6129] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_comment,
    STATE(189), 1,
      sym_function_block,
  [6148] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(480), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_function_block,
    STATE(116), 1,
      sym_comment,
  [6167] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(482), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      sym_comment,
    STATE(146), 1,
      aux_sym__collection_sequence_repeat1,
  [6186] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(118), 1,
      sym_comment,
    ACTIONS(484), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6201] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_PIPE,
    STATE(119), 1,
      sym_comment,
    STATE(143), 1,
      aux_sym_parameter_list_repeat1,
  [6220] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(488), 1,
      anon_sym_SEMI,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      sym_comment,
    STATE(142), 1,
      aux_sym_parameter_list_repeat1,
  [6239] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(492), 1,
      anon_sym_EQ,
    STATE(121), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6256] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(494), 1,
      anon_sym_SEMI,
    STATE(122), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6273] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    STATE(123), 1,
      sym_comment,
    STATE(136), 1,
      aux_sym__paired_associative_sequence_repeat1,
  [6292] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(124), 1,
      sym_comment,
    ACTIONS(500), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6307] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(125), 1,
      sym_comment,
    ACTIONS(502), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6322] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    STATE(126), 2,
      sym_comment,
      aux_sym_parameter_call_list_repeat1,
  [6339] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(127), 1,
      sym_comment,
    ACTIONS(509), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6354] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(128), 1,
      sym_comment,
    ACTIONS(511), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6369] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(462), 1,
      anon_sym_SEMI,
    ACTIONS(513), 1,
      anon_sym_COMMA,
    STATE(129), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [6386] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_function_block,
    STATE(130), 1,
      sym_comment,
  [6405] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_comment,
    STATE(188), 1,
      sym_function_block,
  [6424] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(132), 1,
      sym_comment,
    ACTIONS(327), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6439] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(133), 1,
      sym_comment,
    ACTIONS(462), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [6454] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(134), 1,
      sym_comment,
    ACTIONS(516), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6469] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(135), 1,
      sym_comment,
    ACTIONS(518), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [6484] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    STATE(136), 2,
      sym_comment,
      aux_sym__paired_associative_sequence_repeat1,
  [6501] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(525), 1,
      anon_sym_SEMI,
    STATE(137), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6518] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    STATE(138), 1,
      sym_comment,
    STATE(175), 1,
      sym_function_block,
  [6537] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      aux_sym__collection_sequence_repeat1,
    STATE(139), 1,
      sym_comment,
  [6556] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_parameter_call_list_repeat1,
    STATE(140), 1,
      sym_comment,
  [6575] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    STATE(141), 1,
      sym_comment,
    STATE(174), 1,
      sym_function_block,
  [6594] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(531), 1,
      anon_sym_SEMI,
    STATE(129), 1,
      aux_sym_parameter_list_repeat1,
    STATE(142), 1,
      sym_comment,
  [6613] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(486), 1,
      anon_sym_COMMA,
    ACTIONS(531), 1,
      anon_sym_PIPE,
    STATE(109), 1,
      aux_sym_parameter_list_repeat1,
    STATE(143), 1,
      sym_comment,
  [6632] = 5,
    ACTIONS(421), 1,
      sym_line_comment,
    ACTIONS(423), 1,
      sym_block_comment,
    ACTIONS(535), 1,
      aux_sym_string_token1,
    STATE(144), 1,
      sym_comment,
    ACTIONS(533), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [6649] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_comment,
    STATE(179), 1,
      sym_function_block,
  [6668] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(347), 1,
      anon_sym_RBRACK,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    STATE(146), 2,
      sym_comment,
      aux_sym__collection_sequence_repeat1,
  [6685] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(147), 1,
      sym_comment,
    ACTIONS(540), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6700] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    ACTIONS(542), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      aux_sym__paired_associative_sequence_repeat1,
    STATE(148), 1,
      sym_comment,
  [6719] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(457), 1,
      anon_sym_PIPE,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(119), 1,
      sym_argument,
    STATE(149), 1,
      sym_comment,
  [6738] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(150), 1,
      sym_comment,
    ACTIONS(546), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6753] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    ACTIONS(550), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym_comment,
  [6769] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(152), 1,
      sym_comment,
  [6785] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(455), 1,
      sym_identifier,
    STATE(133), 1,
      sym_argument,
    STATE(153), 1,
      sym_comment,
  [6801] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(154), 1,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [6815] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(155), 1,
      sym_comment,
    ACTIONS(552), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [6829] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(554), 1,
      sym_identifier,
    ACTIONS(556), 1,
      aux_sym_symbol_token1,
    STATE(156), 1,
      sym_comment,
  [6845] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(133), 1,
      sym_argument,
    STATE(157), 1,
      sym_comment,
  [6861] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(158), 1,
      sym_comment,
    ACTIONS(558), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6875] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(159), 1,
      sym_comment,
    ACTIONS(556), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [6889] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(160), 1,
      sym_comment,
    ACTIONS(560), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [6903] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(161), 1,
      sym_comment,
    ACTIONS(562), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [6917] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(162), 1,
      sym_comment,
    ACTIONS(255), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [6931] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(163), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [6945] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(164), 1,
      sym_comment,
    ACTIONS(259), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [6959] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(165), 1,
      sym_comment,
    ACTIONS(520), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6973] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(166), 1,
      sym_comment,
    ACTIONS(564), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6987] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(167), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [7001] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(168), 1,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [7015] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(169), 1,
      sym_comment,
    ACTIONS(243), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [7029] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(170), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [7043] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(171), 1,
      sym_comment,
    ACTIONS(566), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7057] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(172), 1,
      sym_comment,
    ACTIONS(504), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7071] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(173), 1,
      sym_comment,
    ACTIONS(568), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7085] = 5,
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
  [7101] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      sym_comment,
  [7117] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(176), 1,
      sym_comment,
    ACTIONS(233), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [7131] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(578), 1,
      anon_sym_SEMI,
    STATE(177), 1,
      sym_comment,
  [7144] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(580), 1,
      anon_sym_LPAREN,
    STATE(178), 1,
      sym_comment,
  [7157] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      sym_comment,
  [7170] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(584), 1,
      ts_builtin_sym_end,
    STATE(180), 1,
      sym_comment,
  [7183] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(586), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      sym_comment,
  [7196] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(233), 1,
      anon_sym_COLON,
    STATE(182), 1,
      sym_comment,
  [7209] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(588), 1,
      sym_identifier,
    STATE(183), 1,
      sym_comment,
  [7222] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(590), 1,
      anon_sym_if,
    STATE(184), 1,
      sym_comment,
  [7235] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(592), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_comment,
  [7248] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(594), 1,
      anon_sym_SQUOTE,
    STATE(186), 1,
      sym_comment,
  [7261] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      sym_comment,
  [7274] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      sym_comment,
  [7287] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_comment,
  [7300] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      sym_comment,
  [7313] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym_comment,
  [7326] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      sym_comment,
  [7339] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(608), 1,
      sym_identifier,
    STATE(193), 1,
      sym_comment,
  [7352] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      sym_comment,
  [7365] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      sym_comment,
  [7378] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(612), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym_comment,
  [7391] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(614), 1,
      sym_identifier,
    STATE(197), 1,
      sym_comment,
  [7404] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    STATE(198), 1,
      sym_comment,
  [7417] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym_comment,
  [7430] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(620), 1,
      sym_identifier,
    STATE(200), 1,
      sym_comment,
  [7443] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(622), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      sym_comment,
  [7456] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      sym_comment,
  [7469] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(624), 1,
      anon_sym_SQUOTE,
    STATE(203), 1,
      sym_comment,
  [7482] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      sym_comment,
  [7495] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(405), 1,
      anon_sym_LBRACE,
    STATE(205), 1,
      sym_comment,
  [7508] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(550), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_comment,
  [7521] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(207), 1,
      sym_comment,
  [7534] = 1,
    ACTIONS(626), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 123,
  [SMALL_STATE(4)] = 243,
  [SMALL_STATE(5)] = 363,
  [SMALL_STATE(6)] = 479,
  [SMALL_STATE(7)] = 591,
  [SMALL_STATE(8)] = 705,
  [SMALL_STATE(9)] = 817,
  [SMALL_STATE(10)] = 928,
  [SMALL_STATE(11)] = 1039,
  [SMALL_STATE(12)] = 1142,
  [SMALL_STATE(13)] = 1247,
  [SMALL_STATE(14)] = 1344,
  [SMALL_STATE(15)] = 1438,
  [SMALL_STATE(16)] = 1527,
  [SMALL_STATE(17)] = 1616,
  [SMALL_STATE(18)] = 1705,
  [SMALL_STATE(19)] = 1794,
  [SMALL_STATE(20)] = 1883,
  [SMALL_STATE(21)] = 1972,
  [SMALL_STATE(22)] = 2061,
  [SMALL_STATE(23)] = 2150,
  [SMALL_STATE(24)] = 2239,
  [SMALL_STATE(25)] = 2328,
  [SMALL_STATE(26)] = 2417,
  [SMALL_STATE(27)] = 2508,
  [SMALL_STATE(28)] = 2597,
  [SMALL_STATE(29)] = 2673,
  [SMALL_STATE(30)] = 2749,
  [SMALL_STATE(31)] = 2825,
  [SMALL_STATE(32)] = 2901,
  [SMALL_STATE(33)] = 2942,
  [SMALL_STATE(34)] = 2983,
  [SMALL_STATE(35)] = 3023,
  [SMALL_STATE(36)] = 3073,
  [SMALL_STATE(37)] = 3113,
  [SMALL_STATE(38)] = 3177,
  [SMALL_STATE(39)] = 3219,
  [SMALL_STATE(40)] = 3259,
  [SMALL_STATE(41)] = 3299,
  [SMALL_STATE(42)] = 3341,
  [SMALL_STATE(43)] = 3411,
  [SMALL_STATE(44)] = 3451,
  [SMALL_STATE(45)] = 3491,
  [SMALL_STATE(46)] = 3543,
  [SMALL_STATE(47)] = 3583,
  [SMALL_STATE(48)] = 3623,
  [SMALL_STATE(49)] = 3663,
  [SMALL_STATE(50)] = 3721,
  [SMALL_STATE(51)] = 3761,
  [SMALL_STATE(52)] = 3801,
  [SMALL_STATE(53)] = 3841,
  [SMALL_STATE(54)] = 3901,
  [SMALL_STATE(55)] = 3949,
  [SMALL_STATE(56)] = 3989,
  [SMALL_STATE(57)] = 4029,
  [SMALL_STATE(58)] = 4083,
  [SMALL_STATE(59)] = 4123,
  [SMALL_STATE(60)] = 4163,
  [SMALL_STATE(61)] = 4203,
  [SMALL_STATE(62)] = 4243,
  [SMALL_STATE(63)] = 4289,
  [SMALL_STATE(64)] = 4333,
  [SMALL_STATE(65)] = 4373,
  [SMALL_STATE(66)] = 4413,
  [SMALL_STATE(67)] = 4453,
  [SMALL_STATE(68)] = 4493,
  [SMALL_STATE(69)] = 4533,
  [SMALL_STATE(70)] = 4573,
  [SMALL_STATE(71)] = 4613,
  [SMALL_STATE(72)] = 4653,
  [SMALL_STATE(73)] = 4693,
  [SMALL_STATE(74)] = 4760,
  [SMALL_STATE(75)] = 4800,
  [SMALL_STATE(76)] = 4864,
  [SMALL_STATE(77)] = 4904,
  [SMALL_STATE(78)] = 4972,
  [SMALL_STATE(79)] = 5036,
  [SMALL_STATE(80)] = 5099,
  [SMALL_STATE(81)] = 5162,
  [SMALL_STATE(82)] = 5225,
  [SMALL_STATE(83)] = 5261,
  [SMALL_STATE(84)] = 5323,
  [SMALL_STATE(85)] = 5361,
  [SMALL_STATE(86)] = 5399,
  [SMALL_STATE(87)] = 5435,
  [SMALL_STATE(88)] = 5471,
  [SMALL_STATE(89)] = 5506,
  [SMALL_STATE(90)] = 5541,
  [SMALL_STATE(91)] = 5576,
  [SMALL_STATE(92)] = 5611,
  [SMALL_STATE(93)] = 5645,
  [SMALL_STATE(94)] = 5687,
  [SMALL_STATE(95)] = 5729,
  [SMALL_STATE(96)] = 5760,
  [SMALL_STATE(97)] = 5784,
  [SMALL_STATE(98)] = 5809,
  [SMALL_STATE(99)] = 5831,
  [SMALL_STATE(100)] = 5853,
  [SMALL_STATE(101)] = 5873,
  [SMALL_STATE(102)] = 5891,
  [SMALL_STATE(103)] = 5913,
  [SMALL_STATE(104)] = 5931,
  [SMALL_STATE(105)] = 5949,
  [SMALL_STATE(106)] = 5971,
  [SMALL_STATE(107)] = 5989,
  [SMALL_STATE(108)] = 6004,
  [SMALL_STATE(109)] = 6023,
  [SMALL_STATE(110)] = 6040,
  [SMALL_STATE(111)] = 6057,
  [SMALL_STATE(112)] = 6076,
  [SMALL_STATE(113)] = 6095,
  [SMALL_STATE(114)] = 6110,
  [SMALL_STATE(115)] = 6129,
  [SMALL_STATE(116)] = 6148,
  [SMALL_STATE(117)] = 6167,
  [SMALL_STATE(118)] = 6186,
  [SMALL_STATE(119)] = 6201,
  [SMALL_STATE(120)] = 6220,
  [SMALL_STATE(121)] = 6239,
  [SMALL_STATE(122)] = 6256,
  [SMALL_STATE(123)] = 6273,
  [SMALL_STATE(124)] = 6292,
  [SMALL_STATE(125)] = 6307,
  [SMALL_STATE(126)] = 6322,
  [SMALL_STATE(127)] = 6339,
  [SMALL_STATE(128)] = 6354,
  [SMALL_STATE(129)] = 6369,
  [SMALL_STATE(130)] = 6386,
  [SMALL_STATE(131)] = 6405,
  [SMALL_STATE(132)] = 6424,
  [SMALL_STATE(133)] = 6439,
  [SMALL_STATE(134)] = 6454,
  [SMALL_STATE(135)] = 6469,
  [SMALL_STATE(136)] = 6484,
  [SMALL_STATE(137)] = 6501,
  [SMALL_STATE(138)] = 6518,
  [SMALL_STATE(139)] = 6537,
  [SMALL_STATE(140)] = 6556,
  [SMALL_STATE(141)] = 6575,
  [SMALL_STATE(142)] = 6594,
  [SMALL_STATE(143)] = 6613,
  [SMALL_STATE(144)] = 6632,
  [SMALL_STATE(145)] = 6649,
  [SMALL_STATE(146)] = 6668,
  [SMALL_STATE(147)] = 6685,
  [SMALL_STATE(148)] = 6700,
  [SMALL_STATE(149)] = 6719,
  [SMALL_STATE(150)] = 6738,
  [SMALL_STATE(151)] = 6753,
  [SMALL_STATE(152)] = 6769,
  [SMALL_STATE(153)] = 6785,
  [SMALL_STATE(154)] = 6801,
  [SMALL_STATE(155)] = 6815,
  [SMALL_STATE(156)] = 6829,
  [SMALL_STATE(157)] = 6845,
  [SMALL_STATE(158)] = 6861,
  [SMALL_STATE(159)] = 6875,
  [SMALL_STATE(160)] = 6889,
  [SMALL_STATE(161)] = 6903,
  [SMALL_STATE(162)] = 6917,
  [SMALL_STATE(163)] = 6931,
  [SMALL_STATE(164)] = 6945,
  [SMALL_STATE(165)] = 6959,
  [SMALL_STATE(166)] = 6973,
  [SMALL_STATE(167)] = 6987,
  [SMALL_STATE(168)] = 7001,
  [SMALL_STATE(169)] = 7015,
  [SMALL_STATE(170)] = 7029,
  [SMALL_STATE(171)] = 7043,
  [SMALL_STATE(172)] = 7057,
  [SMALL_STATE(173)] = 7071,
  [SMALL_STATE(174)] = 7085,
  [SMALL_STATE(175)] = 7101,
  [SMALL_STATE(176)] = 7117,
  [SMALL_STATE(177)] = 7131,
  [SMALL_STATE(178)] = 7144,
  [SMALL_STATE(179)] = 7157,
  [SMALL_STATE(180)] = 7170,
  [SMALL_STATE(181)] = 7183,
  [SMALL_STATE(182)] = 7196,
  [SMALL_STATE(183)] = 7209,
  [SMALL_STATE(184)] = 7222,
  [SMALL_STATE(185)] = 7235,
  [SMALL_STATE(186)] = 7248,
  [SMALL_STATE(187)] = 7261,
  [SMALL_STATE(188)] = 7274,
  [SMALL_STATE(189)] = 7287,
  [SMALL_STATE(190)] = 7300,
  [SMALL_STATE(191)] = 7313,
  [SMALL_STATE(192)] = 7326,
  [SMALL_STATE(193)] = 7339,
  [SMALL_STATE(194)] = 7352,
  [SMALL_STATE(195)] = 7365,
  [SMALL_STATE(196)] = 7378,
  [SMALL_STATE(197)] = 7391,
  [SMALL_STATE(198)] = 7404,
  [SMALL_STATE(199)] = 7417,
  [SMALL_STATE(200)] = 7430,
  [SMALL_STATE(201)] = 7443,
  [SMALL_STATE(202)] = 7456,
  [SMALL_STATE(203)] = 7469,
  [SMALL_STATE(204)] = 7482,
  [SMALL_STATE(205)] = 7495,
  [SMALL_STATE(206)] = 7508,
  [SMALL_STATE(207)] = 7521,
  [SMALL_STATE(208)] = 7534,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(160),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(99),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(183),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(193),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(185),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(178),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(71),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(95),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(3),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(159),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(44),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(44),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(160),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(55),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(99),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(61),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(200),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(183),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(67),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(193),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(13),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(112),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(185),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(178),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 3, .production_id = 5),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 3, .production_id = 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_structure, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_structure, 1),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 5),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 5),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 4, .production_id = 7),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4, .production_id = 7),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 2),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classvar, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classvar, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_var, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_var, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 8, .production_id = 12),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 8, .production_id = 12),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 8, .production_id = 11),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 8, .production_id = 11),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_var, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_var, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6, .production_id = 10),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6, .production_id = 10),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 6),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 6),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6, .production_id = 8),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6, .production_id = 8),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 6, .production_id = 9),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 6, .production_id = 9),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_sequence, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_item, 3, .production_id = 6),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__collection_sequence_repeat1, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(144),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(144),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 2, .production_id = 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 2, .production_id = 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(157),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 5, .production_id = 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_call_list, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_sequence, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 5, .production_id = 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paired_associative_sequence, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 4, .production_id = 4),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 4),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_call_list_repeat1, 2),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_call_list_repeat1, 2), SHIFT_REPEAT(42),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 4, .production_id = 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [513] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(153),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__paired_associative_sequence_repeat1, 2),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__paired_associative_sequence_repeat1, 2), SHIFT_REPEAT(97),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_call_list, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__collection_sequence_repeat1, 2), SHIFT_REPEAT(14),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paired_associative_sequence, 1),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnamed_argument, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_calls, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 4),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [584] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
