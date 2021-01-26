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
#define STATE_COUNT 259
#define LARGE_STATE_COUNT 38
#define SYMBOL_COUNT 146
#define ALIAS_COUNT 4
#define TOKEN_COUNT 95
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 10

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
  anon_sym_for = 90,
  anon_sym_DOTfor = 91,
  anon_sym_forBy = 92,
  anon_sym_DOTforBy = 93,
  anon_sym_case = 94,
  sym_source_file = 95,
  sym__expression = 96,
  sym__expression_statement = 97,
  sym__object = 98,
  sym_function_definition = 99,
  sym_function_call = 100,
  sym_instance_method_call = 101,
  sym_class_method_call = 102,
  sym__expression_sequence = 103,
  sym_code_block = 104,
  sym_function_block = 105,
  sym_parameter_list = 106,
  sym_argument = 107,
  sym_parameter_call_list = 108,
  sym_argument_calls = 109,
  sym_unnamed_argument = 110,
  sym_named_argument = 111,
  sym_literal = 112,
  sym_number = 113,
  sym_symbol = 114,
  sym_string = 115,
  sym_bool = 116,
  sym_variable = 117,
  sym_local_var = 118,
  sym_classvar = 119,
  sym_environment_var = 120,
  sym_variable_definition = 121,
  sym_comment = 122,
  sym_collection = 123,
  sym__collection_sequence = 124,
  sym__paired_associative_sequence = 125,
  sym_associative_item = 126,
  sym__collection_types = 127,
  sym__unordered_collection_types = 128,
  sym__ordered_collection_types = 129,
  sym_binary_expression = 130,
  sym_control_structure = 131,
  sym_if = 132,
  sym_while = 133,
  sym_for = 134,
  sym_forby = 135,
  sym_case = 136,
  aux_sym_source_file_repeat1 = 137,
  aux_sym_function_call_repeat1 = 138,
  aux_sym__expression_sequence_repeat1 = 139,
  aux_sym_parameter_list_repeat1 = 140,
  aux_sym_parameter_call_list_repeat1 = 141,
  aux_sym_string_repeat1 = 142,
  aux_sym__collection_sequence_repeat1 = 143,
  aux_sym__paired_associative_sequence_repeat1 = 144,
  aux_sym_case_repeat1 = 145,
  alias_sym_class_method_name = 146,
  alias_sym_item = 147,
  alias_sym_method_name = 148,
  alias_sym_receiver = 149,
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
  [anon_sym_for] = "for",
  [anon_sym_DOTfor] = ".for",
  [anon_sym_forBy] = "forBy",
  [anon_sym_DOTforBy] = ".forBy",
  [anon_sym_case] = "case",
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
  [sym_for] = "for",
  [sym_forby] = "forby",
  [sym_case] = "case",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
  [aux_sym__expression_sequence_repeat1] = "_expression_sequence_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_parameter_call_list_repeat1] = "parameter_call_list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__collection_sequence_repeat1] = "_collection_sequence_repeat1",
  [aux_sym__paired_associative_sequence_repeat1] = "_paired_associative_sequence_repeat1",
  [aux_sym_case_repeat1] = "case_repeat1",
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
  [anon_sym_for] = anon_sym_for,
  [anon_sym_DOTfor] = anon_sym_DOTfor,
  [anon_sym_forBy] = anon_sym_forBy,
  [anon_sym_DOTforBy] = anon_sym_DOTforBy,
  [anon_sym_case] = anon_sym_case,
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
  [sym_for] = sym_for,
  [sym_forby] = sym_forby,
  [sym_case] = sym_case,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
  [aux_sym__expression_sequence_repeat1] = aux_sym__expression_sequence_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_parameter_call_list_repeat1] = aux_sym_parameter_call_list_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym__collection_sequence_repeat1] = aux_sym__collection_sequence_repeat1,
  [aux_sym__paired_associative_sequence_repeat1] = aux_sym__paired_associative_sequence_repeat1,
  [aux_sym_case_repeat1] = aux_sym_case_repeat1,
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
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forBy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTforBy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
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
  [sym_for] = {
    .visible = true,
    .named = true,
  },
  [sym_forby] = {
    .visible = true,
    .named = true,
  },
  [sym_case] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
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
  [aux_sym_case_repeat1] = {
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
      if (eof) ADVANCE(29);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '&') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '+') ADVANCE(118);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == '0') ADVANCE(47);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'B') ADVANCE(151);
      if (lookahead == 'D') ADVANCE(226);
      if (lookahead == 'E') ADVANCE(265);
      if (lookahead == 'F') ADVANCE(251);
      if (lookahead == 'I') ADVANCE(191);
      if (lookahead == 'L') ADVANCE(152);
      if (lookahead == 'M') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(175);
      if (lookahead == 'P') ADVANCE(153);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(197);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '^') ADVANCE(109);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(389);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(64);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(66);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(67);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 10:
      if (lookahead == '\\') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(391);
      END_STATE();
    case 13:
      if (lookahead == 'h') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 18:
      if (lookahead == 'y') ADVANCE(393);
      END_STATE();
    case 19:
      if (lookahead == '{') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == '}') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(53);
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '%') ADVANCE(122);
      if (lookahead == '&') ADVANCE(108);
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '*') ADVANCE(120);
      if (lookahead == '+') ADVANCE(118);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(119);
      if (lookahead == '.') ADVANCE(35);
      if (lookahead == '/') ADVANCE(121);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '<') ADVANCE(112);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(114);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'B') ADVANCE(151);
      if (lookahead == 'D') ADVANCE(226);
      if (lookahead == 'E') ADVANCE(265);
      if (lookahead == 'F') ADVANCE(251);
      if (lookahead == 'I') ADVANCE(191);
      if (lookahead == 'L') ADVANCE(152);
      if (lookahead == 'M') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(175);
      if (lookahead == 'P') ADVANCE(153);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(197);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == ']') ADVANCE(71);
      if (lookahead == '^') ADVANCE(109);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(42);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(389);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead == '#') ADVANCE(68);
      if (lookahead == '$') ADVANCE(26);
      if (lookahead == '\'') ADVANCE(52);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '0') ADVANCE(45);
      if (lookahead == ';') ADVANCE(30);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == 'B') ADVANCE(151);
      if (lookahead == 'D') ADVANCE(226);
      if (lookahead == 'E') ADVANCE(265);
      if (lookahead == 'F') ADVANCE(251);
      if (lookahead == 'I') ADVANCE(191);
      if (lookahead == 'L') ADVANCE(152);
      if (lookahead == 'M') ADVANCE(359);
      if (lookahead == 'O') ADVANCE(175);
      if (lookahead == 'P') ADVANCE(153);
      if (lookahead == 'R') ADVANCE(154);
      if (lookahead == 'S') ADVANCE(197);
      if (lookahead == 'T') ADVANCE(367);
      if (lookahead == '[') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(43);
      if (lookahead == '`') ADVANCE(69);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(41);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '~') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(46);
      if (('C' <= lookahead && lookahead <= 'Z')) ADVANCE(389);
      if (('_' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(110);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'w') ADVANCE(13);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'w') ADVANCE(13);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(107);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'x') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'x') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_hexinteger);
      if (lookahead == '\\') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(60);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '/') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(55);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(61);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_Bag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_Dictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_Environment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_Event);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_IdentityBag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_IdentityDictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_IdentitySet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LazyEnvir);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_MultiLevelIdentityDictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ObjectTable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_Set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_TwoWayIdentityDictionary);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_Array);
      if (lookahead == '2') ADVANCE(137);
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_Array2D);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_ArrayedCollection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DoubleArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_FloatArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_Int16Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_Int32Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_Int8Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LinkedList);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_List);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_Order);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_OrderedIdentitySet);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_Pair);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PriorityQueue);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RawArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SequenceableCollection);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_Signal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SortedList);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SparseArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_String);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SymbolArray);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(106);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(116);
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(115);
      if (lookahead == '>') ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(72);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(66);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '1') ADVANCE(125);
      if (lookahead == '3') ADVANCE(124);
      if (lookahead == '8') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '2') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == '6') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'A') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'B') ADVANCE(158);
      if (lookahead == 'D') ADVANCE(245);
      if (lookahead == 'S') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'C') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'C') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'D') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'D') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'D') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'E') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'I') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'I') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'I') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'L') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'L') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'L') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'Q') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'S') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'T') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'W') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(388);
      if (lookahead == 'i') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'a') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(249);
      if (lookahead == 'r') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'b') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'c') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(209);
      if (lookahead == 'n') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'd') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'i') ADVANCE(225);
      if (lookahead == 'o') ADVANCE(305);
      if (lookahead == 'p') ADVANCE(159);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == 'y') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'e') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'g') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'o') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'i') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'j') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'k') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'l') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'm') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'm') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(364);
      if (lookahead == 'v') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(250);
      if (lookahead == 's') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'n') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'o') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'q') ADVANCE(362);
      if (lookahead == 't') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'r') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 's') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 's') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 's') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 't') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'u') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'v') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'v') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'v') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'w') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'w') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'y') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_class);
      if (lookahead == 'z') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(389);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(390);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_DOTwhile);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_DOTfor);
      if (lookahead == 'B') ADVANCE(18);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_DOTforBy);
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
      if (lookahead == 'a') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'f') ADVANCE(14);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      END_STATE();
    case 9:
      if (lookahead == 'g') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_arg);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'B') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'y') ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'v') ADVANCE(36);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_forBy);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_classvar);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 28},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 28},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 28},
  [31] = {.lex_state = 28},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 28},
  [38] = {.lex_state = 28},
  [39] = {.lex_state = 28},
  [40] = {.lex_state = 28},
  [41] = {.lex_state = 28},
  [42] = {.lex_state = 28},
  [43] = {.lex_state = 28},
  [44] = {.lex_state = 28},
  [45] = {.lex_state = 28},
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 27},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 27},
  [51] = {.lex_state = 27},
  [52] = {.lex_state = 27},
  [53] = {.lex_state = 27},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 27},
  [59] = {.lex_state = 27},
  [60] = {.lex_state = 27},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 27},
  [63] = {.lex_state = 27},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 27},
  [67] = {.lex_state = 27},
  [68] = {.lex_state = 27},
  [69] = {.lex_state = 27},
  [70] = {.lex_state = 27},
  [71] = {.lex_state = 27},
  [72] = {.lex_state = 27},
  [73] = {.lex_state = 27},
  [74] = {.lex_state = 27},
  [75] = {.lex_state = 27},
  [76] = {.lex_state = 27},
  [77] = {.lex_state = 27},
  [78] = {.lex_state = 27},
  [79] = {.lex_state = 27},
  [80] = {.lex_state = 27},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 27},
  [83] = {.lex_state = 27},
  [84] = {.lex_state = 27},
  [85] = {.lex_state = 27},
  [86] = {.lex_state = 27},
  [87] = {.lex_state = 27},
  [88] = {.lex_state = 27},
  [89] = {.lex_state = 27},
  [90] = {.lex_state = 27},
  [91] = {.lex_state = 27},
  [92] = {.lex_state = 27},
  [93] = {.lex_state = 27},
  [94] = {.lex_state = 27},
  [95] = {.lex_state = 27},
  [96] = {.lex_state = 27},
  [97] = {.lex_state = 27},
  [98] = {.lex_state = 27},
  [99] = {.lex_state = 27},
  [100] = {.lex_state = 27},
  [101] = {.lex_state = 27},
  [102] = {.lex_state = 27},
  [103] = {.lex_state = 27},
  [104] = {.lex_state = 27},
  [105] = {.lex_state = 27},
  [106] = {.lex_state = 27},
  [107] = {.lex_state = 28},
  [108] = {.lex_state = 28},
  [109] = {.lex_state = 28},
  [110] = {.lex_state = 28},
  [111] = {.lex_state = 28},
  [112] = {.lex_state = 28},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 28},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 28},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 28},
  [122] = {.lex_state = 28},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 28},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 28},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 28},
  [133] = {.lex_state = 28},
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
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 28},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 28},
  [161] = {.lex_state = 28},
  [162] = {.lex_state = 28},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 28},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 28},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 7},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 28},
  [185] = {.lex_state = 28},
  [186] = {.lex_state = 28},
  [187] = {.lex_state = 28},
  [188] = {.lex_state = 28},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 28},
  [191] = {.lex_state = 28},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 7},
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
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 8},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 8},
  [224] = {.lex_state = 8},
  [225] = {.lex_state = 8},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 8},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 8},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {(TSStateId)(-1)},
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
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_DOTfor] = ACTIONS(1),
    [anon_sym_forBy] = ACTIONS(1),
    [anon_sym_DOTforBy] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(245),
    [sym__expression] = STATE(44),
    [sym__expression_statement] = STATE(246),
    [sym__object] = STATE(79),
    [sym_function_definition] = STATE(130),
    [sym_function_call] = STATE(130),
    [sym_code_block] = STATE(22),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(101),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_variable_definition] = STATE(130),
    [sym_comment] = STATE(1),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
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
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [2] = {
    [sym__expression_statement] = STATE(169),
    [sym__object] = STATE(79),
    [sym_function_definition] = STATE(130),
    [sym_function_call] = STATE(130),
    [sym__expression_sequence] = STATE(179),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_parameter_list] = STATE(6),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(101),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_variable_definition] = STATE(130),
    [sym_comment] = STATE(2),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
    [aux_sym__expression_sequence_repeat1] = STATE(12),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_arg] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(63),
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
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [3] = {
    [sym__expression_statement] = STATE(169),
    [sym__object] = STATE(79),
    [sym_function_definition] = STATE(130),
    [sym_function_call] = STATE(130),
    [sym__expression_sequence] = STATE(205),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_parameter_list] = STATE(7),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(101),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_variable_definition] = STATE(130),
    [sym_comment] = STATE(3),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
    [aux_sym__expression_sequence_repeat1] = STATE(12),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(59),
    [anon_sym_arg] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(63),
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
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [4] = {
    [sym__expression_statement] = STATE(169),
    [sym__object] = STATE(79),
    [sym_function_definition] = STATE(130),
    [sym_function_call] = STATE(130),
    [sym__expression_sequence] = STATE(247),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_parameter_list] = STATE(10),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(101),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_variable_definition] = STATE(130),
    [sym_comment] = STATE(4),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
    [aux_sym__expression_sequence_repeat1] = STATE(12),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_arg] = ACTIONS(61),
    [anon_sym_PIPE] = ACTIONS(63),
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
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [5] = {
    [sym__expression_statement] = STATE(169),
    [sym__object] = STATE(79),
    [sym_function_definition] = STATE(130),
    [sym_function_call] = STATE(130),
    [sym__expression_sequence] = STATE(251),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(101),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_variable_definition] = STATE(130),
    [sym_comment] = STATE(5),
    [sym_collection] = STATE(78),
    [sym__paired_associative_sequence] = STATE(255),
    [sym_associative_item] = STATE(166),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
    [aux_sym__expression_sequence_repeat1] = STATE(12),
    [sym_identifier] = ACTIONS(65),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(67),
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
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [6] = {
    [sym__expression_statement] = STATE(169),
    [sym__object] = STATE(79),
    [sym_function_definition] = STATE(130),
    [sym_function_call] = STATE(130),
    [sym__expression_sequence] = STATE(174),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(101),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_variable_definition] = STATE(130),
    [sym_comment] = STATE(6),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
    [aux_sym__expression_sequence_repeat1] = STATE(12),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(69),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(71),
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
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [7] = {
    [sym__expression_statement] = STATE(169),
    [sym__object] = STATE(79),
    [sym_function_definition] = STATE(130),
    [sym_function_call] = STATE(130),
    [sym__expression_sequence] = STATE(254),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(101),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_variable_definition] = STATE(130),
    [sym_comment] = STATE(7),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
    [aux_sym__expression_sequence_repeat1] = STATE(12),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(71),
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
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [8] = {
    [sym__expression] = STATE(44),
    [sym__expression_statement] = STATE(246),
    [sym__object] = STATE(79),
    [sym_function_definition] = STATE(130),
    [sym_function_call] = STATE(130),
    [sym_code_block] = STATE(22),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(101),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_variable_definition] = STATE(130),
    [sym_comment] = STATE(8),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
    [aux_sym_source_file_repeat1] = STATE(8),
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
    [anon_sym_for] = ACTIONS(138),
    [anon_sym_forBy] = ACTIONS(141),
    [anon_sym_case] = ACTIONS(144),
  },
  [9] = {
    [sym__expression] = STATE(44),
    [sym__expression_statement] = STATE(246),
    [sym__object] = STATE(79),
    [sym_function_definition] = STATE(130),
    [sym_function_call] = STATE(130),
    [sym_code_block] = STATE(22),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(101),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_variable_definition] = STATE(130),
    [sym_comment] = STATE(9),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(147),
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
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [10] = {
    [sym__expression_statement] = STATE(169),
    [sym__object] = STATE(79),
    [sym_function_definition] = STATE(130),
    [sym_function_call] = STATE(130),
    [sym__expression_sequence] = STATE(211),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(101),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_variable_definition] = STATE(130),
    [sym_comment] = STATE(10),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
    [aux_sym__expression_sequence_repeat1] = STATE(12),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(69),
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
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [11] = {
    [sym__expression_statement] = STATE(239),
    [sym__object] = STATE(79),
    [sym_function_definition] = STATE(130),
    [sym_function_call] = STATE(130),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(101),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_variable_definition] = STATE(130),
    [sym_comment] = STATE(11),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
    [aux_sym__expression_sequence_repeat1] = STATE(11),
    [sym_identifier] = ACTIONS(149),
    [anon_sym_if] = ACTIONS(152),
    [anon_sym_while] = ACTIONS(155),
    [anon_sym_LPAREN] = ACTIONS(158),
    [anon_sym_LBRACE] = ACTIONS(161),
    [anon_sym_BSLASH] = ACTIONS(164),
    [sym_integer] = ACTIONS(167),
    [sym_hexinteger] = ACTIONS(170),
    [sym_float] = ACTIONS(170),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [sym_char] = ACTIONS(176),
    [anon_sym_DQUOTE] = ACTIONS(179),
    [anon_sym_true] = ACTIONS(182),
    [anon_sym_false] = ACTIONS(182),
    [anon_sym_var] = ACTIONS(185),
    [anon_sym_classvar] = ACTIONS(188),
    [aux_sym_environment_var_token1] = ACTIONS(191),
    [anon_sym_TILDE] = ACTIONS(194),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(197),
    [anon_sym_BQUOTE] = ACTIONS(197),
    [anon_sym_LBRACK] = ACTIONS(200),
    [anon_sym_Bag] = ACTIONS(203),
    [anon_sym_Dictionary] = ACTIONS(203),
    [anon_sym_Environment] = ACTIONS(203),
    [anon_sym_Event] = ACTIONS(203),
    [anon_sym_IdentityBag] = ACTIONS(203),
    [anon_sym_IdentityDictionary] = ACTIONS(203),
    [anon_sym_IdentitySet] = ACTIONS(203),
    [anon_sym_LazyEnvir] = ACTIONS(203),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(203),
    [anon_sym_ObjectTable] = ACTIONS(203),
    [anon_sym_Set] = ACTIONS(203),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(203),
    [anon_sym_Array] = ACTIONS(206),
    [anon_sym_Array2D] = ACTIONS(206),
    [anon_sym_ArrayedCollection] = ACTIONS(206),
    [anon_sym_DoubleArray] = ACTIONS(206),
    [anon_sym_FloatArray] = ACTIONS(206),
    [anon_sym_Int16Array] = ACTIONS(206),
    [anon_sym_Int32Array] = ACTIONS(206),
    [anon_sym_Int8Array] = ACTIONS(206),
    [anon_sym_LinkedList] = ACTIONS(206),
    [anon_sym_List] = ACTIONS(206),
    [anon_sym_Order] = ACTIONS(206),
    [anon_sym_OrderedIdentitySet] = ACTIONS(206),
    [anon_sym_Pair] = ACTIONS(206),
    [anon_sym_PriorityQueue] = ACTIONS(206),
    [anon_sym_RawArray] = ACTIONS(206),
    [anon_sym_SequenceableCollection] = ACTIONS(206),
    [anon_sym_Signal] = ACTIONS(206),
    [anon_sym_SortedList] = ACTIONS(206),
    [anon_sym_SparseArray] = ACTIONS(206),
    [anon_sym_String] = ACTIONS(206),
    [anon_sym_SymbolArray] = ACTIONS(206),
    [sym_class] = ACTIONS(209),
    [anon_sym_for] = ACTIONS(212),
    [anon_sym_forBy] = ACTIONS(215),
    [anon_sym_case] = ACTIONS(218),
  },
  [12] = {
    [sym__expression_statement] = STATE(139),
    [sym__object] = STATE(79),
    [sym_function_definition] = STATE(130),
    [sym_function_call] = STATE(130),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(101),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_variable_definition] = STATE(130),
    [sym_comment] = STATE(12),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
    [aux_sym__expression_sequence_repeat1] = STATE(11),
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
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [13] = {
    [sym__object] = STATE(102),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_parameter_call_list] = STATE(215),
    [sym_argument_calls] = STATE(140),
    [sym_unnamed_argument] = STATE(194),
    [sym_named_argument] = STATE(194),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(13),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
    [sym_identifier] = ACTIONS(221),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(225),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [14] = {
    [sym__object] = STATE(102),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_parameter_call_list] = STATE(204),
    [sym_argument_calls] = STATE(140),
    [sym_unnamed_argument] = STATE(194),
    [sym_named_argument] = STATE(194),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(14),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
    [sym_identifier] = ACTIONS(221),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(225),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [15] = {
    [sym__object] = STATE(102),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_parameter_call_list] = STATE(238),
    [sym_argument_calls] = STATE(140),
    [sym_unnamed_argument] = STATE(194),
    [sym_named_argument] = STATE(194),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(15),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
    [sym_identifier] = ACTIONS(221),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(225),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [16] = {
    [sym__object] = STATE(102),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_parameter_call_list] = STATE(244),
    [sym_argument_calls] = STATE(140),
    [sym_unnamed_argument] = STATE(194),
    [sym_named_argument] = STATE(194),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(16),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
    [sym_identifier] = ACTIONS(221),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(225),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [17] = {
    [sym_comment] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(237),
    [sym_identifier] = ACTIONS(239),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_if] = ACTIONS(239),
    [anon_sym_while] = ACTIONS(239),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(237),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_LBRACE] = ACTIONS(237),
    [anon_sym_RBRACE] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_PIPE] = ACTIONS(239),
    [anon_sym_BSLASH] = ACTIONS(237),
    [sym_integer] = ACTIONS(239),
    [sym_hexinteger] = ACTIONS(237),
    [sym_float] = ACTIONS(237),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [sym_char] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [anon_sym_true] = ACTIONS(239),
    [anon_sym_false] = ACTIONS(239),
    [anon_sym_var] = ACTIONS(239),
    [anon_sym_classvar] = ACTIONS(239),
    [aux_sym_environment_var_token1] = ACTIONS(239),
    [anon_sym_TILDE] = ACTIONS(237),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(237),
    [anon_sym_BQUOTE] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_RBRACK] = ACTIONS(237),
    [anon_sym_Bag] = ACTIONS(239),
    [anon_sym_Dictionary] = ACTIONS(239),
    [anon_sym_Environment] = ACTIONS(239),
    [anon_sym_Event] = ACTIONS(239),
    [anon_sym_IdentityBag] = ACTIONS(239),
    [anon_sym_IdentityDictionary] = ACTIONS(239),
    [anon_sym_IdentitySet] = ACTIONS(239),
    [anon_sym_LazyEnvir] = ACTIONS(239),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(239),
    [anon_sym_ObjectTable] = ACTIONS(239),
    [anon_sym_Set] = ACTIONS(239),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(239),
    [anon_sym_Array] = ACTIONS(239),
    [anon_sym_Array2D] = ACTIONS(239),
    [anon_sym_ArrayedCollection] = ACTIONS(239),
    [anon_sym_DoubleArray] = ACTIONS(239),
    [anon_sym_FloatArray] = ACTIONS(239),
    [anon_sym_Int16Array] = ACTIONS(239),
    [anon_sym_Int32Array] = ACTIONS(239),
    [anon_sym_Int8Array] = ACTIONS(239),
    [anon_sym_LinkedList] = ACTIONS(239),
    [anon_sym_List] = ACTIONS(239),
    [anon_sym_Order] = ACTIONS(239),
    [anon_sym_OrderedIdentitySet] = ACTIONS(239),
    [anon_sym_Pair] = ACTIONS(239),
    [anon_sym_PriorityQueue] = ACTIONS(239),
    [anon_sym_RawArray] = ACTIONS(239),
    [anon_sym_SequenceableCollection] = ACTIONS(239),
    [anon_sym_Signal] = ACTIONS(239),
    [anon_sym_SortedList] = ACTIONS(239),
    [anon_sym_SparseArray] = ACTIONS(239),
    [anon_sym_String] = ACTIONS(239),
    [anon_sym_SymbolArray] = ACTIONS(239),
    [anon_sym_AMP_AMP] = ACTIONS(237),
    [anon_sym_PIPE_PIPE] = ACTIONS(237),
    [anon_sym_AMP] = ACTIONS(239),
    [anon_sym_CARET] = ACTIONS(237),
    [anon_sym_EQ_EQ] = ACTIONS(237),
    [anon_sym_BANG_EQ] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(239),
    [anon_sym_LT_EQ] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(239),
    [anon_sym_GT_EQ] = ACTIONS(237),
    [anon_sym_LT_LT] = ACTIONS(237),
    [anon_sym_GT_GT] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(239),
    [anon_sym_PERCENT] = ACTIONS(237),
    [sym_class] = ACTIONS(239),
    [anon_sym_DOTwhile] = ACTIONS(237),
    [anon_sym_for] = ACTIONS(239),
    [anon_sym_forBy] = ACTIONS(239),
    [anon_sym_case] = ACTIONS(239),
  },
  [18] = {
    [sym__object] = STATE(102),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_argument_calls] = STATE(199),
    [sym_unnamed_argument] = STATE(194),
    [sym_named_argument] = STATE(194),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(18),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
    [sym_identifier] = ACTIONS(221),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(225),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [19] = {
    [sym__object] = STATE(95),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(19),
    [sym_collection] = STATE(78),
    [sym__collection_sequence] = STATE(212),
    [sym_associative_item] = STATE(151),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
    [sym_identifier] = ACTIONS(65),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [20] = {
    [sym__object] = STATE(95),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(20),
    [sym_collection] = STATE(78),
    [sym__collection_sequence] = STATE(217),
    [sym_associative_item] = STATE(151),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
    [sym_identifier] = ACTIONS(65),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [21] = {
    [sym__object] = STATE(104),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(82),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(21),
    [sym_collection] = STATE(78),
    [sym_associative_item] = STATE(181),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
    [sym_identifier] = ACTIONS(65),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [22] = {
    [sym_comment] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(241),
    [sym_identifier] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_if] = ACTIONS(243),
    [anon_sym_while] = ACTIONS(243),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_DOT] = ACTIONS(247),
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_LBRACE] = ACTIONS(241),
    [anon_sym_PIPE] = ACTIONS(247),
    [anon_sym_BSLASH] = ACTIONS(241),
    [sym_integer] = ACTIONS(243),
    [sym_hexinteger] = ACTIONS(241),
    [sym_float] = ACTIONS(241),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [sym_char] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_true] = ACTIONS(243),
    [anon_sym_false] = ACTIONS(243),
    [anon_sym_var] = ACTIONS(243),
    [anon_sym_classvar] = ACTIONS(243),
    [aux_sym_environment_var_token1] = ACTIONS(243),
    [anon_sym_TILDE] = ACTIONS(241),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(241),
    [anon_sym_BQUOTE] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_Bag] = ACTIONS(243),
    [anon_sym_Dictionary] = ACTIONS(243),
    [anon_sym_Environment] = ACTIONS(243),
    [anon_sym_Event] = ACTIONS(243),
    [anon_sym_IdentityBag] = ACTIONS(243),
    [anon_sym_IdentityDictionary] = ACTIONS(243),
    [anon_sym_IdentitySet] = ACTIONS(243),
    [anon_sym_LazyEnvir] = ACTIONS(243),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(243),
    [anon_sym_ObjectTable] = ACTIONS(243),
    [anon_sym_Set] = ACTIONS(243),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(243),
    [anon_sym_Array] = ACTIONS(243),
    [anon_sym_Array2D] = ACTIONS(243),
    [anon_sym_ArrayedCollection] = ACTIONS(243),
    [anon_sym_DoubleArray] = ACTIONS(243),
    [anon_sym_FloatArray] = ACTIONS(243),
    [anon_sym_Int16Array] = ACTIONS(243),
    [anon_sym_Int32Array] = ACTIONS(243),
    [anon_sym_Int8Array] = ACTIONS(243),
    [anon_sym_LinkedList] = ACTIONS(243),
    [anon_sym_List] = ACTIONS(243),
    [anon_sym_Order] = ACTIONS(243),
    [anon_sym_OrderedIdentitySet] = ACTIONS(243),
    [anon_sym_Pair] = ACTIONS(243),
    [anon_sym_PriorityQueue] = ACTIONS(243),
    [anon_sym_RawArray] = ACTIONS(243),
    [anon_sym_SequenceableCollection] = ACTIONS(243),
    [anon_sym_Signal] = ACTIONS(243),
    [anon_sym_SortedList] = ACTIONS(243),
    [anon_sym_SparseArray] = ACTIONS(243),
    [anon_sym_String] = ACTIONS(243),
    [anon_sym_SymbolArray] = ACTIONS(243),
    [anon_sym_AMP_AMP] = ACTIONS(245),
    [anon_sym_PIPE_PIPE] = ACTIONS(245),
    [anon_sym_AMP] = ACTIONS(247),
    [anon_sym_CARET] = ACTIONS(245),
    [anon_sym_EQ_EQ] = ACTIONS(245),
    [anon_sym_BANG_EQ] = ACTIONS(245),
    [anon_sym_LT] = ACTIONS(247),
    [anon_sym_LT_EQ] = ACTIONS(245),
    [anon_sym_GT] = ACTIONS(247),
    [anon_sym_GT_EQ] = ACTIONS(245),
    [anon_sym_LT_LT] = ACTIONS(245),
    [anon_sym_GT_GT] = ACTIONS(245),
    [anon_sym_PLUS] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(245),
    [anon_sym_SLASH] = ACTIONS(247),
    [anon_sym_PERCENT] = ACTIONS(245),
    [sym_class] = ACTIONS(243),
    [anon_sym_DOTwhile] = ACTIONS(245),
    [anon_sym_for] = ACTIONS(243),
    [anon_sym_forBy] = ACTIONS(243),
    [anon_sym_case] = ACTIONS(243),
  },
  [23] = {
    [sym__object] = STATE(56),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(23),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [24] = {
    [sym__object] = STATE(106),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(24),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [25] = {
    [sym__object] = STATE(68),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(25),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [26] = {
    [sym__object] = STATE(73),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(26),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [27] = {
    [sym__object] = STATE(96),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(97),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(27),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [28] = {
    [sym__object] = STATE(67),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(28),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [29] = {
    [sym__object] = STATE(105),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(29),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [30] = {
    [sym__object] = STATE(64),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(30),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [31] = {
    [sym__object] = STATE(103),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(31),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [32] = {
    [sym__object] = STATE(69),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(32),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [33] = {
    [sym__object] = STATE(98),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(33),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [34] = {
    [sym__object] = STATE(57),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(34),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [35] = {
    [sym__object] = STATE(71),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(35),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [36] = {
    [sym__object] = STATE(60),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(36),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
  [37] = {
    [sym__object] = STATE(59),
    [sym_code_block] = STATE(78),
    [sym_function_block] = STATE(78),
    [sym_literal] = STATE(78),
    [sym_number] = STATE(92),
    [sym_symbol] = STATE(92),
    [sym_string] = STATE(92),
    [sym_bool] = STATE(92),
    [sym_variable] = STATE(78),
    [sym_local_var] = STATE(76),
    [sym_classvar] = STATE(76),
    [sym_environment_var] = STATE(76),
    [sym_comment] = STATE(37),
    [sym_collection] = STATE(78),
    [sym__collection_types] = STATE(195),
    [sym__unordered_collection_types] = STATE(182),
    [sym__ordered_collection_types] = STATE(182),
    [sym_binary_expression] = STATE(78),
    [sym_control_structure] = STATE(78),
    [sym_if] = STATE(70),
    [sym_while] = STATE(70),
    [sym_for] = STATE(70),
    [sym_forby] = STATE(70),
    [sym_case] = STATE(70),
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
    [anon_sym_Bag] = ACTIONS(227),
    [anon_sym_Dictionary] = ACTIONS(227),
    [anon_sym_Environment] = ACTIONS(227),
    [anon_sym_Event] = ACTIONS(227),
    [anon_sym_IdentityBag] = ACTIONS(227),
    [anon_sym_IdentityDictionary] = ACTIONS(227),
    [anon_sym_IdentitySet] = ACTIONS(227),
    [anon_sym_LazyEnvir] = ACTIONS(227),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(227),
    [anon_sym_ObjectTable] = ACTIONS(227),
    [anon_sym_Set] = ACTIONS(227),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(227),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(229),
    [anon_sym_ArrayedCollection] = ACTIONS(229),
    [anon_sym_DoubleArray] = ACTIONS(229),
    [anon_sym_FloatArray] = ACTIONS(229),
    [anon_sym_Int16Array] = ACTIONS(229),
    [anon_sym_Int32Array] = ACTIONS(229),
    [anon_sym_Int8Array] = ACTIONS(229),
    [anon_sym_LinkedList] = ACTIONS(229),
    [anon_sym_List] = ACTIONS(229),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(229),
    [anon_sym_Pair] = ACTIONS(229),
    [anon_sym_PriorityQueue] = ACTIONS(229),
    [anon_sym_RawArray] = ACTIONS(229),
    [anon_sym_SequenceableCollection] = ACTIONS(229),
    [anon_sym_Signal] = ACTIONS(229),
    [anon_sym_SortedList] = ACTIONS(229),
    [anon_sym_SparseArray] = ACTIONS(229),
    [anon_sym_String] = ACTIONS(229),
    [anon_sym_SymbolArray] = ACTIONS(229),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
    [anon_sym_case] = ACTIONS(55),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(38), 1,
      sym_comment,
    ACTIONS(253), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(251), 12,
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
    ACTIONS(249), 46,
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
      anon_sym_for,
      anon_sym_forBy,
      anon_sym_case,
  [76] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(39), 1,
      sym_comment,
    ACTIONS(257), 14,
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
    ACTIONS(255), 46,
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
      anon_sym_for,
      anon_sym_forBy,
      anon_sym_case,
  [150] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(40), 1,
      sym_comment,
    ACTIONS(261), 14,
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
    ACTIONS(259), 46,
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
      anon_sym_for,
      anon_sym_forBy,
      anon_sym_case,
  [224] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(41), 1,
      sym_comment,
    ACTIONS(265), 14,
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
    ACTIONS(263), 46,
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
      anon_sym_for,
      anon_sym_forBy,
      anon_sym_case,
  [298] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(42), 1,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(251), 12,
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
    ACTIONS(249), 46,
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
      anon_sym_for,
      anon_sym_forBy,
      anon_sym_case,
  [374] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(43), 1,
      sym_comment,
    ACTIONS(269), 13,
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
    ACTIONS(271), 46,
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
      anon_sym_for,
      anon_sym_forBy,
      anon_sym_case,
  [447] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(44), 1,
      sym_comment,
    ACTIONS(273), 13,
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
    ACTIONS(275), 46,
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
      anon_sym_for,
      anon_sym_forBy,
      anon_sym_case,
  [520] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(45), 1,
      sym_comment,
    ACTIONS(251), 12,
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
    ACTIONS(249), 46,
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
      anon_sym_for,
      anon_sym_forBy,
      anon_sym_case,
  [592] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(46), 1,
      sym_comment,
    ACTIONS(279), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(277), 21,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [634] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(285), 1,
      anon_sym_DOTfor,
    ACTIONS(287), 1,
      anon_sym_DOTforBy,
    STATE(47), 1,
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
  [680] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(48), 1,
      sym_comment,
    ACTIONS(291), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(289), 21,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [722] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(49), 1,
      sym_comment,
    ACTIONS(295), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(293), 21,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [764] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(50), 1,
      sym_comment,
    ACTIONS(299), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(297), 21,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [806] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(51), 1,
      sym_comment,
    ACTIONS(303), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(301), 21,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
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
  [848] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(52), 1,
      sym_comment,
    ACTIONS(307), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(305), 19,
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
  [889] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(53), 1,
      sym_comment,
    ACTIONS(311), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(309), 19,
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
  [930] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(54), 1,
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
  [970] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(55), 1,
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
  [1010] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(56), 1,
      sym_comment,
    ACTIONS(323), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(321), 19,
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
  [1050] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    STATE(57), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(323), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(321), 17,
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
  [1094] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(58), 1,
      sym_comment,
    ACTIONS(331), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(329), 19,
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
  [1134] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    STATE(59), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(323), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(321), 15,
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
  [1180] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_PIPE,
    ACTIONS(337), 1,
      anon_sym_AMP,
    ACTIONS(339), 1,
      anon_sym_CARET,
    STATE(60), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(341), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(323), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(321), 12,
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
  [1234] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(61), 1,
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
  [1274] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(62), 1,
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
  [1314] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(63), 1,
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
  [1354] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    ACTIONS(337), 1,
      anon_sym_AMP,
    STATE(64), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(341), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(323), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(321), 13,
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
  [1404] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(359), 1,
      anon_sym_COLON,
    STATE(65), 1,
      sym_comment,
    ACTIONS(357), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(355), 18,
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
  [1446] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(66), 1,
      sym_comment,
    ACTIONS(363), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(361), 19,
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
  [1486] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    STATE(67), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(341), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(323), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(321), 13,
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
  [1534] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_PIPE,
    ACTIONS(337), 1,
      anon_sym_AMP,
    ACTIONS(339), 1,
      anon_sym_CARET,
    ACTIONS(365), 1,
      anon_sym_AMP_AMP,
    STATE(68), 1,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_EQ,
      anon_sym_DOT,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(341), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(369), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(367), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(321), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_DOTwhile,
  [1594] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_PIPE,
    ACTIONS(337), 1,
      anon_sym_AMP,
    ACTIONS(339), 1,
      anon_sym_CARET,
    STATE(69), 1,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_EQ,
      anon_sym_DOT,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(341), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(369), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(367), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(321), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOTwhile,
  [1652] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(70), 1,
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
  [1692] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    ACTIONS(337), 1,
      anon_sym_AMP,
    ACTIONS(339), 1,
      anon_sym_CARET,
    STATE(71), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(341), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(323), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(321), 12,
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
  [1744] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(72), 1,
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
  [1784] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(323), 1,
      anon_sym_EQ,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_PIPE,
    ACTIONS(337), 1,
      anon_sym_AMP,
    ACTIONS(339), 1,
      anon_sym_CARET,
    ACTIONS(365), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_DOT,
    ACTIONS(381), 1,
      anon_sym_PIPE_PIPE,
    STATE(73), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(341), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(369), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(367), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(321), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOTwhile,
  [1848] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(74), 1,
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
  [1888] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(75), 1,
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
  [1928] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(76), 1,
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
  [1968] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(77), 1,
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
  [2008] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(78), 1,
      sym_comment,
    ACTIONS(247), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(245), 19,
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
  [2048] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_PIPE,
    ACTIONS(337), 1,
      anon_sym_AMP,
    ACTIONS(339), 1,
      anon_sym_CARET,
    ACTIONS(365), 1,
      anon_sym_AMP_AMP,
    ACTIONS(381), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(399), 1,
      anon_sym_DOT,
    ACTIONS(401), 1,
      anon_sym_DOTwhile,
    STATE(79), 1,
      sym_comment,
    STATE(110), 1,
      aux_sym_function_call_repeat1,
    STATE(122), 1,
      sym_instance_method_call,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(341), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(369), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(395), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(367), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2118] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(80), 1,
      sym_comment,
    ACTIONS(405), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(403), 19,
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
  [2158] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(81), 1,
      sym_comment,
    ACTIONS(409), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(407), 19,
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
  [2198] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(82), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(413), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(411), 16,
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
  [2240] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(83), 1,
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
  [2280] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(84), 1,
      sym_comment,
    ACTIONS(417), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(415), 19,
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
  [2320] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(85), 1,
      sym_comment,
    ACTIONS(421), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(419), 19,
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
  [2360] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(86), 1,
      sym_comment,
    ACTIONS(425), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(423), 19,
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
  [2400] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(87), 1,
      sym_comment,
    ACTIONS(429), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(427), 19,
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
  [2440] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(88), 1,
      sym_comment,
    ACTIONS(433), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(431), 19,
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
  [2480] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(89), 1,
      sym_comment,
    ACTIONS(437), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(435), 19,
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
  [2520] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(90), 1,
      sym_comment,
    ACTIONS(441), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(439), 19,
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
  [2560] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(91), 1,
      sym_comment,
    ACTIONS(445), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(443), 19,
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
  [2600] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(92), 1,
      sym_comment,
    ACTIONS(413), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(411), 19,
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
  [2640] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(93), 1,
      sym_comment,
    ACTIONS(449), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(447), 19,
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
  [2680] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(94), 1,
      sym_comment,
    ACTIONS(453), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(451), 19,
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
  [2720] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_PIPE,
    ACTIONS(337), 1,
      anon_sym_AMP,
    ACTIONS(339), 1,
      anon_sym_CARET,
    ACTIONS(365), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_DOT,
    ACTIONS(381), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(401), 1,
      anon_sym_DOTwhile,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      sym_comment,
    STATE(135), 1,
      aux_sym__collection_sequence_repeat1,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(341), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(369), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(367), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2788] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_PIPE,
    ACTIONS(337), 1,
      anon_sym_AMP,
    ACTIONS(339), 1,
      anon_sym_CARET,
    ACTIONS(365), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_DOT,
    ACTIONS(381), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(401), 1,
      anon_sym_DOTwhile,
    STATE(96), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(341), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(369), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(459), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(367), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2852] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(97), 1,
      sym_comment,
    ACTIONS(461), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(247), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(245), 14,
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
  [2892] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_PIPE,
    ACTIONS(337), 1,
      anon_sym_AMP,
    ACTIONS(339), 1,
      anon_sym_CARET,
    ACTIONS(365), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_DOT,
    ACTIONS(381), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(401), 1,
      anon_sym_DOTwhile,
    STATE(98), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(341), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(369), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(463), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(367), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2956] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(465), 1,
      anon_sym_EQ,
    ACTIONS(469), 1,
      anon_sym_COLON,
    STATE(99), 1,
      sym_comment,
    ACTIONS(467), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(307), 6,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(305), 14,
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
  [3000] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(471), 1,
      anon_sym_COLON,
    STATE(100), 1,
      sym_comment,
    ACTIONS(357), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(355), 16,
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
  [3040] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(473), 1,
      anon_sym_EQ,
    STATE(101), 1,
      sym_comment,
    ACTIONS(247), 6,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(245), 17,
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
  [3080] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_PIPE,
    ACTIONS(337), 1,
      anon_sym_AMP,
    ACTIONS(339), 1,
      anon_sym_CARET,
    ACTIONS(365), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_DOT,
    ACTIONS(381), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(401), 1,
      anon_sym_DOTwhile,
    STATE(102), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(341), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(369), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(475), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(367), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3143] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_PIPE,
    ACTIONS(337), 1,
      anon_sym_AMP,
    ACTIONS(339), 1,
      anon_sym_CARET,
    ACTIONS(365), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_DOT,
    ACTIONS(381), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(401), 1,
      anon_sym_DOTwhile,
    STATE(103), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(341), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(369), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(477), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(367), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3206] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_PIPE,
    ACTIONS(337), 1,
      anon_sym_AMP,
    ACTIONS(339), 1,
      anon_sym_CARET,
    ACTIONS(365), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_DOT,
    ACTIONS(381), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(401), 1,
      anon_sym_DOTwhile,
    STATE(104), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(341), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(369), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(479), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(367), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3269] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_PIPE,
    ACTIONS(337), 1,
      anon_sym_AMP,
    ACTIONS(339), 1,
      anon_sym_CARET,
    ACTIONS(365), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_DOT,
    ACTIONS(381), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(401), 1,
      anon_sym_DOTwhile,
    STATE(105), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(341), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(369), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(481), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(367), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3332] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(327), 1,
      anon_sym_SLASH,
    ACTIONS(335), 1,
      anon_sym_PIPE,
    ACTIONS(337), 1,
      anon_sym_AMP,
    ACTIONS(339), 1,
      anon_sym_CARET,
    ACTIONS(365), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_DOT,
    ACTIONS(381), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(397), 1,
      anon_sym_EQ,
    ACTIONS(401), 1,
      anon_sym_DOTwhile,
    ACTIONS(483), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(333), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(341), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(369), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(367), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3394] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(485), 1,
      anon_sym_BSLASH,
    ACTIONS(487), 1,
      sym_integer,
    ACTIONS(491), 1,
      anon_sym_SQUOTE,
    ACTIONS(493), 1,
      sym_char,
    ACTIONS(495), 1,
      anon_sym_DQUOTE,
    STATE(107), 1,
      sym_comment,
    STATE(164), 1,
      sym_literal,
    ACTIONS(489), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(497), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(190), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [3436] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      sym_char,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      sym_integer,
    STATE(108), 1,
      sym_comment,
    STATE(164), 1,
      sym_literal,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(501), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(92), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [3478] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(507), 1,
      anon_sym_if,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_comment,
    ACTIONS(505), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3503] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(513), 1,
      anon_sym_DOT,
    STATE(110), 1,
      sym_comment,
    STATE(112), 1,
      aux_sym_function_call_repeat1,
    STATE(122), 1,
      sym_instance_method_call,
    ACTIONS(511), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3527] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(509), 1,
      anon_sym_LPAREN,
    ACTIONS(515), 1,
      sym_identifier,
    STATE(111), 1,
      sym_comment,
    ACTIONS(505), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3549] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(519), 1,
      anon_sym_DOT,
    STATE(122), 1,
      sym_instance_method_call,
    STATE(112), 2,
      sym_comment,
      aux_sym_function_call_repeat1,
    ACTIONS(517), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3571] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 1,
      sym_identifier,
    STATE(113), 1,
      sym_comment,
    STATE(166), 1,
      sym_associative_item,
    STATE(189), 1,
      sym_symbol,
    STATE(207), 1,
      sym__paired_associative_sequence,
  [3599] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(522), 1,
      sym_identifier,
    STATE(114), 1,
      sym_comment,
    STATE(189), 1,
      sym_symbol,
    STATE(198), 1,
      sym_associative_item,
  [3624] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(524), 1,
      anon_sym_SEMI,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_comment,
    STATE(117), 1,
      aux_sym_case_repeat1,
    STATE(144), 1,
      sym_function_block,
  [3649] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(530), 1,
      anon_sym_LPAREN,
    STATE(116), 1,
      sym_comment,
    ACTIONS(528), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3668] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(532), 1,
      anon_sym_SEMI,
    STATE(117), 1,
      sym_comment,
    STATE(118), 1,
      aux_sym_case_repeat1,
    STATE(144), 1,
      sym_function_block,
  [3693] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(536), 1,
      anon_sym_LPAREN,
    ACTIONS(539), 1,
      anon_sym_LBRACE,
    STATE(144), 1,
      sym_function_block,
    STATE(118), 2,
      sym_comment,
      aux_sym_case_repeat1,
  [3716] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(119), 1,
      sym_comment,
    ACTIONS(542), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3732] = 6,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(544), 1,
      anon_sym_DQUOTE,
    ACTIONS(546), 1,
      aux_sym_string_token1,
    ACTIONS(549), 1,
      sym_escape_sequence,
    ACTIONS(552), 1,
      sym_line_comment,
    STATE(120), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [3752] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(121), 1,
      sym_comment,
    ACTIONS(554), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3768] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(122), 1,
      sym_comment,
    ACTIONS(556), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3784] = 7,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(552), 1,
      sym_line_comment,
    ACTIONS(558), 1,
      anon_sym_DQUOTE,
    ACTIONS(560), 1,
      aux_sym_string_token1,
    ACTIONS(562), 1,
      sym_escape_sequence,
    STATE(120), 1,
      aux_sym_string_repeat1,
    STATE(123), 1,
      sym_comment,
  [3806] = 7,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(552), 1,
      sym_line_comment,
    ACTIONS(560), 1,
      aux_sym_string_token1,
    ACTIONS(562), 1,
      sym_escape_sequence,
    ACTIONS(564), 1,
      anon_sym_DQUOTE,
    STATE(120), 1,
      aux_sym_string_repeat1,
    STATE(124), 1,
      sym_comment,
  [3828] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(125), 1,
      sym_comment,
    ACTIONS(566), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3844] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    STATE(126), 1,
      sym_comment,
    ACTIONS(568), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3862] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(127), 1,
      sym_comment,
    ACTIONS(572), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3878] = 7,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(552), 1,
      sym_line_comment,
    ACTIONS(560), 1,
      aux_sym_string_token1,
    ACTIONS(562), 1,
      sym_escape_sequence,
    ACTIONS(574), 1,
      anon_sym_DQUOTE,
    STATE(124), 1,
      aux_sym_string_repeat1,
    STATE(128), 1,
      sym_comment,
  [3900] = 7,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(552), 1,
      sym_line_comment,
    ACTIONS(560), 1,
      aux_sym_string_token1,
    ACTIONS(562), 1,
      sym_escape_sequence,
    ACTIONS(576), 1,
      anon_sym_DQUOTE,
    STATE(123), 1,
      aux_sym_string_repeat1,
    STATE(129), 1,
      sym_comment,
  [3922] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(130), 1,
      sym_comment,
    ACTIONS(395), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3937] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(131), 1,
      sym_comment,
    ACTIONS(578), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3952] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    ACTIONS(583), 1,
      anon_sym_PIPE,
    STATE(132), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [3969] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(585), 1,
      anon_sym_EQ,
    STATE(133), 1,
      sym_comment,
    ACTIONS(587), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3986] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      sym_comment,
    STATE(165), 1,
      aux_sym__paired_associative_sequence_repeat1,
  [4005] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(593), 1,
      anon_sym_RBRACK,
    STATE(135), 1,
      sym_comment,
    STATE(168), 1,
      aux_sym__collection_sequence_repeat1,
  [4024] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(136), 1,
      sym_comment,
    ACTIONS(595), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [4039] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      sym_comment,
    STATE(241), 1,
      sym_function_block,
  [4058] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_function_block,
    STATE(138), 1,
      sym_comment,
  [4077] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(597), 1,
      anon_sym_SEMI,
    STATE(139), 1,
      sym_comment,
    ACTIONS(267), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [4094] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(599), 1,
      anon_sym_RPAREN,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      sym_comment,
    STATE(173), 1,
      aux_sym_parameter_call_list_repeat1,
  [4113] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    STATE(141), 1,
      sym_comment,
    STATE(236), 1,
      sym_function_block,
  [4132] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(603), 1,
      anon_sym_EQ,
    STATE(142), 1,
      sym_comment,
    ACTIONS(587), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4149] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    STATE(143), 1,
      sym_comment,
    STATE(234), 1,
      sym_function_block,
  [4168] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(144), 1,
      sym_comment,
    ACTIONS(605), 3,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_LBRACE,
  [4183] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_comment,
    STATE(232), 1,
      sym_function_block,
  [4202] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(607), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_function_block,
    STATE(146), 1,
      sym_comment,
  [4221] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(609), 1,
      anon_sym_SEMI,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      sym_comment,
    STATE(170), 1,
      aux_sym_parameter_list_repeat1,
  [4240] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(148), 1,
      sym_comment,
    ACTIONS(613), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [4255] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(149), 1,
      sym_comment,
    ACTIONS(615), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [4270] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      sym_comment,
    STATE(201), 1,
      sym_function_block,
  [4289] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    STATE(135), 1,
      aux_sym__collection_sequence_repeat1,
    STATE(151), 1,
      sym_comment,
  [4308] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(609), 1,
      anon_sym_PIPE,
    ACTIONS(617), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      sym_comment,
    STATE(171), 1,
      aux_sym_parameter_list_repeat1,
  [4327] = 5,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(552), 1,
      sym_line_comment,
    ACTIONS(621), 1,
      aux_sym_string_token1,
    STATE(153), 1,
      sym_comment,
    ACTIONS(619), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [4344] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(623), 1,
      anon_sym_RPAREN,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(154), 2,
      sym_comment,
      aux_sym_parameter_call_list_repeat1,
  [4361] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(155), 1,
      sym_comment,
    ACTIONS(628), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [4376] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      sym_comment,
    STATE(220), 1,
      sym_function_block,
  [4395] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(583), 1,
      anon_sym_SEMI,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    STATE(157), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [4412] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      sym_comment,
    STATE(192), 1,
      sym_function_block,
  [4431] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_comment,
    STATE(237), 1,
      sym_function_block,
  [4450] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(633), 1,
      sym_identifier,
    ACTIONS(635), 1,
      anon_sym_PIPE,
    STATE(152), 1,
      sym_argument,
    STATE(160), 1,
      sym_comment,
  [4469] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(637), 1,
      anon_sym_DOT,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_class_method_call,
    STATE(161), 1,
      sym_comment,
  [4488] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(162), 1,
      sym_comment,
    ACTIONS(583), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4503] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(635), 1,
      anon_sym_SEMI,
    ACTIONS(641), 1,
      sym_identifier,
    STATE(147), 1,
      sym_argument,
    STATE(163), 1,
      sym_comment,
  [4522] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(164), 1,
      sym_comment,
    ACTIONS(643), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4537] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(645), 1,
      anon_sym_RPAREN,
    ACTIONS(647), 1,
      anon_sym_COMMA,
    STATE(165), 2,
      sym_comment,
      aux_sym__paired_associative_sequence_repeat1,
  [4554] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    STATE(134), 1,
      aux_sym__paired_associative_sequence_repeat1,
    STATE(166), 1,
      sym_comment,
  [4573] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_comment,
    STATE(197), 1,
      sym_function_block,
  [4592] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(479), 1,
      anon_sym_RBRACK,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    STATE(168), 2,
      sym_comment,
      aux_sym__collection_sequence_repeat1,
  [4609] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(655), 1,
      anon_sym_SEMI,
    STATE(169), 1,
      sym_comment,
    ACTIONS(657), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [4626] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    ACTIONS(659), 1,
      anon_sym_SEMI,
    STATE(157), 1,
      aux_sym_parameter_list_repeat1,
    STATE(170), 1,
      sym_comment,
  [4645] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(617), 1,
      anon_sym_COMMA,
    ACTIONS(659), 1,
      anon_sym_PIPE,
    STATE(132), 1,
      aux_sym_parameter_list_repeat1,
    STATE(171), 1,
      sym_comment,
  [4664] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym_comment,
    STATE(250), 1,
      sym_function_block,
  [4683] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(661), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_parameter_call_list_repeat1,
    STATE(173), 1,
      sym_comment,
  [4702] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
    ACTIONS(665), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      sym_comment,
  [4718] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(175), 1,
      sym_comment,
    ACTIONS(667), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [4732] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(176), 1,
      sym_comment,
    ACTIONS(669), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [4746] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(641), 1,
      sym_identifier,
    STATE(162), 1,
      sym_argument,
    STATE(177), 1,
      sym_comment,
  [4762] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(633), 1,
      sym_identifier,
    STATE(162), 1,
      sym_argument,
    STATE(178), 1,
      sym_comment,
  [4778] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(179), 1,
      sym_comment,
  [4794] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(180), 1,
      sym_comment,
    ACTIONS(671), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [4808] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(181), 1,
      sym_comment,
    ACTIONS(479), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4822] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(182), 1,
      sym_comment,
    ACTIONS(673), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4836] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(667), 1,
      aux_sym_symbol_token1,
    ACTIONS(675), 1,
      sym_identifier,
    STATE(183), 1,
      sym_comment,
  [4852] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(184), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4866] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(185), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4880] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(186), 1,
      sym_comment,
    ACTIONS(329), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4894] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(187), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4908] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(188), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4922] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(189), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4936] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(190), 1,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4950] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(191), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4964] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      sym_comment,
  [4980] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(193), 1,
      sym_comment,
    ACTIONS(681), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [4994] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(194), 1,
      sym_comment,
    ACTIONS(683), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5008] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(685), 1,
      anon_sym_LPAREN,
    ACTIONS(687), 1,
      anon_sym_LBRACK,
    STATE(195), 1,
      sym_comment,
  [5024] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(196), 1,
      sym_comment,
    ACTIONS(689), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [5038] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(691), 1,
      anon_sym_RPAREN,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      sym_comment,
  [5054] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(198), 1,
      sym_comment,
    ACTIONS(645), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5068] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(199), 1,
      sym_comment,
    ACTIONS(623), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5082] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(200), 1,
      sym_comment,
    ACTIONS(695), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [5096] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(697), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      sym_comment,
  [5109] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    STATE(202), 1,
      sym_comment,
  [5122] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(701), 1,
      anon_sym_COMMA,
    STATE(203), 1,
      sym_comment,
  [5135] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(703), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      sym_comment,
  [5148] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(205), 1,
      sym_comment,
  [5161] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(705), 1,
      sym_integer,
    STATE(206), 1,
      sym_comment,
  [5174] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym_comment,
  [5187] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(709), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym_comment,
  [5200] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(711), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      sym_comment,
  [5213] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(713), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      sym_comment,
  [5226] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      sym_comment,
  [5239] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(707), 1,
      anon_sym_RBRACK,
    STATE(212), 1,
      sym_comment,
  [5252] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(715), 1,
      sym_integer,
    STATE(213), 1,
      sym_comment,
  [5265] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(717), 1,
      anon_sym_SQUOTE,
    STATE(214), 1,
      sym_comment,
  [5278] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym_comment,
  [5291] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(721), 1,
      anon_sym_LPAREN,
    STATE(216), 1,
      sym_comment,
  [5304] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(723), 1,
      anon_sym_RBRACK,
    STATE(217), 1,
      sym_comment,
  [5317] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym_comment,
  [5330] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(727), 1,
      sym_identifier,
    STATE(219), 1,
      sym_comment,
  [5343] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      sym_comment,
  [5356] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(731), 1,
      sym_identifier,
    STATE(221), 1,
      sym_comment,
  [5369] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(733), 1,
      sym_identifier,
    STATE(222), 1,
      sym_comment,
  [5382] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(735), 1,
      sym_integer,
    STATE(223), 1,
      sym_comment,
  [5395] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(737), 1,
      sym_integer,
    STATE(224), 1,
      sym_comment,
  [5408] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(739), 1,
      sym_integer,
    STATE(225), 1,
      sym_comment,
  [5421] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(741), 1,
      sym_identifier,
    STATE(226), 1,
      sym_comment,
  [5434] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(743), 1,
      anon_sym_LBRACE,
    STATE(227), 1,
      sym_comment,
  [5447] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(745), 1,
      anon_sym_COMMA,
    STATE(228), 1,
      sym_comment,
  [5460] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(747), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_comment,
  [5473] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(749), 1,
      sym_integer,
    STATE(230), 1,
      sym_comment,
  [5486] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(751), 1,
      anon_sym_LPAREN,
    STATE(231), 1,
      sym_comment,
  [5499] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(753), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      sym_comment,
  [5512] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(755), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      sym_comment,
  [5525] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      sym_comment,
  [5538] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(759), 1,
      anon_sym_LPAREN,
    STATE(235), 1,
      sym_comment,
  [5551] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(761), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      sym_comment,
  [5564] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(763), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      sym_comment,
  [5577] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    STATE(238), 1,
      sym_comment,
  [5590] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(767), 1,
      anon_sym_SEMI,
    STATE(239), 1,
      sym_comment,
  [5603] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(769), 1,
      anon_sym_LPAREN,
    STATE(240), 1,
      sym_comment,
  [5616] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    STATE(241), 1,
      sym_comment,
  [5629] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(773), 1,
      anon_sym_LPAREN,
    STATE(242), 1,
      sym_comment,
  [5642] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(359), 1,
      anon_sym_COLON,
    STATE(243), 1,
      sym_comment,
  [5655] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(775), 1,
      anon_sym_RPAREN,
    STATE(244), 1,
      sym_comment,
  [5668] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(777), 1,
      ts_builtin_sym_end,
    STATE(245), 1,
      sym_comment,
  [5681] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(779), 1,
      anon_sym_SEMI,
    STATE(246), 1,
      sym_comment,
  [5694] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      sym_comment,
  [5707] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(781), 1,
      sym_integer,
    STATE(248), 1,
      sym_comment,
  [5720] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(783), 1,
      sym_integer,
    STATE(249), 1,
      sym_comment,
  [5733] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      sym_comment,
  [5746] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(787), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym_comment,
  [5759] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(789), 1,
      anon_sym_COMMA,
    STATE(252), 1,
      sym_comment,
  [5772] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(791), 1,
      anon_sym_SQUOTE,
    STATE(253), 1,
      sym_comment,
  [5785] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(665), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      sym_comment,
  [5798] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      sym_comment,
  [5811] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(793), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      sym_comment,
  [5824] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(795), 1,
      anon_sym_if,
    STATE(257), 1,
      sym_comment,
  [5837] = 1,
    ACTIONS(797), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(38)] = 0,
  [SMALL_STATE(39)] = 76,
  [SMALL_STATE(40)] = 150,
  [SMALL_STATE(41)] = 224,
  [SMALL_STATE(42)] = 298,
  [SMALL_STATE(43)] = 374,
  [SMALL_STATE(44)] = 447,
  [SMALL_STATE(45)] = 520,
  [SMALL_STATE(46)] = 592,
  [SMALL_STATE(47)] = 634,
  [SMALL_STATE(48)] = 680,
  [SMALL_STATE(49)] = 722,
  [SMALL_STATE(50)] = 764,
  [SMALL_STATE(51)] = 806,
  [SMALL_STATE(52)] = 848,
  [SMALL_STATE(53)] = 889,
  [SMALL_STATE(54)] = 930,
  [SMALL_STATE(55)] = 970,
  [SMALL_STATE(56)] = 1010,
  [SMALL_STATE(57)] = 1050,
  [SMALL_STATE(58)] = 1094,
  [SMALL_STATE(59)] = 1134,
  [SMALL_STATE(60)] = 1180,
  [SMALL_STATE(61)] = 1234,
  [SMALL_STATE(62)] = 1274,
  [SMALL_STATE(63)] = 1314,
  [SMALL_STATE(64)] = 1354,
  [SMALL_STATE(65)] = 1404,
  [SMALL_STATE(66)] = 1446,
  [SMALL_STATE(67)] = 1486,
  [SMALL_STATE(68)] = 1534,
  [SMALL_STATE(69)] = 1594,
  [SMALL_STATE(70)] = 1652,
  [SMALL_STATE(71)] = 1692,
  [SMALL_STATE(72)] = 1744,
  [SMALL_STATE(73)] = 1784,
  [SMALL_STATE(74)] = 1848,
  [SMALL_STATE(75)] = 1888,
  [SMALL_STATE(76)] = 1928,
  [SMALL_STATE(77)] = 1968,
  [SMALL_STATE(78)] = 2008,
  [SMALL_STATE(79)] = 2048,
  [SMALL_STATE(80)] = 2118,
  [SMALL_STATE(81)] = 2158,
  [SMALL_STATE(82)] = 2198,
  [SMALL_STATE(83)] = 2240,
  [SMALL_STATE(84)] = 2280,
  [SMALL_STATE(85)] = 2320,
  [SMALL_STATE(86)] = 2360,
  [SMALL_STATE(87)] = 2400,
  [SMALL_STATE(88)] = 2440,
  [SMALL_STATE(89)] = 2480,
  [SMALL_STATE(90)] = 2520,
  [SMALL_STATE(91)] = 2560,
  [SMALL_STATE(92)] = 2600,
  [SMALL_STATE(93)] = 2640,
  [SMALL_STATE(94)] = 2680,
  [SMALL_STATE(95)] = 2720,
  [SMALL_STATE(96)] = 2788,
  [SMALL_STATE(97)] = 2852,
  [SMALL_STATE(98)] = 2892,
  [SMALL_STATE(99)] = 2956,
  [SMALL_STATE(100)] = 3000,
  [SMALL_STATE(101)] = 3040,
  [SMALL_STATE(102)] = 3080,
  [SMALL_STATE(103)] = 3143,
  [SMALL_STATE(104)] = 3206,
  [SMALL_STATE(105)] = 3269,
  [SMALL_STATE(106)] = 3332,
  [SMALL_STATE(107)] = 3394,
  [SMALL_STATE(108)] = 3436,
  [SMALL_STATE(109)] = 3478,
  [SMALL_STATE(110)] = 3503,
  [SMALL_STATE(111)] = 3527,
  [SMALL_STATE(112)] = 3549,
  [SMALL_STATE(113)] = 3571,
  [SMALL_STATE(114)] = 3599,
  [SMALL_STATE(115)] = 3624,
  [SMALL_STATE(116)] = 3649,
  [SMALL_STATE(117)] = 3668,
  [SMALL_STATE(118)] = 3693,
  [SMALL_STATE(119)] = 3716,
  [SMALL_STATE(120)] = 3732,
  [SMALL_STATE(121)] = 3752,
  [SMALL_STATE(122)] = 3768,
  [SMALL_STATE(123)] = 3784,
  [SMALL_STATE(124)] = 3806,
  [SMALL_STATE(125)] = 3828,
  [SMALL_STATE(126)] = 3844,
  [SMALL_STATE(127)] = 3862,
  [SMALL_STATE(128)] = 3878,
  [SMALL_STATE(129)] = 3900,
  [SMALL_STATE(130)] = 3922,
  [SMALL_STATE(131)] = 3937,
  [SMALL_STATE(132)] = 3952,
  [SMALL_STATE(133)] = 3969,
  [SMALL_STATE(134)] = 3986,
  [SMALL_STATE(135)] = 4005,
  [SMALL_STATE(136)] = 4024,
  [SMALL_STATE(137)] = 4039,
  [SMALL_STATE(138)] = 4058,
  [SMALL_STATE(139)] = 4077,
  [SMALL_STATE(140)] = 4094,
  [SMALL_STATE(141)] = 4113,
  [SMALL_STATE(142)] = 4132,
  [SMALL_STATE(143)] = 4149,
  [SMALL_STATE(144)] = 4168,
  [SMALL_STATE(145)] = 4183,
  [SMALL_STATE(146)] = 4202,
  [SMALL_STATE(147)] = 4221,
  [SMALL_STATE(148)] = 4240,
  [SMALL_STATE(149)] = 4255,
  [SMALL_STATE(150)] = 4270,
  [SMALL_STATE(151)] = 4289,
  [SMALL_STATE(152)] = 4308,
  [SMALL_STATE(153)] = 4327,
  [SMALL_STATE(154)] = 4344,
  [SMALL_STATE(155)] = 4361,
  [SMALL_STATE(156)] = 4376,
  [SMALL_STATE(157)] = 4395,
  [SMALL_STATE(158)] = 4412,
  [SMALL_STATE(159)] = 4431,
  [SMALL_STATE(160)] = 4450,
  [SMALL_STATE(161)] = 4469,
  [SMALL_STATE(162)] = 4488,
  [SMALL_STATE(163)] = 4503,
  [SMALL_STATE(164)] = 4522,
  [SMALL_STATE(165)] = 4537,
  [SMALL_STATE(166)] = 4554,
  [SMALL_STATE(167)] = 4573,
  [SMALL_STATE(168)] = 4592,
  [SMALL_STATE(169)] = 4609,
  [SMALL_STATE(170)] = 4626,
  [SMALL_STATE(171)] = 4645,
  [SMALL_STATE(172)] = 4664,
  [SMALL_STATE(173)] = 4683,
  [SMALL_STATE(174)] = 4702,
  [SMALL_STATE(175)] = 4718,
  [SMALL_STATE(176)] = 4732,
  [SMALL_STATE(177)] = 4746,
  [SMALL_STATE(178)] = 4762,
  [SMALL_STATE(179)] = 4778,
  [SMALL_STATE(180)] = 4794,
  [SMALL_STATE(181)] = 4808,
  [SMALL_STATE(182)] = 4822,
  [SMALL_STATE(183)] = 4836,
  [SMALL_STATE(184)] = 4852,
  [SMALL_STATE(185)] = 4866,
  [SMALL_STATE(186)] = 4880,
  [SMALL_STATE(187)] = 4894,
  [SMALL_STATE(188)] = 4908,
  [SMALL_STATE(189)] = 4922,
  [SMALL_STATE(190)] = 4936,
  [SMALL_STATE(191)] = 4950,
  [SMALL_STATE(192)] = 4964,
  [SMALL_STATE(193)] = 4980,
  [SMALL_STATE(194)] = 4994,
  [SMALL_STATE(195)] = 5008,
  [SMALL_STATE(196)] = 5024,
  [SMALL_STATE(197)] = 5038,
  [SMALL_STATE(198)] = 5054,
  [SMALL_STATE(199)] = 5068,
  [SMALL_STATE(200)] = 5082,
  [SMALL_STATE(201)] = 5096,
  [SMALL_STATE(202)] = 5109,
  [SMALL_STATE(203)] = 5122,
  [SMALL_STATE(204)] = 5135,
  [SMALL_STATE(205)] = 5148,
  [SMALL_STATE(206)] = 5161,
  [SMALL_STATE(207)] = 5174,
  [SMALL_STATE(208)] = 5187,
  [SMALL_STATE(209)] = 5200,
  [SMALL_STATE(210)] = 5213,
  [SMALL_STATE(211)] = 5226,
  [SMALL_STATE(212)] = 5239,
  [SMALL_STATE(213)] = 5252,
  [SMALL_STATE(214)] = 5265,
  [SMALL_STATE(215)] = 5278,
  [SMALL_STATE(216)] = 5291,
  [SMALL_STATE(217)] = 5304,
  [SMALL_STATE(218)] = 5317,
  [SMALL_STATE(219)] = 5330,
  [SMALL_STATE(220)] = 5343,
  [SMALL_STATE(221)] = 5356,
  [SMALL_STATE(222)] = 5369,
  [SMALL_STATE(223)] = 5382,
  [SMALL_STATE(224)] = 5395,
  [SMALL_STATE(225)] = 5408,
  [SMALL_STATE(226)] = 5421,
  [SMALL_STATE(227)] = 5434,
  [SMALL_STATE(228)] = 5447,
  [SMALL_STATE(229)] = 5460,
  [SMALL_STATE(230)] = 5473,
  [SMALL_STATE(231)] = 5486,
  [SMALL_STATE(232)] = 5499,
  [SMALL_STATE(233)] = 5512,
  [SMALL_STATE(234)] = 5525,
  [SMALL_STATE(235)] = 5538,
  [SMALL_STATE(236)] = 5551,
  [SMALL_STATE(237)] = 5564,
  [SMALL_STATE(238)] = 5577,
  [SMALL_STATE(239)] = 5590,
  [SMALL_STATE(240)] = 5603,
  [SMALL_STATE(241)] = 5616,
  [SMALL_STATE(242)] = 5629,
  [SMALL_STATE(243)] = 5642,
  [SMALL_STATE(244)] = 5655,
  [SMALL_STATE(245)] = 5668,
  [SMALL_STATE(246)] = 5681,
  [SMALL_STATE(247)] = 5694,
  [SMALL_STATE(248)] = 5707,
  [SMALL_STATE(249)] = 5720,
  [SMALL_STATE(250)] = 5733,
  [SMALL_STATE(251)] = 5746,
  [SMALL_STATE(252)] = 5759,
  [SMALL_STATE(253)] = 5772,
  [SMALL_STATE(254)] = 5785,
  [SMALL_STATE(255)] = 5798,
  [SMALL_STATE(256)] = 5811,
  [SMALL_STATE(257)] = 5824,
  [SMALL_STATE(258)] = 5837,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(242),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(240),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(175),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(193),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(128),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(89),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(221),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(226),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(200),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(216),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(235),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(83),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(242),
  [155] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(240),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(5),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(3),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(175),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(47),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(75),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(193),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(92),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(128),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(89),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(221),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(226),
  [191] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(86),
  [194] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(219),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(195),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(20),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(196),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(200),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(161),
  [212] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(216),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(235),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(115),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 4),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 6),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 6),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 5),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 5),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classvar, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classvar, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_var, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_var, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 3, .production_id = 5),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 3, .production_id = 5),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_structure, 1),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_structure, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forby, 9),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forby, 9),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 4),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 8, .production_id = 12),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 8, .production_id = 12),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 8),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 8),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 4, .production_id = 7),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4, .production_id = 7),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6, .production_id = 8),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6, .production_id = 8),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 6, .production_id = 9),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 6, .production_id = 9),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_var, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_var, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forby, 10),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forby, 10),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6, .production_id = 10),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6, .production_id = 10),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 7),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 7),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 3),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 8, .production_id = 11),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 8, .production_id = 11),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_sequence, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_item, 3, .production_id = 6),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnamed_argument, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__collection_sequence_repeat1, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 4),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 1),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(111),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 2, .production_id = 4),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(227),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(3),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 4),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(153),
  [549] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(153),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 1),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 4, .production_id = 4),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 2, .production_id = 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 5, .production_id = 4),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 3),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(178),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paired_associative_sequence, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_sequence, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_call_list, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 1),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 5, .production_id = 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_call_list_repeat1, 2),
  [625] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_call_list_repeat1, 2), SHIFT_REPEAT(18),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 4, .production_id = 2),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(177),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__paired_associative_sequence_repeat1, 2),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__paired_associative_sequence_repeat1, 2), SHIFT_REPEAT(114),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paired_associative_sequence, 1),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__collection_sequence_repeat1, 2), SHIFT_REPEAT(21),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_call_list, 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_types, 1),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_calls, 1),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unordered_collection_types, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordered_collection_types, 1),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [777] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
