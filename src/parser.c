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
#define STATE_COUNT 150
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 0
#define TOKEN_COUNT 82
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6

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
  aux_sym_symbol_token1 = 16,
  anon_sym_SQUOTE = 17,
  sym_char = 18,
  anon_sym_DQUOTE = 19,
  aux_sym_string_token1 = 20,
  sym_escape_sequence = 21,
  anon_sym_true = 22,
  anon_sym_false = 23,
  anon_sym_var = 24,
  anon_sym_classvar = 25,
  anon_sym_TILDE = 26,
  anon_sym_CARET = 27,
  sym_line_comment = 28,
  sym_block_comment = 29,
  anon_sym_LBRACK = 30,
  anon_sym_RBRACK = 31,
  anon_sym_DASH_GT = 32,
  anon_sym_Bag = 33,
  anon_sym_Dictionary = 34,
  anon_sym_Environment = 35,
  anon_sym_Event = 36,
  anon_sym_IdentityBag = 37,
  anon_sym_IdentityDictionary = 38,
  anon_sym_IdentitySet = 39,
  anon_sym_LazyEnvir = 40,
  anon_sym_MultiLevelIdentityDictionary = 41,
  anon_sym_ObjectTable = 42,
  anon_sym_Set = 43,
  anon_sym_TwoWayIdentityDictionary = 44,
  anon_sym_Array = 45,
  anon_sym_Array2D = 46,
  anon_sym_ArrayedCollection = 47,
  anon_sym_DoubleArray = 48,
  anon_sym_FloatArray = 49,
  anon_sym_Int16Array = 50,
  anon_sym_Int32Array = 51,
  anon_sym_Int8Array = 52,
  anon_sym_LinkedList = 53,
  anon_sym_List = 54,
  anon_sym_Order = 55,
  anon_sym_OrderedIdentitySet = 56,
  anon_sym_Pair = 57,
  anon_sym_PriorityQueue = 58,
  anon_sym_RawArray = 59,
  anon_sym_SequenceableCollection = 60,
  anon_sym_Signal = 61,
  anon_sym_SortedList = 62,
  anon_sym_SparseArray = 63,
  anon_sym_String = 64,
  anon_sym_SymbolArray = 65,
  anon_sym_AMP_AMP = 66,
  anon_sym_PIPE_PIPE = 67,
  anon_sym_AMP = 68,
  anon_sym_EQ_EQ = 69,
  anon_sym_BANG_EQ = 70,
  anon_sym_LT = 71,
  anon_sym_LT_EQ = 72,
  anon_sym_GT = 73,
  anon_sym_GT_EQ = 74,
  anon_sym_LT_LT = 75,
  anon_sym_GT_GT = 76,
  anon_sym_PLUS = 77,
  anon_sym_DASH = 78,
  anon_sym_STAR = 79,
  anon_sym_SLASH = 80,
  anon_sym_PERCENT = 81,
  sym_source_file = 82,
  sym__expression = 83,
  sym__expression_statement = 84,
  sym__value = 85,
  sym_function_definition = 86,
  sym_function_call = 87,
  sym_function_block = 88,
  sym_parameter_list = 89,
  sym_argument = 90,
  sym_parameter_call_list = 91,
  sym_argument_calls = 92,
  sym_unnamed_argument = 93,
  sym_named_argument = 94,
  sym_literals = 95,
  sym_number = 96,
  sym_float = 97,
  sym_symbol = 98,
  sym_string = 99,
  sym_bool = 100,
  sym_code_block = 101,
  sym_variable = 102,
  sym_local_var = 103,
  sym_classvar = 104,
  sym_environment_var = 105,
  sym_variable_definition = 106,
  sym_comment = 107,
  sym_collection = 108,
  sym__collection_sequence = 109,
  sym_associative_item = 110,
  sym__unordered_collection_types = 111,
  sym__ordered_collection_types = 112,
  sym_binary_expression = 113,
  aux_sym_source_file_repeat1 = 114,
  aux_sym_parameter_list_repeat1 = 115,
  aux_sym_parameter_call_list_repeat1 = 116,
  aux_sym_string_repeat1 = 117,
  aux_sym__collection_sequence_repeat1 = 118,
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
  [aux_sym_symbol_token1] = "symbol_token1",
  [anon_sym_SQUOTE] = "'",
  [sym_char] = "char",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_var] = "var",
  [anon_sym_classvar] = "classvar",
  [anon_sym_TILDE] = "~",
  [anon_sym_CARET] = "^",
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
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym__expression_statement] = "_expression_statement",
  [sym__value] = "_value",
  [sym_function_definition] = "function_definition",
  [sym_function_call] = "function_call",
  [sym_function_block] = "function_block",
  [sym_parameter_list] = "parameter_list",
  [sym_argument] = "argument",
  [sym_parameter_call_list] = "parameter_call_list",
  [sym_argument_calls] = "argument_calls",
  [sym_unnamed_argument] = "unnamed_argument",
  [sym_named_argument] = "named_argument",
  [sym_literals] = "literals",
  [sym_number] = "number",
  [sym_float] = "float",
  [sym_symbol] = "symbol",
  [sym_string] = "string",
  [sym_bool] = "bool",
  [sym_code_block] = "code_block",
  [sym_variable] = "variable",
  [sym_local_var] = "local_var",
  [sym_classvar] = "classvar",
  [sym_environment_var] = "environment_var",
  [sym_variable_definition] = "variable_definition",
  [sym_comment] = "comment",
  [sym_collection] = "collection",
  [sym__collection_sequence] = "_collection_sequence",
  [sym_associative_item] = "associative_item",
  [sym__unordered_collection_types] = "_unordered_collection_types",
  [sym__ordered_collection_types] = "_ordered_collection_types",
  [sym_binary_expression] = "binary_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_parameter_call_list_repeat1] = "parameter_call_list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__collection_sequence_repeat1] = "_collection_sequence_repeat1",
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
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_char] = sym_char,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_classvar] = anon_sym_classvar,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_CARET] = anon_sym_CARET,
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
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym__expression_statement] = sym__expression_statement,
  [sym__value] = sym__value,
  [sym_function_definition] = sym_function_definition,
  [sym_function_call] = sym_function_call,
  [sym_function_block] = sym_function_block,
  [sym_parameter_list] = sym_parameter_list,
  [sym_argument] = sym_argument,
  [sym_parameter_call_list] = sym_parameter_call_list,
  [sym_argument_calls] = sym_argument_calls,
  [sym_unnamed_argument] = sym_unnamed_argument,
  [sym_named_argument] = sym_named_argument,
  [sym_literals] = sym_literals,
  [sym_number] = sym_number,
  [sym_float] = sym_float,
  [sym_symbol] = sym_symbol,
  [sym_string] = sym_string,
  [sym_bool] = sym_bool,
  [sym_code_block] = sym_code_block,
  [sym_variable] = sym_variable,
  [sym_local_var] = sym_local_var,
  [sym_classvar] = sym_classvar,
  [sym_environment_var] = sym_environment_var,
  [sym_variable_definition] = sym_variable_definition,
  [sym_comment] = sym_comment,
  [sym_collection] = sym_collection,
  [sym__collection_sequence] = sym__collection_sequence,
  [sym_associative_item] = sym_associative_item,
  [sym__unordered_collection_types] = sym__unordered_collection_types,
  [sym__ordered_collection_types] = sym__ordered_collection_types,
  [sym_binary_expression] = sym_binary_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_parameter_call_list_repeat1] = aux_sym_parameter_call_list_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym__collection_sequence_repeat1] = aux_sym__collection_sequence_repeat1,
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
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_classvar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
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
  [sym__value] = {
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
  [sym_literals] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
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
  [sym_code_block] = {
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
  [sym_associative_item] = {
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
  [aux_sym_source_file_repeat1] = {
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
};

enum {
  field_left = 1,
  field_operator = 2,
  field_right = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[2] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(285);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '$') ADVANCE(283);
      if (lookahead == '%') ADVANCE(371);
      if (lookahead == '&') ADVANCE(358);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == ')') ADVANCE(291);
      if (lookahead == '*') ADVANCE(369);
      if (lookahead == '+') ADVANCE(367);
      if (lookahead == ',') ADVANCE(294);
      if (lookahead == '-') ADVANCE(368);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '/') ADVANCE(370);
      if (lookahead == '0') ADVANCE(299);
      if (lookahead == ':') ADVANCE(298);
      if (lookahead == ';') ADVANCE(286);
      if (lookahead == '<') ADVANCE(361);
      if (lookahead == '=') ADVANCE(288);
      if (lookahead == '>') ADVANCE(363);
      if (lookahead == 'A') ADVANCE(190);
      if (lookahead == 'B') ADVANCE(38);
      if (lookahead == 'D') ADVANCE(114);
      if (lookahead == 'E') ADVANCE(153);
      if (lookahead == 'F') ADVANCE(139);
      if (lookahead == 'I') ADVANCE(79);
      if (lookahead == 'L') ADVANCE(39);
      if (lookahead == 'M') ADVANCE(247);
      if (lookahead == 'O') ADVANCE(62);
      if (lookahead == 'P') ADVANCE(40);
      if (lookahead == 'R') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(85);
      if (lookahead == 'T') ADVANCE(255);
      if (lookahead == '[') ADVANCE(320);
      if (lookahead == '\\') ADVANCE(297);
      if (lookahead == ']') ADVANCE(321);
      if (lookahead == '^') ADVANCE(317);
      if (lookahead == '{') ADVANCE(292);
      if (lookahead == '|') ADVANCE(296);
      if (lookahead == '}') ADVANCE(293);
      if (lookahead == '~') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '/') ADVANCE(307);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead != 0) ADVANCE(311);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(306);
      if (lookahead == '\r') ADVANCE(313);
      if (lookahead == 'u') ADVANCE(277);
      if (lookahead == 'x') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(315);
      if (lookahead != 0) ADVANCE(312);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(318);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(319);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(10);
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '8') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == '6') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(360);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(207);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(209);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(210);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(211);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(212);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(213);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(214);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(215);
      END_STATE();
    case 20:
      if (lookahead == 'B') ADVANCE(45);
      if (lookahead == 'D') ADVANCE(133);
      if (lookahead == 'S') ADVANCE(94);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(175);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(184);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(336);
      END_STATE();
    case 24:
      if (lookahead == 'D') ADVANCE(134);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(135);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(170);
      END_STATE();
    case 27:
      if (lookahead == 'I') ADVANCE(81);
      END_STATE();
    case 28:
      if (lookahead == 'I') ADVANCE(82);
      END_STATE();
    case 29:
      if (lookahead == 'I') ADVANCE(84);
      END_STATE();
    case 30:
      if (lookahead == 'L') ADVANCE(89);
      END_STATE();
    case 31:
      if (lookahead == 'L') ADVANCE(116);
      END_STATE();
    case 32:
      if (lookahead == 'L') ADVANCE(126);
      END_STATE();
    case 33:
      if (lookahead == 'Q') ADVANCE(248);
      END_STATE();
    case 34:
      if (lookahead == 'S') ADVANCE(95);
      END_STATE();
    case 35:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 36:
      if (lookahead == 'W') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == '\\') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(196);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(205);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(206);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(141);
      END_STATE();
    case 64:
      if (lookahead == 'b') ADVANCE(174);
      END_STATE();
    case 65:
      if (lookahead == 'b') ADVANCE(143);
      END_STATE();
    case 66:
      if (lookahead == 'b') ADVANCE(144);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(234);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(104);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(235);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(240);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(243);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(301);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(32);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 82:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 83:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == 'p') ADVANCE(46);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead == 'y') ADVANCE(151);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 109:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(323);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(354);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(327);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(161);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(246);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(216);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(231);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(244);
      END_STATE();
    case 137:
      if (lookahead == 'j') ADVANCE(96);
      END_STATE();
    case 138:
      if (lookahead == 'k') ADVANCE(90);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(351);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(228);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 151:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 152:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == 'v') ADVANCE(86);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(337);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(238);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(245);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(158);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(156);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 185:
      if (lookahead == 'q') ADVANCE(250);
      if (lookahead == 't') ADVANCE(333);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(347);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(345);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(330);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(176);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(263);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(273);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(326);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(343);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(352);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(325);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(270);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 247:
      if (lookahead == 'u') ADVANCE(146);
      END_STATE();
    case 248:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 249:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 250:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 251:
      if (lookahead == 'v') ADVANCE(92);
      END_STATE();
    case 252:
      if (lookahead == 'v') ADVANCE(121);
      END_STATE();
    case 253:
      if (lookahead == 'v') ADVANCE(124);
      END_STATE();
    case 254:
      if (lookahead == 'w') ADVANCE(12);
      END_STATE();
    case 255:
      if (lookahead == 'w') ADVANCE(172);
      END_STATE();
    case 256:
      if (lookahead == 'y') ADVANCE(26);
      END_STATE();
    case 257:
      if (lookahead == 'y') ADVANCE(335);
      END_STATE();
    case 258:
      if (lookahead == 'y') ADVANCE(27);
      END_STATE();
    case 259:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 260:
      if (lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 261:
      if (lookahead == 'y') ADVANCE(349);
      END_STATE();
    case 262:
      if (lookahead == 'y') ADVANCE(342);
      END_STATE();
    case 263:
      if (lookahead == 'y') ADVANCE(324);
      END_STATE();
    case 264:
      if (lookahead == 'y') ADVANCE(339);
      END_STATE();
    case 265:
      if (lookahead == 'y') ADVANCE(340);
      END_STATE();
    case 266:
      if (lookahead == 'y') ADVANCE(341);
      END_STATE();
    case 267:
      if (lookahead == 'y') ADVANCE(338);
      END_STATE();
    case 268:
      if (lookahead == 'y') ADVANCE(353);
      END_STATE();
    case 269:
      if (lookahead == 'y') ADVANCE(355);
      END_STATE();
    case 270:
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 271:
      if (lookahead == 'y') ADVANCE(328);
      END_STATE();
    case 272:
      if (lookahead == 'y') ADVANCE(334);
      END_STATE();
    case 273:
      if (lookahead == 'y') ADVANCE(331);
      END_STATE();
    case 274:
      if (lookahead == 'y') ADVANCE(24);
      END_STATE();
    case 275:
      if (lookahead == 'y') ADVANCE(25);
      END_STATE();
    case 276:
      if (lookahead == 'z') ADVANCE(256);
      END_STATE();
    case 277:
      if (lookahead == '{') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 278:
      if (lookahead == '}') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 279:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 280:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(312);
      END_STATE();
    case 281:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 282:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 283:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(304);
      END_STATE();
    case 284:
      if (eof) ADVANCE(285);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '$') ADVANCE(283);
      if (lookahead == '\'') ADVANCE(303);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == ')') ADVANCE(291);
      if (lookahead == ',') ADVANCE(294);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(299);
      if (lookahead == ';') ADVANCE(286);
      if (lookahead == '=') ADVANCE(287);
      if (lookahead == 'A') ADVANCE(190);
      if (lookahead == 'B') ADVANCE(38);
      if (lookahead == 'D') ADVANCE(114);
      if (lookahead == 'E') ADVANCE(153);
      if (lookahead == 'F') ADVANCE(139);
      if (lookahead == 'I') ADVANCE(79);
      if (lookahead == 'L') ADVANCE(39);
      if (lookahead == 'M') ADVANCE(247);
      if (lookahead == 'O') ADVANCE(62);
      if (lookahead == 'P') ADVANCE(40);
      if (lookahead == 'R') ADVANCE(41);
      if (lookahead == 'S') ADVANCE(85);
      if (lookahead == 'T') ADVANCE(255);
      if (lookahead == '[') ADVANCE(320);
      if (lookahead == '\\') ADVANCE(297);
      if (lookahead == '{') ADVANCE(292);
      if (lookahead == '|') ADVANCE(295);
      if (lookahead == '}') ADVANCE(293);
      if (lookahead == '~') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(284)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(300);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(359);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(357);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_hexinteger);
      if (lookahead == '\\') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(309);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(311);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(308);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(307);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(311);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(306);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(312);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(314);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_Bag);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_Dictionary);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_Environment);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_Event);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_IdentityBag);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_IdentityDictionary);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_IdentitySet);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_LazyEnvir);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_MultiLevelIdentityDictionary);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_ObjectTable);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_TwoWayIdentityDictionary);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_Array);
      if (lookahead == '2') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_Array2D);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_ArrayedCollection);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_DoubleArray);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_FloatArray);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_Int16Array);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_Int32Array);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_Int8Array);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_LinkedList);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_List);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_Order);
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_OrderedIdentitySet);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_Pair);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_PriorityQueue);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_RawArray);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_SequenceableCollection);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_Signal);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_SortedList);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_SparseArray);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_SymbolArray);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(356);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(365);
      if (lookahead == '=') ADVANCE(362);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(364);
      if (lookahead == '>') ADVANCE(366);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(322);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(318);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(372);
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
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == 'v') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'g') ADVANCE(11);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_arg);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 19:
      if (lookahead == 'v') ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_classvar);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 284},
  [2] = {.lex_state = 284},
  [3] = {.lex_state = 284},
  [4] = {.lex_state = 284},
  [5] = {.lex_state = 284},
  [6] = {.lex_state = 284},
  [7] = {.lex_state = 284},
  [8] = {.lex_state = 284},
  [9] = {.lex_state = 284},
  [10] = {.lex_state = 284},
  [11] = {.lex_state = 284},
  [12] = {.lex_state = 284},
  [13] = {.lex_state = 284},
  [14] = {.lex_state = 284},
  [15] = {.lex_state = 284},
  [16] = {.lex_state = 284},
  [17] = {.lex_state = 284},
  [18] = {.lex_state = 284},
  [19] = {.lex_state = 284},
  [20] = {.lex_state = 284},
  [21] = {.lex_state = 284},
  [22] = {.lex_state = 284},
  [23] = {.lex_state = 284},
  [24] = {.lex_state = 284},
  [25] = {.lex_state = 284},
  [26] = {.lex_state = 284},
  [27] = {.lex_state = 284},
  [28] = {.lex_state = 284},
  [29] = {.lex_state = 284},
  [30] = {.lex_state = 284},
  [31] = {.lex_state = 284},
  [32] = {.lex_state = 284},
  [33] = {.lex_state = 284},
  [34] = {.lex_state = 284},
  [35] = {.lex_state = 284},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
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
  [65] = {.lex_state = 284},
  [66] = {.lex_state = 284},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 284},
  [74] = {.lex_state = 284},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 284},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 284},
  [90] = {.lex_state = 284},
  [91] = {.lex_state = 284},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 284},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 284},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 284},
  [102] = {.lex_state = 284},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 284},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 284},
  [116] = {.lex_state = 284},
  [117] = {.lex_state = 284},
  [118] = {.lex_state = 284},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 284},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 284},
  [123] = {.lex_state = 284},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 284},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 284},
  [148] = {.lex_state = 0},
  [149] = {(TSStateId)(-1)},
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
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(134),
    [sym__expression] = STATE(10),
    [sym__expression_statement] = STATE(135),
    [sym__value] = STATE(72),
    [sym_function_definition] = STATE(144),
    [sym_function_call] = STATE(144),
    [sym_function_block] = STATE(68),
    [sym_literals] = STATE(57),
    [sym_number] = STATE(59),
    [sym_float] = STATE(52),
    [sym_symbol] = STATE(59),
    [sym_string] = STATE(59),
    [sym_bool] = STATE(59),
    [sym_code_block] = STATE(14),
    [sym_variable] = STATE(56),
    [sym_local_var] = STATE(36),
    [sym_classvar] = STATE(36),
    [sym_environment_var] = STATE(36),
    [sym_variable_definition] = STATE(144),
    [sym_comment] = STATE(1),
    [sym_collection] = STATE(144),
    [sym__unordered_collection_types] = STATE(111),
    [sym__ordered_collection_types] = STATE(111),
    [sym_binary_expression] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_hexinteger] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_char] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_var] = ACTIONS(25),
    [anon_sym_classvar] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_Bag] = ACTIONS(33),
    [anon_sym_Dictionary] = ACTIONS(33),
    [anon_sym_Environment] = ACTIONS(33),
    [anon_sym_Event] = ACTIONS(33),
    [anon_sym_IdentityBag] = ACTIONS(33),
    [anon_sym_IdentityDictionary] = ACTIONS(33),
    [anon_sym_IdentitySet] = ACTIONS(33),
    [anon_sym_LazyEnvir] = ACTIONS(33),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(33),
    [anon_sym_ObjectTable] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(33),
    [anon_sym_Array] = ACTIONS(35),
    [anon_sym_Array2D] = ACTIONS(37),
    [anon_sym_ArrayedCollection] = ACTIONS(37),
    [anon_sym_DoubleArray] = ACTIONS(37),
    [anon_sym_FloatArray] = ACTIONS(37),
    [anon_sym_Int16Array] = ACTIONS(37),
    [anon_sym_Int32Array] = ACTIONS(37),
    [anon_sym_Int8Array] = ACTIONS(37),
    [anon_sym_LinkedList] = ACTIONS(37),
    [anon_sym_List] = ACTIONS(37),
    [anon_sym_Order] = ACTIONS(35),
    [anon_sym_OrderedIdentitySet] = ACTIONS(37),
    [anon_sym_Pair] = ACTIONS(37),
    [anon_sym_PriorityQueue] = ACTIONS(37),
    [anon_sym_RawArray] = ACTIONS(37),
    [anon_sym_SequenceableCollection] = ACTIONS(37),
    [anon_sym_Signal] = ACTIONS(37),
    [anon_sym_SortedList] = ACTIONS(37),
    [anon_sym_SparseArray] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SymbolArray] = ACTIONS(37),
  },
  [2] = {
    [sym__expression] = STATE(10),
    [sym__expression_statement] = STATE(135),
    [sym__value] = STATE(48),
    [sym_function_definition] = STATE(144),
    [sym_function_call] = STATE(144),
    [sym_function_block] = STATE(68),
    [sym_literals] = STATE(57),
    [sym_number] = STATE(59),
    [sym_float] = STATE(52),
    [sym_symbol] = STATE(43),
    [sym_string] = STATE(59),
    [sym_bool] = STATE(59),
    [sym_code_block] = STATE(14),
    [sym_variable] = STATE(56),
    [sym_local_var] = STATE(36),
    [sym_classvar] = STATE(36),
    [sym_environment_var] = STATE(36),
    [sym_variable_definition] = STATE(144),
    [sym_comment] = STATE(2),
    [sym_collection] = STATE(144),
    [sym__collection_sequence] = STATE(146),
    [sym_associative_item] = STATE(81),
    [sym__unordered_collection_types] = STATE(111),
    [sym__ordered_collection_types] = STATE(111),
    [sym_binary_expression] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(39),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_hexinteger] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_char] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(43),
    [anon_sym_false] = ACTIONS(43),
    [anon_sym_var] = ACTIONS(45),
    [anon_sym_classvar] = ACTIONS(47),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_Bag] = ACTIONS(33),
    [anon_sym_Dictionary] = ACTIONS(33),
    [anon_sym_Environment] = ACTIONS(33),
    [anon_sym_Event] = ACTIONS(33),
    [anon_sym_IdentityBag] = ACTIONS(33),
    [anon_sym_IdentityDictionary] = ACTIONS(33),
    [anon_sym_IdentitySet] = ACTIONS(33),
    [anon_sym_LazyEnvir] = ACTIONS(33),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(33),
    [anon_sym_ObjectTable] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(33),
    [anon_sym_Array] = ACTIONS(35),
    [anon_sym_Array2D] = ACTIONS(37),
    [anon_sym_ArrayedCollection] = ACTIONS(37),
    [anon_sym_DoubleArray] = ACTIONS(37),
    [anon_sym_FloatArray] = ACTIONS(37),
    [anon_sym_Int16Array] = ACTIONS(37),
    [anon_sym_Int32Array] = ACTIONS(37),
    [anon_sym_Int8Array] = ACTIONS(37),
    [anon_sym_LinkedList] = ACTIONS(37),
    [anon_sym_List] = ACTIONS(37),
    [anon_sym_Order] = ACTIONS(35),
    [anon_sym_OrderedIdentitySet] = ACTIONS(37),
    [anon_sym_Pair] = ACTIONS(37),
    [anon_sym_PriorityQueue] = ACTIONS(37),
    [anon_sym_RawArray] = ACTIONS(37),
    [anon_sym_SequenceableCollection] = ACTIONS(37),
    [anon_sym_Signal] = ACTIONS(37),
    [anon_sym_SortedList] = ACTIONS(37),
    [anon_sym_SparseArray] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SymbolArray] = ACTIONS(37),
  },
  [3] = {
    [sym__expression] = STATE(10),
    [sym__expression_statement] = STATE(135),
    [sym__value] = STATE(72),
    [sym_function_definition] = STATE(144),
    [sym_function_call] = STATE(144),
    [sym_function_block] = STATE(68),
    [sym_parameter_list] = STATE(6),
    [sym_literals] = STATE(57),
    [sym_number] = STATE(59),
    [sym_float] = STATE(52),
    [sym_symbol] = STATE(59),
    [sym_string] = STATE(59),
    [sym_bool] = STATE(59),
    [sym_code_block] = STATE(14),
    [sym_variable] = STATE(56),
    [sym_local_var] = STATE(36),
    [sym_classvar] = STATE(36),
    [sym_environment_var] = STATE(36),
    [sym_variable_definition] = STATE(144),
    [sym_comment] = STATE(3),
    [sym_collection] = STATE(144),
    [sym__unordered_collection_types] = STATE(111),
    [sym__ordered_collection_types] = STATE(111),
    [sym_binary_expression] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(49),
    [anon_sym_arg] = ACTIONS(51),
    [anon_sym_PIPE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_hexinteger] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_char] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_var] = ACTIONS(25),
    [anon_sym_classvar] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_Bag] = ACTIONS(33),
    [anon_sym_Dictionary] = ACTIONS(33),
    [anon_sym_Environment] = ACTIONS(33),
    [anon_sym_Event] = ACTIONS(33),
    [anon_sym_IdentityBag] = ACTIONS(33),
    [anon_sym_IdentityDictionary] = ACTIONS(33),
    [anon_sym_IdentitySet] = ACTIONS(33),
    [anon_sym_LazyEnvir] = ACTIONS(33),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(33),
    [anon_sym_ObjectTable] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(33),
    [anon_sym_Array] = ACTIONS(35),
    [anon_sym_Array2D] = ACTIONS(37),
    [anon_sym_ArrayedCollection] = ACTIONS(37),
    [anon_sym_DoubleArray] = ACTIONS(37),
    [anon_sym_FloatArray] = ACTIONS(37),
    [anon_sym_Int16Array] = ACTIONS(37),
    [anon_sym_Int32Array] = ACTIONS(37),
    [anon_sym_Int8Array] = ACTIONS(37),
    [anon_sym_LinkedList] = ACTIONS(37),
    [anon_sym_List] = ACTIONS(37),
    [anon_sym_Order] = ACTIONS(35),
    [anon_sym_OrderedIdentitySet] = ACTIONS(37),
    [anon_sym_Pair] = ACTIONS(37),
    [anon_sym_PriorityQueue] = ACTIONS(37),
    [anon_sym_RawArray] = ACTIONS(37),
    [anon_sym_SequenceableCollection] = ACTIONS(37),
    [anon_sym_Signal] = ACTIONS(37),
    [anon_sym_SortedList] = ACTIONS(37),
    [anon_sym_SparseArray] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SymbolArray] = ACTIONS(37),
  },
  [4] = {
    [sym__expression] = STATE(10),
    [sym__expression_statement] = STATE(135),
    [sym__value] = STATE(72),
    [sym_function_definition] = STATE(144),
    [sym_function_call] = STATE(144),
    [sym_function_block] = STATE(68),
    [sym_literals] = STATE(57),
    [sym_number] = STATE(59),
    [sym_float] = STATE(52),
    [sym_symbol] = STATE(59),
    [sym_string] = STATE(59),
    [sym_bool] = STATE(59),
    [sym_code_block] = STATE(14),
    [sym_variable] = STATE(56),
    [sym_local_var] = STATE(36),
    [sym_classvar] = STATE(36),
    [sym_environment_var] = STATE(36),
    [sym_variable_definition] = STATE(144),
    [sym_comment] = STATE(4),
    [sym_collection] = STATE(144),
    [sym__unordered_collection_types] = STATE(111),
    [sym__ordered_collection_types] = STATE(111),
    [sym_binary_expression] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(60),
    [anon_sym_RBRACE] = ACTIONS(55),
    [anon_sym_BSLASH] = ACTIONS(63),
    [sym_integer] = ACTIONS(66),
    [sym_hexinteger] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(72),
    [sym_char] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(78),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_var] = ACTIONS(84),
    [anon_sym_classvar] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(90),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_Bag] = ACTIONS(96),
    [anon_sym_Dictionary] = ACTIONS(96),
    [anon_sym_Environment] = ACTIONS(96),
    [anon_sym_Event] = ACTIONS(96),
    [anon_sym_IdentityBag] = ACTIONS(96),
    [anon_sym_IdentityDictionary] = ACTIONS(96),
    [anon_sym_IdentitySet] = ACTIONS(96),
    [anon_sym_LazyEnvir] = ACTIONS(96),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(96),
    [anon_sym_ObjectTable] = ACTIONS(96),
    [anon_sym_Set] = ACTIONS(96),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(96),
    [anon_sym_Array] = ACTIONS(99),
    [anon_sym_Array2D] = ACTIONS(102),
    [anon_sym_ArrayedCollection] = ACTIONS(102),
    [anon_sym_DoubleArray] = ACTIONS(102),
    [anon_sym_FloatArray] = ACTIONS(102),
    [anon_sym_Int16Array] = ACTIONS(102),
    [anon_sym_Int32Array] = ACTIONS(102),
    [anon_sym_Int8Array] = ACTIONS(102),
    [anon_sym_LinkedList] = ACTIONS(102),
    [anon_sym_List] = ACTIONS(102),
    [anon_sym_Order] = ACTIONS(99),
    [anon_sym_OrderedIdentitySet] = ACTIONS(102),
    [anon_sym_Pair] = ACTIONS(102),
    [anon_sym_PriorityQueue] = ACTIONS(102),
    [anon_sym_RawArray] = ACTIONS(102),
    [anon_sym_SequenceableCollection] = ACTIONS(102),
    [anon_sym_Signal] = ACTIONS(102),
    [anon_sym_SortedList] = ACTIONS(102),
    [anon_sym_SparseArray] = ACTIONS(102),
    [anon_sym_String] = ACTIONS(102),
    [anon_sym_SymbolArray] = ACTIONS(102),
  },
  [5] = {
    [sym__expression] = STATE(10),
    [sym__expression_statement] = STATE(135),
    [sym__value] = STATE(72),
    [sym_function_definition] = STATE(144),
    [sym_function_call] = STATE(144),
    [sym_function_block] = STATE(68),
    [sym_literals] = STATE(57),
    [sym_number] = STATE(59),
    [sym_float] = STATE(52),
    [sym_symbol] = STATE(59),
    [sym_string] = STATE(59),
    [sym_bool] = STATE(59),
    [sym_code_block] = STATE(14),
    [sym_variable] = STATE(56),
    [sym_local_var] = STATE(36),
    [sym_classvar] = STATE(36),
    [sym_environment_var] = STATE(36),
    [sym_variable_definition] = STATE(144),
    [sym_comment] = STATE(5),
    [sym_collection] = STATE(144),
    [sym__unordered_collection_types] = STATE(111),
    [sym__ordered_collection_types] = STATE(111),
    [sym_binary_expression] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_hexinteger] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_char] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_var] = ACTIONS(25),
    [anon_sym_classvar] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_Bag] = ACTIONS(33),
    [anon_sym_Dictionary] = ACTIONS(33),
    [anon_sym_Environment] = ACTIONS(33),
    [anon_sym_Event] = ACTIONS(33),
    [anon_sym_IdentityBag] = ACTIONS(33),
    [anon_sym_IdentityDictionary] = ACTIONS(33),
    [anon_sym_IdentitySet] = ACTIONS(33),
    [anon_sym_LazyEnvir] = ACTIONS(33),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(33),
    [anon_sym_ObjectTable] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(33),
    [anon_sym_Array] = ACTIONS(35),
    [anon_sym_Array2D] = ACTIONS(37),
    [anon_sym_ArrayedCollection] = ACTIONS(37),
    [anon_sym_DoubleArray] = ACTIONS(37),
    [anon_sym_FloatArray] = ACTIONS(37),
    [anon_sym_Int16Array] = ACTIONS(37),
    [anon_sym_Int32Array] = ACTIONS(37),
    [anon_sym_Int8Array] = ACTIONS(37),
    [anon_sym_LinkedList] = ACTIONS(37),
    [anon_sym_List] = ACTIONS(37),
    [anon_sym_Order] = ACTIONS(35),
    [anon_sym_OrderedIdentitySet] = ACTIONS(37),
    [anon_sym_Pair] = ACTIONS(37),
    [anon_sym_PriorityQueue] = ACTIONS(37),
    [anon_sym_RawArray] = ACTIONS(37),
    [anon_sym_SequenceableCollection] = ACTIONS(37),
    [anon_sym_Signal] = ACTIONS(37),
    [anon_sym_SortedList] = ACTIONS(37),
    [anon_sym_SparseArray] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SymbolArray] = ACTIONS(37),
  },
  [6] = {
    [sym__expression] = STATE(10),
    [sym__expression_statement] = STATE(135),
    [sym__value] = STATE(72),
    [sym_function_definition] = STATE(144),
    [sym_function_call] = STATE(144),
    [sym_function_block] = STATE(68),
    [sym_literals] = STATE(57),
    [sym_number] = STATE(59),
    [sym_float] = STATE(52),
    [sym_symbol] = STATE(59),
    [sym_string] = STATE(59),
    [sym_bool] = STATE(59),
    [sym_code_block] = STATE(14),
    [sym_variable] = STATE(56),
    [sym_local_var] = STATE(36),
    [sym_classvar] = STATE(36),
    [sym_environment_var] = STATE(36),
    [sym_variable_definition] = STATE(144),
    [sym_comment] = STATE(6),
    [sym_collection] = STATE(144),
    [sym__unordered_collection_types] = STATE(111),
    [sym__ordered_collection_types] = STATE(111),
    [sym_binary_expression] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(5),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_hexinteger] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_char] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_var] = ACTIONS(25),
    [anon_sym_classvar] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_Bag] = ACTIONS(33),
    [anon_sym_Dictionary] = ACTIONS(33),
    [anon_sym_Environment] = ACTIONS(33),
    [anon_sym_Event] = ACTIONS(33),
    [anon_sym_IdentityBag] = ACTIONS(33),
    [anon_sym_IdentityDictionary] = ACTIONS(33),
    [anon_sym_IdentitySet] = ACTIONS(33),
    [anon_sym_LazyEnvir] = ACTIONS(33),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(33),
    [anon_sym_ObjectTable] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(33),
    [anon_sym_Array] = ACTIONS(35),
    [anon_sym_Array2D] = ACTIONS(37),
    [anon_sym_ArrayedCollection] = ACTIONS(37),
    [anon_sym_DoubleArray] = ACTIONS(37),
    [anon_sym_FloatArray] = ACTIONS(37),
    [anon_sym_Int16Array] = ACTIONS(37),
    [anon_sym_Int32Array] = ACTIONS(37),
    [anon_sym_Int8Array] = ACTIONS(37),
    [anon_sym_LinkedList] = ACTIONS(37),
    [anon_sym_List] = ACTIONS(37),
    [anon_sym_Order] = ACTIONS(35),
    [anon_sym_OrderedIdentitySet] = ACTIONS(37),
    [anon_sym_Pair] = ACTIONS(37),
    [anon_sym_PriorityQueue] = ACTIONS(37),
    [anon_sym_RawArray] = ACTIONS(37),
    [anon_sym_SequenceableCollection] = ACTIONS(37),
    [anon_sym_Signal] = ACTIONS(37),
    [anon_sym_SortedList] = ACTIONS(37),
    [anon_sym_SparseArray] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SymbolArray] = ACTIONS(37),
  },
  [7] = {
    [sym__expression] = STATE(10),
    [sym__expression_statement] = STATE(135),
    [sym__value] = STATE(72),
    [sym_function_definition] = STATE(144),
    [sym_function_call] = STATE(144),
    [sym_function_block] = STATE(68),
    [sym_literals] = STATE(57),
    [sym_number] = STATE(59),
    [sym_float] = STATE(52),
    [sym_symbol] = STATE(59),
    [sym_string] = STATE(59),
    [sym_bool] = STATE(59),
    [sym_code_block] = STATE(14),
    [sym_variable] = STATE(56),
    [sym_local_var] = STATE(36),
    [sym_classvar] = STATE(36),
    [sym_environment_var] = STATE(36),
    [sym_variable_definition] = STATE(144),
    [sym_comment] = STATE(7),
    [sym_collection] = STATE(144),
    [sym__unordered_collection_types] = STATE(111),
    [sym__ordered_collection_types] = STATE(111),
    [sym_binary_expression] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_hexinteger] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_char] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_var] = ACTIONS(25),
    [anon_sym_classvar] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_Bag] = ACTIONS(33),
    [anon_sym_Dictionary] = ACTIONS(33),
    [anon_sym_Environment] = ACTIONS(33),
    [anon_sym_Event] = ACTIONS(33),
    [anon_sym_IdentityBag] = ACTIONS(33),
    [anon_sym_IdentityDictionary] = ACTIONS(33),
    [anon_sym_IdentitySet] = ACTIONS(33),
    [anon_sym_LazyEnvir] = ACTIONS(33),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(33),
    [anon_sym_ObjectTable] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(33),
    [anon_sym_Array] = ACTIONS(35),
    [anon_sym_Array2D] = ACTIONS(37),
    [anon_sym_ArrayedCollection] = ACTIONS(37),
    [anon_sym_DoubleArray] = ACTIONS(37),
    [anon_sym_FloatArray] = ACTIONS(37),
    [anon_sym_Int16Array] = ACTIONS(37),
    [anon_sym_Int32Array] = ACTIONS(37),
    [anon_sym_Int8Array] = ACTIONS(37),
    [anon_sym_LinkedList] = ACTIONS(37),
    [anon_sym_List] = ACTIONS(37),
    [anon_sym_Order] = ACTIONS(35),
    [anon_sym_OrderedIdentitySet] = ACTIONS(37),
    [anon_sym_Pair] = ACTIONS(37),
    [anon_sym_PriorityQueue] = ACTIONS(37),
    [anon_sym_RawArray] = ACTIONS(37),
    [anon_sym_SequenceableCollection] = ACTIONS(37),
    [anon_sym_Signal] = ACTIONS(37),
    [anon_sym_SortedList] = ACTIONS(37),
    [anon_sym_SparseArray] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SymbolArray] = ACTIONS(37),
  },
  [8] = {
    [sym__expression] = STATE(10),
    [sym__expression_statement] = STATE(135),
    [sym__value] = STATE(72),
    [sym_function_definition] = STATE(144),
    [sym_function_call] = STATE(144),
    [sym_function_block] = STATE(68),
    [sym_literals] = STATE(57),
    [sym_number] = STATE(59),
    [sym_float] = STATE(52),
    [sym_symbol] = STATE(59),
    [sym_string] = STATE(59),
    [sym_bool] = STATE(59),
    [sym_code_block] = STATE(14),
    [sym_variable] = STATE(56),
    [sym_local_var] = STATE(36),
    [sym_classvar] = STATE(36),
    [sym_environment_var] = STATE(36),
    [sym_variable_definition] = STATE(144),
    [sym_comment] = STATE(8),
    [sym_collection] = STATE(144),
    [sym__unordered_collection_types] = STATE(111),
    [sym__ordered_collection_types] = STATE(111),
    [sym_binary_expression] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_hexinteger] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_char] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_var] = ACTIONS(25),
    [anon_sym_classvar] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_Bag] = ACTIONS(33),
    [anon_sym_Dictionary] = ACTIONS(33),
    [anon_sym_Environment] = ACTIONS(33),
    [anon_sym_Event] = ACTIONS(33),
    [anon_sym_IdentityBag] = ACTIONS(33),
    [anon_sym_IdentityDictionary] = ACTIONS(33),
    [anon_sym_IdentitySet] = ACTIONS(33),
    [anon_sym_LazyEnvir] = ACTIONS(33),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(33),
    [anon_sym_ObjectTable] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(33),
    [anon_sym_Array] = ACTIONS(35),
    [anon_sym_Array2D] = ACTIONS(37),
    [anon_sym_ArrayedCollection] = ACTIONS(37),
    [anon_sym_DoubleArray] = ACTIONS(37),
    [anon_sym_FloatArray] = ACTIONS(37),
    [anon_sym_Int16Array] = ACTIONS(37),
    [anon_sym_Int32Array] = ACTIONS(37),
    [anon_sym_Int8Array] = ACTIONS(37),
    [anon_sym_LinkedList] = ACTIONS(37),
    [anon_sym_List] = ACTIONS(37),
    [anon_sym_Order] = ACTIONS(35),
    [anon_sym_OrderedIdentitySet] = ACTIONS(37),
    [anon_sym_Pair] = ACTIONS(37),
    [anon_sym_PriorityQueue] = ACTIONS(37),
    [anon_sym_RawArray] = ACTIONS(37),
    [anon_sym_SequenceableCollection] = ACTIONS(37),
    [anon_sym_Signal] = ACTIONS(37),
    [anon_sym_SortedList] = ACTIONS(37),
    [anon_sym_SparseArray] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SymbolArray] = ACTIONS(37),
  },
  [9] = {
    [sym__expression] = STATE(10),
    [sym__expression_statement] = STATE(135),
    [sym__value] = STATE(72),
    [sym_function_definition] = STATE(144),
    [sym_function_call] = STATE(144),
    [sym_function_block] = STATE(68),
    [sym_literals] = STATE(57),
    [sym_number] = STATE(59),
    [sym_float] = STATE(52),
    [sym_symbol] = STATE(59),
    [sym_string] = STATE(59),
    [sym_bool] = STATE(59),
    [sym_code_block] = STATE(14),
    [sym_variable] = STATE(56),
    [sym_local_var] = STATE(36),
    [sym_classvar] = STATE(36),
    [sym_environment_var] = STATE(36),
    [sym_variable_definition] = STATE(144),
    [sym_comment] = STATE(9),
    [sym_collection] = STATE(144),
    [sym__unordered_collection_types] = STATE(111),
    [sym__ordered_collection_types] = STATE(111),
    [sym_binary_expression] = STATE(68),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_hexinteger] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_char] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [anon_sym_var] = ACTIONS(25),
    [anon_sym_classvar] = ACTIONS(27),
    [anon_sym_TILDE] = ACTIONS(29),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_Bag] = ACTIONS(33),
    [anon_sym_Dictionary] = ACTIONS(33),
    [anon_sym_Environment] = ACTIONS(33),
    [anon_sym_Event] = ACTIONS(33),
    [anon_sym_IdentityBag] = ACTIONS(33),
    [anon_sym_IdentityDictionary] = ACTIONS(33),
    [anon_sym_IdentitySet] = ACTIONS(33),
    [anon_sym_LazyEnvir] = ACTIONS(33),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(33),
    [anon_sym_ObjectTable] = ACTIONS(33),
    [anon_sym_Set] = ACTIONS(33),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(33),
    [anon_sym_Array] = ACTIONS(35),
    [anon_sym_Array2D] = ACTIONS(37),
    [anon_sym_ArrayedCollection] = ACTIONS(37),
    [anon_sym_DoubleArray] = ACTIONS(37),
    [anon_sym_FloatArray] = ACTIONS(37),
    [anon_sym_Int16Array] = ACTIONS(37),
    [anon_sym_Int32Array] = ACTIONS(37),
    [anon_sym_Int8Array] = ACTIONS(37),
    [anon_sym_LinkedList] = ACTIONS(37),
    [anon_sym_List] = ACTIONS(37),
    [anon_sym_Order] = ACTIONS(35),
    [anon_sym_OrderedIdentitySet] = ACTIONS(37),
    [anon_sym_Pair] = ACTIONS(37),
    [anon_sym_PriorityQueue] = ACTIONS(37),
    [anon_sym_RawArray] = ACTIONS(37),
    [anon_sym_SequenceableCollection] = ACTIONS(37),
    [anon_sym_Signal] = ACTIONS(37),
    [anon_sym_SortedList] = ACTIONS(37),
    [anon_sym_SparseArray] = ACTIONS(37),
    [anon_sym_String] = ACTIONS(37),
    [anon_sym_SymbolArray] = ACTIONS(37),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(10), 1,
      sym_comment,
    ACTIONS(115), 3,
      sym_integer,
      anon_sym_Array,
      anon_sym_Order,
    ACTIONS(113), 47,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      anon_sym_TILDE,
      anon_sym_LBRACK,
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
      anon_sym_Array2D,
      anon_sym_ArrayedCollection,
      anon_sym_DoubleArray,
      anon_sym_FloatArray,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_Int8Array,
      anon_sym_LinkedList,
      anon_sym_List,
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
  [64] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(11), 1,
      sym_comment,
    ACTIONS(119), 3,
      sym_integer,
      anon_sym_Array,
      anon_sym_Order,
    ACTIONS(117), 47,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      anon_sym_TILDE,
      anon_sym_LBRACK,
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
      anon_sym_Array2D,
      anon_sym_ArrayedCollection,
      anon_sym_DoubleArray,
      anon_sym_FloatArray,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_Int8Array,
      anon_sym_LinkedList,
      anon_sym_List,
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
  [128] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(12), 1,
      sym_comment,
    ACTIONS(123), 3,
      sym_integer,
      anon_sym_Array,
      anon_sym_Order,
    ACTIONS(121), 47,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      anon_sym_TILDE,
      anon_sym_LBRACK,
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
      anon_sym_Array2D,
      anon_sym_ArrayedCollection,
      anon_sym_DoubleArray,
      anon_sym_FloatArray,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_Int8Array,
      anon_sym_LinkedList,
      anon_sym_List,
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
  [192] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(13), 1,
      sym_comment,
    ACTIONS(127), 3,
      sym_integer,
      anon_sym_Array,
      anon_sym_Order,
    ACTIONS(125), 47,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      anon_sym_TILDE,
      anon_sym_LBRACK,
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
      anon_sym_Array2D,
      anon_sym_ArrayedCollection,
      anon_sym_DoubleArray,
      anon_sym_FloatArray,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_Int8Array,
      anon_sym_LinkedList,
      anon_sym_List,
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
  [256] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(14), 1,
      sym_comment,
    ACTIONS(131), 3,
      sym_integer,
      anon_sym_Array,
      anon_sym_Order,
    ACTIONS(129), 47,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      anon_sym_TILDE,
      anon_sym_LBRACK,
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
      anon_sym_Array2D,
      anon_sym_ArrayedCollection,
      anon_sym_DoubleArray,
      anon_sym_FloatArray,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_Int8Array,
      anon_sym_LinkedList,
      anon_sym_List,
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
  [320] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(15), 1,
      sym_comment,
    ACTIONS(135), 3,
      sym_integer,
      anon_sym_Array,
      anon_sym_Order,
    ACTIONS(133), 45,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      anon_sym_TILDE,
      anon_sym_LBRACK,
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
      anon_sym_Array2D,
      anon_sym_ArrayedCollection,
      anon_sym_DoubleArray,
      anon_sym_FloatArray,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_Int8Array,
      anon_sym_LinkedList,
      anon_sym_List,
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
  [382] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(16), 1,
      sym_comment,
    ACTIONS(139), 3,
      sym_integer,
      anon_sym_Array,
      anon_sym_Order,
    ACTIONS(137), 45,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      anon_sym_TILDE,
      anon_sym_LBRACK,
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
      anon_sym_Array2D,
      anon_sym_ArrayedCollection,
      anon_sym_DoubleArray,
      anon_sym_FloatArray,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_Int8Array,
      anon_sym_LinkedList,
      anon_sym_List,
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
  [444] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(17), 1,
      sym_comment,
    ACTIONS(143), 3,
      sym_integer,
      anon_sym_Array,
      anon_sym_Order,
    ACTIONS(141), 45,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      anon_sym_TILDE,
      anon_sym_LBRACK,
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
      anon_sym_Array2D,
      anon_sym_ArrayedCollection,
      anon_sym_DoubleArray,
      anon_sym_FloatArray,
      anon_sym_Int16Array,
      anon_sym_Int32Array,
      anon_sym_Int8Array,
      anon_sym_LinkedList,
      anon_sym_List,
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
  [506] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_var,
    ACTIONS(47), 1,
      anon_sym_classvar,
    STATE(18), 1,
      sym_comment,
    STATE(43), 1,
      sym_symbol,
    STATE(48), 1,
      sym__value,
    STATE(52), 1,
      sym_float,
    STATE(81), 1,
      sym_associative_item,
    STATE(127), 1,
      sym__collection_sequence,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(59), 3,
      sym_number,
      sym_string,
      sym_bool,
    STATE(57), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
  [584] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_var,
    ACTIONS(47), 1,
      anon_sym_classvar,
    STATE(19), 1,
      sym_comment,
    STATE(43), 1,
      sym_symbol,
    STATE(48), 1,
      sym__value,
    STATE(52), 1,
      sym_float,
    STATE(81), 1,
      sym_associative_item,
    STATE(137), 1,
      sym__collection_sequence,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(59), 3,
      sym_number,
      sym_string,
      sym_bool,
    STATE(57), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
  [662] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_var,
    ACTIONS(47), 1,
      anon_sym_classvar,
    STATE(20), 1,
      sym_comment,
    STATE(43), 1,
      sym_symbol,
    STATE(48), 1,
      sym__value,
    STATE(52), 1,
      sym_float,
    STATE(81), 1,
      sym_associative_item,
    STATE(145), 1,
      sym__collection_sequence,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(59), 3,
      sym_number,
      sym_string,
      sym_bool,
    STATE(57), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
  [740] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_var,
    ACTIONS(47), 1,
      anon_sym_classvar,
    STATE(21), 1,
      sym_comment,
    STATE(43), 1,
      sym_symbol,
    STATE(52), 1,
      sym_float,
    STATE(69), 1,
      sym__value,
    STATE(98), 1,
      sym_associative_item,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(59), 3,
      sym_number,
      sym_string,
      sym_bool,
    STATE(57), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
  [815] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(45), 1,
      anon_sym_var,
    ACTIONS(47), 1,
      anon_sym_classvar,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_BSLASH,
    STATE(22), 1,
      sym_comment,
    STATE(52), 1,
      sym_float,
    STATE(96), 1,
      sym_argument_calls,
    STATE(131), 1,
      sym_parameter_call_list,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(114), 2,
      sym_literals,
      sym_variable,
    STATE(36), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(59), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [887] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(45), 1,
      anon_sym_var,
    ACTIONS(47), 1,
      anon_sym_classvar,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_BSLASH,
    STATE(23), 1,
      sym_comment,
    STATE(52), 1,
      sym_float,
    STATE(96), 1,
      sym_argument_calls,
    STATE(140), 1,
      sym_parameter_call_list,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(114), 2,
      sym_literals,
      sym_variable,
    STATE(36), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(59), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [959] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_classvar,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    STATE(24), 1,
      sym_comment,
    STATE(52), 1,
      sym_float,
    STATE(60), 1,
      sym__value,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(57), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
    STATE(59), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [1026] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_classvar,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    STATE(25), 1,
      sym_comment,
    STATE(50), 1,
      sym__value,
    STATE(52), 1,
      sym_float,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(57), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
    STATE(59), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [1093] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_classvar,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    STATE(26), 1,
      sym_comment,
    STATE(52), 1,
      sym_float,
    STATE(53), 1,
      sym__value,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(57), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
    STATE(59), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [1160] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_classvar,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    STATE(27), 1,
      sym_comment,
    STATE(52), 1,
      sym_float,
    STATE(62), 1,
      sym__value,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(57), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
    STATE(59), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [1227] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    ACTIONS(45), 1,
      anon_sym_var,
    ACTIONS(47), 1,
      anon_sym_classvar,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      anon_sym_BSLASH,
    STATE(28), 1,
      sym_comment,
    STATE(52), 1,
      sym_float,
    STATE(126), 1,
      sym_argument_calls,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(113), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(114), 2,
      sym_literals,
      sym_variable,
    STATE(36), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(59), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [1296] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_classvar,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    STATE(29), 1,
      sym_comment,
    STATE(52), 1,
      sym_float,
    STATE(55), 1,
      sym__value,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(57), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
    STATE(59), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [1363] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_classvar,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    STATE(30), 1,
      sym_comment,
    STATE(46), 1,
      sym__value,
    STATE(52), 1,
      sym_float,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(57), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
    STATE(59), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [1430] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_classvar,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    STATE(31), 1,
      sym_comment,
    STATE(47), 1,
      sym__value,
    STATE(52), 1,
      sym_float,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(57), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
    STATE(59), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [1497] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_classvar,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    STATE(32), 1,
      sym_comment,
    STATE(52), 1,
      sym_float,
    STATE(70), 1,
      sym__value,
    STATE(71), 1,
      sym_function_block,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(57), 3,
      sym_literals,
      sym_variable,
      sym_binary_expression,
    STATE(59), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [1566] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_classvar,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    STATE(33), 1,
      sym_comment,
    STATE(52), 1,
      sym_float,
    STATE(67), 1,
      sym__value,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(57), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
    STATE(59), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [1633] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_classvar,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    STATE(34), 1,
      sym_comment,
    STATE(52), 1,
      sym_float,
    STATE(61), 1,
      sym__value,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(57), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
    STATE(59), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [1700] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_classvar,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    STATE(35), 1,
      sym_comment,
    STATE(52), 1,
      sym_float,
    STATE(64), 1,
      sym__value,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(57), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
    STATE(59), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [1767] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(36), 1,
      sym_comment,
    ACTIONS(151), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(149), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
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
  [1805] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(37), 1,
      sym_comment,
    ACTIONS(155), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(153), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
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
  [1843] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(38), 1,
      sym_comment,
    ACTIONS(159), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(157), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
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
  [1881] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(39), 1,
      sym_comment,
    ACTIONS(163), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(161), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
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
  [1919] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(40), 1,
      sym_comment,
    ACTIONS(167), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(165), 17,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [1956] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(171), 1,
      anon_sym_DOT,
    STATE(41), 1,
      sym_comment,
    ACTIONS(173), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(169), 17,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
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
  [1995] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(42), 1,
      sym_comment,
    ACTIONS(177), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(175), 17,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [2032] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(43), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(183), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(179), 14,
      anon_sym_RPAREN,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_PERCENT,
  [2070] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(44), 1,
      sym_comment,
    ACTIONS(187), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(185), 17,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
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
  [2106] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(45), 1,
      sym_comment,
    ACTIONS(191), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(189), 17,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
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
  [2142] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(205), 1,
      anon_sym_SLASH,
    STATE(46), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(195), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2188] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(205), 1,
      anon_sym_SLASH,
    ACTIONS(207), 1,
      anon_sym_CARET,
    STATE(47), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(195), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2236] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(205), 1,
      anon_sym_SLASH,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(217), 1,
      anon_sym_PIPE_PIPE,
    STATE(48), 1,
      sym_comment,
    STATE(77), 1,
      aux_sym__collection_sequence_repeat1,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(209), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(221), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(219), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2296] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(49), 1,
      sym_comment,
    ACTIONS(225), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(223), 17,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
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
  [2332] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(205), 1,
      anon_sym_SLASH,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(213), 1,
      anon_sym_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    STATE(50), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(221), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(219), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(193), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
  [2386] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(51), 1,
      sym_comment,
    ACTIONS(229), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(227), 17,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
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
  [2422] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(52), 1,
      sym_comment,
    ACTIONS(173), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(169), 17,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
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
  [2458] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(205), 1,
      anon_sym_SLASH,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(213), 1,
      anon_sym_PIPE,
    STATE(53), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(221), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(219), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(193), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2510] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(54), 1,
      sym_comment,
    ACTIONS(233), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(231), 17,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
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
  [2546] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(205), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(195), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 11,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2590] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(235), 1,
      anon_sym_EQ,
    ACTIONS(237), 1,
      anon_sym_DOT,
    STATE(56), 1,
      sym_comment,
    ACTIONS(241), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(239), 15,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
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
  [2630] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(57), 1,
      sym_comment,
    ACTIONS(241), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(239), 17,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
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
  [2666] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(58), 1,
      sym_comment,
    ACTIONS(245), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(243), 17,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
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
  [2702] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(59), 1,
      sym_comment,
    ACTIONS(183), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(179), 17,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
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
  [2738] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(205), 1,
      anon_sym_SLASH,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(213), 1,
      anon_sym_PIPE,
    STATE(60), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(193), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2788] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(205), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(195), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [2830] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(62), 1,
      sym_comment,
    ACTIONS(195), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(193), 17,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
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
  [2866] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(63), 1,
      sym_comment,
    ACTIONS(249), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(247), 17,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
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
  [2902] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(205), 1,
      anon_sym_SLASH,
    STATE(64), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(195), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 15,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_DASH,
  [2942] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_classvar,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    STATE(52), 1,
      sym_float,
    STATE(65), 1,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(125), 2,
      sym_literals,
      sym_variable,
    STATE(36), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(59), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [3001] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_var,
    ACTIONS(27), 1,
      anon_sym_classvar,
    ACTIONS(29), 1,
      anon_sym_TILDE,
    STATE(52), 1,
      sym_float,
    STATE(66), 1,
      sym_comment,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(124), 2,
      sym_literals,
      sym_variable,
    STATE(36), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(59), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [3060] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(205), 1,
      anon_sym_SLASH,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(213), 1,
      anon_sym_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(217), 1,
      anon_sym_PIPE_PIPE,
    STATE(67), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(221), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(251), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(219), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3115] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(253), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      sym_comment,
    ACTIONS(241), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(239), 15,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
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
  [3152] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(205), 1,
      anon_sym_SLASH,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(213), 1,
      anon_sym_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(217), 1,
      anon_sym_PIPE_PIPE,
    STATE(69), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(221), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(255), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(219), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3207] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(205), 1,
      anon_sym_SLASH,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(213), 1,
      anon_sym_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(217), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(221), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(219), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3260] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_comment,
    ACTIONS(241), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(239), 13,
      anon_sym_CARET,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
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
  [3295] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(197), 1,
      anon_sym_AMP,
    ACTIONS(205), 1,
      anon_sym_SLASH,
    ACTIONS(207), 1,
      anon_sym_CARET,
    ACTIONS(213), 1,
      anon_sym_PIPE,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(217), 1,
      anon_sym_PIPE_PIPE,
    STATE(72), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(221), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(219), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3345] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(263), 1,
      sym_integer,
    ACTIONS(265), 1,
      sym_hexinteger,
    ACTIONS(267), 1,
      anon_sym_SQUOTE,
    ACTIONS(269), 1,
      sym_char,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_comment,
    STATE(101), 1,
      sym_literals,
    STATE(123), 1,
      sym_float,
    ACTIONS(273), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(122), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [3389] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_hexinteger,
    ACTIONS(17), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      sym_char,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      sym_float,
    STATE(74), 1,
      sym_comment,
    STATE(101), 1,
      sym_literals,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(59), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [3433] = 7,
    ACTIONS(275), 1,
      anon_sym_DQUOTE,
    ACTIONS(277), 1,
      aux_sym_string_token1,
    ACTIONS(279), 1,
      sym_escape_sequence,
    ACTIONS(281), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      sym_block_comment,
    STATE(75), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym_string_repeat1,
  [3455] = 7,
    ACTIONS(277), 1,
      aux_sym_string_token1,
    ACTIONS(279), 1,
      sym_escape_sequence,
    ACTIONS(281), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      sym_block_comment,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_string_repeat1,
  [3477] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym__collection_sequence_repeat1,
    ACTIONS(287), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3497] = 7,
    ACTIONS(277), 1,
      aux_sym_string_token1,
    ACTIONS(279), 1,
      sym_escape_sequence,
    ACTIONS(281), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      sym_block_comment,
    ACTIONS(289), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      sym_comment,
    STATE(84), 1,
      aux_sym_string_repeat1,
  [3519] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(79), 1,
      sym_comment,
    ACTIONS(291), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(293), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3537] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(80), 1,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(297), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3555] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym__collection_sequence_repeat1,
    STATE(81), 1,
      sym_comment,
    ACTIONS(209), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3575] = 6,
    ACTIONS(281), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      sym_block_comment,
    ACTIONS(299), 1,
      anon_sym_DQUOTE,
    ACTIONS(301), 1,
      aux_sym_string_token1,
    ACTIONS(304), 1,
      sym_escape_sequence,
    STATE(82), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [3595] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    ACTIONS(255), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(83), 2,
      sym_comment,
      aux_sym__collection_sequence_repeat1,
  [3613] = 7,
    ACTIONS(277), 1,
      aux_sym_string_token1,
    ACTIONS(279), 1,
      sym_escape_sequence,
    ACTIONS(281), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      sym_block_comment,
    ACTIONS(310), 1,
      anon_sym_DQUOTE,
    STATE(82), 1,
      aux_sym_string_repeat1,
    STATE(84), 1,
      sym_comment,
  [3635] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    STATE(85), 1,
      sym_comment,
    STATE(95), 1,
      aux_sym_parameter_list_repeat1,
  [3654] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      sym_comment,
    STATE(97), 1,
      aux_sym_parameter_list_repeat1,
  [3673] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(314), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_parameter_list_repeat1,
    STATE(87), 1,
      sym_comment,
  [3692] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(322), 1,
      anon_sym_EQ,
    STATE(88), 1,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3709] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_PIPE,
    STATE(89), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [3726] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(329), 1,
      anon_sym_EQ,
    STATE(90), 1,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3743] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(331), 1,
      anon_sym_DOT,
    STATE(91), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3760] = 5,
    ACTIONS(281), 1,
      sym_line_comment,
    ACTIONS(283), 1,
      sym_block_comment,
    ACTIONS(335), 1,
      aux_sym_string_token1,
    STATE(92), 1,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3777] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(339), 1,
      anon_sym_COMMA,
    STATE(93), 2,
      sym_comment,
      aux_sym_parameter_call_list_repeat1,
  [3794] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(342), 1,
      anon_sym_RPAREN,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_parameter_call_list_repeat1,
    STATE(94), 1,
      sym_comment,
  [3813] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(316), 1,
      anon_sym_PIPE,
    STATE(89), 1,
      aux_sym_parameter_list_repeat1,
    STATE(95), 1,
      sym_comment,
  [3832] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
    STATE(94), 1,
      aux_sym_parameter_call_list_repeat1,
    STATE(96), 1,
      sym_comment,
  [3851] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      anon_sym_SEMI,
    ACTIONS(348), 1,
      anon_sym_COMMA,
    STATE(97), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [3868] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(98), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3883] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(353), 1,
      anon_sym_PIPE,
    STATE(85), 1,
      sym_argument,
    STATE(99), 1,
      sym_comment,
  [3902] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(353), 1,
      anon_sym_SEMI,
    ACTIONS(355), 1,
      sym_identifier,
    STATE(87), 1,
      sym_argument,
    STATE(100), 1,
      sym_comment,
  [3921] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(101), 1,
      sym_comment,
    ACTIONS(357), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3936] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(102), 1,
      sym_comment,
    ACTIONS(327), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3951] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(103), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3965] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(104), 1,
      sym_comment,
    ACTIONS(175), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3979] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(105), 1,
      sym_comment,
    ACTIONS(361), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [3993] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(363), 1,
      sym_identifier,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_comment,
  [4009] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(351), 1,
      sym_identifier,
    STATE(102), 1,
      sym_argument,
    STATE(107), 1,
      sym_comment,
  [4025] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(355), 1,
      sym_identifier,
    STATE(102), 1,
      sym_argument,
    STATE(108), 1,
      sym_comment,
  [4041] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(109), 1,
      sym_comment,
    ACTIONS(367), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [4055] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(371), 1,
      aux_sym_symbol_token1,
    STATE(110), 1,
      sym_comment,
  [4071] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_LBRACK,
    STATE(111), 1,
      sym_comment,
  [4087] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(112), 1,
      sym_comment,
    ACTIONS(377), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [4101] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(113), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4115] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(114), 1,
      sym_comment,
    ACTIONS(381), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4129] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(115), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4143] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(116), 1,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4157] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(117), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4171] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(118), 1,
      sym_comment,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4185] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(119), 1,
      sym_comment,
    ACTIONS(371), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [4199] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(120), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4213] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(121), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4227] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(122), 1,
      sym_comment,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4241] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(123), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4255] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(124), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4269] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(125), 1,
      sym_comment,
    ACTIONS(387), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4283] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(126), 1,
      sym_comment,
    ACTIONS(337), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4297] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
    STATE(127), 1,
      sym_comment,
  [4310] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(181), 1,
      anon_sym_COLON,
    STATE(128), 1,
      sym_comment,
  [4323] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(391), 1,
      sym_identifier,
    STATE(129), 1,
      sym_comment,
  [4336] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_comment,
  [4349] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      sym_comment,
  [4362] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(397), 1,
      anon_sym_SEMI,
    STATE(132), 1,
      sym_comment,
  [4375] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(399), 1,
      anon_sym_SEMI,
    STATE(133), 1,
      sym_comment,
  [4388] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    STATE(134), 1,
      sym_comment,
  [4401] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(403), 1,
      anon_sym_SEMI,
    STATE(135), 1,
      sym_comment,
  [4414] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(405), 1,
      anon_sym_SEMI,
    STATE(136), 1,
      sym_comment,
  [4427] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      sym_comment,
  [4440] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(407), 1,
      sym_identifier,
    STATE(138), 1,
      sym_comment,
  [4453] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(409), 1,
      anon_sym_SEMI,
    STATE(139), 1,
      sym_comment,
  [4466] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      sym_comment,
  [4479] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(413), 1,
      sym_identifier,
    STATE(141), 1,
      sym_comment,
  [4492] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(415), 1,
      sym_integer,
    STATE(142), 1,
      sym_comment,
  [4505] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    STATE(143), 1,
      sym_comment,
  [4518] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(253), 1,
      anon_sym_SEMI,
    STATE(144), 1,
      sym_comment,
  [4531] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(419), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      sym_comment,
  [4544] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(419), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      sym_comment,
  [4557] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(421), 1,
      sym_integer,
    STATE(147), 1,
      sym_comment,
  [4570] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(423), 1,
      anon_sym_SQUOTE,
    STATE(148), 1,
      sym_comment,
  [4583] = 1,
    ACTIONS(425), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 64,
  [SMALL_STATE(12)] = 128,
  [SMALL_STATE(13)] = 192,
  [SMALL_STATE(14)] = 256,
  [SMALL_STATE(15)] = 320,
  [SMALL_STATE(16)] = 382,
  [SMALL_STATE(17)] = 444,
  [SMALL_STATE(18)] = 506,
  [SMALL_STATE(19)] = 584,
  [SMALL_STATE(20)] = 662,
  [SMALL_STATE(21)] = 740,
  [SMALL_STATE(22)] = 815,
  [SMALL_STATE(23)] = 887,
  [SMALL_STATE(24)] = 959,
  [SMALL_STATE(25)] = 1026,
  [SMALL_STATE(26)] = 1093,
  [SMALL_STATE(27)] = 1160,
  [SMALL_STATE(28)] = 1227,
  [SMALL_STATE(29)] = 1296,
  [SMALL_STATE(30)] = 1363,
  [SMALL_STATE(31)] = 1430,
  [SMALL_STATE(32)] = 1497,
  [SMALL_STATE(33)] = 1566,
  [SMALL_STATE(34)] = 1633,
  [SMALL_STATE(35)] = 1700,
  [SMALL_STATE(36)] = 1767,
  [SMALL_STATE(37)] = 1805,
  [SMALL_STATE(38)] = 1843,
  [SMALL_STATE(39)] = 1881,
  [SMALL_STATE(40)] = 1919,
  [SMALL_STATE(41)] = 1956,
  [SMALL_STATE(42)] = 1995,
  [SMALL_STATE(43)] = 2032,
  [SMALL_STATE(44)] = 2070,
  [SMALL_STATE(45)] = 2106,
  [SMALL_STATE(46)] = 2142,
  [SMALL_STATE(47)] = 2188,
  [SMALL_STATE(48)] = 2236,
  [SMALL_STATE(49)] = 2296,
  [SMALL_STATE(50)] = 2332,
  [SMALL_STATE(51)] = 2386,
  [SMALL_STATE(52)] = 2422,
  [SMALL_STATE(53)] = 2458,
  [SMALL_STATE(54)] = 2510,
  [SMALL_STATE(55)] = 2546,
  [SMALL_STATE(56)] = 2590,
  [SMALL_STATE(57)] = 2630,
  [SMALL_STATE(58)] = 2666,
  [SMALL_STATE(59)] = 2702,
  [SMALL_STATE(60)] = 2738,
  [SMALL_STATE(61)] = 2788,
  [SMALL_STATE(62)] = 2830,
  [SMALL_STATE(63)] = 2866,
  [SMALL_STATE(64)] = 2902,
  [SMALL_STATE(65)] = 2942,
  [SMALL_STATE(66)] = 3001,
  [SMALL_STATE(67)] = 3060,
  [SMALL_STATE(68)] = 3115,
  [SMALL_STATE(69)] = 3152,
  [SMALL_STATE(70)] = 3207,
  [SMALL_STATE(71)] = 3260,
  [SMALL_STATE(72)] = 3295,
  [SMALL_STATE(73)] = 3345,
  [SMALL_STATE(74)] = 3389,
  [SMALL_STATE(75)] = 3433,
  [SMALL_STATE(76)] = 3455,
  [SMALL_STATE(77)] = 3477,
  [SMALL_STATE(78)] = 3497,
  [SMALL_STATE(79)] = 3519,
  [SMALL_STATE(80)] = 3537,
  [SMALL_STATE(81)] = 3555,
  [SMALL_STATE(82)] = 3575,
  [SMALL_STATE(83)] = 3595,
  [SMALL_STATE(84)] = 3613,
  [SMALL_STATE(85)] = 3635,
  [SMALL_STATE(86)] = 3654,
  [SMALL_STATE(87)] = 3673,
  [SMALL_STATE(88)] = 3692,
  [SMALL_STATE(89)] = 3709,
  [SMALL_STATE(90)] = 3726,
  [SMALL_STATE(91)] = 3743,
  [SMALL_STATE(92)] = 3760,
  [SMALL_STATE(93)] = 3777,
  [SMALL_STATE(94)] = 3794,
  [SMALL_STATE(95)] = 3813,
  [SMALL_STATE(96)] = 3832,
  [SMALL_STATE(97)] = 3851,
  [SMALL_STATE(98)] = 3868,
  [SMALL_STATE(99)] = 3883,
  [SMALL_STATE(100)] = 3902,
  [SMALL_STATE(101)] = 3921,
  [SMALL_STATE(102)] = 3936,
  [SMALL_STATE(103)] = 3951,
  [SMALL_STATE(104)] = 3965,
  [SMALL_STATE(105)] = 3979,
  [SMALL_STATE(106)] = 3993,
  [SMALL_STATE(107)] = 4009,
  [SMALL_STATE(108)] = 4025,
  [SMALL_STATE(109)] = 4041,
  [SMALL_STATE(110)] = 4055,
  [SMALL_STATE(111)] = 4071,
  [SMALL_STATE(112)] = 4087,
  [SMALL_STATE(113)] = 4101,
  [SMALL_STATE(114)] = 4115,
  [SMALL_STATE(115)] = 4129,
  [SMALL_STATE(116)] = 4143,
  [SMALL_STATE(117)] = 4157,
  [SMALL_STATE(118)] = 4171,
  [SMALL_STATE(119)] = 4185,
  [SMALL_STATE(120)] = 4199,
  [SMALL_STATE(121)] = 4213,
  [SMALL_STATE(122)] = 4227,
  [SMALL_STATE(123)] = 4241,
  [SMALL_STATE(124)] = 4255,
  [SMALL_STATE(125)] = 4269,
  [SMALL_STATE(126)] = 4283,
  [SMALL_STATE(127)] = 4297,
  [SMALL_STATE(128)] = 4310,
  [SMALL_STATE(129)] = 4323,
  [SMALL_STATE(130)] = 4336,
  [SMALL_STATE(131)] = 4349,
  [SMALL_STATE(132)] = 4362,
  [SMALL_STATE(133)] = 4375,
  [SMALL_STATE(134)] = 4388,
  [SMALL_STATE(135)] = 4401,
  [SMALL_STATE(136)] = 4414,
  [SMALL_STATE(137)] = 4427,
  [SMALL_STATE(138)] = 4440,
  [SMALL_STATE(139)] = 4453,
  [SMALL_STATE(140)] = 4466,
  [SMALL_STATE(141)] = 4479,
  [SMALL_STATE(142)] = 4492,
  [SMALL_STATE(143)] = 4505,
  [SMALL_STATE(144)] = 4518,
  [SMALL_STATE(145)] = 4531,
  [SMALL_STATE(146)] = 4544,
  [SMALL_STATE(147)] = 4557,
  [SMALL_STATE(148)] = 4570,
  [SMALL_STATE(149)] = 4583,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(129),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_var, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_var, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classvar, 2),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classvar, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literals, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literals, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_sequence, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 4),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_item, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__collection_sequence_repeat1, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_sequence, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 1),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(92),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(92),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__collection_sequence_repeat1, 2), SHIFT_REPEAT(21),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(107),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_call_list_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_call_list_repeat1, 2), SHIFT_REPEAT(28),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_call_list, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_call_list, 1),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(108),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordered_collection_types, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_calls, 1),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnamed_argument, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unordered_collection_types, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 3),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 3),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5),
  [401] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
