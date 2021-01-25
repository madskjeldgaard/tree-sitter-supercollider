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
#define STATE_COUNT 155
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 120
#define ALIAS_COUNT 2
#define TOKEN_COUNT 84
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
  sym_source_file = 84,
  sym__expression = 85,
  sym__expression_statement = 86,
  sym__value = 87,
  sym_function_definition = 88,
  sym_function_call = 89,
  sym_function_block = 90,
  sym_parameter_list = 91,
  sym_argument = 92,
  sym_parameter_call_list = 93,
  sym_argument_calls = 94,
  sym_unnamed_argument = 95,
  sym_named_argument = 96,
  sym_literal = 97,
  sym_number = 98,
  sym_symbol = 99,
  sym_string = 100,
  sym_bool = 101,
  sym_code_block = 102,
  sym_variable = 103,
  sym_local_var = 104,
  sym_classvar = 105,
  sym_environment_var = 106,
  sym_variable_definition = 107,
  sym_comment = 108,
  sym_collection = 109,
  sym__collection_sequence = 110,
  sym_associative_item = 111,
  sym__unordered_collection_types = 112,
  sym__ordered_collection_types = 113,
  sym_binary_expression = 114,
  aux_sym_source_file_repeat1 = 115,
  aux_sym_parameter_list_repeat1 = 116,
  aux_sym_parameter_call_list_repeat1 = 117,
  aux_sym_string_repeat1 = 118,
  aux_sym__collection_sequence_repeat1 = 119,
  alias_sym_method = 120,
  alias_sym_receiver = 121,
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
  [sym_literal] = "literal",
  [sym_number] = "number",
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
  [alias_sym_method] = "method",
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
  [sym_literal] = sym_literal,
  [sym_number] = sym_number,
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
  [alias_sym_method] = alias_sym_method,
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
  [alias_sym_method] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_receiver] = {
    .visible = true,
    .named = true,
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

static const TSFieldMapSlice ts_field_map_slices[4] = {
  [2] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_receiver,
  },
  [3] = {
    [0] = alias_sym_receiver,
    [2] = alias_sym_method,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym__value, 2,
    sym__value,
    alias_sym_receiver,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(286);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(309);
      if (lookahead == '$') ADVANCE(284);
      if (lookahead == '%') ADVANCE(375);
      if (lookahead == '&') ADVANCE(361);
      if (lookahead == '\'') ADVANCE(307);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == ')') ADVANCE(292);
      if (lookahead == '*') ADVANCE(373);
      if (lookahead == '+') ADVANCE(371);
      if (lookahead == ',') ADVANCE(295);
      if (lookahead == '-') ADVANCE(372);
      if (lookahead == '.') ADVANCE(290);
      if (lookahead == '/') ADVANCE(374);
      if (lookahead == '0') ADVANCE(302);
      if (lookahead == ':') ADVANCE(299);
      if (lookahead == ';') ADVANCE(287);
      if (lookahead == '<') ADVANCE(365);
      if (lookahead == '=') ADVANCE(289);
      if (lookahead == '>') ADVANCE(367);
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
      if (lookahead == '[') ADVANCE(323);
      if (lookahead == '\\') ADVANCE(298);
      if (lookahead == ']') ADVANCE(324);
      if (lookahead == '^') ADVANCE(362);
      if (lookahead == '{') ADVANCE(293);
      if (lookahead == '|') ADVANCE(297);
      if (lookahead == '}') ADVANCE(294);
      if (lookahead == '~') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(303);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(309);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(310);
      if (lookahead == '\r') ADVANCE(317);
      if (lookahead == 'u') ADVANCE(277);
      if (lookahead == 'x') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(319);
      if (lookahead != 0) ADVANCE(316);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(309);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(321);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(322);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
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
      if (lookahead == '=') ADVANCE(364);
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
      if (lookahead == 'D') ADVANCE(339);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
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
      if (lookahead == 'd') ADVANCE(304);
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
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(351);
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
      if (lookahead == 'g') ADVANCE(326);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(357);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(330);
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
      if (lookahead == 'l') ADVANCE(354);
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
      if (lookahead == 'n') ADVANCE(340);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(353);
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
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(350);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(348);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(333);
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
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(355);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(328);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(349);
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
      if (lookahead == 'y') ADVANCE(338);
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
      if (lookahead == 'y') ADVANCE(352);
      END_STATE();
    case 262:
      if (lookahead == 'y') ADVANCE(345);
      END_STATE();
    case 263:
      if (lookahead == 'y') ADVANCE(327);
      END_STATE();
    case 264:
      if (lookahead == 'y') ADVANCE(342);
      END_STATE();
    case 265:
      if (lookahead == 'y') ADVANCE(343);
      END_STATE();
    case 266:
      if (lookahead == 'y') ADVANCE(344);
      END_STATE();
    case 267:
      if (lookahead == 'y') ADVANCE(341);
      END_STATE();
    case 268:
      if (lookahead == 'y') ADVANCE(356);
      END_STATE();
    case 269:
      if (lookahead == 'y') ADVANCE(358);
      END_STATE();
    case 270:
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 271:
      if (lookahead == 'y') ADVANCE(331);
      END_STATE();
    case 272:
      if (lookahead == 'y') ADVANCE(337);
      END_STATE();
    case 273:
      if (lookahead == 'y') ADVANCE(334);
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
      if (lookahead == '{') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 278:
      if (lookahead == '}') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 279:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 280:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      END_STATE();
    case 281:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 282:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 283:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(281);
      END_STATE();
    case 284:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(308);
      END_STATE();
    case 285:
      if (eof) ADVANCE(286);
      if (lookahead == '"') ADVANCE(309);
      if (lookahead == '$') ADVANCE(284);
      if (lookahead == '\'') ADVANCE(307);
      if (lookahead == '(') ADVANCE(291);
      if (lookahead == ')') ADVANCE(292);
      if (lookahead == ',') ADVANCE(295);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(300);
      if (lookahead == ':') ADVANCE(299);
      if (lookahead == ';') ADVANCE(287);
      if (lookahead == '=') ADVANCE(288);
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
      if (lookahead == '[') ADVANCE(323);
      if (lookahead == '\\') ADVANCE(298);
      if (lookahead == '{') ADVANCE(293);
      if (lookahead == '|') ADVANCE(296);
      if (lookahead == '}') ADVANCE(294);
      if (lookahead == '~') ADVANCE(320);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(285)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(301);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(363);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(360);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(279);
      if (lookahead == 'x') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_hexinteger);
      if (lookahead == '\\') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(313);
      if (lookahead == '/') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(315);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(312);
      if (lookahead == '/') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(313);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(313);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(311);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(310);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(316);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(318);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_Bag);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_Dictionary);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_Environment);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_Event);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_IdentityBag);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_IdentityDictionary);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_IdentitySet);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_LazyEnvir);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_MultiLevelIdentityDictionary);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_ObjectTable);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_TwoWayIdentityDictionary);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_Array);
      if (lookahead == '2') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_Array2D);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_ArrayedCollection);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_DoubleArray);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_FloatArray);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_Int16Array);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_Int32Array);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_Int8Array);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_LinkedList);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_List);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_Order);
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_OrderedIdentitySet);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_Pair);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_PriorityQueue);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_RawArray);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_SequenceableCollection);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_Signal);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_SortedList);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_SparseArray);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_SymbolArray);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(359);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(369);
      if (lookahead == '=') ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(368);
      if (lookahead == '>') ADVANCE(370);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(325);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(321);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(376);
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
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      END_STATE();
    case 7:
      if (lookahead == 'g') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_arg);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 20:
      if (lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_classvar);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 285},
  [2] = {.lex_state = 285},
  [3] = {.lex_state = 285},
  [4] = {.lex_state = 285},
  [5] = {.lex_state = 285},
  [6] = {.lex_state = 285},
  [7] = {.lex_state = 285},
  [8] = {.lex_state = 285},
  [9] = {.lex_state = 285},
  [10] = {.lex_state = 285},
  [11] = {.lex_state = 285},
  [12] = {.lex_state = 285},
  [13] = {.lex_state = 285},
  [14] = {.lex_state = 285},
  [15] = {.lex_state = 285},
  [16] = {.lex_state = 285},
  [17] = {.lex_state = 285},
  [18] = {.lex_state = 285},
  [19] = {.lex_state = 285},
  [20] = {.lex_state = 285},
  [21] = {.lex_state = 285},
  [22] = {.lex_state = 285},
  [23] = {.lex_state = 285},
  [24] = {.lex_state = 285},
  [25] = {.lex_state = 285},
  [26] = {.lex_state = 285},
  [27] = {.lex_state = 285},
  [28] = {.lex_state = 285},
  [29] = {.lex_state = 285},
  [30] = {.lex_state = 285},
  [31] = {.lex_state = 285},
  [32] = {.lex_state = 285},
  [33] = {.lex_state = 285},
  [34] = {.lex_state = 285},
  [35] = {.lex_state = 285},
  [36] = {.lex_state = 285},
  [37] = {.lex_state = 285},
  [38] = {.lex_state = 285},
  [39] = {.lex_state = 285},
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
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 285},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 285},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 285},
  [83] = {.lex_state = 285},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 285},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 285},
  [101] = {.lex_state = 285},
  [102] = {.lex_state = 285},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 285},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 285},
  [115] = {.lex_state = 285},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 285},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 285},
  [131] = {.lex_state = 285},
  [132] = {.lex_state = 285},
  [133] = {.lex_state = 285},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 285},
  [136] = {.lex_state = 285},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {(TSStateId)(-1)},
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
  },
  [1] = {
    [sym_source_file] = STATE(149),
    [sym__expression] = STATE(30),
    [sym__expression_statement] = STATE(150),
    [sym__value] = STATE(81),
    [sym_function_definition] = STATE(151),
    [sym_function_call] = STATE(151),
    [sym_function_block] = STATE(73),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_code_block] = STATE(28),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_variable_definition] = STATE(151),
    [sym_comment] = STATE(1),
    [sym_collection] = STATE(63),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(73),
    [aux_sym_source_file_repeat1] = STATE(8),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [2] = {
    [sym__expression] = STATE(30),
    [sym__expression_statement] = STATE(150),
    [sym__value] = STATE(81),
    [sym_function_definition] = STATE(151),
    [sym_function_call] = STATE(151),
    [sym_function_block] = STATE(73),
    [sym_parameter_list] = STATE(5),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_code_block] = STATE(28),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_variable_definition] = STATE(151),
    [sym_comment] = STATE(2),
    [sym_collection] = STATE(63),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(73),
    [aux_sym_source_file_repeat1] = STATE(9),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(43),
    [anon_sym_arg] = ACTIONS(45),
    [anon_sym_PIPE] = ACTIONS(47),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [3] = {
    [sym__expression] = STATE(30),
    [sym__expression_statement] = STATE(150),
    [sym__value] = STATE(75),
    [sym_function_definition] = STATE(151),
    [sym_function_call] = STATE(151),
    [sym_function_block] = STATE(73),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(57),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_code_block] = STATE(28),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_variable_definition] = STATE(151),
    [sym_comment] = STATE(3),
    [sym_collection] = STATE(63),
    [sym__collection_sequence] = STATE(152),
    [sym_associative_item] = STATE(89),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(73),
    [aux_sym_source_file_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(51),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [4] = {
    [sym__expression] = STATE(30),
    [sym__expression_statement] = STATE(150),
    [sym__value] = STATE(81),
    [sym_function_definition] = STATE(151),
    [sym_function_call] = STATE(151),
    [sym_function_block] = STATE(73),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_code_block] = STATE(28),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_variable_definition] = STATE(151),
    [sym_comment] = STATE(4),
    [sym_collection] = STATE(63),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(73),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_LPAREN] = ACTIONS(58),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_LBRACE] = ACTIONS(61),
    [anon_sym_RBRACE] = ACTIONS(53),
    [anon_sym_BSLASH] = ACTIONS(64),
    [sym_integer] = ACTIONS(67),
    [sym_hexinteger] = ACTIONS(70),
    [sym_float] = ACTIONS(70),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [sym_char] = ACTIONS(76),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(82),
    [anon_sym_false] = ACTIONS(82),
    [anon_sym_var] = ACTIONS(85),
    [anon_sym_classvar] = ACTIONS(88),
    [aux_sym_environment_var_token1] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(94),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_Bag] = ACTIONS(100),
    [anon_sym_Dictionary] = ACTIONS(100),
    [anon_sym_Environment] = ACTIONS(100),
    [anon_sym_Event] = ACTIONS(100),
    [anon_sym_IdentityBag] = ACTIONS(100),
    [anon_sym_IdentityDictionary] = ACTIONS(100),
    [anon_sym_IdentitySet] = ACTIONS(100),
    [anon_sym_LazyEnvir] = ACTIONS(100),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(100),
    [anon_sym_ObjectTable] = ACTIONS(100),
    [anon_sym_Set] = ACTIONS(100),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(100),
    [anon_sym_Array] = ACTIONS(103),
    [anon_sym_Array2D] = ACTIONS(106),
    [anon_sym_ArrayedCollection] = ACTIONS(106),
    [anon_sym_DoubleArray] = ACTIONS(106),
    [anon_sym_FloatArray] = ACTIONS(106),
    [anon_sym_Int16Array] = ACTIONS(106),
    [anon_sym_Int32Array] = ACTIONS(106),
    [anon_sym_Int8Array] = ACTIONS(106),
    [anon_sym_LinkedList] = ACTIONS(106),
    [anon_sym_List] = ACTIONS(106),
    [anon_sym_Order] = ACTIONS(103),
    [anon_sym_OrderedIdentitySet] = ACTIONS(106),
    [anon_sym_Pair] = ACTIONS(106),
    [anon_sym_PriorityQueue] = ACTIONS(106),
    [anon_sym_RawArray] = ACTIONS(106),
    [anon_sym_SequenceableCollection] = ACTIONS(106),
    [anon_sym_Signal] = ACTIONS(106),
    [anon_sym_SortedList] = ACTIONS(106),
    [anon_sym_SparseArray] = ACTIONS(106),
    [anon_sym_String] = ACTIONS(106),
    [anon_sym_SymbolArray] = ACTIONS(106),
  },
  [5] = {
    [sym__expression] = STATE(30),
    [sym__expression_statement] = STATE(150),
    [sym__value] = STATE(81),
    [sym_function_definition] = STATE(151),
    [sym_function_call] = STATE(151),
    [sym_function_block] = STATE(73),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_code_block] = STATE(28),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_variable_definition] = STATE(151),
    [sym_comment] = STATE(5),
    [sym_collection] = STATE(63),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(73),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(109),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [6] = {
    [sym__expression] = STATE(30),
    [sym__expression_statement] = STATE(150),
    [sym__value] = STATE(81),
    [sym_function_definition] = STATE(151),
    [sym_function_call] = STATE(151),
    [sym_function_block] = STATE(73),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_code_block] = STATE(28),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_variable_definition] = STATE(151),
    [sym_comment] = STATE(6),
    [sym_collection] = STATE(63),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(73),
    [aux_sym_source_file_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(111),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [7] = {
    [sym__expression] = STATE(30),
    [sym__expression_statement] = STATE(150),
    [sym__value] = STATE(81),
    [sym_function_definition] = STATE(151),
    [sym_function_call] = STATE(151),
    [sym_function_block] = STATE(73),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_code_block] = STATE(28),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_variable_definition] = STATE(151),
    [sym_comment] = STATE(7),
    [sym_collection] = STATE(63),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(73),
    [aux_sym_source_file_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(113),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [8] = {
    [sym__expression] = STATE(30),
    [sym__expression_statement] = STATE(150),
    [sym__value] = STATE(81),
    [sym_function_definition] = STATE(151),
    [sym_function_call] = STATE(151),
    [sym_function_block] = STATE(73),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_code_block] = STATE(28),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_variable_definition] = STATE(151),
    [sym_comment] = STATE(8),
    [sym_collection] = STATE(63),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(73),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(115),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [9] = {
    [sym__expression] = STATE(30),
    [sym__expression_statement] = STATE(150),
    [sym__value] = STATE(81),
    [sym_function_definition] = STATE(151),
    [sym_function_call] = STATE(151),
    [sym_function_block] = STATE(73),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_code_block] = STATE(28),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_variable_definition] = STATE(151),
    [sym_comment] = STATE(9),
    [sym_collection] = STATE(63),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(73),
    [aux_sym_source_file_repeat1] = STATE(4),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(109),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [10] = {
    [sym__value] = STATE(71),
    [sym_function_block] = STATE(63),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(57),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_variable] = STATE(63),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_comment] = STATE(10),
    [sym_collection] = STATE(63),
    [sym__collection_sequence] = STATE(146),
    [sym_associative_item] = STATE(89),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(63),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(117),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [11] = {
    [sym__value] = STATE(71),
    [sym_function_block] = STATE(63),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(57),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_variable] = STATE(63),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_comment] = STATE(11),
    [sym_collection] = STATE(63),
    [sym__collection_sequence] = STATE(152),
    [sym_associative_item] = STATE(89),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(63),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(117),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [12] = {
    [sym__value] = STATE(71),
    [sym_function_block] = STATE(63),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(57),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_variable] = STATE(63),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_comment] = STATE(12),
    [sym_collection] = STATE(63),
    [sym__collection_sequence] = STATE(137),
    [sym_associative_item] = STATE(89),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(63),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(117),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [13] = {
    [sym__value] = STATE(71),
    [sym_function_block] = STATE(63),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(57),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_variable] = STATE(63),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_comment] = STATE(13),
    [sym_collection] = STATE(63),
    [sym__collection_sequence] = STATE(140),
    [sym_associative_item] = STATE(89),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(63),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(117),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [14] = {
    [sym__value] = STATE(77),
    [sym_function_block] = STATE(63),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(57),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_variable] = STATE(63),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_comment] = STATE(14),
    [sym_collection] = STATE(63),
    [sym_associative_item] = STATE(108),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(63),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(117),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [15] = {
    [sym__value] = STATE(76),
    [sym_function_block] = STATE(63),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_variable] = STATE(63),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_comment] = STATE(15),
    [sym_collection] = STATE(63),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(63),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(117),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [16] = {
    [sym__value] = STATE(62),
    [sym_function_block] = STATE(63),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_variable] = STATE(63),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_comment] = STATE(16),
    [sym_collection] = STATE(63),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(63),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(117),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [17] = {
    [sym__value] = STATE(60),
    [sym_function_block] = STATE(63),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_variable] = STATE(63),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_comment] = STATE(17),
    [sym_collection] = STATE(63),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(63),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(117),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [18] = {
    [sym__value] = STATE(80),
    [sym_function_block] = STATE(79),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_variable] = STATE(63),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_comment] = STATE(18),
    [sym_collection] = STATE(63),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(63),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(117),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [19] = {
    [sym__value] = STATE(58),
    [sym_function_block] = STATE(63),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_variable] = STATE(63),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_comment] = STATE(19),
    [sym_collection] = STATE(63),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(63),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(117),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [20] = {
    [sym__value] = STATE(55),
    [sym_function_block] = STATE(63),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_variable] = STATE(63),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_comment] = STATE(20),
    [sym_collection] = STATE(63),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(63),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(117),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [21] = {
    [sym__value] = STATE(56),
    [sym_function_block] = STATE(63),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_variable] = STATE(63),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_comment] = STATE(21),
    [sym_collection] = STATE(63),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(63),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(117),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [22] = {
    [sym__value] = STATE(44),
    [sym_function_block] = STATE(63),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_variable] = STATE(63),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_comment] = STATE(22),
    [sym_collection] = STATE(63),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(63),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(117),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [23] = {
    [sym__value] = STATE(46),
    [sym_function_block] = STATE(63),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_variable] = STATE(63),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_comment] = STATE(23),
    [sym_collection] = STATE(63),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(63),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(117),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [24] = {
    [sym__value] = STATE(47),
    [sym_function_block] = STATE(63),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_variable] = STATE(63),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_comment] = STATE(24),
    [sym_collection] = STATE(63),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(63),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(117),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [25] = {
    [sym__value] = STATE(52),
    [sym_function_block] = STATE(63),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_variable] = STATE(63),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_comment] = STATE(25),
    [sym_collection] = STATE(63),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(63),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(117),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
  [26] = {
    [sym__value] = STATE(53),
    [sym_function_block] = STATE(63),
    [sym_literal] = STATE(63),
    [sym_number] = STATE(65),
    [sym_symbol] = STATE(65),
    [sym_string] = STATE(65),
    [sym_bool] = STATE(65),
    [sym_variable] = STATE(63),
    [sym_local_var] = STATE(61),
    [sym_classvar] = STATE(61),
    [sym_environment_var] = STATE(61),
    [sym_comment] = STATE(26),
    [sym_collection] = STATE(63),
    [sym__unordered_collection_types] = STATE(121),
    [sym__ordered_collection_types] = STATE(121),
    [sym_binary_expression] = STATE(63),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(117),
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
    [anon_sym_Bag] = ACTIONS(37),
    [anon_sym_Dictionary] = ACTIONS(37),
    [anon_sym_Environment] = ACTIONS(37),
    [anon_sym_Event] = ACTIONS(37),
    [anon_sym_IdentityBag] = ACTIONS(37),
    [anon_sym_IdentityDictionary] = ACTIONS(37),
    [anon_sym_IdentitySet] = ACTIONS(37),
    [anon_sym_LazyEnvir] = ACTIONS(37),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(37),
    [anon_sym_ObjectTable] = ACTIONS(37),
    [anon_sym_Set] = ACTIONS(37),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(37),
    [anon_sym_Array] = ACTIONS(39),
    [anon_sym_Array2D] = ACTIONS(41),
    [anon_sym_ArrayedCollection] = ACTIONS(41),
    [anon_sym_DoubleArray] = ACTIONS(41),
    [anon_sym_FloatArray] = ACTIONS(41),
    [anon_sym_Int16Array] = ACTIONS(41),
    [anon_sym_Int32Array] = ACTIONS(41),
    [anon_sym_Int8Array] = ACTIONS(41),
    [anon_sym_LinkedList] = ACTIONS(41),
    [anon_sym_List] = ACTIONS(41),
    [anon_sym_Order] = ACTIONS(39),
    [anon_sym_OrderedIdentitySet] = ACTIONS(41),
    [anon_sym_Pair] = ACTIONS(41),
    [anon_sym_PriorityQueue] = ACTIONS(41),
    [anon_sym_RawArray] = ACTIONS(41),
    [anon_sym_SequenceableCollection] = ACTIONS(41),
    [anon_sym_Signal] = ACTIONS(41),
    [anon_sym_SortedList] = ACTIONS(41),
    [anon_sym_SparseArray] = ACTIONS(41),
    [anon_sym_String] = ACTIONS(41),
    [anon_sym_SymbolArray] = ACTIONS(41),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(27), 1,
      sym_comment,
    ACTIONS(121), 9,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      anon_sym_Array,
      anon_sym_Order,
      sym_identifier,
    ACTIONS(119), 44,
      ts_builtin_sym_end,
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
  [67] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(28), 1,
      sym_comment,
    ACTIONS(125), 9,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      anon_sym_Array,
      anon_sym_Order,
      sym_identifier,
    ACTIONS(123), 44,
      ts_builtin_sym_end,
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
  [134] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(29), 1,
      sym_comment,
    ACTIONS(129), 9,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      anon_sym_Array,
      anon_sym_Order,
      sym_identifier,
    ACTIONS(127), 44,
      ts_builtin_sym_end,
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
  [201] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(30), 1,
      sym_comment,
    ACTIONS(133), 9,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      anon_sym_Array,
      anon_sym_Order,
      sym_identifier,
    ACTIONS(131), 44,
      ts_builtin_sym_end,
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
  [268] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(31), 1,
      sym_comment,
    ACTIONS(137), 9,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      anon_sym_Array,
      anon_sym_Order,
      sym_identifier,
    ACTIONS(135), 44,
      ts_builtin_sym_end,
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
  [335] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(32), 1,
      sym_comment,
    ACTIONS(139), 9,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      anon_sym_Array,
      anon_sym_Order,
      sym_identifier,
    ACTIONS(141), 42,
      anon_sym_LPAREN,
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
  [400] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(33), 1,
      sym_comment,
    ACTIONS(143), 9,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      anon_sym_Array,
      anon_sym_Order,
      sym_identifier,
    ACTIONS(145), 42,
      anon_sym_LPAREN,
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
  [465] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(34), 1,
      sym_comment,
    ACTIONS(147), 9,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      anon_sym_Array,
      anon_sym_Order,
      sym_identifier,
    ACTIONS(149), 42,
      anon_sym_LPAREN,
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
  [530] = 24,
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
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    ACTIONS(159), 1,
      anon_sym_BSLASH,
    STATE(35), 1,
      sym_comment,
    STATE(87), 1,
      sym_argument_calls,
    STATE(123), 1,
      sym_parameter_call_list,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(155), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    STATE(99), 2,
      sym_literal,
      sym_variable,
    STATE(112), 2,
      sym_unnamed_argument,
      sym_named_argument,
    ACTIONS(153), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    STATE(61), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(65), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [615] = 24,
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
    ACTIONS(159), 1,
      anon_sym_BSLASH,
    ACTIONS(161), 1,
      sym_identifier,
    ACTIONS(163), 1,
      anon_sym_SEMI,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      sym_comment,
    STATE(87), 1,
      sym_argument_calls,
    STATE(124), 1,
      sym_parameter_call_list,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym_literal,
      sym_variable,
    STATE(112), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(61), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(65), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [697] = 23,
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
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_BSLASH,
    ACTIONS(169), 1,
      anon_sym_SEMI,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      sym_comment,
    STATE(87), 1,
      sym_argument_calls,
    STATE(134), 1,
      sym_parameter_call_list,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym_literal,
      sym_variable,
    STATE(112), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(61), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(65), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [776] = 23,
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
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_BSLASH,
    ACTIONS(173), 1,
      anon_sym_SEMI,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      sym_comment,
    STATE(87), 1,
      sym_argument_calls,
    STATE(119), 1,
      sym_parameter_call_list,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym_literal,
      sym_variable,
    STATE(112), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(61), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(65), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [855] = 20,
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
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(159), 1,
      anon_sym_BSLASH,
    STATE(39), 1,
      sym_comment,
    STATE(104), 1,
      sym_argument_calls,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(99), 2,
      sym_literal,
      sym_variable,
    STATE(112), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(61), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(65), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [925] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(40), 1,
      sym_comment,
    ACTIONS(179), 7,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(177), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
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
  [964] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(41), 1,
      sym_comment,
    ACTIONS(183), 7,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(181), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
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
  [1003] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(42), 1,
      sym_comment,
    ACTIONS(187), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(185), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [1041] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(43), 1,
      sym_comment,
    ACTIONS(191), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(189), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [1079] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(44), 1,
      sym_comment,
    ACTIONS(195), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(193), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [1117] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(45), 1,
      sym_comment,
    ACTIONS(199), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(197), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [1155] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    STATE(46), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(195), 5,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 16,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [1197] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    STATE(47), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(195), 5,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 14,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [1241] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(48), 1,
      sym_comment,
    ACTIONS(209), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(207), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [1279] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(49), 1,
      sym_comment,
    ACTIONS(213), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(211), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [1317] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(50), 1,
      sym_comment,
    ACTIONS(217), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(215), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [1355] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(51), 1,
      sym_comment,
    ACTIONS(221), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(219), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [1393] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(223), 1,
      anon_sym_PIPE,
    ACTIONS(225), 1,
      anon_sym_AMP,
    ACTIONS(227), 1,
      anon_sym_CARET,
    STATE(52), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(229), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(195), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 11,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1445] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(225), 1,
      anon_sym_AMP,
    STATE(53), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(229), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(195), 4,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [1493] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(54), 1,
      sym_comment,
    ACTIONS(233), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(231), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [1531] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(229), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(195), 5,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 12,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [1577] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(195), 1,
      anon_sym_EQ,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(223), 1,
      anon_sym_PIPE,
    ACTIONS(225), 1,
      anon_sym_AMP,
    ACTIONS(227), 1,
      anon_sym_CARET,
    ACTIONS(235), 1,
      anon_sym_AMP_AMP,
    STATE(56), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(229), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(239), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(193), 6,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
  [1635] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(57), 1,
      sym_comment,
    ACTIONS(245), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(241), 7,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(243), 15,
      anon_sym_DOT,
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
  [1675] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(195), 1,
      anon_sym_EQ,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(223), 1,
      anon_sym_PIPE,
    ACTIONS(225), 1,
      anon_sym_AMP,
    ACTIONS(227), 1,
      anon_sym_CARET,
    STATE(58), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(229), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(239), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(193), 7,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1731] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(245), 1,
      anon_sym_COLON,
    STATE(59), 1,
      sym_comment,
    ACTIONS(247), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(249), 17,
      anon_sym_DOT,
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
  [1771] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(225), 1,
      anon_sym_AMP,
    ACTIONS(227), 1,
      anon_sym_CARET,
    STATE(60), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(229), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(195), 4,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 11,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1821] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(61), 1,
      sym_comment,
    ACTIONS(253), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(251), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [1859] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(195), 1,
      anon_sym_EQ,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(223), 1,
      anon_sym_PIPE,
    ACTIONS(225), 1,
      anon_sym_AMP,
    ACTIONS(227), 1,
      anon_sym_CARET,
    ACTIONS(235), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_PIPE_PIPE,
    STATE(62), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(229), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(239), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(193), 5,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1919] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(63), 1,
      sym_comment,
    ACTIONS(259), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(257), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [1957] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(64), 1,
      sym_comment,
    ACTIONS(263), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(261), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [1995] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(65), 1,
      sym_comment,
    ACTIONS(241), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(243), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [2033] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(66), 1,
      sym_comment,
    ACTIONS(267), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(265), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [2071] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(67), 1,
      sym_comment,
    ACTIONS(247), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(249), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [2109] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(68), 1,
      sym_comment,
    ACTIONS(271), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(269), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [2147] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(69), 1,
      sym_comment,
    ACTIONS(275), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(273), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [2185] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(70), 1,
      sym_comment,
    ACTIONS(279), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(277), 18,
      anon_sym_SEMI,
      anon_sym_DOT,
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
  [2223] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(223), 1,
      anon_sym_PIPE,
    ACTIONS(225), 1,
      anon_sym_AMP,
    ACTIONS(227), 1,
      anon_sym_CARET,
    ACTIONS(235), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(281), 1,
      anon_sym_EQ,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      sym_comment,
    STATE(90), 1,
      aux_sym__collection_sequence_repeat1,
    ACTIONS(201), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(229), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(239), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(283), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(237), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2286] = 18,
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
    STATE(72), 1,
      sym_comment,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_literal,
      sym_variable,
    STATE(61), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(65), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [2349] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      sym_comment,
    ACTIONS(259), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(257), 16,
      anon_sym_DOT,
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
  [2388] = 18,
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
    STATE(74), 1,
      sym_comment,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(103), 2,
      sym_literal,
      sym_variable,
    STATE(61), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(65), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [2451] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(223), 1,
      anon_sym_PIPE,
    ACTIONS(225), 1,
      anon_sym_AMP,
    ACTIONS(227), 1,
      anon_sym_CARET,
    ACTIONS(235), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(281), 1,
      anon_sym_EQ,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_DOT,
    STATE(75), 1,
      sym_comment,
    STATE(90), 1,
      aux_sym__collection_sequence_repeat1,
    ACTIONS(201), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(229), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(239), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2516] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(223), 1,
      anon_sym_PIPE,
    ACTIONS(225), 1,
      anon_sym_AMP,
    ACTIONS(227), 1,
      anon_sym_CARET,
    ACTIONS(235), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(281), 1,
      anon_sym_EQ,
    STATE(76), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(229), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(239), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(291), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(237), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2574] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(223), 1,
      anon_sym_PIPE,
    ACTIONS(225), 1,
      anon_sym_AMP,
    ACTIONS(227), 1,
      anon_sym_CARET,
    ACTIONS(235), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(281), 1,
      anon_sym_EQ,
    STATE(77), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(229), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(239), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(293), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(237), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2632] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(295), 1,
      anon_sym_EQ,
    STATE(78), 1,
      sym_comment,
    ACTIONS(259), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(257), 16,
      anon_sym_DOT,
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
  [2670] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      sym_comment,
    ACTIONS(259), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(257), 13,
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
  [2706] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(223), 1,
      anon_sym_PIPE,
    ACTIONS(225), 1,
      anon_sym_AMP,
    ACTIONS(227), 1,
      anon_sym_CARET,
    ACTIONS(235), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(281), 1,
      anon_sym_EQ,
    ACTIONS(299), 1,
      anon_sym_SEMI,
    STATE(80), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(229), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(239), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2762] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      anon_sym_SLASH,
    ACTIONS(223), 1,
      anon_sym_PIPE,
    ACTIONS(225), 1,
      anon_sym_AMP,
    ACTIONS(227), 1,
      anon_sym_CARET,
    ACTIONS(235), 1,
      anon_sym_AMP_AMP,
    ACTIONS(255), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(281), 1,
      anon_sym_EQ,
    ACTIONS(289), 1,
      anon_sym_DOT,
    STATE(81), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(205), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(229), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(239), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(237), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2818] = 12,
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
    STATE(82), 1,
      sym_comment,
    STATE(98), 1,
      sym_literal,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(301), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(65), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [2860] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(303), 1,
      anon_sym_BSLASH,
    ACTIONS(305), 1,
      sym_integer,
    ACTIONS(309), 1,
      anon_sym_SQUOTE,
    ACTIONS(311), 1,
      sym_char,
    ACTIONS(313), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      sym_comment,
    STATE(98), 1,
      sym_literal,
    ACTIONS(307), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(315), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(135), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [2902] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(84), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(153), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2921] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(85), 1,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(317), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2940] = 7,
    ACTIONS(321), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 1,
      aux_sym_string_token1,
    ACTIONS(325), 1,
      sym_escape_sequence,
    ACTIONS(327), 1,
      sym_line_comment,
    ACTIONS(329), 1,
      sym_block_comment,
    STATE(86), 1,
      sym_comment,
    STATE(91), 1,
      aux_sym_string_repeat1,
  [2962] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      sym_comment,
    STATE(95), 1,
      aux_sym_parameter_call_list_repeat1,
    ACTIONS(331), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [2982] = 7,
    ACTIONS(323), 1,
      aux_sym_string_token1,
    ACTIONS(325), 1,
      sym_escape_sequence,
    ACTIONS(327), 1,
      sym_line_comment,
    ACTIONS(329), 1,
      sym_block_comment,
    ACTIONS(335), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      aux_sym_string_repeat1,
    STATE(88), 1,
      sym_comment,
  [3004] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      sym_comment,
    STATE(90), 1,
      aux_sym__collection_sequence_repeat1,
    ACTIONS(283), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3024] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym__collection_sequence_repeat1,
    ACTIONS(337), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3044] = 6,
    ACTIONS(327), 1,
      sym_line_comment,
    ACTIONS(329), 1,
      sym_block_comment,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      aux_sym_string_token1,
    ACTIONS(344), 1,
      sym_escape_sequence,
    STATE(91), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [3064] = 7,
    ACTIONS(323), 1,
      aux_sym_string_token1,
    ACTIONS(325), 1,
      sym_escape_sequence,
    ACTIONS(327), 1,
      sym_line_comment,
    ACTIONS(329), 1,
      sym_block_comment,
    ACTIONS(347), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      aux_sym_string_repeat1,
    STATE(92), 1,
      sym_comment,
  [3086] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(293), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(93), 2,
      sym_comment,
      aux_sym__collection_sequence_repeat1,
  [3104] = 7,
    ACTIONS(323), 1,
      aux_sym_string_token1,
    ACTIONS(325), 1,
      sym_escape_sequence,
    ACTIONS(327), 1,
      sym_line_comment,
    ACTIONS(329), 1,
      sym_block_comment,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(92), 1,
      aux_sym_string_repeat1,
    STATE(94), 1,
      sym_comment,
  [3126] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    STATE(95), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym_parameter_call_list_repeat1,
    ACTIONS(354), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [3146] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(358), 1,
      anon_sym_COMMA,
    ACTIONS(356), 2,
      anon_sym_SEMI,
      anon_sym_RPAREN,
    STATE(96), 2,
      sym_comment,
      aux_sym_parameter_call_list_repeat1,
  [3164] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(363), 1,
      anon_sym_EQ,
    STATE(97), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3181] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(98), 1,
      sym_comment,
    ACTIONS(365), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3196] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(99), 1,
      sym_comment,
    ACTIONS(367), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3211] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    STATE(100), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [3228] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(374), 1,
      anon_sym_EQ,
    STATE(101), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3245] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(378), 1,
      anon_sym_PIPE,
    STATE(102), 1,
      sym_comment,
    STATE(114), 1,
      aux_sym_parameter_list_repeat1,
  [3264] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(103), 1,
      sym_comment,
    ACTIONS(380), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3279] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(104), 1,
      sym_comment,
    ACTIONS(356), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3294] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(105), 1,
      sym_comment,
    ACTIONS(382), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3309] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(378), 1,
      anon_sym_SEMI,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      sym_comment,
    STATE(113), 1,
      aux_sym_parameter_list_repeat1,
  [3328] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(372), 1,
      anon_sym_SEMI,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(107), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [3345] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(108), 1,
      sym_comment,
    ACTIONS(293), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3360] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(109), 1,
      sym_comment,
    ACTIONS(372), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3375] = 5,
    ACTIONS(327), 1,
      sym_line_comment,
    ACTIONS(329), 1,
      sym_block_comment,
    ACTIONS(391), 1,
      aux_sym_string_token1,
    STATE(110), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [3392] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(393), 1,
      sym_identifier,
    ACTIONS(395), 1,
      anon_sym_SEMI,
    STATE(106), 1,
      sym_argument,
    STATE(111), 1,
      sym_comment,
  [3411] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(112), 1,
      sym_comment,
    ACTIONS(397), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3426] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_SEMI,
    STATE(107), 1,
      aux_sym_parameter_list_repeat1,
    STATE(113), 1,
      sym_comment,
  [3445] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_PIPE,
    STATE(100), 1,
      aux_sym_parameter_list_repeat1,
    STATE(114), 1,
      sym_comment,
  [3464] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(395), 1,
      anon_sym_PIPE,
    ACTIONS(401), 1,
      sym_identifier,
    STATE(102), 1,
      sym_argument,
    STATE(115), 1,
      sym_comment,
  [3483] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(393), 1,
      sym_identifier,
    STATE(109), 1,
      sym_argument,
    STATE(116), 1,
      sym_comment,
  [3499] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(117), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3513] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(118), 1,
      sym_comment,
    ACTIONS(403), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [3527] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(405), 1,
      anon_sym_SEMI,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      sym_comment,
  [3543] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(409), 1,
      sym_identifier,
    ACTIONS(411), 1,
      aux_sym_symbol_token1,
    STATE(120), 1,
      sym_comment,
  [3559] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(413), 1,
      anon_sym_LPAREN,
    ACTIONS(415), 1,
      anon_sym_LBRACK,
    STATE(121), 1,
      sym_comment,
  [3575] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(401), 1,
      sym_identifier,
    STATE(109), 1,
      sym_argument,
    STATE(122), 1,
      sym_comment,
  [3591] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(169), 1,
      anon_sym_SEMI,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      sym_comment,
  [3607] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(173), 1,
      anon_sym_SEMI,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    STATE(124), 1,
      sym_comment,
  [3623] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(125), 1,
      sym_comment,
    ACTIONS(411), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [3637] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(126), 1,
      sym_comment,
    ACTIONS(417), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3651] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(127), 1,
      sym_comment,
    ACTIONS(419), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [3665] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(128), 1,
      sym_comment,
    ACTIONS(421), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3679] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(129), 1,
      sym_comment,
    ACTIONS(423), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [3693] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(130), 1,
      sym_comment,
    ACTIONS(261), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3707] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(131), 1,
      sym_comment,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3721] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(132), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3735] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(133), 1,
      sym_comment,
    ACTIONS(269), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3749] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(425), 1,
      anon_sym_SEMI,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      sym_comment,
  [3765] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(135), 1,
      sym_comment,
    ACTIONS(243), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3779] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(136), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3793] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(429), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      sym_comment,
  [3806] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(431), 1,
      anon_sym_SEMI,
    STATE(138), 1,
      sym_comment,
  [3819] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(433), 1,
      sym_identifier,
    STATE(139), 1,
      sym_comment,
  [3832] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(429), 1,
      anon_sym_RBRACK,
    STATE(140), 1,
      sym_comment,
  [3845] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(425), 1,
      anon_sym_SEMI,
    STATE(141), 1,
      sym_comment,
  [3858] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(435), 1,
      sym_identifier,
    STATE(142), 1,
      sym_comment,
  [3871] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(437), 1,
      anon_sym_SQUOTE,
    STATE(143), 1,
      sym_comment,
  [3884] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(439), 1,
      anon_sym_SEMI,
    STATE(144), 1,
      sym_comment,
  [3897] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(441), 1,
      sym_identifier,
    STATE(145), 1,
      sym_comment,
  [3910] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(443), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      sym_comment,
  [3923] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(173), 1,
      anon_sym_SEMI,
    STATE(147), 1,
      sym_comment,
  [3936] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(445), 1,
      anon_sym_SQUOTE,
    STATE(148), 1,
      sym_comment,
  [3949] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(447), 1,
      ts_builtin_sym_end,
    STATE(149), 1,
      sym_comment,
  [3962] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(449), 1,
      anon_sym_SEMI,
    STATE(150), 1,
      sym_comment,
  [3975] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      anon_sym_SEMI,
    STATE(151), 1,
      sym_comment,
  [3988] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      sym_comment,
  [4001] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(405), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      sym_comment,
  [4014] = 1,
    ACTIONS(451), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 67,
  [SMALL_STATE(29)] = 134,
  [SMALL_STATE(30)] = 201,
  [SMALL_STATE(31)] = 268,
  [SMALL_STATE(32)] = 335,
  [SMALL_STATE(33)] = 400,
  [SMALL_STATE(34)] = 465,
  [SMALL_STATE(35)] = 530,
  [SMALL_STATE(36)] = 615,
  [SMALL_STATE(37)] = 697,
  [SMALL_STATE(38)] = 776,
  [SMALL_STATE(39)] = 855,
  [SMALL_STATE(40)] = 925,
  [SMALL_STATE(41)] = 964,
  [SMALL_STATE(42)] = 1003,
  [SMALL_STATE(43)] = 1041,
  [SMALL_STATE(44)] = 1079,
  [SMALL_STATE(45)] = 1117,
  [SMALL_STATE(46)] = 1155,
  [SMALL_STATE(47)] = 1197,
  [SMALL_STATE(48)] = 1241,
  [SMALL_STATE(49)] = 1279,
  [SMALL_STATE(50)] = 1317,
  [SMALL_STATE(51)] = 1355,
  [SMALL_STATE(52)] = 1393,
  [SMALL_STATE(53)] = 1445,
  [SMALL_STATE(54)] = 1493,
  [SMALL_STATE(55)] = 1531,
  [SMALL_STATE(56)] = 1577,
  [SMALL_STATE(57)] = 1635,
  [SMALL_STATE(58)] = 1675,
  [SMALL_STATE(59)] = 1731,
  [SMALL_STATE(60)] = 1771,
  [SMALL_STATE(61)] = 1821,
  [SMALL_STATE(62)] = 1859,
  [SMALL_STATE(63)] = 1919,
  [SMALL_STATE(64)] = 1957,
  [SMALL_STATE(65)] = 1995,
  [SMALL_STATE(66)] = 2033,
  [SMALL_STATE(67)] = 2071,
  [SMALL_STATE(68)] = 2109,
  [SMALL_STATE(69)] = 2147,
  [SMALL_STATE(70)] = 2185,
  [SMALL_STATE(71)] = 2223,
  [SMALL_STATE(72)] = 2286,
  [SMALL_STATE(73)] = 2349,
  [SMALL_STATE(74)] = 2388,
  [SMALL_STATE(75)] = 2451,
  [SMALL_STATE(76)] = 2516,
  [SMALL_STATE(77)] = 2574,
  [SMALL_STATE(78)] = 2632,
  [SMALL_STATE(79)] = 2670,
  [SMALL_STATE(80)] = 2706,
  [SMALL_STATE(81)] = 2762,
  [SMALL_STATE(82)] = 2818,
  [SMALL_STATE(83)] = 2860,
  [SMALL_STATE(84)] = 2902,
  [SMALL_STATE(85)] = 2921,
  [SMALL_STATE(86)] = 2940,
  [SMALL_STATE(87)] = 2962,
  [SMALL_STATE(88)] = 2982,
  [SMALL_STATE(89)] = 3004,
  [SMALL_STATE(90)] = 3024,
  [SMALL_STATE(91)] = 3044,
  [SMALL_STATE(92)] = 3064,
  [SMALL_STATE(93)] = 3086,
  [SMALL_STATE(94)] = 3104,
  [SMALL_STATE(95)] = 3126,
  [SMALL_STATE(96)] = 3146,
  [SMALL_STATE(97)] = 3164,
  [SMALL_STATE(98)] = 3181,
  [SMALL_STATE(99)] = 3196,
  [SMALL_STATE(100)] = 3211,
  [SMALL_STATE(101)] = 3228,
  [SMALL_STATE(102)] = 3245,
  [SMALL_STATE(103)] = 3264,
  [SMALL_STATE(104)] = 3279,
  [SMALL_STATE(105)] = 3294,
  [SMALL_STATE(106)] = 3309,
  [SMALL_STATE(107)] = 3328,
  [SMALL_STATE(108)] = 3345,
  [SMALL_STATE(109)] = 3360,
  [SMALL_STATE(110)] = 3375,
  [SMALL_STATE(111)] = 3392,
  [SMALL_STATE(112)] = 3411,
  [SMALL_STATE(113)] = 3426,
  [SMALL_STATE(114)] = 3445,
  [SMALL_STATE(115)] = 3464,
  [SMALL_STATE(116)] = 3483,
  [SMALL_STATE(117)] = 3499,
  [SMALL_STATE(118)] = 3513,
  [SMALL_STATE(119)] = 3527,
  [SMALL_STATE(120)] = 3543,
  [SMALL_STATE(121)] = 3559,
  [SMALL_STATE(122)] = 3575,
  [SMALL_STATE(123)] = 3591,
  [SMALL_STATE(124)] = 3607,
  [SMALL_STATE(125)] = 3623,
  [SMALL_STATE(126)] = 3637,
  [SMALL_STATE(127)] = 3651,
  [SMALL_STATE(128)] = 3665,
  [SMALL_STATE(129)] = 3679,
  [SMALL_STATE(130)] = 3693,
  [SMALL_STATE(131)] = 3707,
  [SMALL_STATE(132)] = 3721,
  [SMALL_STATE(133)] = 3735,
  [SMALL_STATE(134)] = 3749,
  [SMALL_STATE(135)] = 3765,
  [SMALL_STATE(136)] = 3779,
  [SMALL_STATE(137)] = 3793,
  [SMALL_STATE(138)] = 3806,
  [SMALL_STATE(139)] = 3819,
  [SMALL_STATE(140)] = 3832,
  [SMALL_STATE(141)] = 3845,
  [SMALL_STATE(142)] = 3858,
  [SMALL_STATE(143)] = 3871,
  [SMALL_STATE(144)] = 3884,
  [SMALL_STATE(145)] = 3897,
  [SMALL_STATE(146)] = 3910,
  [SMALL_STATE(147)] = 3923,
  [SMALL_STATE(148)] = 3936,
  [SMALL_STATE(149)] = 3949,
  [SMALL_STATE(150)] = 3962,
  [SMALL_STATE(151)] = 3975,
  [SMALL_STATE(152)] = 3988,
  [SMALL_STATE(153)] = 4001,
  [SMALL_STATE(154)] = 4014,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(125),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(126),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classvar, 2),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classvar, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_var, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_var, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 4),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_var, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_var, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_sequence, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_item, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__collection_sequence_repeat1, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_call_list, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_sequence, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(110),
  [344] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(110),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__collection_sequence_repeat1, 2), SHIFT_REPEAT(14),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_call_list, 2),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_call_list_repeat1, 2),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_call_list_repeat1, 2), SHIFT_REPEAT(39),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnamed_argument, 1),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(122),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 4),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(116),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_calls, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, .production_id = 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordered_collection_types, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unordered_collection_types, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6, .production_id = 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5, .production_id = 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [447] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
