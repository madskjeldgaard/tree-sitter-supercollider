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
#define STATE_COUNT 174
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 125
#define ALIAS_COUNT 4
#define TOKEN_COUNT 87
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
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
  anon_sym_DOTif = 86,
  sym_source_file = 87,
  sym__expression = 88,
  sym__expression_statement = 89,
  sym__object = 90,
  sym_function_definition = 91,
  sym_function_call = 92,
  sym_instance_method_call = 93,
  sym_class_method_call = 94,
  sym_function_block = 95,
  sym_parameter_list = 96,
  sym_argument = 97,
  sym_parameter_call_list = 98,
  sym_argument_calls = 99,
  sym_unnamed_argument = 100,
  sym_named_argument = 101,
  sym_literal = 102,
  sym_number = 103,
  sym_symbol = 104,
  sym_string = 105,
  sym_bool = 106,
  sym_code_block = 107,
  sym_variable = 108,
  sym_local_var = 109,
  sym_classvar = 110,
  sym_environment_var = 111,
  sym_variable_definition = 112,
  sym_comment = 113,
  sym_collection = 114,
  sym__collection_sequence = 115,
  sym_associative_item = 116,
  sym_binary_expression = 117,
  sym_control_structure = 118,
  sym_if = 119,
  aux_sym_source_file_repeat1 = 120,
  aux_sym_parameter_list_repeat1 = 121,
  aux_sym_parameter_call_list_repeat1 = 122,
  aux_sym_string_repeat1 = 123,
  aux_sym__collection_sequence_repeat1 = 124,
  alias_sym_class_method_name = 125,
  alias_sym_item = 126,
  alias_sym_method_name = 127,
  alias_sym_receiver = 128,
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
  [anon_sym_DOTif] = ".if",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym__expression_statement] = "_expression_statement",
  [sym__object] = "_object",
  [sym_function_definition] = "function_definition",
  [sym_function_call] = "function_call",
  [sym_instance_method_call] = "instance_method_call",
  [sym_class_method_call] = "class_method_call",
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
  [sym_binary_expression] = "binary_expression",
  [sym_control_structure] = "control_structure",
  [sym_if] = "if",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_parameter_call_list_repeat1] = "parameter_call_list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__collection_sequence_repeat1] = "_collection_sequence_repeat1",
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
  [anon_sym_DOTif] = anon_sym_DOTif,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym__expression_statement] = sym__expression_statement,
  [sym__object] = sym__object,
  [sym_function_definition] = sym_function_definition,
  [sym_function_call] = sym_function_call,
  [sym_instance_method_call] = sym_instance_method_call,
  [sym_class_method_call] = sym_class_method_call,
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
  [sym_binary_expression] = sym_binary_expression,
  [sym_control_structure] = sym_control_structure,
  [sym_if] = sym_if,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_parameter_call_list_repeat1] = aux_sym_parameter_call_list_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym__collection_sequence_repeat1] = aux_sym__collection_sequence_repeat1,
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
  [anon_sym_DOTif] = {
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
  field_expression = 1,
  field_false = 2,
  field_left = 3,
  field_operator = 4,
  field_right = 5,
  field_true = 6,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_expression] = "expression",
  [field_false] = "false",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_true] = "true",
};

static const TSFieldMapSlice ts_field_map_slices[11] = {
  [3] = {.index = 0, .length = 3},
  [5] = {.index = 3, .length = 2},
  [7] = {.index = 5, .length = 2},
  [8] = {.index = 7, .length = 3},
  [9] = {.index = 10, .length = 4},
  [10] = {.index = 14, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [3] =
    {field_expression, 0},
    {field_true, 2},
  [5] =
    {field_expression, 0},
    {field_true, 3},
  [7] =
    {field_expression, 2},
    {field_true, 3},
    {field_true, 4},
  [10] =
    {field_expression, 0},
    {field_false, 4},
    {field_false, 5},
    {field_true, 3},
  [14] =
    {field_expression, 2},
    {field_false, 5},
    {field_false, 6},
    {field_true, 3},
    {field_true, 4},
};

static TSSymbol ts_alias_sequences[11][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (eof) ADVANCE(21);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '%') ADVANCE(111);
      if (lookahead == '&') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(107);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '.') ADVANCE(26);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == 'A') ADVANCE(291);
      if (lookahead == 'B') ADVANCE(140);
      if (lookahead == 'D') ADVANCE(215);
      if (lookahead == 'E') ADVANCE(254);
      if (lookahead == 'F') ADVANCE(240);
      if (lookahead == 'I') ADVANCE(180);
      if (lookahead == 'L') ADVANCE(141);
      if (lookahead == 'M') ADVANCE(348);
      if (lookahead == 'O') ADVANCE(164);
      if (lookahead == 'P') ADVANCE(142);
      if (lookahead == 'R') ADVANCE(143);
      if (lookahead == 'S') ADVANCE(186);
      if (lookahead == 'T') ADVANCE(356);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(60);
      if (lookahead == '^') ADVANCE(98);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(378);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(12);
      if (lookahead == 'x') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(55);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(58);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(100);
      END_STATE();
    case 9:
      if (lookahead == '\\') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'f') ADVANCE(380);
      END_STATE();
    case 12:
      if (lookahead == '{') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == '}') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '\'') ADVANCE(43);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(28);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '|') ADVANCE(32);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '~') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(378);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(96);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_hexinteger);
      if (lookahead == '\\') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(46);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(52);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_Bag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_Dictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_Environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_Event);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_IdentityBag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_IdentityDictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_IdentitySet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LazyEnvir);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_MultiLevelIdentityDictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_ObjectTable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_Set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_TwoWayIdentityDictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_Array);
      if (lookahead == '2') ADVANCE(126);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_Array2D);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_ArrayedCollection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DoubleArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_FloatArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_Int16Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_Int32Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_Int8Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LinkedList);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_List);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_Order);
      if (lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_OrderedIdentitySet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_Pair);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PriorityQueue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RawArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SequenceableCollection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_Signal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SortedList);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_SparseArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SymbolArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(95);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(104);
      if (lookahead == '>') ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(61);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '1') ADVANCE(114);
      if (lookahead == '3') ADVANCE(113);
      if (lookahead == '8') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '2') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '6') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'B') ADVANCE(147);
      if (lookahead == 'D') ADVANCE(234);
      if (lookahead == 'S') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'C') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'C') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'D') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'D') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'D') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'E') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'I') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'I') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'I') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'L') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'L') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'L') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'Q') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'S') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'T') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'W') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'i') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(220);
      if (lookahead == 'r') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(238);
      if (lookahead == 'r') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(198);
      if (lookahead == 'n') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(294);
      if (lookahead == 'p') ADVANCE(148);
      if (lookahead == 't') ADVANCE(292);
      if (lookahead == 'y') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'j') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'k') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'm') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(353);
      if (lookahead == 'v') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(239);
      if (lookahead == 's') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'q') ADVANCE(351);
      if (lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 's') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 's') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 's') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'v') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'v') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'v') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'w') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'w') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'z') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(378);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_DOTif);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'f') ADVANCE(11);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      END_STATE();
    case 8:
      if (lookahead == 'g') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_arg);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 22:
      if (lookahead == 'v') ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_classvar);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 20},
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
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 20},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 20},
  [77] = {.lex_state = 20},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 20},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 20},
  [85] = {.lex_state = 20},
  [86] = {.lex_state = 20},
  [87] = {.lex_state = 20},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 20},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 20},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 20},
  [105] = {.lex_state = 20},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 20},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 20},
  [112] = {.lex_state = 20},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 20},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 20},
  [119] = {.lex_state = 20},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 20},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 20},
  [125] = {.lex_state = 20},
  [126] = {.lex_state = 20},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 20},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
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
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {(TSStateId)(-1)},
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
    [anon_sym_DOTif] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(161),
    [sym__expression] = STATE(75),
    [sym__expression_statement] = STATE(163),
    [sym__object] = STATE(72),
    [sym_function_definition] = STATE(164),
    [sym_function_call] = STATE(164),
    [sym_function_block] = STATE(61),
    [sym_literal] = STATE(61),
    [sym_number] = STATE(45),
    [sym_symbol] = STATE(45),
    [sym_string] = STATE(45),
    [sym_bool] = STATE(45),
    [sym_code_block] = STATE(77),
    [sym_variable] = STATE(68),
    [sym_local_var] = STATE(56),
    [sym_classvar] = STATE(56),
    [sym_environment_var] = STATE(56),
    [sym_variable_definition] = STATE(164),
    [sym_comment] = STATE(1),
    [sym_collection] = STATE(61),
    [sym_binary_expression] = STATE(61),
    [sym_control_structure] = STATE(61),
    [sym_if] = STATE(54),
    [aux_sym_source_file_repeat1] = STATE(9),
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
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 34,
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
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_arg,
    ACTIONS(45), 1,
      anon_sym_PIPE,
    STATE(2), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(7), 1,
      sym_parameter_list,
    STATE(54), 1,
      sym_if,
    STATE(68), 1,
      sym_variable,
    STATE(72), 1,
      sym__object,
    STATE(75), 1,
      sym__expression,
    STATE(77), 1,
      sym_code_block,
    STATE(163), 1,
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
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(164), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(61), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [117] = 31,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 1,
      anon_sym_BSLASH,
    ACTIONS(61), 1,
      sym_integer,
    ACTIONS(67), 1,
      anon_sym_SQUOTE,
    ACTIONS(70), 1,
      sym_char,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_var,
    ACTIONS(82), 1,
      anon_sym_classvar,
    ACTIONS(85), 1,
      aux_sym_environment_var_token1,
    ACTIONS(88), 1,
      anon_sym_TILDE,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      sym_class,
    ACTIONS(97), 1,
      anon_sym_if,
    STATE(54), 1,
      sym_if,
    STATE(68), 1,
      sym_variable,
    STATE(72), 1,
      sym__object,
    STATE(75), 1,
      sym__expression,
    STATE(77), 1,
      sym_code_block,
    STATE(163), 1,
      sym__expression_statement,
    ACTIONS(64), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(76), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(164), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(61), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [227] = 34,
    ACTIONS(3), 1,
      sym_line_comment,
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
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
    STATE(33), 1,
      sym__object,
    STATE(34), 1,
      sym_symbol,
    STATE(54), 1,
      sym_if,
    STATE(68), 1,
      sym_variable,
    STATE(75), 1,
      sym__expression,
    STATE(77), 1,
      sym_code_block,
    STATE(89), 1,
      sym_associative_item,
    STATE(163), 1,
      sym__expression_statement,
    STATE(165), 1,
      sym__collection_sequence,
    ACTIONS(5), 2,
      anon_sym_LPAREN,
      sym_block_comment,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 3,
      sym_number,
      sym_string,
      sym_bool,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(164), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(61), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [343] = 31,
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
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(54), 1,
      sym_if,
    STATE(68), 1,
      sym_variable,
    STATE(72), 1,
      sym__object,
    STATE(75), 1,
      sym__expression,
    STATE(77), 1,
      sym_code_block,
    STATE(163), 1,
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
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(164), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(61), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [451] = 31,
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
    ACTIONS(106), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(54), 1,
      sym_if,
    STATE(68), 1,
      sym_variable,
    STATE(72), 1,
      sym__object,
    STATE(75), 1,
      sym__expression,
    STATE(77), 1,
      sym_code_block,
    STATE(163), 1,
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
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(164), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(61), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [559] = 31,
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
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(54), 1,
      sym_if,
    STATE(68), 1,
      sym_variable,
    STATE(72), 1,
      sym__object,
    STATE(75), 1,
      sym__expression,
    STATE(77), 1,
      sym_code_block,
    STATE(163), 1,
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
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(164), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(61), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [667] = 31,
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
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(54), 1,
      sym_if,
    STATE(68), 1,
      sym_variable,
    STATE(72), 1,
      sym__object,
    STATE(75), 1,
      sym__expression,
    STATE(77), 1,
      sym_code_block,
    STATE(163), 1,
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
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(164), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(61), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [775] = 31,
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
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(54), 1,
      sym_if,
    STATE(68), 1,
      sym_variable,
    STATE(72), 1,
      sym__object,
    STATE(75), 1,
      sym__expression,
    STATE(77), 1,
      sym_code_block,
    STATE(163), 1,
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
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(164), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(61), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [883] = 27,
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
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_comment,
    STATE(34), 1,
      sym_symbol,
    STATE(54), 1,
      sym_if,
    STATE(69), 1,
      sym__object,
    STATE(89), 1,
      sym_associative_item,
    STATE(165), 1,
      sym__collection_sequence,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 3,
      sym_number,
      sym_string,
      sym_bool,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(61), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [976] = 27,
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
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_comment,
    STATE(34), 1,
      sym_symbol,
    STATE(54), 1,
      sym_if,
    STATE(69), 1,
      sym__object,
    STATE(89), 1,
      sym_associative_item,
    STATE(167), 1,
      sym__collection_sequence,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 3,
      sym_number,
      sym_string,
      sym_bool,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(61), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1069] = 26,
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
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(12), 1,
      sym_comment,
    STATE(34), 1,
      sym_symbol,
    STATE(54), 1,
      sym_if,
    STATE(74), 1,
      sym__object,
    STATE(116), 1,
      sym_associative_item,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 3,
      sym_number,
      sym_string,
      sym_bool,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(61), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1159] = 25,
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
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_comment,
    STATE(54), 1,
      sym_if,
    STATE(80), 1,
      sym__object,
    STATE(81), 1,
      sym_function_block,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(61), 5,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1246] = 24,
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
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_comment,
    STATE(52), 1,
      sym__object,
    STATE(54), 1,
      sym_if,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(61), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1331] = 24,
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
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(15), 1,
      sym_comment,
    STATE(53), 1,
      sym__object,
    STATE(54), 1,
      sym_if,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(61), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1416] = 24,
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
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_comment,
    STATE(54), 1,
      sym_if,
    STATE(55), 1,
      sym__object,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(61), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1501] = 24,
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
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_comment,
    STATE(54), 1,
      sym_if,
    STATE(59), 1,
      sym__object,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(61), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1586] = 24,
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
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_comment,
    STATE(54), 1,
      sym_if,
    STATE(73), 1,
      sym__object,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(61), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1671] = 24,
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
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_comment,
    STATE(54), 1,
      sym_if,
    STATE(65), 1,
      sym__object,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(61), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1756] = 24,
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
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_comment,
    STATE(54), 1,
      sym_if,
    STATE(64), 1,
      sym__object,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(61), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1841] = 24,
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
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_comment,
    STATE(54), 1,
      sym_if,
    STATE(58), 1,
      sym__object,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(61), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1926] = 24,
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
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_comment,
    STATE(51), 1,
      sym__object,
    STATE(54), 1,
      sym_if,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(61), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2011] = 24,
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
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_comment,
    STATE(50), 1,
      sym__object,
    STATE(54), 1,
      sym_if,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(61), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2096] = 24,
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
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(24), 1,
      sym_comment,
    STATE(37), 1,
      sym__object,
    STATE(54), 1,
      sym_if,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(61), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2181] = 24,
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
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_comment,
    STATE(54), 1,
      sym_if,
    STATE(82), 1,
      sym__object,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(61), 6,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2266] = 22,
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
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(116), 1,
      anon_sym_RPAREN,
    ACTIONS(118), 1,
      anon_sym_BSLASH,
    STATE(26), 1,
      sym_comment,
    STATE(100), 1,
      sym_argument_calls,
    STATE(158), 1,
      sym_parameter_call_list,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(121), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(127), 2,
      sym_literal,
      sym_variable,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [2342] = 22,
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
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_BSLASH,
    ACTIONS(120), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      sym_comment,
    STATE(100), 1,
      sym_argument_calls,
    STATE(148), 1,
      sym_parameter_call_list,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(121), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(127), 2,
      sym_literal,
      sym_variable,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [2418] = 22,
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
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_BSLASH,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_comment,
    STATE(100), 1,
      sym_argument_calls,
    STATE(160), 1,
      sym_parameter_call_list,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(121), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(127), 2,
      sym_literal,
      sym_variable,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [2494] = 22,
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
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_BSLASH,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
    STATE(29), 1,
      sym_comment,
    STATE(100), 1,
      sym_argument_calls,
    STATE(145), 1,
      sym_parameter_call_list,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(121), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(127), 2,
      sym_literal,
      sym_variable,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [2570] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(30), 1,
      sym_comment,
    ACTIONS(128), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(126), 18,
      anon_sym_SEMI,
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
      anon_sym_DOTif,
  [2610] = 20,
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
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_BSLASH,
    STATE(31), 1,
      sym_comment,
    STATE(138), 1,
      sym_argument_calls,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(121), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(127), 2,
      sym_literal,
      sym_variable,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [2680] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(134), 1,
      anon_sym_COLON,
    STATE(32), 1,
      sym_comment,
    ACTIONS(132), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(130), 18,
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
      anon_sym_DOTif,
  [2722] = 22,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(136), 1,
      anon_sym_SEMI,
    ACTIONS(138), 1,
      anon_sym_EQ,
    ACTIONS(140), 1,
      anon_sym_DOT,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(150), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      anon_sym_CARET,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    ACTIONS(168), 1,
      anon_sym_DOTif,
    STATE(33), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym__collection_sequence_repeat1,
    STATE(171), 1,
      sym_instance_method_call,
    ACTIONS(158), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(160), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(162), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(156), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2796] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(34), 1,
      sym_comment,
    ACTIONS(134), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(172), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(170), 16,
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
      anon_sym_DOTif,
  [2838] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(35), 1,
      sym_comment,
    ACTIONS(176), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(174), 18,
      anon_sym_SEMI,
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
      anon_sym_DOTif,
  [2878] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(36), 1,
      sym_comment,
    ACTIONS(180), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(178), 18,
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
      anon_sym_DOTif,
  [2917] = 16,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(146), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(150), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      anon_sym_CARET,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    STATE(37), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(160), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(162), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(184), 2,
      anon_sym_EQ,
      anon_sym_DOT,
    ACTIONS(156), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(182), 5,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOTif,
  [2978] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(38), 1,
      sym_comment,
    ACTIONS(188), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(186), 18,
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
      anon_sym_DOTif,
  [3017] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(39), 1,
      sym_comment,
    ACTIONS(192), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(190), 18,
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
      anon_sym_DOTif,
  [3056] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(40), 1,
      sym_comment,
    ACTIONS(196), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(194), 18,
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
      anon_sym_DOTif,
  [3095] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(41), 1,
      sym_comment,
    ACTIONS(200), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(198), 18,
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
      anon_sym_DOTif,
  [3134] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(42), 1,
      sym_comment,
    ACTIONS(204), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(202), 18,
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
      anon_sym_DOTif,
  [3173] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(43), 1,
      sym_comment,
    ACTIONS(208), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(206), 18,
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
      anon_sym_DOTif,
  [3212] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(44), 1,
      sym_comment,
    ACTIONS(212), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(210), 18,
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
      anon_sym_DOTif,
  [3251] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(45), 1,
      sym_comment,
    ACTIONS(172), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(170), 18,
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
      anon_sym_DOTif,
  [3290] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(46), 1,
      sym_comment,
    ACTIONS(216), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(214), 18,
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
      anon_sym_DOTif,
  [3329] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(47), 1,
      sym_comment,
    ACTIONS(220), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(218), 18,
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
      anon_sym_DOTif,
  [3368] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(48), 1,
      sym_comment,
    ACTIONS(224), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(222), 18,
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
      anon_sym_DOTif,
  [3407] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(49), 1,
      sym_comment,
    ACTIONS(228), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(226), 18,
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
      anon_sym_DOTif,
  [3446] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      anon_sym_CARET,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    STATE(50), 1,
      sym_comment,
    ACTIONS(160), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(162), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(184), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(182), 11,
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
      anon_sym_DOTif,
  [3497] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(146), 1,
      anon_sym_PIPE,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      anon_sym_CARET,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(160), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(162), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(184), 2,
      anon_sym_EQ,
      anon_sym_DOT,
    ACTIONS(156), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(182), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOTif,
  [3554] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(52), 1,
      sym_comment,
    ACTIONS(184), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(182), 18,
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
      anon_sym_DOTif,
  [3593] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      sym_comment,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(184), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(182), 16,
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
      anon_sym_DOTif,
  [3636] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(54), 1,
      sym_comment,
    ACTIONS(232), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(230), 18,
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
      anon_sym_DOTif,
  [3675] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_comment,
    ACTIONS(162), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(184), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(182), 14,
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
      anon_sym_DOTif,
  [3720] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(56), 1,
      sym_comment,
    ACTIONS(236), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(234), 18,
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
      anon_sym_DOTif,
  [3759] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(57), 1,
      sym_comment,
    ACTIONS(240), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(238), 18,
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
      anon_sym_DOTif,
  [3798] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(146), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      anon_sym_CARET,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(160), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(162), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(184), 2,
      anon_sym_EQ,
      anon_sym_DOT,
    ACTIONS(156), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(182), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_DOTif,
  [3857] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(146), 1,
      anon_sym_PIPE,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      anon_sym_CARET,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    STATE(59), 1,
      sym_comment,
    ACTIONS(160), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(162), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(184), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(182), 11,
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
      anon_sym_DOTif,
  [3910] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(60), 1,
      sym_comment,
    ACTIONS(244), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(242), 18,
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
      anon_sym_DOTif,
  [3949] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(61), 1,
      sym_comment,
    ACTIONS(248), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(246), 18,
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
      anon_sym_DOTif,
  [3988] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(62), 1,
      sym_comment,
    ACTIONS(252), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(250), 18,
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
      anon_sym_DOTif,
  [4027] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(63), 1,
      sym_comment,
    ACTIONS(256), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(254), 18,
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
      anon_sym_DOTif,
  [4066] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    STATE(64), 1,
      sym_comment,
    ACTIONS(160), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(162), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(184), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(182), 12,
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
      anon_sym_DOTif,
  [4113] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    STATE(65), 1,
      sym_comment,
    ACTIONS(160), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(162), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(184), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(182), 12,
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
      anon_sym_DOTif,
  [4162] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(66), 1,
      sym_comment,
    ACTIONS(132), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(130), 18,
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
      anon_sym_DOTif,
  [4201] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(67), 1,
      sym_comment,
    ACTIONS(260), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(258), 18,
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
      anon_sym_DOTif,
  [4240] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(262), 1,
      anon_sym_EQ,
    STATE(68), 1,
      sym_comment,
    ACTIONS(248), 6,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(246), 17,
      anon_sym_SEMI,
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
      anon_sym_DOTif,
  [4280] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(146), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(150), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      anon_sym_CARET,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    ACTIONS(168), 1,
      anon_sym_DOTif,
    STATE(69), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym__collection_sequence_repeat1,
    ACTIONS(142), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(158), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(160), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(162), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(156), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4346] = 18,
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
    STATE(70), 1,
      sym_comment,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(137), 2,
      sym_literal,
      sym_variable,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [4409] = 18,
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
    STATE(71), 1,
      sym_comment,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(25), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(142), 2,
      sym_literal,
      sym_variable,
    STATE(56), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [4472] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(136), 1,
      anon_sym_SEMI,
    ACTIONS(138), 1,
      anon_sym_EQ,
    ACTIONS(140), 1,
      anon_sym_DOT,
    ACTIONS(146), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(150), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      anon_sym_CARET,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    ACTIONS(168), 1,
      anon_sym_DOTif,
    STATE(72), 1,
      sym_comment,
    STATE(171), 1,
      sym_instance_method_call,
    ACTIONS(158), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(160), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(162), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(156), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4537] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      anon_sym_EQ,
    ACTIONS(146), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(150), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      anon_sym_CARET,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    ACTIONS(168), 1,
      anon_sym_DOTif,
    STATE(73), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(160), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(162), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(264), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(156), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4598] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      anon_sym_EQ,
    ACTIONS(146), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(150), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      anon_sym_CARET,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    ACTIONS(168), 1,
      anon_sym_DOTif,
    STATE(74), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(160), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(162), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(266), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(156), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4659] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(75), 1,
      sym_comment,
    ACTIONS(270), 8,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
      anon_sym_if,
    ACTIONS(268), 14,
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
      sym_class,
  [4695] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(76), 1,
      sym_comment,
    ACTIONS(274), 8,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
      anon_sym_if,
    ACTIONS(272), 14,
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
      sym_class,
  [4731] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(77), 1,
      sym_comment,
    ACTIONS(278), 8,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
      anon_sym_if,
    ACTIONS(276), 14,
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
      sym_class,
  [4767] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(78), 1,
      sym_comment,
    ACTIONS(282), 8,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
      anon_sym_if,
    ACTIONS(280), 14,
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
      sym_class,
  [4803] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(79), 1,
      sym_comment,
    ACTIONS(286), 8,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
      anon_sym_if,
    ACTIONS(284), 14,
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
      sym_class,
  [4839] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      anon_sym_EQ,
    ACTIONS(146), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(150), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      anon_sym_CARET,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    ACTIONS(168), 1,
      anon_sym_DOTif,
    ACTIONS(288), 1,
      anon_sym_SEMI,
    STATE(80), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(160), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(162), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(156), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4898] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    STATE(81), 1,
      sym_comment,
    ACTIONS(248), 6,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(246), 14,
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
      anon_sym_DOTif,
  [4935] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(138), 1,
      anon_sym_EQ,
    ACTIONS(146), 1,
      anon_sym_PIPE,
    ACTIONS(148), 1,
      anon_sym_AMP_AMP,
    ACTIONS(150), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(152), 1,
      anon_sym_AMP,
    ACTIONS(154), 1,
      anon_sym_CARET,
    ACTIONS(166), 1,
      anon_sym_SLASH,
    ACTIONS(168), 1,
      anon_sym_DOTif,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(160), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(162), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(164), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(156), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [4994] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(83), 1,
      sym_comment,
    ACTIONS(294), 8,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
      anon_sym_if,
    ACTIONS(296), 12,
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
      sym_class,
  [5028] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(84), 1,
      sym_comment,
    ACTIONS(298), 8,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
      anon_sym_if,
    ACTIONS(300), 12,
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
      sym_class,
  [5062] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(85), 1,
      sym_comment,
    ACTIONS(302), 8,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
      anon_sym_if,
    ACTIONS(304), 12,
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
      sym_class,
  [5096] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(306), 1,
      anon_sym_BSLASH,
    ACTIONS(308), 1,
      sym_integer,
    ACTIONS(312), 1,
      anon_sym_SQUOTE,
    ACTIONS(314), 1,
      sym_char,
    ACTIONS(316), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      sym_comment,
    STATE(112), 1,
      sym_literal,
    ACTIONS(310), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(318), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(129), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [5138] = 12,
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
    STATE(87), 1,
      sym_comment,
    STATE(112), 1,
      sym_literal,
    ACTIONS(17), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(320), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(45), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [5180] = 6,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      aux_sym_string_token1,
    ACTIONS(327), 1,
      sym_escape_sequence,
    ACTIONS(330), 1,
      sym_line_comment,
    ACTIONS(332), 1,
      sym_block_comment,
    STATE(88), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [5200] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      sym_comment,
    STATE(96), 1,
      aux_sym__collection_sequence_repeat1,
    ACTIONS(142), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5220] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(90), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(336), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5238] = 7,
    ACTIONS(330), 1,
      sym_line_comment,
    ACTIONS(332), 1,
      sym_block_comment,
    ACTIONS(338), 1,
      anon_sym_DQUOTE,
    ACTIONS(340), 1,
      aux_sym_string_token1,
    ACTIONS(342), 1,
      sym_escape_sequence,
    STATE(91), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym_string_repeat1,
  [5260] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(92), 1,
      sym_comment,
    ACTIONS(344), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(346), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5278] = 7,
    ACTIONS(330), 1,
      sym_line_comment,
    ACTIONS(332), 1,
      sym_block_comment,
    ACTIONS(340), 1,
      aux_sym_string_token1,
    ACTIONS(342), 1,
      sym_escape_sequence,
    ACTIONS(348), 1,
      anon_sym_DQUOTE,
    STATE(88), 1,
      aux_sym_string_repeat1,
    STATE(93), 1,
      sym_comment,
  [5300] = 7,
    ACTIONS(330), 1,
      sym_line_comment,
    ACTIONS(332), 1,
      sym_block_comment,
    ACTIONS(340), 1,
      aux_sym_string_token1,
    ACTIONS(342), 1,
      sym_escape_sequence,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    STATE(88), 1,
      aux_sym_string_repeat1,
    STATE(94), 1,
      sym_comment,
  [5322] = 7,
    ACTIONS(330), 1,
      sym_line_comment,
    ACTIONS(332), 1,
      sym_block_comment,
    ACTIONS(340), 1,
      aux_sym_string_token1,
    ACTIONS(342), 1,
      sym_escape_sequence,
    ACTIONS(352), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      aux_sym_string_repeat1,
    STATE(95), 1,
      sym_comment,
  [5344] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      sym_comment,
    STATE(97), 1,
      aux_sym__collection_sequence_repeat1,
    ACTIONS(354), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5364] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    ACTIONS(266), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    STATE(97), 2,
      sym_comment,
      aux_sym__collection_sequence_repeat1,
  [5382] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(359), 1,
      sym_identifier,
    ACTIONS(361), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      sym_comment,
    STATE(106), 1,
      sym_argument,
  [5401] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      anon_sym_PIPE,
    STATE(99), 1,
      sym_comment,
    STATE(102), 1,
      aux_sym_parameter_list_repeat1,
  [5420] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      sym_comment,
    STATE(114), 1,
      aux_sym_parameter_call_list_repeat1,
  [5439] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    STATE(101), 2,
      sym_comment,
      aux_sym_parameter_call_list_repeat1,
  [5456] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      anon_sym_PIPE,
    STATE(102), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [5473] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(379), 1,
      anon_sym_SEMI,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    STATE(103), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [5490] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(384), 1,
      anon_sym_DOT,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    STATE(104), 1,
      sym_comment,
    STATE(170), 1,
      sym_class_method_call,
  [5509] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(363), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_PIPE,
    STATE(99), 1,
      aux_sym_parameter_list_repeat1,
    STATE(105), 1,
      sym_comment,
  [5528] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(388), 1,
      anon_sym_SEMI,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      sym_comment,
    STATE(117), 1,
      aux_sym_parameter_list_repeat1,
  [5547] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(394), 1,
      anon_sym_EQ,
    STATE(107), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5564] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(396), 1,
      anon_sym_EQ,
    STATE(108), 1,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [5581] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_function_block,
    STATE(109), 1,
      sym_comment,
  [5600] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(400), 1,
      sym_identifier,
    ACTIONS(402), 1,
      anon_sym_SEMI,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_comment,
  [5619] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(111), 1,
      sym_comment,
    ACTIONS(379), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [5634] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(112), 1,
      sym_comment,
    ACTIONS(406), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [5649] = 5,
    ACTIONS(330), 1,
      sym_line_comment,
    ACTIONS(332), 1,
      sym_block_comment,
    ACTIONS(410), 1,
      aux_sym_string_token1,
    STATE(113), 1,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [5666] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_parameter_call_list_repeat1,
    STATE(114), 1,
      sym_comment,
  [5685] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(361), 1,
      anon_sym_PIPE,
    ACTIONS(414), 1,
      sym_identifier,
    STATE(105), 1,
      sym_argument,
    STATE(115), 1,
      sym_comment,
  [5704] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(116), 1,
      sym_comment,
    ACTIONS(266), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5719] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(365), 1,
      anon_sym_SEMI,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(103), 1,
      aux_sym_parameter_list_repeat1,
    STATE(117), 1,
      sym_comment,
  [5738] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(118), 1,
      sym_comment,
    ACTIONS(190), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [5752] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(119), 1,
      sym_comment,
    ACTIONS(198), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [5766] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(359), 1,
      sym_identifier,
    STATE(111), 1,
      sym_argument,
    STATE(120), 1,
      sym_comment,
  [5782] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(121), 1,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5796] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(122), 1,
      sym_comment,
    ACTIONS(126), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [5810] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(123), 1,
      sym_comment,
    ACTIONS(418), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [5824] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(124), 1,
      sym_comment,
    ACTIONS(210), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [5838] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(125), 1,
      sym_comment,
    ACTIONS(174), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [5852] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(126), 1,
      sym_comment,
    ACTIONS(250), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [5866] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(127), 1,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5880] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_comment,
    STATE(140), 1,
      sym_function_block,
  [5896] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(129), 1,
      sym_comment,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [5910] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(422), 1,
      sym_identifier,
    ACTIONS(424), 1,
      aux_sym_symbol_token1,
    STATE(130), 1,
      sym_comment,
  [5926] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(131), 1,
      sym_comment,
    ACTIONS(426), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [5940] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    ACTIONS(430), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      sym_comment,
  [5956] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(133), 1,
      sym_comment,
    ACTIONS(424), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [5970] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(134), 1,
      sym_comment,
    ACTIONS(432), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [5984] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(132), 1,
      sym_function_block,
    STATE(135), 1,
      sym_comment,
  [6000] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(434), 1,
      anon_sym_SEMI,
    ACTIONS(436), 1,
      anon_sym_LPAREN,
    STATE(136), 1,
      sym_comment,
  [6016] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(137), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6030] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(138), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6044] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(414), 1,
      sym_identifier,
    STATE(111), 1,
      sym_argument,
    STATE(139), 1,
      sym_comment,
  [6060] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      sym_comment,
  [6076] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(141), 1,
      sym_comment,
    STATE(154), 1,
      sym_function_block,
  [6092] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(142), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6106] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(143), 1,
      sym_comment,
    STATE(155), 1,
      sym_function_block,
  [6122] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(446), 1,
      anon_sym_SEMI,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym_comment,
  [6138] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(145), 1,
      sym_comment,
  [6151] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(452), 1,
      anon_sym_SEMI,
    STATE(146), 1,
      sym_comment,
  [6164] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(147), 1,
      sym_comment,
  [6177] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(456), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      sym_comment,
  [6190] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(458), 1,
      anon_sym_SEMI,
    STATE(149), 1,
      sym_comment,
  [6203] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(460), 1,
      sym_identifier,
    STATE(150), 1,
      sym_comment,
  [6216] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(462), 1,
      sym_identifier,
    STATE(151), 1,
      sym_comment,
  [6229] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(464), 1,
      anon_sym_SEMI,
    STATE(152), 1,
      sym_comment,
  [6242] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(466), 1,
      anon_sym_SEMI,
    STATE(153), 1,
      sym_comment,
  [6255] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(468), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      sym_comment,
  [6268] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(470), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      sym_comment,
  [6281] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(472), 1,
      anon_sym_SEMI,
    STATE(156), 1,
      sym_comment,
  [6294] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(474), 1,
      anon_sym_SEMI,
    STATE(157), 1,
      sym_comment,
  [6307] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym_comment,
  [6320] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(478), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_comment,
  [6333] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      sym_comment,
  [6346] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(482), 1,
      ts_builtin_sym_end,
    STATE(161), 1,
      sym_comment,
  [6359] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(484), 1,
      anon_sym_SEMI,
    STATE(162), 1,
      sym_comment,
  [6372] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(486), 1,
      anon_sym_SEMI,
    STATE(163), 1,
      sym_comment,
  [6385] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(136), 1,
      anon_sym_SEMI,
    STATE(164), 1,
      sym_comment,
  [6398] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      sym_comment,
  [6411] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(490), 1,
      anon_sym_SQUOTE,
    STATE(166), 1,
      sym_comment,
  [6424] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      sym_comment,
  [6437] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(492), 1,
      anon_sym_SQUOTE,
    STATE(168), 1,
      sym_comment,
  [6450] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(494), 1,
      sym_identifier,
    STATE(169), 1,
      sym_comment,
  [6463] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(496), 1,
      anon_sym_SEMI,
    STATE(170), 1,
      sym_comment,
  [6476] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(498), 1,
      anon_sym_SEMI,
    STATE(171), 1,
      sym_comment,
  [6489] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(500), 1,
      anon_sym_SEMI,
    STATE(172), 1,
      sym_comment,
  [6502] = 1,
    ACTIONS(502), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 117,
  [SMALL_STATE(4)] = 227,
  [SMALL_STATE(5)] = 343,
  [SMALL_STATE(6)] = 451,
  [SMALL_STATE(7)] = 559,
  [SMALL_STATE(8)] = 667,
  [SMALL_STATE(9)] = 775,
  [SMALL_STATE(10)] = 883,
  [SMALL_STATE(11)] = 976,
  [SMALL_STATE(12)] = 1069,
  [SMALL_STATE(13)] = 1159,
  [SMALL_STATE(14)] = 1246,
  [SMALL_STATE(15)] = 1331,
  [SMALL_STATE(16)] = 1416,
  [SMALL_STATE(17)] = 1501,
  [SMALL_STATE(18)] = 1586,
  [SMALL_STATE(19)] = 1671,
  [SMALL_STATE(20)] = 1756,
  [SMALL_STATE(21)] = 1841,
  [SMALL_STATE(22)] = 1926,
  [SMALL_STATE(23)] = 2011,
  [SMALL_STATE(24)] = 2096,
  [SMALL_STATE(25)] = 2181,
  [SMALL_STATE(26)] = 2266,
  [SMALL_STATE(27)] = 2342,
  [SMALL_STATE(28)] = 2418,
  [SMALL_STATE(29)] = 2494,
  [SMALL_STATE(30)] = 2570,
  [SMALL_STATE(31)] = 2610,
  [SMALL_STATE(32)] = 2680,
  [SMALL_STATE(33)] = 2722,
  [SMALL_STATE(34)] = 2796,
  [SMALL_STATE(35)] = 2838,
  [SMALL_STATE(36)] = 2878,
  [SMALL_STATE(37)] = 2917,
  [SMALL_STATE(38)] = 2978,
  [SMALL_STATE(39)] = 3017,
  [SMALL_STATE(40)] = 3056,
  [SMALL_STATE(41)] = 3095,
  [SMALL_STATE(42)] = 3134,
  [SMALL_STATE(43)] = 3173,
  [SMALL_STATE(44)] = 3212,
  [SMALL_STATE(45)] = 3251,
  [SMALL_STATE(46)] = 3290,
  [SMALL_STATE(47)] = 3329,
  [SMALL_STATE(48)] = 3368,
  [SMALL_STATE(49)] = 3407,
  [SMALL_STATE(50)] = 3446,
  [SMALL_STATE(51)] = 3497,
  [SMALL_STATE(52)] = 3554,
  [SMALL_STATE(53)] = 3593,
  [SMALL_STATE(54)] = 3636,
  [SMALL_STATE(55)] = 3675,
  [SMALL_STATE(56)] = 3720,
  [SMALL_STATE(57)] = 3759,
  [SMALL_STATE(58)] = 3798,
  [SMALL_STATE(59)] = 3857,
  [SMALL_STATE(60)] = 3910,
  [SMALL_STATE(61)] = 3949,
  [SMALL_STATE(62)] = 3988,
  [SMALL_STATE(63)] = 4027,
  [SMALL_STATE(64)] = 4066,
  [SMALL_STATE(65)] = 4113,
  [SMALL_STATE(66)] = 4162,
  [SMALL_STATE(67)] = 4201,
  [SMALL_STATE(68)] = 4240,
  [SMALL_STATE(69)] = 4280,
  [SMALL_STATE(70)] = 4346,
  [SMALL_STATE(71)] = 4409,
  [SMALL_STATE(72)] = 4472,
  [SMALL_STATE(73)] = 4537,
  [SMALL_STATE(74)] = 4598,
  [SMALL_STATE(75)] = 4659,
  [SMALL_STATE(76)] = 4695,
  [SMALL_STATE(77)] = 4731,
  [SMALL_STATE(78)] = 4767,
  [SMALL_STATE(79)] = 4803,
  [SMALL_STATE(80)] = 4839,
  [SMALL_STATE(81)] = 4898,
  [SMALL_STATE(82)] = 4935,
  [SMALL_STATE(83)] = 4994,
  [SMALL_STATE(84)] = 5028,
  [SMALL_STATE(85)] = 5062,
  [SMALL_STATE(86)] = 5096,
  [SMALL_STATE(87)] = 5138,
  [SMALL_STATE(88)] = 5180,
  [SMALL_STATE(89)] = 5200,
  [SMALL_STATE(90)] = 5220,
  [SMALL_STATE(91)] = 5238,
  [SMALL_STATE(92)] = 5260,
  [SMALL_STATE(93)] = 5278,
  [SMALL_STATE(94)] = 5300,
  [SMALL_STATE(95)] = 5322,
  [SMALL_STATE(96)] = 5344,
  [SMALL_STATE(97)] = 5364,
  [SMALL_STATE(98)] = 5382,
  [SMALL_STATE(99)] = 5401,
  [SMALL_STATE(100)] = 5420,
  [SMALL_STATE(101)] = 5439,
  [SMALL_STATE(102)] = 5456,
  [SMALL_STATE(103)] = 5473,
  [SMALL_STATE(104)] = 5490,
  [SMALL_STATE(105)] = 5509,
  [SMALL_STATE(106)] = 5528,
  [SMALL_STATE(107)] = 5547,
  [SMALL_STATE(108)] = 5564,
  [SMALL_STATE(109)] = 5581,
  [SMALL_STATE(110)] = 5600,
  [SMALL_STATE(111)] = 5619,
  [SMALL_STATE(112)] = 5634,
  [SMALL_STATE(113)] = 5649,
  [SMALL_STATE(114)] = 5666,
  [SMALL_STATE(115)] = 5685,
  [SMALL_STATE(116)] = 5704,
  [SMALL_STATE(117)] = 5719,
  [SMALL_STATE(118)] = 5738,
  [SMALL_STATE(119)] = 5752,
  [SMALL_STATE(120)] = 5766,
  [SMALL_STATE(121)] = 5782,
  [SMALL_STATE(122)] = 5796,
  [SMALL_STATE(123)] = 5810,
  [SMALL_STATE(124)] = 5824,
  [SMALL_STATE(125)] = 5838,
  [SMALL_STATE(126)] = 5852,
  [SMALL_STATE(127)] = 5866,
  [SMALL_STATE(128)] = 5880,
  [SMALL_STATE(129)] = 5896,
  [SMALL_STATE(130)] = 5910,
  [SMALL_STATE(131)] = 5926,
  [SMALL_STATE(132)] = 5940,
  [SMALL_STATE(133)] = 5956,
  [SMALL_STATE(134)] = 5970,
  [SMALL_STATE(135)] = 5984,
  [SMALL_STATE(136)] = 6000,
  [SMALL_STATE(137)] = 6016,
  [SMALL_STATE(138)] = 6030,
  [SMALL_STATE(139)] = 6044,
  [SMALL_STATE(140)] = 6060,
  [SMALL_STATE(141)] = 6076,
  [SMALL_STATE(142)] = 6092,
  [SMALL_STATE(143)] = 6106,
  [SMALL_STATE(144)] = 6122,
  [SMALL_STATE(145)] = 6138,
  [SMALL_STATE(146)] = 6151,
  [SMALL_STATE(147)] = 6164,
  [SMALL_STATE(148)] = 6177,
  [SMALL_STATE(149)] = 6190,
  [SMALL_STATE(150)] = 6203,
  [SMALL_STATE(151)] = 6216,
  [SMALL_STATE(152)] = 6229,
  [SMALL_STATE(153)] = 6242,
  [SMALL_STATE(154)] = 6255,
  [SMALL_STATE(155)] = 6268,
  [SMALL_STATE(156)] = 6281,
  [SMALL_STATE(157)] = 6294,
  [SMALL_STATE(158)] = 6307,
  [SMALL_STATE(159)] = 6320,
  [SMALL_STATE(160)] = 6333,
  [SMALL_STATE(161)] = 6346,
  [SMALL_STATE(162)] = 6359,
  [SMALL_STATE(163)] = 6372,
  [SMALL_STATE(164)] = 6385,
  [SMALL_STATE(165)] = 6398,
  [SMALL_STATE(166)] = 6411,
  [SMALL_STATE(167)] = 6424,
  [SMALL_STATE(168)] = 6437,
  [SMALL_STATE(169)] = 6450,
  [SMALL_STATE(170)] = 6463,
  [SMALL_STATE(171)] = 6476,
  [SMALL_STATE(172)] = 6489,
  [SMALL_STATE(173)] = 6502,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(147),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_sequence, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 8, .production_id = 10),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 8, .production_id = 10),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 7, .production_id = 9),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 7, .production_id = 9),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 3, .production_id = 5),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 3, .production_id = 5),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classvar, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classvar, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_var, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_var, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_structure, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_structure, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6, .production_id = 8),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6, .production_id = 8),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 5, .production_id = 7),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 5, .production_id = 7),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_var, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_var, 1),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_item, 3, .production_id = 6),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__collection_sequence_repeat1, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(113),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(113),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_sequence, 2),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__collection_sequence_repeat1, 2), SHIFT_REPEAT(12),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_call_list, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_call_list_repeat1, 2),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_call_list_repeat1, 2), SHIFT_REPEAT(31),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(139),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(120),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_call_list, 2),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_calls, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnamed_argument, 1),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 2, .production_id = 4),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 3),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 4),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 2, .production_id = 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 3),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 5, .production_id = 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 4, .production_id = 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 5, .production_id = 4),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 4),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 4, .production_id = 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [482] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
