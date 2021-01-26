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
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
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
  [34] = {.lex_state = 24},
  [35] = {.lex_state = 24},
  [36] = {.lex_state = 24},
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
  [89] = {.lex_state = 24},
  [90] = {.lex_state = 24},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 24},
  [93] = {.lex_state = 24},
  [94] = {.lex_state = 24},
  [95] = {.lex_state = 24},
  [96] = {.lex_state = 24},
  [97] = {.lex_state = 24},
  [98] = {.lex_state = 24},
  [99] = {.lex_state = 24},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 24},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 24},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 24},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 24},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 24},
  [144] = {.lex_state = 24},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 24},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 24},
  [162] = {.lex_state = 24},
  [163] = {.lex_state = 24},
  [164] = {.lex_state = 24},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 24},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 24},
  [169] = {.lex_state = 24},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
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
    [sym_source_file] = STATE(205),
    [sym__expression] = STATE(96),
    [sym__expression_statement] = STATE(195),
    [sym__object] = STATE(77),
    [sym_function_definition] = STATE(148),
    [sym_function_call] = STATE(148),
    [sym_code_block] = STATE(12),
    [sym_function_block] = STATE(69),
    [sym_literal] = STATE(69),
    [sym_number] = STATE(73),
    [sym_symbol] = STATE(73),
    [sym_string] = STATE(73),
    [sym_bool] = STATE(73),
    [sym_variable] = STATE(80),
    [sym_local_var] = STATE(67),
    [sym_classvar] = STATE(67),
    [sym_environment_var] = STATE(67),
    [sym_variable_definition] = STATE(148),
    [sym_comment] = STATE(1),
    [sym_collection] = STATE(69),
    [sym_binary_expression] = STATE(69),
    [sym_control_structure] = STATE(69),
    [sym_if] = STATE(66),
    [sym_while] = STATE(66),
    [aux_sym_source_file_repeat1] = STATE(8),
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
    STATE(6), 1,
      sym_parameter_list,
    STATE(14), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(77), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(109), 1,
      sym__expression_statement,
    STATE(157), 1,
      sym__expression_sequence,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(148), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 6,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [124] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(3), 1,
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
  [185] = 35,
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
    STATE(4), 1,
      sym_comment,
    STATE(11), 1,
      sym_parameter_list,
    STATE(14), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(77), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(109), 1,
      sym__expression_statement,
    STATE(184), 1,
      sym__expression_sequence,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(148), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 6,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [306] = 35,
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
    STATE(5), 1,
      sym_comment,
    STATE(9), 1,
      sym_parameter_list,
    STATE(14), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(77), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(109), 1,
      sym__expression_statement,
    STATE(203), 1,
      sym__expression_sequence,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(148), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 6,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [427] = 33,
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
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(77), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(109), 1,
      sym__expression_statement,
    STATE(154), 1,
      sym__expression_sequence,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(148), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 6,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [542] = 34,
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
    ACTIONS(61), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(39), 1,
      sym_symbol,
    STATE(77), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(109), 1,
      sym__expression_statement,
    STATE(130), 1,
      sym_associative_item,
    STATE(183), 1,
      sym__paired_associative_sequence,
    STATE(191), 1,
      sym__expression_sequence,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 3,
      sym_number,
      sym_string,
      sym_bool,
    STATE(148), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(69), 6,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [659] = 33,
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
    STATE(8), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    STATE(12), 1,
      sym_code_block,
    STATE(77), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(96), 1,
      sym__expression,
    STATE(195), 1,
      sym__expression_statement,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(148), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 5,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [773] = 32,
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
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(77), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(109), 1,
      sym__expression_statement,
    STATE(180), 1,
      sym__expression_sequence,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(148), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 6,
      sym_code_block,
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
    STATE(77), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(96), 1,
      sym__expression,
    STATE(195), 1,
      sym__expression_statement,
    ACTIONS(90), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(102), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(10), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(148), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 5,
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
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym__expression_sequence_repeat1,
    STATE(77), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(109), 1,
      sym__expression_statement,
    STATE(182), 1,
      sym__expression_sequence,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(148), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 6,
      sym_code_block,
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
    STATE(77), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(194), 1,
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
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(148), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 6,
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
    STATE(77), 1,
      sym__object,
    STATE(80), 1,
      sym_variable,
    STATE(116), 1,
      sym__expression_statement,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(148), 3,
      sym_function_definition,
      sym_function_call,
      sym_variable_definition,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 6,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1380] = 29,
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
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    ACTIONS(189), 1,
      anon_sym_BSLASH,
    STATE(15), 1,
      sym_comment,
    STATE(85), 1,
      sym__object,
    STATE(115), 1,
      sym_argument_calls,
    STATE(204), 1,
      sym_parameter_call_list,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(158), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1483] = 29,
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
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_BSLASH,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_comment,
    STATE(85), 1,
      sym__object,
    STATE(115), 1,
      sym_argument_calls,
    STATE(197), 1,
      sym_parameter_call_list,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(158), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1586] = 29,
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
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_BSLASH,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    STATE(17), 1,
      sym_comment,
    STATE(85), 1,
      sym__object,
    STATE(115), 1,
      sym_argument_calls,
    STATE(178), 1,
      sym_parameter_call_list,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(158), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1689] = 29,
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
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_BSLASH,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      sym_comment,
    STATE(85), 1,
      sym__object,
    STATE(115), 1,
      sym_argument_calls,
    STATE(193), 1,
      sym_parameter_call_list,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(158), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1792] = 27,
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
    ACTIONS(185), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_BSLASH,
    STATE(19), 1,
      sym_comment,
    STATE(85), 1,
      sym__object,
    STATE(172), 1,
      sym_argument_calls,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(158), 2,
      sym_unnamed_argument,
      sym_named_argument,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1889] = 28,
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
    ACTIONS(61), 1,
      sym_identifier,
    STATE(20), 1,
      sym_comment,
    STATE(39), 1,
      sym_symbol,
    STATE(82), 1,
      sym__object,
    STATE(122), 1,
      sym_associative_item,
    STATE(187), 1,
      sym__collection_sequence,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 3,
      sym_number,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [1987] = 27,
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
    ACTIONS(61), 1,
      sym_identifier,
    STATE(21), 1,
      sym_comment,
    STATE(39), 1,
      sym_symbol,
    STATE(86), 1,
      sym__object,
    STATE(165), 1,
      sym_associative_item,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 3,
      sym_number,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2082] = 25,
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
    STATE(60), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2172] = 25,
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
    STATE(87), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2262] = 25,
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
    STATE(81), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2352] = 26,
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
    STATE(83), 1,
      sym__object,
    STATE(84), 1,
      sym_function_block,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 6,
      sym_code_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2444] = 25,
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
    STATE(45), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2534] = 25,
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
    STATE(88), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2624] = 25,
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
    STATE(47), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2714] = 25,
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
    STATE(49), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2804] = 25,
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
    STATE(30), 1,
      sym_comment,
    STATE(50), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2894] = 25,
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
    STATE(31), 1,
      sym_comment,
    STATE(55), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [2984] = 25,
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
    STATE(32), 1,
      sym_comment,
    STATE(56), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [3074] = 25,
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
    STATE(33), 1,
      sym_comment,
    STATE(57), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [3164] = 25,
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
    STATE(34), 1,
      sym_comment,
    STATE(91), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [3254] = 25,
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
    STATE(35), 1,
      sym_comment,
    STATE(59), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [3344] = 25,
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
    STATE(36), 1,
      sym_comment,
    STATE(72), 1,
      sym__object,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(66), 2,
      sym_if,
      sym_while,
    STATE(67), 3,
      sym_local_var,
      sym_classvar,
      sym_environment_var,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
    STATE(69), 7,
      sym_code_block,
      sym_function_block,
      sym_literal,
      sym_variable,
      sym_collection,
      sym_binary_expression,
      sym_control_structure,
  [3434] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(37), 1,
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
  [3475] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(38), 1,
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
  [3516] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(39), 1,
      sym_comment,
    ACTIONS(209), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(207), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(205), 16,
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
  [3558] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(40), 1,
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
  [3598] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(41), 1,
      sym_comment,
    ACTIONS(217), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(215), 19,
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
  [3638] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(42), 1,
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
  [3678] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(43), 1,
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
  [3718] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(44), 1,
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
  [3758] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(45), 1,
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
  [3798] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(46), 1,
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
  [3838] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    STATE(47), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(233), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(231), 17,
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
  [3882] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(48), 1,
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
  [3922] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    STATE(49), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(233), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(231), 15,
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
  [3968] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_AMP,
    ACTIONS(253), 1,
      anon_sym_CARET,
    STATE(50), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(233), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(231), 12,
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
  [4022] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(51), 1,
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
  [4062] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(52), 1,
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
  [4102] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(53), 1,
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
  [4142] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(54), 1,
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
  [4182] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    ACTIONS(251), 1,
      anon_sym_AMP,
    STATE(55), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(233), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(231), 13,
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
  [4232] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(233), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(231), 13,
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
  [4280] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_AMP,
    ACTIONS(253), 1,
      anon_sym_CARET,
    ACTIONS(273), 1,
      anon_sym_AMP_AMP,
    STATE(57), 1,
      sym_comment,
    ACTIONS(233), 2,
      anon_sym_EQ,
      anon_sym_DOT,
    ACTIONS(239), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(231), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_DOTwhile,
  [4340] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(58), 1,
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
  [4380] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_AMP,
    ACTIONS(253), 1,
      anon_sym_CARET,
    STATE(59), 1,
      sym_comment,
    ACTIONS(233), 2,
      anon_sym_EQ,
      anon_sym_DOT,
    ACTIONS(239), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(231), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOTwhile,
  [4438] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    ACTIONS(251), 1,
      anon_sym_AMP,
    ACTIONS(253), 1,
      anon_sym_CARET,
    STATE(60), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(233), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(231), 12,
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
  [4490] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(61), 1,
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
  [4530] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(62), 1,
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
  [4570] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(63), 1,
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
  [4610] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(64), 1,
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
  [4650] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_COLON,
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
    ACTIONS(299), 18,
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
  [4692] = 5,
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
  [4732] = 5,
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
  [4772] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(68), 1,
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
  [4812] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(69), 1,
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
  [4852] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(70), 1,
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
  [4892] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(71), 1,
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
  [4932] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(233), 1,
      anon_sym_EQ,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_AMP,
    ACTIONS(253), 1,
      anon_sym_CARET,
    ACTIONS(273), 1,
      anon_sym_AMP_AMP,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      anon_sym_PIPE_PIPE,
    STATE(72), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(231), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOTwhile,
  [4996] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(73), 1,
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
  [5036] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(74), 1,
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
  [5076] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(75), 1,
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
  [5116] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(76), 1,
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
  [5156] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_AMP,
    ACTIONS(253), 1,
      anon_sym_CARET,
    ACTIONS(273), 1,
      anon_sym_AMP_AMP,
    ACTIONS(321), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(339), 1,
      anon_sym_DOT,
    ACTIONS(341), 1,
      anon_sym_DOTwhile,
    STATE(77), 1,
      sym_comment,
    STATE(117), 1,
      sym_instance_method_call,
    ACTIONS(239), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(335), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5223] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(343), 1,
      anon_sym_COLON,
    STATE(78), 1,
      sym_comment,
    ACTIONS(301), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(299), 16,
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
  [5263] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(345), 1,
      anon_sym_EQ,
    ACTIONS(349), 1,
      anon_sym_COLON,
    STATE(79), 1,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(203), 6,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(201), 14,
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
  [5307] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(351), 1,
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
  [5347] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_AMP,
    ACTIONS(253), 1,
      anon_sym_CARET,
    ACTIONS(273), 1,
      anon_sym_AMP_AMP,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(341), 1,
      anon_sym_DOTwhile,
    STATE(81), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(353), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5411] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_AMP,
    ACTIONS(253), 1,
      anon_sym_CARET,
    ACTIONS(273), 1,
      anon_sym_AMP_AMP,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(341), 1,
      anon_sym_DOTwhile,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym__collection_sequence_repeat1,
    ACTIONS(239), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5479] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_AMP,
    ACTIONS(253), 1,
      anon_sym_CARET,
    ACTIONS(273), 1,
      anon_sym_AMP_AMP,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(341), 1,
      anon_sym_DOTwhile,
    STATE(83), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(359), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5543] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(84), 1,
      sym_comment,
    ACTIONS(361), 3,
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
  [5583] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_AMP,
    ACTIONS(253), 1,
      anon_sym_CARET,
    ACTIONS(273), 1,
      anon_sym_AMP_AMP,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(341), 1,
      anon_sym_DOTwhile,
    STATE(85), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(363), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5646] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_AMP,
    ACTIONS(253), 1,
      anon_sym_CARET,
    ACTIONS(273), 1,
      anon_sym_AMP_AMP,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(341), 1,
      anon_sym_DOTwhile,
    STATE(86), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(365), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5709] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_AMP,
    ACTIONS(253), 1,
      anon_sym_CARET,
    ACTIONS(273), 1,
      anon_sym_AMP_AMP,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(341), 1,
      anon_sym_DOTwhile,
    STATE(87), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(367), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5772] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_AMP,
    ACTIONS(253), 1,
      anon_sym_CARET,
    ACTIONS(273), 1,
      anon_sym_AMP_AMP,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(341), 1,
      anon_sym_DOTwhile,
    STATE(88), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(369), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5835] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(89), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(371), 9,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
    ACTIONS(373), 11,
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
  [5873] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(90), 1,
      sym_comment,
    ACTIONS(377), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(371), 9,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
    ACTIONS(373), 11,
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
  [5911] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    ACTIONS(249), 1,
      anon_sym_PIPE,
    ACTIONS(251), 1,
      anon_sym_AMP,
    ACTIONS(253), 1,
      anon_sym_CARET,
    ACTIONS(273), 1,
      anon_sym_AMP_AMP,
    ACTIONS(319), 1,
      anon_sym_DOT,
    ACTIONS(321), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(337), 1,
      anon_sym_EQ,
    ACTIONS(341), 1,
      anon_sym_DOTwhile,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      sym_comment,
    ACTIONS(239), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(255), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(277), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(275), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [5973] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(92), 1,
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
    ACTIONS(383), 13,
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
  [6009] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(93), 1,
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
    ACTIONS(387), 13,
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
  [6045] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(94), 1,
      sym_comment,
    ACTIONS(389), 9,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
    ACTIONS(391), 13,
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
  [6081] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(95), 1,
      sym_comment,
    ACTIONS(395), 9,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
    ACTIONS(393), 12,
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
  [6116] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(96), 1,
      sym_comment,
    ACTIONS(399), 9,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
    ACTIONS(397), 12,
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
  [6151] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(97), 1,
      sym_comment,
    ACTIONS(371), 9,
      anon_sym_if,
      anon_sym_while,
      sym_integer,
      anon_sym_true,
      anon_sym_false,
      anon_sym_var,
      anon_sym_classvar,
      aux_sym_environment_var_token1,
      sym_identifier,
    ACTIONS(373), 11,
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
  [6185] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(401), 1,
      anon_sym_BSLASH,
    ACTIONS(403), 1,
      sym_integer,
    ACTIONS(407), 1,
      anon_sym_SQUOTE,
    ACTIONS(409), 1,
      sym_char,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym_comment,
    STATE(144), 1,
      sym_literal,
    ACTIONS(405), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(413), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(168), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [6227] = 12,
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
    STATE(99), 1,
      sym_comment,
    STATE(144), 1,
      sym_literal,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(415), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(73), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [6269] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(421), 1,
      anon_sym_if,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    STATE(100), 1,
      sym_comment,
    ACTIONS(419), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6293] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(425), 1,
      sym_identifier,
    STATE(101), 1,
      sym_comment,
    STATE(171), 1,
      sym_associative_item,
    STATE(173), 1,
      sym_symbol,
  [6318] = 7,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(427), 1,
      anon_sym_DQUOTE,
    ACTIONS(429), 1,
      aux_sym_string_token1,
    ACTIONS(431), 1,
      sym_escape_sequence,
    ACTIONS(433), 1,
      sym_line_comment,
    STATE(102), 1,
      sym_comment,
    STATE(103), 1,
      aux_sym_string_repeat1,
  [6340] = 6,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(433), 1,
      sym_line_comment,
    ACTIONS(435), 1,
      anon_sym_DQUOTE,
    ACTIONS(437), 1,
      aux_sym_string_token1,
    ACTIONS(440), 1,
      sym_escape_sequence,
    STATE(103), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [6360] = 5,
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
  [6378] = 7,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(429), 1,
      aux_sym_string_token1,
    ACTIONS(431), 1,
      sym_escape_sequence,
    ACTIONS(433), 1,
      sym_line_comment,
    ACTIONS(447), 1,
      anon_sym_DQUOTE,
    STATE(103), 1,
      aux_sym_string_repeat1,
    STATE(105), 1,
      sym_comment,
  [6400] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(451), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_comment,
    ACTIONS(449), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6418] = 7,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(429), 1,
      aux_sym_string_token1,
    ACTIONS(431), 1,
      sym_escape_sequence,
    ACTIONS(433), 1,
      sym_line_comment,
    ACTIONS(453), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      aux_sym_string_repeat1,
    STATE(107), 1,
      sym_comment,
  [6440] = 7,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(429), 1,
      aux_sym_string_token1,
    ACTIONS(431), 1,
      sym_escape_sequence,
    ACTIONS(433), 1,
      sym_line_comment,
    ACTIONS(455), 1,
      anon_sym_DQUOTE,
    STATE(102), 1,
      aux_sym_string_repeat1,
    STATE(108), 1,
      sym_comment,
  [6462] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(457), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      sym_comment,
    ACTIONS(459), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6479] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(461), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym_comment,
    STATE(145), 1,
      aux_sym__collection_sequence_repeat1,
  [6498] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(111), 1,
      sym_comment,
    ACTIONS(463), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6513] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(468), 1,
      anon_sym_PIPE,
    STATE(112), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [6530] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(470), 1,
      anon_sym_EQ,
    STATE(113), 1,
      sym_comment,
    ACTIONS(472), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [6547] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      sym_comment,
    STATE(139), 1,
      aux_sym__paired_associative_sequence_repeat1,
  [6566] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      sym_comment,
    STATE(151), 1,
      aux_sym_parameter_call_list_repeat1,
  [6585] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(482), 1,
      anon_sym_SEMI,
    STATE(116), 1,
      sym_comment,
    ACTIONS(377), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6602] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(117), 1,
      sym_comment,
    ACTIONS(484), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6617] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(486), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_function_block,
    STATE(118), 1,
      sym_comment,
  [6636] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym_function_block,
    STATE(119), 1,
      sym_comment,
  [6655] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(120), 1,
      sym_comment,
    ACTIONS(490), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6670] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(121), 1,
      sym_comment,
    ACTIONS(492), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6685] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      aux_sym__collection_sequence_repeat1,
    STATE(122), 1,
      sym_comment,
  [6704] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_comment,
    STATE(189), 1,
      sym_function_block,
  [6723] = 5,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(433), 1,
      sym_line_comment,
    ACTIONS(496), 1,
      aux_sym_string_token1,
    STATE(124), 1,
      sym_comment,
    ACTIONS(494), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [6740] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(498), 1,
      anon_sym_EQ,
    STATE(125), 1,
      sym_comment,
    ACTIONS(472), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [6757] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(126), 1,
      sym_comment,
    ACTIONS(500), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6772] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(502), 1,
      sym_identifier,
    ACTIONS(504), 1,
      anon_sym_PIPE,
    STATE(127), 1,
      sym_comment,
    STATE(137), 1,
      sym_argument,
  [6791] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(504), 1,
      anon_sym_SEMI,
    ACTIONS(506), 1,
      sym_identifier,
    STATE(128), 1,
      sym_comment,
    STATE(132), 1,
      sym_argument,
  [6810] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    STATE(129), 1,
      sym_comment,
    STATE(153), 1,
      sym_function_block,
  [6829] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym__paired_associative_sequence_repeat1,
    STATE(130), 1,
      sym_comment,
  [6848] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_comment,
    STATE(201), 1,
      sym_function_block,
  [6867] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(510), 1,
      anon_sym_SEMI,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      sym_comment,
    STATE(142), 1,
      aux_sym_parameter_list_repeat1,
  [6886] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
      sym_comment,
    STATE(188), 1,
      sym_function_block,
  [6905] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(134), 1,
      sym_comment,
    ACTIONS(514), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6920] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(135), 1,
      sym_comment,
    ACTIONS(516), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6935] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    ACTIONS(520), 1,
      anon_sym_COMMA,
    STATE(136), 2,
      sym_comment,
      aux_sym_parameter_call_list_repeat1,
  [6952] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(510), 1,
      anon_sym_PIPE,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      sym_comment,
    STATE(143), 1,
      aux_sym_parameter_list_repeat1,
  [6971] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(138), 1,
      sym_comment,
    ACTIONS(525), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [6986] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    STATE(139), 2,
      sym_comment,
      aux_sym__paired_associative_sequence_repeat1,
  [7003] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(468), 1,
      anon_sym_SEMI,
    ACTIONS(532), 1,
      anon_sym_COMMA,
    STATE(140), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [7020] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(141), 1,
      sym_comment,
    ACTIONS(468), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [7035] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_SEMI,
    STATE(140), 1,
      aux_sym_parameter_list_repeat1,
    STATE(142), 1,
      sym_comment,
  [7054] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_PIPE,
    STATE(112), 1,
      aux_sym_parameter_list_repeat1,
    STATE(143), 1,
      sym_comment,
  [7073] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(144), 1,
      sym_comment,
    ACTIONS(537), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [7088] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(365), 1,
      anon_sym_RBRACK,
    ACTIONS(539), 1,
      anon_sym_COMMA,
    STATE(145), 2,
      sym_comment,
      aux_sym__collection_sequence_repeat1,
  [7105] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(542), 1,
      anon_sym_DOT,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
    STATE(120), 1,
      sym_class_method_call,
    STATE(146), 1,
      sym_comment,
  [7124] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    STATE(147), 1,
      sym_comment,
    STATE(196), 1,
      sym_function_block,
  [7143] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(148), 1,
      sym_comment,
    ACTIONS(335), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [7158] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(149), 1,
      sym_comment,
    ACTIONS(546), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [7173] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(150), 1,
      sym_comment,
    ACTIONS(548), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [7188] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(550), 1,
      anon_sym_RPAREN,
    STATE(136), 1,
      aux_sym_parameter_call_list_repeat1,
    STATE(151), 1,
      sym_comment,
  [7207] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym_comment,
    STATE(174), 1,
      sym_function_block,
  [7226] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      sym_comment,
  [7242] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
    STATE(154), 1,
      sym_comment,
  [7258] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(155), 1,
      sym_comment,
    ACTIONS(560), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [7272] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(502), 1,
      sym_identifier,
    STATE(141), 1,
      sym_argument,
    STATE(156), 1,
      sym_comment,
  [7288] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      sym_comment,
  [7304] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(158), 1,
      sym_comment,
    ACTIONS(562), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7318] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(564), 1,
      sym_identifier,
    ACTIONS(566), 1,
      aux_sym_symbol_token1,
    STATE(159), 1,
      sym_comment,
  [7334] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(160), 1,
      sym_comment,
    ACTIONS(568), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [7348] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(161), 1,
      sym_comment,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [7362] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(162), 1,
      sym_comment,
    ACTIONS(197), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [7376] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(163), 1,
      sym_comment,
    ACTIONS(243), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [7390] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(164), 1,
      sym_comment,
    ACTIONS(201), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [7404] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(165), 1,
      sym_comment,
    ACTIONS(365), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7418] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(166), 1,
      sym_comment,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [7432] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(506), 1,
      sym_identifier,
    STATE(141), 1,
      sym_argument,
    STATE(167), 1,
      sym_comment,
  [7448] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(168), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [7462] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(169), 1,
      sym_comment,
    ACTIONS(331), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [7476] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(170), 1,
      sym_comment,
    ACTIONS(566), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [7490] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(171), 1,
      sym_comment,
    ACTIONS(527), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7504] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(172), 1,
      sym_comment,
    ACTIONS(518), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [7518] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(173), 1,
      sym_comment,
    ACTIONS(209), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [7532] = 5,
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
  [7548] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(175), 1,
      sym_comment,
    ACTIONS(574), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [7562] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(576), 1,
      anon_sym_if,
    STATE(176), 1,
      sym_comment,
  [7575] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(578), 1,
      anon_sym_LPAREN,
    STATE(177), 1,
      sym_comment,
  [7588] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      sym_comment,
  [7601] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(582), 1,
      sym_identifier,
    STATE(179), 1,
      sym_comment,
  [7614] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      sym_comment,
  [7627] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
    STATE(181), 1,
      sym_comment,
  [7640] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
    STATE(182), 1,
      sym_comment,
  [7653] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      sym_comment,
  [7666] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      sym_comment,
  [7679] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_COLON,
    STATE(185), 1,
      sym_comment,
  [7692] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(588), 1,
      anon_sym_SQUOTE,
    STATE(186), 1,
      sym_comment,
  [7705] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(586), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      sym_comment,
  [7718] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(590), 1,
      anon_sym_RPAREN,
    STATE(188), 1,
      sym_comment,
  [7731] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      sym_comment,
  [7744] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(594), 1,
      anon_sym_LPAREN,
    STATE(190), 1,
      sym_comment,
  [7757] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    STATE(191), 1,
      sym_comment,
  [7770] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(598), 1,
      sym_identifier,
    STATE(192), 1,
      sym_comment,
  [7783] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    STATE(193), 1,
      sym_comment,
  [7796] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(602), 1,
      anon_sym_SEMI,
    STATE(194), 1,
      sym_comment,
  [7809] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(604), 1,
      anon_sym_SEMI,
    STATE(195), 1,
      sym_comment,
  [7822] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      sym_comment,
  [7835] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(608), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      sym_comment,
  [7848] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(610), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      sym_comment,
  [7861] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(612), 1,
      sym_identifier,
    STATE(199), 1,
      sym_comment,
  [7874] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(614), 1,
      sym_identifier,
    STATE(200), 1,
      sym_comment,
  [7887] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(616), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      sym_comment,
  [7900] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(618), 1,
      anon_sym_SQUOTE,
    STATE(202), 1,
      sym_comment,
  [7913] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      sym_comment,
  [7926] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      sym_comment,
  [7939] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(622), 1,
      ts_builtin_sym_end,
    STATE(205), 1,
      sym_comment,
  [7952] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
    STATE(206), 1,
      sym_comment,
  [7965] = 1,
    ACTIONS(626), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 124,
  [SMALL_STATE(4)] = 185,
  [SMALL_STATE(5)] = 306,
  [SMALL_STATE(6)] = 427,
  [SMALL_STATE(7)] = 542,
  [SMALL_STATE(8)] = 659,
  [SMALL_STATE(9)] = 773,
  [SMALL_STATE(10)] = 885,
  [SMALL_STATE(11)] = 997,
  [SMALL_STATE(12)] = 1109,
  [SMALL_STATE(13)] = 1170,
  [SMALL_STATE(14)] = 1274,
  [SMALL_STATE(15)] = 1380,
  [SMALL_STATE(16)] = 1483,
  [SMALL_STATE(17)] = 1586,
  [SMALL_STATE(18)] = 1689,
  [SMALL_STATE(19)] = 1792,
  [SMALL_STATE(20)] = 1889,
  [SMALL_STATE(21)] = 1987,
  [SMALL_STATE(22)] = 2082,
  [SMALL_STATE(23)] = 2172,
  [SMALL_STATE(24)] = 2262,
  [SMALL_STATE(25)] = 2352,
  [SMALL_STATE(26)] = 2444,
  [SMALL_STATE(27)] = 2534,
  [SMALL_STATE(28)] = 2624,
  [SMALL_STATE(29)] = 2714,
  [SMALL_STATE(30)] = 2804,
  [SMALL_STATE(31)] = 2894,
  [SMALL_STATE(32)] = 2984,
  [SMALL_STATE(33)] = 3074,
  [SMALL_STATE(34)] = 3164,
  [SMALL_STATE(35)] = 3254,
  [SMALL_STATE(36)] = 3344,
  [SMALL_STATE(37)] = 3434,
  [SMALL_STATE(38)] = 3475,
  [SMALL_STATE(39)] = 3516,
  [SMALL_STATE(40)] = 3558,
  [SMALL_STATE(41)] = 3598,
  [SMALL_STATE(42)] = 3638,
  [SMALL_STATE(43)] = 3678,
  [SMALL_STATE(44)] = 3718,
  [SMALL_STATE(45)] = 3758,
  [SMALL_STATE(46)] = 3798,
  [SMALL_STATE(47)] = 3838,
  [SMALL_STATE(48)] = 3882,
  [SMALL_STATE(49)] = 3922,
  [SMALL_STATE(50)] = 3968,
  [SMALL_STATE(51)] = 4022,
  [SMALL_STATE(52)] = 4062,
  [SMALL_STATE(53)] = 4102,
  [SMALL_STATE(54)] = 4142,
  [SMALL_STATE(55)] = 4182,
  [SMALL_STATE(56)] = 4232,
  [SMALL_STATE(57)] = 4280,
  [SMALL_STATE(58)] = 4340,
  [SMALL_STATE(59)] = 4380,
  [SMALL_STATE(60)] = 4438,
  [SMALL_STATE(61)] = 4490,
  [SMALL_STATE(62)] = 4530,
  [SMALL_STATE(63)] = 4570,
  [SMALL_STATE(64)] = 4610,
  [SMALL_STATE(65)] = 4650,
  [SMALL_STATE(66)] = 4692,
  [SMALL_STATE(67)] = 4732,
  [SMALL_STATE(68)] = 4772,
  [SMALL_STATE(69)] = 4812,
  [SMALL_STATE(70)] = 4852,
  [SMALL_STATE(71)] = 4892,
  [SMALL_STATE(72)] = 4932,
  [SMALL_STATE(73)] = 4996,
  [SMALL_STATE(74)] = 5036,
  [SMALL_STATE(75)] = 5076,
  [SMALL_STATE(76)] = 5116,
  [SMALL_STATE(77)] = 5156,
  [SMALL_STATE(78)] = 5223,
  [SMALL_STATE(79)] = 5263,
  [SMALL_STATE(80)] = 5307,
  [SMALL_STATE(81)] = 5347,
  [SMALL_STATE(82)] = 5411,
  [SMALL_STATE(83)] = 5479,
  [SMALL_STATE(84)] = 5543,
  [SMALL_STATE(85)] = 5583,
  [SMALL_STATE(86)] = 5646,
  [SMALL_STATE(87)] = 5709,
  [SMALL_STATE(88)] = 5772,
  [SMALL_STATE(89)] = 5835,
  [SMALL_STATE(90)] = 5873,
  [SMALL_STATE(91)] = 5911,
  [SMALL_STATE(92)] = 5973,
  [SMALL_STATE(93)] = 6009,
  [SMALL_STATE(94)] = 6045,
  [SMALL_STATE(95)] = 6081,
  [SMALL_STATE(96)] = 6116,
  [SMALL_STATE(97)] = 6151,
  [SMALL_STATE(98)] = 6185,
  [SMALL_STATE(99)] = 6227,
  [SMALL_STATE(100)] = 6269,
  [SMALL_STATE(101)] = 6293,
  [SMALL_STATE(102)] = 6318,
  [SMALL_STATE(103)] = 6340,
  [SMALL_STATE(104)] = 6360,
  [SMALL_STATE(105)] = 6378,
  [SMALL_STATE(106)] = 6400,
  [SMALL_STATE(107)] = 6418,
  [SMALL_STATE(108)] = 6440,
  [SMALL_STATE(109)] = 6462,
  [SMALL_STATE(110)] = 6479,
  [SMALL_STATE(111)] = 6498,
  [SMALL_STATE(112)] = 6513,
  [SMALL_STATE(113)] = 6530,
  [SMALL_STATE(114)] = 6547,
  [SMALL_STATE(115)] = 6566,
  [SMALL_STATE(116)] = 6585,
  [SMALL_STATE(117)] = 6602,
  [SMALL_STATE(118)] = 6617,
  [SMALL_STATE(119)] = 6636,
  [SMALL_STATE(120)] = 6655,
  [SMALL_STATE(121)] = 6670,
  [SMALL_STATE(122)] = 6685,
  [SMALL_STATE(123)] = 6704,
  [SMALL_STATE(124)] = 6723,
  [SMALL_STATE(125)] = 6740,
  [SMALL_STATE(126)] = 6757,
  [SMALL_STATE(127)] = 6772,
  [SMALL_STATE(128)] = 6791,
  [SMALL_STATE(129)] = 6810,
  [SMALL_STATE(130)] = 6829,
  [SMALL_STATE(131)] = 6848,
  [SMALL_STATE(132)] = 6867,
  [SMALL_STATE(133)] = 6886,
  [SMALL_STATE(134)] = 6905,
  [SMALL_STATE(135)] = 6920,
  [SMALL_STATE(136)] = 6935,
  [SMALL_STATE(137)] = 6952,
  [SMALL_STATE(138)] = 6971,
  [SMALL_STATE(139)] = 6986,
  [SMALL_STATE(140)] = 7003,
  [SMALL_STATE(141)] = 7020,
  [SMALL_STATE(142)] = 7035,
  [SMALL_STATE(143)] = 7054,
  [SMALL_STATE(144)] = 7073,
  [SMALL_STATE(145)] = 7088,
  [SMALL_STATE(146)] = 7105,
  [SMALL_STATE(147)] = 7124,
  [SMALL_STATE(148)] = 7143,
  [SMALL_STATE(149)] = 7158,
  [SMALL_STATE(150)] = 7173,
  [SMALL_STATE(151)] = 7188,
  [SMALL_STATE(152)] = 7207,
  [SMALL_STATE(153)] = 7226,
  [SMALL_STATE(154)] = 7242,
  [SMALL_STATE(155)] = 7258,
  [SMALL_STATE(156)] = 7272,
  [SMALL_STATE(157)] = 7288,
  [SMALL_STATE(158)] = 7304,
  [SMALL_STATE(159)] = 7318,
  [SMALL_STATE(160)] = 7334,
  [SMALL_STATE(161)] = 7348,
  [SMALL_STATE(162)] = 7362,
  [SMALL_STATE(163)] = 7376,
  [SMALL_STATE(164)] = 7390,
  [SMALL_STATE(165)] = 7404,
  [SMALL_STATE(166)] = 7418,
  [SMALL_STATE(167)] = 7432,
  [SMALL_STATE(168)] = 7448,
  [SMALL_STATE(169)] = 7462,
  [SMALL_STATE(170)] = 7476,
  [SMALL_STATE(171)] = 7490,
  [SMALL_STATE(172)] = 7504,
  [SMALL_STATE(173)] = 7518,
  [SMALL_STATE(174)] = 7532,
  [SMALL_STATE(175)] = 7548,
  [SMALL_STATE(176)] = 7562,
  [SMALL_STATE(177)] = 7575,
  [SMALL_STATE(178)] = 7588,
  [SMALL_STATE(179)] = 7601,
  [SMALL_STATE(180)] = 7614,
  [SMALL_STATE(181)] = 7627,
  [SMALL_STATE(182)] = 7640,
  [SMALL_STATE(183)] = 7653,
  [SMALL_STATE(184)] = 7666,
  [SMALL_STATE(185)] = 7679,
  [SMALL_STATE(186)] = 7692,
  [SMALL_STATE(187)] = 7705,
  [SMALL_STATE(188)] = 7718,
  [SMALL_STATE(189)] = 7731,
  [SMALL_STATE(190)] = 7744,
  [SMALL_STATE(191)] = 7757,
  [SMALL_STATE(192)] = 7770,
  [SMALL_STATE(193)] = 7783,
  [SMALL_STATE(194)] = 7796,
  [SMALL_STATE(195)] = 7809,
  [SMALL_STATE(196)] = 7822,
  [SMALL_STATE(197)] = 7835,
  [SMALL_STATE(198)] = 7848,
  [SMALL_STATE(199)] = 7861,
  [SMALL_STATE(200)] = 7874,
  [SMALL_STATE(201)] = 7887,
  [SMALL_STATE(202)] = 7900,
  [SMALL_STATE(203)] = 7913,
  [SMALL_STATE(204)] = 7926,
  [SMALL_STATE(205)] = 7939,
  [SMALL_STATE(206)] = 7952,
  [SMALL_STATE(207)] = 7965,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(177),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(190),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(170),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(175),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(179),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(192),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object, 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object, 1),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(68),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(177),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(190),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(7),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(4),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(170),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(76),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(76),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(175),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(73),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(107),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(58),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(179),
  [170] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(192),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(54),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(200),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(20),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(146),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6, .production_id = 8),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6, .production_id = 8),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 8, .production_id = 11),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 8, .production_id = 11),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6, .production_id = 10),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6, .production_id = 10),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 3, .production_id = 5),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 3, .production_id = 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 8, .production_id = 12),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 8, .production_id = 12),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 2),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classvar, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classvar, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_var, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_var, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_var, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_var, 1),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 5),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 5),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 6),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 6),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_structure, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_structure, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 4, .production_id = 7),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4, .production_id = 7),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 6, .production_id = 9),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 6, .production_id = 9),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_item, 3, .production_id = 6),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_sequence, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnamed_argument, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__collection_sequence_repeat1, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 1),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(124),
  [440] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(124),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 2, .production_id = 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 2, .production_id = 4),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_sequence, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 2),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(156),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paired_associative_sequence, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_call_list, 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 5, .production_id = 4),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 5, .production_id = 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paired_associative_sequence, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 4, .production_id = 4),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 4),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_call_list_repeat1, 2),
  [520] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_call_list_repeat1, 2), SHIFT_REPEAT(19),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 4, .production_id = 2),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__paired_associative_sequence_repeat1, 2),
  [529] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__paired_associative_sequence_repeat1, 2), SHIFT_REPEAT(101),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(167),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__collection_sequence_repeat1, 2), SHIFT_REPEAT(21),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 3),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 3),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_call_list, 2),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_calls, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [622] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
