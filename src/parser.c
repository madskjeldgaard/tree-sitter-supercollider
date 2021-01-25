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
#define STATE_COUNT 146
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 114
#define ALIAS_COUNT 0
#define TOKEN_COUNT 79
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
  anon_sym_var = 20,
  anon_sym_classvar = 21,
  anon_sym_TILDE = 22,
  anon_sym_CARET = 23,
  sym_line_comment = 24,
  sym_block_comment = 25,
  anon_sym_LBRACK = 26,
  anon_sym_RBRACK = 27,
  anon_sym_DASH_GT = 28,
  anon_sym_Bag = 29,
  anon_sym_Dictionary = 30,
  anon_sym_Environment = 31,
  anon_sym_Event = 32,
  anon_sym_IdentityBag = 33,
  anon_sym_IdentityDictionary = 34,
  anon_sym_IdentitySet = 35,
  anon_sym_LazyEnvir = 36,
  anon_sym_MultiLevelIdentityDictionary = 37,
  anon_sym_ObjectTable = 38,
  anon_sym_Set = 39,
  anon_sym_TwoWayIdentityDictionary = 40,
  anon_sym_Array = 41,
  anon_sym_Array2D = 42,
  anon_sym_ArrayedCollection = 43,
  anon_sym_DoubleArray = 44,
  anon_sym_FloatArray = 45,
  anon_sym_Int16Array = 46,
  anon_sym_Int32Array = 47,
  anon_sym_Int8Array = 48,
  anon_sym_LinkedList = 49,
  anon_sym_List = 50,
  anon_sym_Order = 51,
  anon_sym_OrderedIdentitySet = 52,
  anon_sym_Pair = 53,
  anon_sym_PriorityQueue = 54,
  anon_sym_RawArray = 55,
  anon_sym_SequenceableCollection = 56,
  anon_sym_Signal = 57,
  anon_sym_SortedList = 58,
  anon_sym_SparseArray = 59,
  anon_sym_String = 60,
  anon_sym_SymbolArray = 61,
  anon_sym_AMP_AMP = 62,
  anon_sym_PIPE_PIPE = 63,
  anon_sym_AMP = 64,
  anon_sym_EQ_EQ = 65,
  anon_sym_BANG_EQ = 66,
  anon_sym_LT = 67,
  anon_sym_LT_EQ = 68,
  anon_sym_GT = 69,
  anon_sym_GT_EQ = 70,
  anon_sym_LT_LT = 71,
  anon_sym_GT_GT = 72,
  anon_sym_PLUS = 73,
  anon_sym_DASH = 74,
  anon_sym_STAR = 75,
  anon_sym_SLASH = 76,
  anon_sym_PERCENT = 77,
  sym_class = 78,
  sym_source_file = 79,
  sym__expression = 80,
  sym__expression_statement = 81,
  sym__value = 82,
  sym_function_definition = 83,
  sym_function_call = 84,
  sym_function_block = 85,
  sym_parameter_list = 86,
  sym_argument = 87,
  sym_parameter_call_list = 88,
  sym_argument_calls = 89,
  sym_unnamed_argument = 90,
  sym_named_argument = 91,
  sym_literals = 92,
  sym_number = 93,
  sym_float = 94,
  sym_symbol = 95,
  sym_string = 96,
  sym_code_block = 97,
  sym_variable = 98,
  sym_local_var = 99,
  sym_classvar = 100,
  sym_environment_var = 101,
  sym_variable_definition = 102,
  sym_comment = 103,
  sym_collection = 104,
  sym__collection_sequence = 105,
  sym_associative_item = 106,
  sym__unordered_collection_types = 107,
  sym__ordered_collection_types = 108,
  sym_binary_expression = 109,
  aux_sym_source_file_repeat1 = 110,
  aux_sym_parameter_list_repeat1 = 111,
  aux_sym_parameter_call_list_repeat1 = 112,
  aux_sym__collection_sequence_repeat1 = 113,
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
  [sym_class] = "class",
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
  [sym_class] = sym_class,
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
  [sym_class] = {
    .visible = true,
    .named = true,
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
      if (eof) ADVANCE(276);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '$') ADVANCE(274);
      if (lookahead == '%') ADVANCE(385);
      if (lookahead == '&') ADVANCE(372);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == ')') ADVANCE(282);
      if (lookahead == '*') ADVANCE(383);
      if (lookahead == '+') ADVANCE(381);
      if (lookahead == ',') ADVANCE(285);
      if (lookahead == '-') ADVANCE(382);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '/') ADVANCE(384);
      if (lookahead == '0') ADVANCE(290);
      if (lookahead == ':') ADVANCE(289);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '<') ADVANCE(375);
      if (lookahead == '=') ADVANCE(279);
      if (lookahead == '>') ADVANCE(377);
      if (lookahead == 'A') ADVANCE(565);
      if (lookahead == 'B') ADVANCE(414);
      if (lookahead == 'D') ADVANCE(489);
      if (lookahead == 'E') ADVANCE(528);
      if (lookahead == 'F') ADVANCE(514);
      if (lookahead == 'I') ADVANCE(454);
      if (lookahead == 'L') ADVANCE(415);
      if (lookahead == 'M') ADVANCE(622);
      if (lookahead == 'O') ADVANCE(438);
      if (lookahead == 'P') ADVANCE(416);
      if (lookahead == 'R') ADVANCE(417);
      if (lookahead == 'S') ADVANCE(460);
      if (lookahead == 'T') ADVANCE(630);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(288);
      if (lookahead == ']') ADVANCE(302);
      if (lookahead == '^') ADVANCE(298);
      if (lookahead == '_') ADVANCE(652);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead == '|') ADVANCE(287);
      if (lookahead == '}') ADVANCE(284);
      if (lookahead == '~') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(652);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(299);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(300);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(7);
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '8') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == '6') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(374);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(204);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(206);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(207);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(208);
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
      if (lookahead == 'B') ADVANCE(42);
      if (lookahead == 'D') ADVANCE(130);
      if (lookahead == 'S') ADVANCE(91);
      END_STATE();
    case 18:
      if (lookahead == 'C') ADVANCE(172);
      END_STATE();
    case 19:
      if (lookahead == 'C') ADVANCE(181);
      END_STATE();
    case 20:
      if (lookahead == 'D') ADVANCE(330);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(131);
      END_STATE();
    case 22:
      if (lookahead == 'D') ADVANCE(132);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(167);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(78);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(79);
      END_STATE();
    case 26:
      if (lookahead == 'I') ADVANCE(81);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(86);
      END_STATE();
    case 28:
      if (lookahead == 'L') ADVANCE(113);
      END_STATE();
    case 29:
      if (lookahead == 'L') ADVANCE(123);
      END_STATE();
    case 30:
      if (lookahead == 'Q') ADVANCE(245);
      END_STATE();
    case 31:
      if (lookahead == 'S') ADVANCE(92);
      END_STATE();
    case 32:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == 'W') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == '\\') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(251);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(238);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 48:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(201);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(266);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == 'b') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 60:
      if (lookahead == 'b') ADVANCE(138);
      END_STATE();
    case 61:
      if (lookahead == 'b') ADVANCE(171);
      END_STATE();
    case 62:
      if (lookahead == 'b') ADVANCE(140);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(141);
      END_STATE();
    case 64:
      if (lookahead == 'c') ADVANCE(231);
      END_STATE();
    case 65:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 66:
      if (lookahead == 'c') ADVANCE(219);
      END_STATE();
    case 67:
      if (lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(234);
      END_STATE();
    case 69:
      if (lookahead == 'c') ADVANCE(237);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(239);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(240);
      END_STATE();
    case 72:
      if (lookahead == 'd') ADVANCE(292);
      END_STATE();
    case 73:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 79:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(110);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead == 'y') ADVANCE(148);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(322);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(154);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(304);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(366);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(312);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(158);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(243);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(213);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 118:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(226);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(228);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(229);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(214);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(174);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(230);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(178);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(241);
      END_STATE();
    case 134:
      if (lookahead == 'j') ADVANCE(93);
      END_STATE();
    case 135:
      if (lookahead == 'k') ADVANCE(87);
      END_STATE();
    case 136:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 137:
      if (lookahead == 'l') ADVANCE(360);
      END_STATE();
    case 138:
      if (lookahead == 'l') ADVANCE(103);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(142);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(225);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 148:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 149:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead == 'v') ADVANCE(83);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(358);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 156:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(227);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(233);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(250);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 169:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 170:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 172:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(162);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 182:
      if (lookahead == 'q') ADVANCE(247);
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(349);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(236);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(196);
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
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 214:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 215:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(346);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(310);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(350);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(256);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 228:
      if (lookahead == 't') ADVANCE(257);
      END_STATE();
    case 229:
      if (lookahead == 't') ADVANCE(271);
      END_STATE();
    case 230:
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 231:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 232:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 233:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 234:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 235:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 236:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 237:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 238:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(272);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 243:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 244:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 245:
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 246:
      if (lookahead == 'u') ADVANCE(85);
      END_STATE();
    case 247:
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 248:
      if (lookahead == 'v') ADVANCE(89);
      END_STATE();
    case 249:
      if (lookahead == 'v') ADVANCE(118);
      END_STATE();
    case 250:
      if (lookahead == 'v') ADVANCE(121);
      END_STATE();
    case 251:
      if (lookahead == 'w') ADVANCE(9);
      END_STATE();
    case 252:
      if (lookahead == 'w') ADVANCE(169);
      END_STATE();
    case 253:
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 254:
      if (lookahead == 'y') ADVANCE(329);
      END_STATE();
    case 255:
      if (lookahead == 'y') ADVANCE(24);
      END_STATE();
    case 256:
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 257:
      if (lookahead == 'y') ADVANCE(30);
      END_STATE();
    case 258:
      if (lookahead == 'y') ADVANCE(356);
      END_STATE();
    case 259:
      if (lookahead == 'y') ADVANCE(342);
      END_STATE();
    case 260:
      if (lookahead == 'y') ADVANCE(306);
      END_STATE();
    case 261:
      if (lookahead == 'y') ADVANCE(336);
      END_STATE();
    case 262:
      if (lookahead == 'y') ADVANCE(338);
      END_STATE();
    case 263:
      if (lookahead == 'y') ADVANCE(340);
      END_STATE();
    case 264:
      if (lookahead == 'y') ADVANCE(334);
      END_STATE();
    case 265:
      if (lookahead == 'y') ADVANCE(364);
      END_STATE();
    case 266:
      if (lookahead == 'y') ADVANCE(368);
      END_STATE();
    case 267:
      if (lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 268:
      if (lookahead == 'y') ADVANCE(314);
      END_STATE();
    case 269:
      if (lookahead == 'y') ADVANCE(326);
      END_STATE();
    case 270:
      if (lookahead == 'y') ADVANCE(320);
      END_STATE();
    case 271:
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 272:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 273:
      if (lookahead == 'z') ADVANCE(253);
      END_STATE();
    case 274:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 275:
      if (eof) ADVANCE(276);
      if (lookahead == '"') ADVANCE(296);
      if (lookahead == '$') ADVANCE(274);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == ')') ADVANCE(282);
      if (lookahead == ',') ADVANCE(285);
      if (lookahead == '.') ADVANCE(280);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '0') ADVANCE(290);
      if (lookahead == ';') ADVANCE(277);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == 'A') ADVANCE(187);
      if (lookahead == 'B') ADVANCE(35);
      if (lookahead == 'D') ADVANCE(111);
      if (lookahead == 'E') ADVANCE(150);
      if (lookahead == 'F') ADVANCE(136);
      if (lookahead == 'I') ADVANCE(76);
      if (lookahead == 'L') ADVANCE(36);
      if (lookahead == 'M') ADVANCE(244);
      if (lookahead == 'O') ADVANCE(59);
      if (lookahead == 'P') ADVANCE(37);
      if (lookahead == 'R') ADVANCE(38);
      if (lookahead == 'S') ADVANCE(82);
      if (lookahead == 'T') ADVANCE(252);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == '\\') ADVANCE(288);
      if (lookahead == '{') ADVANCE(283);
      if (lookahead == '|') ADVANCE(286);
      if (lookahead == '}') ADVANCE(284);
      if (lookahead == '~') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(275)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(373);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(371);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_hexinteger);
      if (lookahead == '\\') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_Bag);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_Bag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_Dictionary);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_Dictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_Environment);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_Environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_Event);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_Event);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_IdentityBag);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_IdentityBag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_IdentityDictionary);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_IdentityDictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_IdentitySet);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_IdentitySet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_LazyEnvir);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LazyEnvir);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_MultiLevelIdentityDictionary);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_MultiLevelIdentityDictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_ObjectTable);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_ObjectTable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_Set);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_Set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_TwoWayIdentityDictionary);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_TwoWayIdentityDictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_Array);
      if (lookahead == '2') ADVANCE(400);
      if (lookahead == 'e') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_Array);
      if (lookahead == '2') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_Array2D);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_Array2D);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_ArrayedCollection);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_ArrayedCollection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_DoubleArray);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_DoubleArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_FloatArray);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_FloatArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_Int16Array);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_Int16Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_Int32Array);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_Int32Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_Int8Array);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_Int8Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_LinkedList);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_LinkedList);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_List);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_List);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_Order);
      if (lookahead == 'e') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_Order);
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_OrderedIdentitySet);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_OrderedIdentitySet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_Pair);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_Pair);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_PriorityQueue);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_PriorityQueue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_RawArray);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_RawArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_SequenceableCollection);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_SequenceableCollection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_Signal);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_Signal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_SortedList);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_SortedList);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_SparseArray);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_SparseArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_SymbolArray);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_SymbolArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(370);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(379);
      if (lookahead == '=') ADVANCE(376);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(378);
      if (lookahead == '>') ADVANCE(380);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(303);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(299);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '1') ADVANCE(388);
      if (lookahead == '3') ADVANCE(387);
      if (lookahead == '8') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '2') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '6') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'B') ADVANCE(421);
      if (lookahead == 'D') ADVANCE(508);
      if (lookahead == 'S') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'C') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'C') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'D') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'D') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'D') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'E') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'I') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'I') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'I') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'L') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'L') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'L') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'Q') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'S') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'T') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'W') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(651);
      if (lookahead == 'i') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(494);
      if (lookahead == 'r') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(512);
      if (lookahead == 'r') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(472);
      if (lookahead == 'n') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(560);
      if (lookahead == 'i') ADVANCE(488);
      if (lookahead == 'o') ADVANCE(568);
      if (lookahead == 'p') ADVANCE(422);
      if (lookahead == 't') ADVANCE(566);
      if (lookahead == 'y') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(443);
      if (lookahead == 'o') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'j') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'k') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'm') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'm') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(627);
      if (lookahead == 'v') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(513);
      if (lookahead == 's') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'q') ADVANCE(625);
      if (lookahead == 't') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 's') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 's') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 's') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'v') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'v') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'v') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'w') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'w') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'z') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(652);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(652);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(653);
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
      if (lookahead == 'v') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'g') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_arg);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_classvar);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 275},
  [2] = {.lex_state = 275},
  [3] = {.lex_state = 275},
  [4] = {.lex_state = 275},
  [5] = {.lex_state = 275},
  [6] = {.lex_state = 275},
  [7] = {.lex_state = 275},
  [8] = {.lex_state = 275},
  [9] = {.lex_state = 275},
  [10] = {.lex_state = 275},
  [11] = {.lex_state = 275},
  [12] = {.lex_state = 275},
  [13] = {.lex_state = 275},
  [14] = {.lex_state = 275},
  [15] = {.lex_state = 275},
  [16] = {.lex_state = 275},
  [17] = {.lex_state = 275},
  [18] = {.lex_state = 275},
  [19] = {.lex_state = 275},
  [20] = {.lex_state = 275},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 275},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 275},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 275},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 275},
  [32] = {.lex_state = 275},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
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
  [49] = {.lex_state = 275},
  [50] = {.lex_state = 275},
  [51] = {.lex_state = 275},
  [52] = {.lex_state = 275},
  [53] = {.lex_state = 275},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 275},
  [56] = {.lex_state = 275},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 275},
  [59] = {.lex_state = 275},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 275},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 275},
  [71] = {.lex_state = 275},
  [72] = {.lex_state = 275},
  [73] = {.lex_state = 275},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 275},
  [80] = {.lex_state = 275},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 275},
  [84] = {.lex_state = 275},
  [85] = {.lex_state = 275},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 275},
  [90] = {.lex_state = 275},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 275},
  [93] = {.lex_state = 275},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 275},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 275},
  [100] = {.lex_state = 275},
  [101] = {.lex_state = 275},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 275},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 275},
  [108] = {.lex_state = 275},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 275},
  [112] = {.lex_state = 275},
  [113] = {.lex_state = 275},
  [114] = {.lex_state = 275},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 275},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 275},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 275},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 275},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 275},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 275},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {(TSStateId)(-1)},
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
    [sym_class] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(134),
    [sym__expression] = STATE(12),
    [sym__expression_statement] = STATE(130),
    [sym__value] = STATE(69),
    [sym_function_definition] = STATE(136),
    [sym_function_call] = STATE(136),
    [sym_function_block] = STATE(64),
    [sym_literals] = STATE(46),
    [sym_number] = STATE(37),
    [sym_float] = STATE(45),
    [sym_symbol] = STATE(37),
    [sym_string] = STATE(37),
    [sym_code_block] = STATE(14),
    [sym_variable] = STATE(54),
    [sym_local_var] = STATE(24),
    [sym_classvar] = STATE(24),
    [sym_environment_var] = STATE(24),
    [sym_variable_definition] = STATE(136),
    [sym_comment] = STATE(1),
    [sym_collection] = STATE(136),
    [sym__unordered_collection_types] = STATE(96),
    [sym__ordered_collection_types] = STATE(96),
    [sym_binary_expression] = STATE(64),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_hexinteger] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_char] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_var] = ACTIONS(23),
    [anon_sym_classvar] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_Bag] = ACTIONS(31),
    [anon_sym_Dictionary] = ACTIONS(31),
    [anon_sym_Environment] = ACTIONS(31),
    [anon_sym_Event] = ACTIONS(31),
    [anon_sym_IdentityBag] = ACTIONS(31),
    [anon_sym_IdentityDictionary] = ACTIONS(31),
    [anon_sym_IdentitySet] = ACTIONS(31),
    [anon_sym_LazyEnvir] = ACTIONS(31),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(31),
    [anon_sym_ObjectTable] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(31),
    [anon_sym_Array] = ACTIONS(33),
    [anon_sym_Array2D] = ACTIONS(35),
    [anon_sym_ArrayedCollection] = ACTIONS(35),
    [anon_sym_DoubleArray] = ACTIONS(35),
    [anon_sym_FloatArray] = ACTIONS(35),
    [anon_sym_Int16Array] = ACTIONS(35),
    [anon_sym_Int32Array] = ACTIONS(35),
    [anon_sym_Int8Array] = ACTIONS(35),
    [anon_sym_LinkedList] = ACTIONS(35),
    [anon_sym_List] = ACTIONS(35),
    [anon_sym_Order] = ACTIONS(33),
    [anon_sym_OrderedIdentitySet] = ACTIONS(35),
    [anon_sym_Pair] = ACTIONS(35),
    [anon_sym_PriorityQueue] = ACTIONS(35),
    [anon_sym_RawArray] = ACTIONS(35),
    [anon_sym_SequenceableCollection] = ACTIONS(35),
    [anon_sym_Signal] = ACTIONS(35),
    [anon_sym_SortedList] = ACTIONS(35),
    [anon_sym_SparseArray] = ACTIONS(35),
    [anon_sym_String] = ACTIONS(35),
    [anon_sym_SymbolArray] = ACTIONS(35),
  },
  [2] = {
    [sym__expression] = STATE(12),
    [sym__expression_statement] = STATE(130),
    [sym__value] = STATE(35),
    [sym_function_definition] = STATE(136),
    [sym_function_call] = STATE(136),
    [sym_function_block] = STATE(64),
    [sym_literals] = STATE(46),
    [sym_number] = STATE(37),
    [sym_float] = STATE(45),
    [sym_symbol] = STATE(36),
    [sym_string] = STATE(37),
    [sym_code_block] = STATE(14),
    [sym_variable] = STATE(54),
    [sym_local_var] = STATE(24),
    [sym_classvar] = STATE(24),
    [sym_environment_var] = STATE(24),
    [sym_variable_definition] = STATE(136),
    [sym_comment] = STATE(2),
    [sym_collection] = STATE(136),
    [sym__collection_sequence] = STATE(142),
    [sym_associative_item] = STATE(77),
    [sym__unordered_collection_types] = STATE(96),
    [sym__ordered_collection_types] = STATE(96),
    [sym_binary_expression] = STATE(64),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_hexinteger] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_char] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_var] = ACTIONS(41),
    [anon_sym_classvar] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_Bag] = ACTIONS(31),
    [anon_sym_Dictionary] = ACTIONS(31),
    [anon_sym_Environment] = ACTIONS(31),
    [anon_sym_Event] = ACTIONS(31),
    [anon_sym_IdentityBag] = ACTIONS(31),
    [anon_sym_IdentityDictionary] = ACTIONS(31),
    [anon_sym_IdentitySet] = ACTIONS(31),
    [anon_sym_LazyEnvir] = ACTIONS(31),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(31),
    [anon_sym_ObjectTable] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(31),
    [anon_sym_Array] = ACTIONS(33),
    [anon_sym_Array2D] = ACTIONS(35),
    [anon_sym_ArrayedCollection] = ACTIONS(35),
    [anon_sym_DoubleArray] = ACTIONS(35),
    [anon_sym_FloatArray] = ACTIONS(35),
    [anon_sym_Int16Array] = ACTIONS(35),
    [anon_sym_Int32Array] = ACTIONS(35),
    [anon_sym_Int8Array] = ACTIONS(35),
    [anon_sym_LinkedList] = ACTIONS(35),
    [anon_sym_List] = ACTIONS(35),
    [anon_sym_Order] = ACTIONS(33),
    [anon_sym_OrderedIdentitySet] = ACTIONS(35),
    [anon_sym_Pair] = ACTIONS(35),
    [anon_sym_PriorityQueue] = ACTIONS(35),
    [anon_sym_RawArray] = ACTIONS(35),
    [anon_sym_SequenceableCollection] = ACTIONS(35),
    [anon_sym_Signal] = ACTIONS(35),
    [anon_sym_SortedList] = ACTIONS(35),
    [anon_sym_SparseArray] = ACTIONS(35),
    [anon_sym_String] = ACTIONS(35),
    [anon_sym_SymbolArray] = ACTIONS(35),
  },
  [3] = {
    [sym__expression] = STATE(12),
    [sym__expression_statement] = STATE(130),
    [sym__value] = STATE(69),
    [sym_function_definition] = STATE(136),
    [sym_function_call] = STATE(136),
    [sym_function_block] = STATE(64),
    [sym_parameter_list] = STATE(9),
    [sym_literals] = STATE(46),
    [sym_number] = STATE(37),
    [sym_float] = STATE(45),
    [sym_symbol] = STATE(37),
    [sym_string] = STATE(37),
    [sym_code_block] = STATE(14),
    [sym_variable] = STATE(54),
    [sym_local_var] = STATE(24),
    [sym_classvar] = STATE(24),
    [sym_environment_var] = STATE(24),
    [sym_variable_definition] = STATE(136),
    [sym_comment] = STATE(3),
    [sym_collection] = STATE(136),
    [sym__unordered_collection_types] = STATE(96),
    [sym__ordered_collection_types] = STATE(96),
    [sym_binary_expression] = STATE(64),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(45),
    [anon_sym_arg] = ACTIONS(47),
    [anon_sym_PIPE] = ACTIONS(49),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_hexinteger] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_char] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_var] = ACTIONS(23),
    [anon_sym_classvar] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_Bag] = ACTIONS(31),
    [anon_sym_Dictionary] = ACTIONS(31),
    [anon_sym_Environment] = ACTIONS(31),
    [anon_sym_Event] = ACTIONS(31),
    [anon_sym_IdentityBag] = ACTIONS(31),
    [anon_sym_IdentityDictionary] = ACTIONS(31),
    [anon_sym_IdentitySet] = ACTIONS(31),
    [anon_sym_LazyEnvir] = ACTIONS(31),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(31),
    [anon_sym_ObjectTable] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(31),
    [anon_sym_Array] = ACTIONS(33),
    [anon_sym_Array2D] = ACTIONS(35),
    [anon_sym_ArrayedCollection] = ACTIONS(35),
    [anon_sym_DoubleArray] = ACTIONS(35),
    [anon_sym_FloatArray] = ACTIONS(35),
    [anon_sym_Int16Array] = ACTIONS(35),
    [anon_sym_Int32Array] = ACTIONS(35),
    [anon_sym_Int8Array] = ACTIONS(35),
    [anon_sym_LinkedList] = ACTIONS(35),
    [anon_sym_List] = ACTIONS(35),
    [anon_sym_Order] = ACTIONS(33),
    [anon_sym_OrderedIdentitySet] = ACTIONS(35),
    [anon_sym_Pair] = ACTIONS(35),
    [anon_sym_PriorityQueue] = ACTIONS(35),
    [anon_sym_RawArray] = ACTIONS(35),
    [anon_sym_SequenceableCollection] = ACTIONS(35),
    [anon_sym_Signal] = ACTIONS(35),
    [anon_sym_SortedList] = ACTIONS(35),
    [anon_sym_SparseArray] = ACTIONS(35),
    [anon_sym_String] = ACTIONS(35),
    [anon_sym_SymbolArray] = ACTIONS(35),
  },
  [4] = {
    [sym__expression] = STATE(12),
    [sym__expression_statement] = STATE(130),
    [sym__value] = STATE(69),
    [sym_function_definition] = STATE(136),
    [sym_function_call] = STATE(136),
    [sym_function_block] = STATE(64),
    [sym_literals] = STATE(46),
    [sym_number] = STATE(37),
    [sym_float] = STATE(45),
    [sym_symbol] = STATE(37),
    [sym_string] = STATE(37),
    [sym_code_block] = STATE(14),
    [sym_variable] = STATE(54),
    [sym_local_var] = STATE(24),
    [sym_classvar] = STATE(24),
    [sym_environment_var] = STATE(24),
    [sym_variable_definition] = STATE(136),
    [sym_comment] = STATE(4),
    [sym_collection] = STATE(136),
    [sym__unordered_collection_types] = STATE(96),
    [sym__ordered_collection_types] = STATE(96),
    [sym_binary_expression] = STATE(64),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(51),
    [anon_sym_LBRACE] = ACTIONS(56),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_BSLASH] = ACTIONS(59),
    [sym_integer] = ACTIONS(62),
    [sym_hexinteger] = ACTIONS(65),
    [anon_sym_SQUOTE] = ACTIONS(68),
    [sym_char] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(74),
    [anon_sym_var] = ACTIONS(77),
    [anon_sym_classvar] = ACTIONS(80),
    [anon_sym_TILDE] = ACTIONS(83),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(86),
    [anon_sym_Bag] = ACTIONS(89),
    [anon_sym_Dictionary] = ACTIONS(89),
    [anon_sym_Environment] = ACTIONS(89),
    [anon_sym_Event] = ACTIONS(89),
    [anon_sym_IdentityBag] = ACTIONS(89),
    [anon_sym_IdentityDictionary] = ACTIONS(89),
    [anon_sym_IdentitySet] = ACTIONS(89),
    [anon_sym_LazyEnvir] = ACTIONS(89),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(89),
    [anon_sym_ObjectTable] = ACTIONS(89),
    [anon_sym_Set] = ACTIONS(89),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(89),
    [anon_sym_Array] = ACTIONS(92),
    [anon_sym_Array2D] = ACTIONS(95),
    [anon_sym_ArrayedCollection] = ACTIONS(95),
    [anon_sym_DoubleArray] = ACTIONS(95),
    [anon_sym_FloatArray] = ACTIONS(95),
    [anon_sym_Int16Array] = ACTIONS(95),
    [anon_sym_Int32Array] = ACTIONS(95),
    [anon_sym_Int8Array] = ACTIONS(95),
    [anon_sym_LinkedList] = ACTIONS(95),
    [anon_sym_List] = ACTIONS(95),
    [anon_sym_Order] = ACTIONS(92),
    [anon_sym_OrderedIdentitySet] = ACTIONS(95),
    [anon_sym_Pair] = ACTIONS(95),
    [anon_sym_PriorityQueue] = ACTIONS(95),
    [anon_sym_RawArray] = ACTIONS(95),
    [anon_sym_SequenceableCollection] = ACTIONS(95),
    [anon_sym_Signal] = ACTIONS(95),
    [anon_sym_SortedList] = ACTIONS(95),
    [anon_sym_SparseArray] = ACTIONS(95),
    [anon_sym_String] = ACTIONS(95),
    [anon_sym_SymbolArray] = ACTIONS(95),
  },
  [5] = {
    [sym__expression] = STATE(12),
    [sym__expression_statement] = STATE(130),
    [sym__value] = STATE(69),
    [sym_function_definition] = STATE(136),
    [sym_function_call] = STATE(136),
    [sym_function_block] = STATE(64),
    [sym_literals] = STATE(46),
    [sym_number] = STATE(37),
    [sym_float] = STATE(45),
    [sym_symbol] = STATE(37),
    [sym_string] = STATE(37),
    [sym_code_block] = STATE(14),
    [sym_variable] = STATE(54),
    [sym_local_var] = STATE(24),
    [sym_classvar] = STATE(24),
    [sym_environment_var] = STATE(24),
    [sym_variable_definition] = STATE(136),
    [sym_comment] = STATE(5),
    [sym_collection] = STATE(136),
    [sym__unordered_collection_types] = STATE(96),
    [sym__ordered_collection_types] = STATE(96),
    [sym_binary_expression] = STATE(64),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_hexinteger] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_char] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_var] = ACTIONS(23),
    [anon_sym_classvar] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_Bag] = ACTIONS(31),
    [anon_sym_Dictionary] = ACTIONS(31),
    [anon_sym_Environment] = ACTIONS(31),
    [anon_sym_Event] = ACTIONS(31),
    [anon_sym_IdentityBag] = ACTIONS(31),
    [anon_sym_IdentityDictionary] = ACTIONS(31),
    [anon_sym_IdentitySet] = ACTIONS(31),
    [anon_sym_LazyEnvir] = ACTIONS(31),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(31),
    [anon_sym_ObjectTable] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(31),
    [anon_sym_Array] = ACTIONS(33),
    [anon_sym_Array2D] = ACTIONS(35),
    [anon_sym_ArrayedCollection] = ACTIONS(35),
    [anon_sym_DoubleArray] = ACTIONS(35),
    [anon_sym_FloatArray] = ACTIONS(35),
    [anon_sym_Int16Array] = ACTIONS(35),
    [anon_sym_Int32Array] = ACTIONS(35),
    [anon_sym_Int8Array] = ACTIONS(35),
    [anon_sym_LinkedList] = ACTIONS(35),
    [anon_sym_List] = ACTIONS(35),
    [anon_sym_Order] = ACTIONS(33),
    [anon_sym_OrderedIdentitySet] = ACTIONS(35),
    [anon_sym_Pair] = ACTIONS(35),
    [anon_sym_PriorityQueue] = ACTIONS(35),
    [anon_sym_RawArray] = ACTIONS(35),
    [anon_sym_SequenceableCollection] = ACTIONS(35),
    [anon_sym_Signal] = ACTIONS(35),
    [anon_sym_SortedList] = ACTIONS(35),
    [anon_sym_SparseArray] = ACTIONS(35),
    [anon_sym_String] = ACTIONS(35),
    [anon_sym_SymbolArray] = ACTIONS(35),
  },
  [6] = {
    [sym__expression] = STATE(12),
    [sym__expression_statement] = STATE(130),
    [sym__value] = STATE(69),
    [sym_function_definition] = STATE(136),
    [sym_function_call] = STATE(136),
    [sym_function_block] = STATE(64),
    [sym_literals] = STATE(46),
    [sym_number] = STATE(37),
    [sym_float] = STATE(45),
    [sym_symbol] = STATE(37),
    [sym_string] = STATE(37),
    [sym_code_block] = STATE(14),
    [sym_variable] = STATE(54),
    [sym_local_var] = STATE(24),
    [sym_classvar] = STATE(24),
    [sym_environment_var] = STATE(24),
    [sym_variable_definition] = STATE(136),
    [sym_comment] = STATE(6),
    [sym_collection] = STATE(136),
    [sym__unordered_collection_types] = STATE(96),
    [sym__ordered_collection_types] = STATE(96),
    [sym_binary_expression] = STATE(64),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_hexinteger] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_char] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_var] = ACTIONS(23),
    [anon_sym_classvar] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_Bag] = ACTIONS(31),
    [anon_sym_Dictionary] = ACTIONS(31),
    [anon_sym_Environment] = ACTIONS(31),
    [anon_sym_Event] = ACTIONS(31),
    [anon_sym_IdentityBag] = ACTIONS(31),
    [anon_sym_IdentityDictionary] = ACTIONS(31),
    [anon_sym_IdentitySet] = ACTIONS(31),
    [anon_sym_LazyEnvir] = ACTIONS(31),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(31),
    [anon_sym_ObjectTable] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(31),
    [anon_sym_Array] = ACTIONS(33),
    [anon_sym_Array2D] = ACTIONS(35),
    [anon_sym_ArrayedCollection] = ACTIONS(35),
    [anon_sym_DoubleArray] = ACTIONS(35),
    [anon_sym_FloatArray] = ACTIONS(35),
    [anon_sym_Int16Array] = ACTIONS(35),
    [anon_sym_Int32Array] = ACTIONS(35),
    [anon_sym_Int8Array] = ACTIONS(35),
    [anon_sym_LinkedList] = ACTIONS(35),
    [anon_sym_List] = ACTIONS(35),
    [anon_sym_Order] = ACTIONS(33),
    [anon_sym_OrderedIdentitySet] = ACTIONS(35),
    [anon_sym_Pair] = ACTIONS(35),
    [anon_sym_PriorityQueue] = ACTIONS(35),
    [anon_sym_RawArray] = ACTIONS(35),
    [anon_sym_SequenceableCollection] = ACTIONS(35),
    [anon_sym_Signal] = ACTIONS(35),
    [anon_sym_SortedList] = ACTIONS(35),
    [anon_sym_SparseArray] = ACTIONS(35),
    [anon_sym_String] = ACTIONS(35),
    [anon_sym_SymbolArray] = ACTIONS(35),
  },
  [7] = {
    [sym__expression] = STATE(12),
    [sym__expression_statement] = STATE(130),
    [sym__value] = STATE(69),
    [sym_function_definition] = STATE(136),
    [sym_function_call] = STATE(136),
    [sym_function_block] = STATE(64),
    [sym_literals] = STATE(46),
    [sym_number] = STATE(37),
    [sym_float] = STATE(45),
    [sym_symbol] = STATE(37),
    [sym_string] = STATE(37),
    [sym_code_block] = STATE(14),
    [sym_variable] = STATE(54),
    [sym_local_var] = STATE(24),
    [sym_classvar] = STATE(24),
    [sym_environment_var] = STATE(24),
    [sym_variable_definition] = STATE(136),
    [sym_comment] = STATE(7),
    [sym_collection] = STATE(136),
    [sym__unordered_collection_types] = STATE(96),
    [sym__ordered_collection_types] = STATE(96),
    [sym_binary_expression] = STATE(64),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_hexinteger] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_char] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_var] = ACTIONS(23),
    [anon_sym_classvar] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_Bag] = ACTIONS(31),
    [anon_sym_Dictionary] = ACTIONS(31),
    [anon_sym_Environment] = ACTIONS(31),
    [anon_sym_Event] = ACTIONS(31),
    [anon_sym_IdentityBag] = ACTIONS(31),
    [anon_sym_IdentityDictionary] = ACTIONS(31),
    [anon_sym_IdentitySet] = ACTIONS(31),
    [anon_sym_LazyEnvir] = ACTIONS(31),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(31),
    [anon_sym_ObjectTable] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(31),
    [anon_sym_Array] = ACTIONS(33),
    [anon_sym_Array2D] = ACTIONS(35),
    [anon_sym_ArrayedCollection] = ACTIONS(35),
    [anon_sym_DoubleArray] = ACTIONS(35),
    [anon_sym_FloatArray] = ACTIONS(35),
    [anon_sym_Int16Array] = ACTIONS(35),
    [anon_sym_Int32Array] = ACTIONS(35),
    [anon_sym_Int8Array] = ACTIONS(35),
    [anon_sym_LinkedList] = ACTIONS(35),
    [anon_sym_List] = ACTIONS(35),
    [anon_sym_Order] = ACTIONS(33),
    [anon_sym_OrderedIdentitySet] = ACTIONS(35),
    [anon_sym_Pair] = ACTIONS(35),
    [anon_sym_PriorityQueue] = ACTIONS(35),
    [anon_sym_RawArray] = ACTIONS(35),
    [anon_sym_SequenceableCollection] = ACTIONS(35),
    [anon_sym_Signal] = ACTIONS(35),
    [anon_sym_SortedList] = ACTIONS(35),
    [anon_sym_SparseArray] = ACTIONS(35),
    [anon_sym_String] = ACTIONS(35),
    [anon_sym_SymbolArray] = ACTIONS(35),
  },
  [8] = {
    [sym__expression] = STATE(12),
    [sym__expression_statement] = STATE(130),
    [sym__value] = STATE(69),
    [sym_function_definition] = STATE(136),
    [sym_function_call] = STATE(136),
    [sym_function_block] = STATE(64),
    [sym_literals] = STATE(46),
    [sym_number] = STATE(37),
    [sym_float] = STATE(45),
    [sym_symbol] = STATE(37),
    [sym_string] = STATE(37),
    [sym_code_block] = STATE(14),
    [sym_variable] = STATE(54),
    [sym_local_var] = STATE(24),
    [sym_classvar] = STATE(24),
    [sym_environment_var] = STATE(24),
    [sym_variable_definition] = STATE(136),
    [sym_comment] = STATE(8),
    [sym_collection] = STATE(136),
    [sym__unordered_collection_types] = STATE(96),
    [sym__ordered_collection_types] = STATE(96),
    [sym_binary_expression] = STATE(64),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_hexinteger] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_char] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_var] = ACTIONS(23),
    [anon_sym_classvar] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_Bag] = ACTIONS(31),
    [anon_sym_Dictionary] = ACTIONS(31),
    [anon_sym_Environment] = ACTIONS(31),
    [anon_sym_Event] = ACTIONS(31),
    [anon_sym_IdentityBag] = ACTIONS(31),
    [anon_sym_IdentityDictionary] = ACTIONS(31),
    [anon_sym_IdentitySet] = ACTIONS(31),
    [anon_sym_LazyEnvir] = ACTIONS(31),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(31),
    [anon_sym_ObjectTable] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(31),
    [anon_sym_Array] = ACTIONS(33),
    [anon_sym_Array2D] = ACTIONS(35),
    [anon_sym_ArrayedCollection] = ACTIONS(35),
    [anon_sym_DoubleArray] = ACTIONS(35),
    [anon_sym_FloatArray] = ACTIONS(35),
    [anon_sym_Int16Array] = ACTIONS(35),
    [anon_sym_Int32Array] = ACTIONS(35),
    [anon_sym_Int8Array] = ACTIONS(35),
    [anon_sym_LinkedList] = ACTIONS(35),
    [anon_sym_List] = ACTIONS(35),
    [anon_sym_Order] = ACTIONS(33),
    [anon_sym_OrderedIdentitySet] = ACTIONS(35),
    [anon_sym_Pair] = ACTIONS(35),
    [anon_sym_PriorityQueue] = ACTIONS(35),
    [anon_sym_RawArray] = ACTIONS(35),
    [anon_sym_SequenceableCollection] = ACTIONS(35),
    [anon_sym_Signal] = ACTIONS(35),
    [anon_sym_SortedList] = ACTIONS(35),
    [anon_sym_SparseArray] = ACTIONS(35),
    [anon_sym_String] = ACTIONS(35),
    [anon_sym_SymbolArray] = ACTIONS(35),
  },
  [9] = {
    [sym__expression] = STATE(12),
    [sym__expression_statement] = STATE(130),
    [sym__value] = STATE(69),
    [sym_function_definition] = STATE(136),
    [sym_function_call] = STATE(136),
    [sym_function_block] = STATE(64),
    [sym_literals] = STATE(46),
    [sym_number] = STATE(37),
    [sym_float] = STATE(45),
    [sym_symbol] = STATE(37),
    [sym_string] = STATE(37),
    [sym_code_block] = STATE(14),
    [sym_variable] = STATE(54),
    [sym_local_var] = STATE(24),
    [sym_classvar] = STATE(24),
    [sym_environment_var] = STATE(24),
    [sym_variable_definition] = STATE(136),
    [sym_comment] = STATE(9),
    [sym_collection] = STATE(136),
    [sym__unordered_collection_types] = STATE(96),
    [sym__ordered_collection_types] = STATE(96),
    [sym_binary_expression] = STATE(64),
    [aux_sym_source_file_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_BSLASH] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_hexinteger] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [sym_char] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(21),
    [anon_sym_var] = ACTIONS(23),
    [anon_sym_classvar] = ACTIONS(25),
    [anon_sym_TILDE] = ACTIONS(27),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_Bag] = ACTIONS(31),
    [anon_sym_Dictionary] = ACTIONS(31),
    [anon_sym_Environment] = ACTIONS(31),
    [anon_sym_Event] = ACTIONS(31),
    [anon_sym_IdentityBag] = ACTIONS(31),
    [anon_sym_IdentityDictionary] = ACTIONS(31),
    [anon_sym_IdentitySet] = ACTIONS(31),
    [anon_sym_LazyEnvir] = ACTIONS(31),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(31),
    [anon_sym_ObjectTable] = ACTIONS(31),
    [anon_sym_Set] = ACTIONS(31),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(31),
    [anon_sym_Array] = ACTIONS(33),
    [anon_sym_Array2D] = ACTIONS(35),
    [anon_sym_ArrayedCollection] = ACTIONS(35),
    [anon_sym_DoubleArray] = ACTIONS(35),
    [anon_sym_FloatArray] = ACTIONS(35),
    [anon_sym_Int16Array] = ACTIONS(35),
    [anon_sym_Int32Array] = ACTIONS(35),
    [anon_sym_Int8Array] = ACTIONS(35),
    [anon_sym_LinkedList] = ACTIONS(35),
    [anon_sym_List] = ACTIONS(35),
    [anon_sym_Order] = ACTIONS(33),
    [anon_sym_OrderedIdentitySet] = ACTIONS(35),
    [anon_sym_Pair] = ACTIONS(35),
    [anon_sym_PriorityQueue] = ACTIONS(35),
    [anon_sym_RawArray] = ACTIONS(35),
    [anon_sym_SequenceableCollection] = ACTIONS(35),
    [anon_sym_Signal] = ACTIONS(35),
    [anon_sym_SortedList] = ACTIONS(35),
    [anon_sym_SparseArray] = ACTIONS(35),
    [anon_sym_String] = ACTIONS(35),
    [anon_sym_SymbolArray] = ACTIONS(35),
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
    ACTIONS(108), 3,
      sym_integer,
      anon_sym_Array,
      anon_sym_Order,
    ACTIONS(106), 45,
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
  [62] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(11), 1,
      sym_comment,
    ACTIONS(112), 3,
      sym_integer,
      anon_sym_Array,
      anon_sym_Order,
    ACTIONS(110), 45,
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
  [124] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(12), 1,
      sym_comment,
    ACTIONS(116), 3,
      sym_integer,
      anon_sym_Array,
      anon_sym_Order,
    ACTIONS(114), 45,
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
  [186] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(13), 1,
      sym_comment,
    ACTIONS(120), 3,
      sym_integer,
      anon_sym_Array,
      anon_sym_Order,
    ACTIONS(118), 45,
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
  [248] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(14), 1,
      sym_comment,
    ACTIONS(124), 3,
      sym_integer,
      anon_sym_Array,
      anon_sym_Order,
    ACTIONS(122), 45,
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
  [310] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(15), 1,
      sym_comment,
    ACTIONS(128), 3,
      sym_integer,
      anon_sym_Array,
      anon_sym_Order,
    ACTIONS(126), 43,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
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
  [370] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(16), 1,
      sym_comment,
    ACTIONS(132), 3,
      sym_integer,
      anon_sym_Array,
      anon_sym_Order,
    ACTIONS(130), 43,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
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
  [430] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(17), 1,
      sym_comment,
    ACTIONS(136), 3,
      sym_integer,
      anon_sym_Array,
      anon_sym_Order,
    ACTIONS(134), 43,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_hexinteger,
      anon_sym_SQUOTE,
      sym_char,
      anon_sym_DQUOTE,
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
  [490] = 22,
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
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_var,
    ACTIONS(43), 1,
      anon_sym_classvar,
    STATE(18), 1,
      sym_comment,
    STATE(35), 1,
      sym__value,
    STATE(36), 1,
      sym_symbol,
    STATE(45), 1,
      sym_float,
    STATE(77), 1,
      sym_associative_item,
    STATE(141), 1,
      sym__collection_sequence,
    STATE(37), 2,
      sym_number,
      sym_string,
    STATE(24), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(46), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
  [563] = 22,
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
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_var,
    ACTIONS(43), 1,
      anon_sym_classvar,
    STATE(19), 1,
      sym_comment,
    STATE(35), 1,
      sym__value,
    STATE(36), 1,
      sym_symbol,
    STATE(45), 1,
      sym_float,
    STATE(77), 1,
      sym_associative_item,
    STATE(143), 1,
      sym__collection_sequence,
    STATE(37), 2,
      sym_number,
      sym_string,
    STATE(24), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(46), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
  [636] = 22,
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
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_var,
    ACTIONS(43), 1,
      anon_sym_classvar,
    STATE(20), 1,
      sym_comment,
    STATE(35), 1,
      sym__value,
    STATE(36), 1,
      sym_symbol,
    STATE(45), 1,
      sym_float,
    STATE(77), 1,
      sym_associative_item,
    STATE(144), 1,
      sym__collection_sequence,
    STATE(37), 2,
      sym_number,
      sym_string,
    STATE(24), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(46), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
  [709] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(21), 1,
      sym_comment,
    ACTIONS(140), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(138), 18,
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
  [747] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(22), 1,
      sym_comment,
    ACTIONS(144), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(142), 18,
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
  [785] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(23), 1,
      sym_comment,
    ACTIONS(148), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(146), 18,
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
  [823] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(24), 1,
      sym_comment,
    ACTIONS(152), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(150), 18,
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
  [861] = 21,
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
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_var,
    ACTIONS(43), 1,
      anon_sym_classvar,
    STATE(25), 1,
      sym_comment,
    STATE(36), 1,
      sym_symbol,
    STATE(45), 1,
      sym_float,
    STATE(66), 1,
      sym__value,
    STATE(95), 1,
      sym_associative_item,
    STATE(37), 2,
      sym_number,
      sym_string,
    STATE(24), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(46), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
  [931] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(26), 1,
      sym_comment,
    ACTIONS(156), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(154), 17,
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
  [968] = 20,
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
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_var,
    ACTIONS(43), 1,
      anon_sym_classvar,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_BSLASH,
    STATE(27), 1,
      sym_comment,
    STATE(45), 1,
      sym_float,
    STATE(91), 1,
      sym_argument_calls,
    STATE(121), 1,
      sym_parameter_call_list,
    STATE(109), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(110), 2,
      sym_literals,
      sym_variable,
    STATE(24), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(37), 3,
      sym_number,
      sym_symbol,
      sym_string,
  [1035] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(164), 1,
      anon_sym_DOT,
    STATE(28), 1,
      sym_comment,
    ACTIONS(166), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(162), 17,
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
  [1074] = 20,
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
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_var,
    ACTIONS(43), 1,
      anon_sym_classvar,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_BSLASH,
    STATE(29), 1,
      sym_comment,
    STATE(45), 1,
      sym_float,
    STATE(91), 1,
      sym_argument_calls,
    STATE(122), 1,
      sym_parameter_call_list,
    STATE(109), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(110), 2,
      sym_literals,
      sym_variable,
    STATE(24), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(37), 3,
      sym_number,
      sym_symbol,
      sym_string,
  [1141] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(30), 1,
      sym_comment,
    ACTIONS(170), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(168), 17,
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
  [1178] = 18,
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
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_classvar,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    STATE(31), 1,
      sym_comment,
    STATE(44), 1,
      sym__value,
    STATE(45), 1,
      sym_float,
    STATE(24), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(37), 3,
      sym_number,
      sym_symbol,
      sym_string,
    STATE(46), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
  [1240] = 18,
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
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_classvar,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    STATE(32), 1,
      sym_comment,
    STATE(45), 1,
      sym_float,
    STATE(61), 1,
      sym__value,
    STATE(24), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(37), 3,
      sym_number,
      sym_symbol,
      sym_string,
    STATE(46), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
  [1302] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(176), 1,
      anon_sym_CARET,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(186), 1,
      anon_sym_SLASH,
    STATE(33), 1,
      sym_comment,
    ACTIONS(180), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(184), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(174), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 10,
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
  [1350] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(34), 1,
      sym_comment,
    ACTIONS(190), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(188), 17,
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
  [1386] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(176), 1,
      anon_sym_CARET,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(186), 1,
      anon_sym_SLASH,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_PIPE,
    ACTIONS(198), 1,
      anon_sym_AMP_AMP,
    ACTIONS(200), 1,
      anon_sym_PIPE_PIPE,
    STATE(35), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym__collection_sequence_repeat1,
    ACTIONS(180), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(184), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(192), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(204), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(202), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1446] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(36), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(210), 6,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(206), 14,
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
  [1484] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(37), 1,
      sym_comment,
    ACTIONS(210), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(206), 17,
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
  [1520] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(38), 1,
      sym_comment,
    ACTIONS(214), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(212), 17,
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
  [1556] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(39), 1,
      sym_comment,
    ACTIONS(218), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(216), 17,
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
  [1592] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(40), 1,
      sym_comment,
    ACTIONS(222), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(220), 17,
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
  [1628] = 13,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(176), 1,
      anon_sym_CARET,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(186), 1,
      anon_sym_SLASH,
    ACTIONS(196), 1,
      anon_sym_PIPE,
    STATE(41), 1,
      sym_comment,
    ACTIONS(180), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(184), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(204), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(202), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(172), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1680] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(42), 1,
      sym_comment,
    ACTIONS(174), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(172), 17,
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
  [1716] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(43), 1,
      sym_comment,
    ACTIONS(226), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(224), 17,
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
  [1752] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(186), 1,
      anon_sym_SLASH,
    STATE(44), 1,
      sym_comment,
    ACTIONS(184), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(174), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 15,
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
  [1792] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(45), 1,
      sym_comment,
    ACTIONS(166), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(162), 17,
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
  [1828] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(46), 1,
      sym_comment,
    ACTIONS(230), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(228), 17,
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
  [1864] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(176), 1,
      anon_sym_CARET,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(186), 1,
      anon_sym_SLASH,
    ACTIONS(196), 1,
      anon_sym_PIPE,
    ACTIONS(198), 1,
      anon_sym_AMP_AMP,
    STATE(47), 1,
      sym_comment,
    ACTIONS(180), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(184), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(204), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(202), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(172), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
  [1918] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(186), 1,
      anon_sym_SLASH,
    STATE(48), 1,
      sym_comment,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(184), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(174), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 13,
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
  [1960] = 19,
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
    ACTIONS(27), 1,
      anon_sym_TILDE,
    ACTIONS(41), 1,
      anon_sym_var,
    ACTIONS(43), 1,
      anon_sym_classvar,
    ACTIONS(158), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_BSLASH,
    STATE(45), 1,
      sym_float,
    STATE(49), 1,
      sym_comment,
    STATE(119), 1,
      sym_argument_calls,
    STATE(109), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(110), 2,
      sym_literals,
      sym_variable,
    STATE(24), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(37), 3,
      sym_number,
      sym_symbol,
      sym_string,
  [2024] = 18,
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
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_classvar,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    STATE(33), 1,
      sym__value,
    STATE(45), 1,
      sym_float,
    STATE(50), 1,
      sym_comment,
    STATE(24), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(37), 3,
      sym_number,
      sym_symbol,
      sym_string,
    STATE(46), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
  [2086] = 18,
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
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_classvar,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    STATE(45), 1,
      sym_float,
    STATE(51), 1,
      sym_comment,
    STATE(57), 1,
      sym__value,
    STATE(24), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(37), 3,
      sym_number,
      sym_symbol,
      sym_string,
    STATE(46), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
  [2148] = 18,
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
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_classvar,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    STATE(41), 1,
      sym__value,
    STATE(45), 1,
      sym_float,
    STATE(52), 1,
      sym_comment,
    STATE(24), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(37), 3,
      sym_number,
      sym_symbol,
      sym_string,
    STATE(46), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
  [2210] = 18,
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
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_classvar,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    STATE(45), 1,
      sym_float,
    STATE(47), 1,
      sym__value,
    STATE(53), 1,
      sym_comment,
    STATE(24), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(37), 3,
      sym_number,
      sym_symbol,
      sym_string,
    STATE(46), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
  [2272] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(232), 1,
      anon_sym_EQ,
    ACTIONS(234), 1,
      anon_sym_DOT,
    STATE(54), 1,
      sym_comment,
    ACTIONS(230), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(228), 15,
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
  [2312] = 18,
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
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_classvar,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    STATE(45), 1,
      sym_float,
    STATE(55), 1,
      sym_comment,
    STATE(60), 1,
      sym__value,
    STATE(24), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(37), 3,
      sym_number,
      sym_symbol,
      sym_string,
    STATE(46), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
  [2374] = 18,
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
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_classvar,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    STATE(45), 1,
      sym_float,
    STATE(48), 1,
      sym__value,
    STATE(56), 1,
      sym_comment,
    STATE(24), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(37), 3,
      sym_number,
      sym_symbol,
      sym_string,
    STATE(46), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
  [2436] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(186), 1,
      anon_sym_SLASH,
    STATE(57), 1,
      sym_comment,
    ACTIONS(180), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(184), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(174), 3,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 11,
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
  [2482] = 18,
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
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_classvar,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    STATE(42), 1,
      sym__value,
    STATE(45), 1,
      sym_float,
    STATE(58), 1,
      sym_comment,
    STATE(24), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(37), 3,
      sym_number,
      sym_symbol,
      sym_string,
    STATE(46), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
  [2544] = 19,
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
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_classvar,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    STATE(45), 1,
      sym_float,
    STATE(59), 1,
      sym_comment,
    STATE(67), 1,
      sym__value,
    STATE(68), 1,
      sym_function_block,
    STATE(24), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(37), 3,
      sym_number,
      sym_symbol,
      sym_string,
    STATE(46), 3,
      sym_literals,
      sym_variable,
      sym_binary_expression,
  [2608] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(176), 1,
      anon_sym_CARET,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(186), 1,
      anon_sym_SLASH,
    ACTIONS(196), 1,
      anon_sym_PIPE,
    STATE(60), 1,
      sym_comment,
    ACTIONS(174), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(180), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(184), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(172), 10,
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
  [2658] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(186), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym_comment,
    ACTIONS(180), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(184), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(174), 4,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(172), 11,
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
  [2702] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(62), 1,
      sym_comment,
    ACTIONS(238), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(236), 17,
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
  [2738] = 18,
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
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_classvar,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    STATE(45), 1,
      sym_float,
    STATE(63), 1,
      sym_comment,
    STATE(65), 1,
      sym__value,
    STATE(24), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(37), 3,
      sym_number,
      sym_symbol,
      sym_string,
    STATE(46), 4,
      sym_function_block,
      sym_literals,
      sym_variable,
      sym_binary_expression,
  [2800] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(240), 1,
      anon_sym_SEMI,
    STATE(64), 1,
      sym_comment,
    ACTIONS(230), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(228), 15,
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
  [2837] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(176), 1,
      anon_sym_CARET,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(186), 1,
      anon_sym_SLASH,
    ACTIONS(196), 1,
      anon_sym_PIPE,
    ACTIONS(198), 1,
      anon_sym_AMP_AMP,
    ACTIONS(200), 1,
      anon_sym_PIPE_PIPE,
    STATE(65), 1,
      sym_comment,
    ACTIONS(180), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(184), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(204), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(242), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(202), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2892] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(176), 1,
      anon_sym_CARET,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(186), 1,
      anon_sym_SLASH,
    ACTIONS(196), 1,
      anon_sym_PIPE,
    ACTIONS(198), 1,
      anon_sym_AMP_AMP,
    ACTIONS(200), 1,
      anon_sym_PIPE_PIPE,
    STATE(66), 1,
      sym_comment,
    ACTIONS(180), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(184), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(204), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(244), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(202), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2947] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(176), 1,
      anon_sym_CARET,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(186), 1,
      anon_sym_SLASH,
    ACTIONS(196), 1,
      anon_sym_PIPE,
    ACTIONS(198), 1,
      anon_sym_AMP_AMP,
    ACTIONS(200), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(246), 1,
      anon_sym_SEMI,
    STATE(67), 1,
      sym_comment,
    ACTIONS(180), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(184), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(204), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(202), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3000] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(248), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      sym_comment,
    ACTIONS(230), 5,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(228), 13,
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
  [3035] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(176), 1,
      anon_sym_CARET,
    ACTIONS(178), 1,
      anon_sym_AMP,
    ACTIONS(186), 1,
      anon_sym_SLASH,
    ACTIONS(196), 1,
      anon_sym_PIPE,
    ACTIONS(198), 1,
      anon_sym_AMP_AMP,
    ACTIONS(200), 1,
      anon_sym_PIPE_PIPE,
    STATE(69), 1,
      sym_comment,
    ACTIONS(180), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(182), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(184), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(204), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(202), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3085] = 16,
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
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_classvar,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    STATE(45), 1,
      sym_float,
    STATE(70), 1,
      sym_comment,
    STATE(120), 2,
      sym_literals,
      sym_variable,
    STATE(24), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(37), 3,
      sym_number,
      sym_symbol,
      sym_string,
  [3139] = 16,
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
    ACTIONS(23), 1,
      anon_sym_var,
    ACTIONS(25), 1,
      anon_sym_classvar,
    ACTIONS(27), 1,
      anon_sym_TILDE,
    STATE(45), 1,
      sym_float,
    STATE(71), 1,
      sym_comment,
    STATE(117), 2,
      sym_literals,
      sym_variable,
    STATE(24), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(37), 3,
      sym_number,
      sym_symbol,
      sym_string,
  [3193] = 12,
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
    STATE(45), 1,
      sym_float,
    STATE(72), 1,
      sym_comment,
    STATE(92), 1,
      sym_literals,
    STATE(37), 3,
      sym_number,
      sym_symbol,
      sym_string,
  [3232] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(250), 1,
      anon_sym_BSLASH,
    ACTIONS(252), 1,
      sym_integer,
    ACTIONS(254), 1,
      sym_hexinteger,
    ACTIONS(256), 1,
      anon_sym_SQUOTE,
    ACTIONS(258), 1,
      sym_char,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_comment,
    STATE(92), 1,
      sym_literals,
    STATE(116), 1,
      sym_float,
    STATE(114), 3,
      sym_number,
      sym_symbol,
      sym_string,
  [3271] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(74), 1,
      sym_comment,
    ACTIONS(262), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(264), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3289] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(75), 1,
      sym_comment,
    ACTIONS(266), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(268), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3307] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      sym_comment,
    STATE(78), 1,
      aux_sym__collection_sequence_repeat1,
    ACTIONS(270), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3327] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    STATE(76), 1,
      aux_sym__collection_sequence_repeat1,
    STATE(77), 1,
      sym_comment,
    ACTIONS(192), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3347] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    ACTIONS(244), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(78), 2,
      sym_comment,
      aux_sym__collection_sequence_repeat1,
  [3365] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_PIPE,
    STATE(79), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_parameter_list_repeat1,
  [3384] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_PIPE,
    STATE(80), 1,
      sym_comment,
    STATE(83), 1,
      aux_sym_parameter_list_repeat1,
  [3403] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(277), 1,
      anon_sym_SEMI,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_parameter_list_repeat1,
  [3422] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(285), 1,
      anon_sym_EQ,
    STATE(82), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3439] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_PIPE,
    STATE(83), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [3456] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(292), 1,
      anon_sym_EQ,
    STATE(84), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3473] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(294), 1,
      anon_sym_DOT,
    STATE(85), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3490] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    STATE(86), 2,
      sym_comment,
      aux_sym_parameter_call_list_repeat1,
  [3507] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_parameter_call_list_repeat1,
    STATE(87), 1,
      sym_comment,
  [3526] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(88), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [3543] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(308), 1,
      sym_identifier,
    ACTIONS(310), 1,
      anon_sym_PIPE,
    STATE(79), 1,
      sym_argument,
    STATE(89), 1,
      sym_comment,
  [3562] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(90), 1,
      sym_comment,
    ACTIONS(290), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3577] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(87), 1,
      aux_sym_parameter_call_list_repeat1,
    STATE(91), 1,
      sym_comment,
  [3596] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(92), 1,
      sym_comment,
    ACTIONS(314), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3611] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(316), 1,
      sym_identifier,
    STATE(81), 1,
      sym_argument,
    STATE(93), 1,
      sym_comment,
  [3630] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(279), 1,
      anon_sym_SEMI,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_parameter_list_repeat1,
    STATE(94), 1,
      sym_comment,
  [3649] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(95), 1,
      sym_comment,
    ACTIONS(244), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3664] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    ACTIONS(320), 1,
      anon_sym_LBRACK,
    STATE(96), 1,
      sym_comment,
  [3680] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(322), 1,
      sym_identifier,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_comment,
  [3696] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(98), 1,
      sym_comment,
    ACTIONS(326), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [3710] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(328), 1,
      sym_identifier,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    STATE(99), 1,
      sym_comment,
  [3726] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(308), 1,
      sym_identifier,
    STATE(90), 1,
      sym_argument,
    STATE(100), 1,
      sym_comment,
  [3742] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(332), 1,
      sym_identifier,
    ACTIONS(334), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_comment,
  [3758] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(102), 1,
      sym_comment,
    ACTIONS(336), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [3772] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(103), 1,
      sym_comment,
    ACTIONS(338), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [3786] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(316), 1,
      sym_identifier,
    STATE(90), 1,
      sym_argument,
    STATE(104), 1,
      sym_comment,
  [3802] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(105), 1,
      sym_comment,
    ACTIONS(340), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [3816] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(336), 1,
      aux_sym_symbol_token1,
    ACTIONS(342), 1,
      sym_identifier,
    STATE(106), 1,
      sym_comment,
  [3832] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(107), 1,
      sym_comment,
    ACTIONS(188), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3846] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(108), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3860] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(109), 1,
      sym_comment,
    ACTIONS(344), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3874] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(110), 1,
      sym_comment,
    ACTIONS(346), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3888] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(111), 1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3902] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(112), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3916] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(113), 1,
      sym_comment,
    ACTIONS(154), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3930] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(114), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3944] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(115), 1,
      sym_comment,
    ACTIONS(348), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [3958] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(116), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3972] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(117), 1,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3986] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(118), 1,
      sym_comment,
    ACTIONS(352), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4000] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(119), 1,
      sym_comment,
    ACTIONS(296), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4014] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(120), 1,
      sym_comment,
    ACTIONS(354), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4028] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym_comment,
  [4041] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      sym_comment,
  [4054] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(360), 1,
      sym_integer,
    STATE(123), 1,
      sym_comment,
  [4067] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
    STATE(124), 1,
      sym_comment,
  [4080] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(364), 1,
      anon_sym_LPAREN,
    STATE(125), 1,
      sym_comment,
  [4093] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(366), 1,
      anon_sym_SEMI,
    STATE(126), 1,
      sym_comment,
  [4106] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(368), 1,
      anon_sym_DQUOTE,
    STATE(127), 1,
      sym_comment,
  [4119] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(370), 1,
      sym_identifier,
    STATE(128), 1,
      sym_comment,
  [4132] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(372), 1,
      anon_sym_SEMI,
    STATE(129), 1,
      sym_comment,
  [4145] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(374), 1,
      anon_sym_SEMI,
    STATE(130), 1,
      sym_comment,
  [4158] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(376), 1,
      anon_sym_SEMI,
    STATE(131), 1,
      sym_comment,
  [4171] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(378), 1,
      sym_identifier,
    STATE(132), 1,
      sym_comment,
  [4184] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(380), 1,
      anon_sym_SEMI,
    STATE(133), 1,
      sym_comment,
  [4197] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(382), 1,
      ts_builtin_sym_end,
    STATE(134), 1,
      sym_comment,
  [4210] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(384), 1,
      sym_identifier,
    STATE(135), 1,
      sym_comment,
  [4223] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(240), 1,
      anon_sym_SEMI,
    STATE(136), 1,
      sym_comment,
  [4236] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(208), 1,
      anon_sym_COLON,
    STATE(137), 1,
      sym_comment,
  [4249] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(386), 1,
      sym_integer,
    STATE(138), 1,
      sym_comment,
  [4262] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(388), 1,
      anon_sym_SQUOTE,
    STATE(139), 1,
      sym_comment,
  [4275] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    STATE(140), 1,
      sym_comment,
  [4288] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(392), 1,
      anon_sym_RBRACK,
    STATE(141), 1,
      sym_comment,
  [4301] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_comment,
  [4314] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(394), 1,
      anon_sym_RBRACK,
    STATE(143), 1,
      sym_comment,
  [4327] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(394), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      sym_comment,
  [4340] = 1,
    ACTIONS(396), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 62,
  [SMALL_STATE(12)] = 124,
  [SMALL_STATE(13)] = 186,
  [SMALL_STATE(14)] = 248,
  [SMALL_STATE(15)] = 310,
  [SMALL_STATE(16)] = 370,
  [SMALL_STATE(17)] = 430,
  [SMALL_STATE(18)] = 490,
  [SMALL_STATE(19)] = 563,
  [SMALL_STATE(20)] = 636,
  [SMALL_STATE(21)] = 709,
  [SMALL_STATE(22)] = 747,
  [SMALL_STATE(23)] = 785,
  [SMALL_STATE(24)] = 823,
  [SMALL_STATE(25)] = 861,
  [SMALL_STATE(26)] = 931,
  [SMALL_STATE(27)] = 968,
  [SMALL_STATE(28)] = 1035,
  [SMALL_STATE(29)] = 1074,
  [SMALL_STATE(30)] = 1141,
  [SMALL_STATE(31)] = 1178,
  [SMALL_STATE(32)] = 1240,
  [SMALL_STATE(33)] = 1302,
  [SMALL_STATE(34)] = 1350,
  [SMALL_STATE(35)] = 1386,
  [SMALL_STATE(36)] = 1446,
  [SMALL_STATE(37)] = 1484,
  [SMALL_STATE(38)] = 1520,
  [SMALL_STATE(39)] = 1556,
  [SMALL_STATE(40)] = 1592,
  [SMALL_STATE(41)] = 1628,
  [SMALL_STATE(42)] = 1680,
  [SMALL_STATE(43)] = 1716,
  [SMALL_STATE(44)] = 1752,
  [SMALL_STATE(45)] = 1792,
  [SMALL_STATE(46)] = 1828,
  [SMALL_STATE(47)] = 1864,
  [SMALL_STATE(48)] = 1918,
  [SMALL_STATE(49)] = 1960,
  [SMALL_STATE(50)] = 2024,
  [SMALL_STATE(51)] = 2086,
  [SMALL_STATE(52)] = 2148,
  [SMALL_STATE(53)] = 2210,
  [SMALL_STATE(54)] = 2272,
  [SMALL_STATE(55)] = 2312,
  [SMALL_STATE(56)] = 2374,
  [SMALL_STATE(57)] = 2436,
  [SMALL_STATE(58)] = 2482,
  [SMALL_STATE(59)] = 2544,
  [SMALL_STATE(60)] = 2608,
  [SMALL_STATE(61)] = 2658,
  [SMALL_STATE(62)] = 2702,
  [SMALL_STATE(63)] = 2738,
  [SMALL_STATE(64)] = 2800,
  [SMALL_STATE(65)] = 2837,
  [SMALL_STATE(66)] = 2892,
  [SMALL_STATE(67)] = 2947,
  [SMALL_STATE(68)] = 3000,
  [SMALL_STATE(69)] = 3035,
  [SMALL_STATE(70)] = 3085,
  [SMALL_STATE(71)] = 3139,
  [SMALL_STATE(72)] = 3193,
  [SMALL_STATE(73)] = 3232,
  [SMALL_STATE(74)] = 3271,
  [SMALL_STATE(75)] = 3289,
  [SMALL_STATE(76)] = 3307,
  [SMALL_STATE(77)] = 3327,
  [SMALL_STATE(78)] = 3347,
  [SMALL_STATE(79)] = 3365,
  [SMALL_STATE(80)] = 3384,
  [SMALL_STATE(81)] = 3403,
  [SMALL_STATE(82)] = 3422,
  [SMALL_STATE(83)] = 3439,
  [SMALL_STATE(84)] = 3456,
  [SMALL_STATE(85)] = 3473,
  [SMALL_STATE(86)] = 3490,
  [SMALL_STATE(87)] = 3507,
  [SMALL_STATE(88)] = 3526,
  [SMALL_STATE(89)] = 3543,
  [SMALL_STATE(90)] = 3562,
  [SMALL_STATE(91)] = 3577,
  [SMALL_STATE(92)] = 3596,
  [SMALL_STATE(93)] = 3611,
  [SMALL_STATE(94)] = 3630,
  [SMALL_STATE(95)] = 3649,
  [SMALL_STATE(96)] = 3664,
  [SMALL_STATE(97)] = 3680,
  [SMALL_STATE(98)] = 3696,
  [SMALL_STATE(99)] = 3710,
  [SMALL_STATE(100)] = 3726,
  [SMALL_STATE(101)] = 3742,
  [SMALL_STATE(102)] = 3758,
  [SMALL_STATE(103)] = 3772,
  [SMALL_STATE(104)] = 3786,
  [SMALL_STATE(105)] = 3802,
  [SMALL_STATE(106)] = 3816,
  [SMALL_STATE(107)] = 3832,
  [SMALL_STATE(108)] = 3846,
  [SMALL_STATE(109)] = 3860,
  [SMALL_STATE(110)] = 3874,
  [SMALL_STATE(111)] = 3888,
  [SMALL_STATE(112)] = 3902,
  [SMALL_STATE(113)] = 3916,
  [SMALL_STATE(114)] = 3930,
  [SMALL_STATE(115)] = 3944,
  [SMALL_STATE(116)] = 3958,
  [SMALL_STATE(117)] = 3972,
  [SMALL_STATE(118)] = 3986,
  [SMALL_STATE(119)] = 4000,
  [SMALL_STATE(120)] = 4014,
  [SMALL_STATE(121)] = 4028,
  [SMALL_STATE(122)] = 4041,
  [SMALL_STATE(123)] = 4054,
  [SMALL_STATE(124)] = 4067,
  [SMALL_STATE(125)] = 4080,
  [SMALL_STATE(126)] = 4093,
  [SMALL_STATE(127)] = 4106,
  [SMALL_STATE(128)] = 4119,
  [SMALL_STATE(129)] = 4132,
  [SMALL_STATE(130)] = 4145,
  [SMALL_STATE(131)] = 4158,
  [SMALL_STATE(132)] = 4171,
  [SMALL_STATE(133)] = 4184,
  [SMALL_STATE(134)] = 4197,
  [SMALL_STATE(135)] = 4210,
  [SMALL_STATE(136)] = 4223,
  [SMALL_STATE(137)] = 4236,
  [SMALL_STATE(138)] = 4249,
  [SMALL_STATE(139)] = 4262,
  [SMALL_STATE(140)] = 4275,
  [SMALL_STATE(141)] = 4288,
  [SMALL_STATE(142)] = 4301,
  [SMALL_STATE(143)] = 4314,
  [SMALL_STATE(144)] = 4327,
  [SMALL_STATE(145)] = 4340,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(132),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classvar, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classvar, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_var, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_var, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_sequence, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literals, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literals, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 3),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 4),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_item, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__collection_sequence_repeat1, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_sequence, 2),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__collection_sequence_repeat1, 2), SHIFT_REPEAT(25),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(100),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_call_list_repeat1, 2),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_call_list_repeat1, 2), SHIFT_REPEAT(49),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_call_list, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(104),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_call_list, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_calls, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnamed_argument, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordered_collection_types, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unordered_collection_types, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 4),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 6),
  [382] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
