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
#define STATE_COUNT 250
#define LARGE_STATE_COUNT 38
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 4
#define TOKEN_COUNT 94
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
  sym_source_file = 94,
  sym__expression = 95,
  sym__expression_statement = 96,
  sym__object = 97,
  sym_function_definition = 98,
  sym_function_call = 99,
  sym_instance_method_call = 100,
  sym_class_method_call = 101,
  sym__expression_sequence = 102,
  sym_code_block = 103,
  sym_function_block = 104,
  sym_parameter_list = 105,
  sym_argument = 106,
  sym_parameter_call_list = 107,
  sym_argument_calls = 108,
  sym_unnamed_argument = 109,
  sym_named_argument = 110,
  sym_literal = 111,
  sym_number = 112,
  sym_symbol = 113,
  sym_string = 114,
  sym_bool = 115,
  sym_variable = 116,
  sym_local_var = 117,
  sym_classvar = 118,
  sym_environment_var = 119,
  sym_variable_definition = 120,
  sym_comment = 121,
  sym_collection = 122,
  sym__collection_sequence = 123,
  sym__paired_associative_sequence = 124,
  sym_associative_item = 125,
  sym__collection_types = 126,
  sym__unordered_collection_types = 127,
  sym__ordered_collection_types = 128,
  sym_binary_expression = 129,
  sym_control_structure = 130,
  sym_if = 131,
  sym_while = 132,
  sym_for = 133,
  sym_forby = 134,
  aux_sym_source_file_repeat1 = 135,
  aux_sym__expression_sequence_repeat1 = 136,
  aux_sym_parameter_list_repeat1 = 137,
  aux_sym_parameter_call_list_repeat1 = 138,
  aux_sym_string_repeat1 = 139,
  aux_sym__collection_sequence_repeat1 = 140,
  aux_sym__paired_associative_sequence_repeat1 = 141,
  alias_sym_class_method_name = 142,
  alias_sym_item = 143,
  alias_sym_method_name = 144,
  alias_sym_receiver = 145,
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
  [anon_sym_for] = anon_sym_for,
  [anon_sym_DOTfor] = anon_sym_DOTfor,
  [anon_sym_forBy] = anon_sym_forBy,
  [anon_sym_DOTforBy] = anon_sym_DOTforBy,
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
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_environment_var_token1);
      END_STATE();
    case 9:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_arg);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == 'B') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'y') ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'v') ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_forBy);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 35:
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
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 28},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 28},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 28},
  [22] = {.lex_state = 28},
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
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 27},
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
  [105] = {.lex_state = 28},
  [106] = {.lex_state = 28},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 28},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 28},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 28},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 28},
  [132] = {.lex_state = 0},
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
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 28},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 28},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 28},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 28},
  [174] = {.lex_state = 28},
  [175] = {.lex_state = 28},
  [176] = {.lex_state = 28},
  [177] = {.lex_state = 28},
  [178] = {.lex_state = 28},
  [179] = {.lex_state = 28},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 7},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 8},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 8},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 8},
  [240] = {.lex_state = 8},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {(TSStateId)(-1)},
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
  },
  [1] = {
    [sym_source_file] = STATE(246),
    [sym__expression] = STATE(44),
    [sym__expression_statement] = STATE(245),
    [sym__object] = STATE(92),
    [sym_function_definition] = STATE(159),
    [sym_function_call] = STATE(159),
    [sym_code_block] = STATE(20),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(97),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_variable_definition] = STATE(159),
    [sym_comment] = STATE(1),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
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
  },
  [2] = {
    [sym__expression_statement] = STATE(155),
    [sym__object] = STATE(92),
    [sym_function_definition] = STATE(159),
    [sym_function_call] = STATE(159),
    [sym__expression_sequence] = STATE(182),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_parameter_list] = STATE(5),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(97),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_variable_definition] = STATE(159),
    [sym_comment] = STATE(2),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
    [aux_sym__expression_sequence_repeat1] = STATE(11),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_arg] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(61),
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
  },
  [3] = {
    [sym__expression_statement] = STATE(155),
    [sym__object] = STATE(92),
    [sym_function_definition] = STATE(159),
    [sym_function_call] = STATE(159),
    [sym__expression_sequence] = STATE(234),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_parameter_list] = STATE(7),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(97),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_variable_definition] = STATE(159),
    [sym_comment] = STATE(3),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
    [aux_sym__expression_sequence_repeat1] = STATE(11),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(55),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_arg] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(61),
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
  },
  [4] = {
    [sym__expression_statement] = STATE(155),
    [sym__object] = STATE(92),
    [sym_function_definition] = STATE(159),
    [sym_function_call] = STATE(159),
    [sym__expression_sequence] = STATE(231),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_parameter_list] = STATE(10),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(97),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_variable_definition] = STATE(159),
    [sym_comment] = STATE(4),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
    [aux_sym__expression_sequence_repeat1] = STATE(11),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_arg] = ACTIONS(59),
    [anon_sym_PIPE] = ACTIONS(61),
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
  },
  [5] = {
    [sym__expression_statement] = STATE(155),
    [sym__object] = STATE(92),
    [sym_function_definition] = STATE(159),
    [sym_function_call] = STATE(159),
    [sym__expression_sequence] = STATE(165),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(97),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_variable_definition] = STATE(159),
    [sym_comment] = STATE(5),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
    [aux_sym__expression_sequence_repeat1] = STATE(11),
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
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [6] = {
    [sym__expression_statement] = STATE(155),
    [sym__object] = STATE(92),
    [sym_function_definition] = STATE(159),
    [sym_function_call] = STATE(159),
    [sym__expression_sequence] = STATE(241),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(66),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(97),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_variable_definition] = STATE(159),
    [sym_comment] = STATE(6),
    [sym_collection] = STATE(57),
    [sym__paired_associative_sequence] = STATE(233),
    [sym_associative_item] = STATE(153),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
    [aux_sym__expression_sequence_repeat1] = STATE(11),
    [sym_identifier] = ACTIONS(67),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(69),
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
  },
  [7] = {
    [sym__expression_statement] = STATE(155),
    [sym__object] = STATE(92),
    [sym_function_definition] = STATE(159),
    [sym_function_call] = STATE(159),
    [sym__expression_sequence] = STATE(192),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(97),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_variable_definition] = STATE(159),
    [sym_comment] = STATE(7),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
    [aux_sym__expression_sequence_repeat1] = STATE(11),
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
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [8] = {
    [sym__expression] = STATE(44),
    [sym__expression_statement] = STATE(245),
    [sym__object] = STATE(92),
    [sym_function_definition] = STATE(159),
    [sym_function_call] = STATE(159),
    [sym_code_block] = STATE(20),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(97),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_variable_definition] = STATE(159),
    [sym_comment] = STATE(8),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
    [aux_sym_source_file_repeat1] = STATE(9),
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
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [9] = {
    [sym__expression] = STATE(44),
    [sym__expression_statement] = STATE(245),
    [sym__object] = STATE(92),
    [sym_function_definition] = STATE(159),
    [sym_function_call] = STATE(159),
    [sym_code_block] = STATE(20),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(97),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_variable_definition] = STATE(159),
    [sym_comment] = STATE(9),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
    [aux_sym_source_file_repeat1] = STATE(9),
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
  },
  [10] = {
    [sym__expression_statement] = STATE(155),
    [sym__object] = STATE(92),
    [sym_function_definition] = STATE(159),
    [sym_function_call] = STATE(159),
    [sym__expression_sequence] = STATE(215),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(97),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_variable_definition] = STATE(159),
    [sym_comment] = STATE(10),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
    [aux_sym__expression_sequence_repeat1] = STATE(11),
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
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [11] = {
    [sym__expression_statement] = STATE(134),
    [sym__object] = STATE(92),
    [sym_function_definition] = STATE(159),
    [sym_function_call] = STATE(159),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(97),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_variable_definition] = STATE(159),
    [sym_comment] = STATE(11),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
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
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [12] = {
    [sym_comment] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym_identifier] = ACTIONS(146),
    [anon_sym_SEMI] = ACTIONS(144),
    [anon_sym_if] = ACTIONS(146),
    [anon_sym_while] = ACTIONS(146),
    [anon_sym_EQ] = ACTIONS(146),
    [anon_sym_DOT] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_PIPE] = ACTIONS(146),
    [anon_sym_BSLASH] = ACTIONS(144),
    [sym_integer] = ACTIONS(146),
    [sym_hexinteger] = ACTIONS(144),
    [sym_float] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [sym_char] = ACTIONS(144),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [anon_sym_true] = ACTIONS(146),
    [anon_sym_false] = ACTIONS(146),
    [anon_sym_var] = ACTIONS(146),
    [anon_sym_classvar] = ACTIONS(146),
    [aux_sym_environment_var_token1] = ACTIONS(146),
    [anon_sym_TILDE] = ACTIONS(144),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(144),
    [anon_sym_BQUOTE] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(144),
    [anon_sym_RBRACK] = ACTIONS(144),
    [anon_sym_Bag] = ACTIONS(146),
    [anon_sym_Dictionary] = ACTIONS(146),
    [anon_sym_Environment] = ACTIONS(146),
    [anon_sym_Event] = ACTIONS(146),
    [anon_sym_IdentityBag] = ACTIONS(146),
    [anon_sym_IdentityDictionary] = ACTIONS(146),
    [anon_sym_IdentitySet] = ACTIONS(146),
    [anon_sym_LazyEnvir] = ACTIONS(146),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(146),
    [anon_sym_ObjectTable] = ACTIONS(146),
    [anon_sym_Set] = ACTIONS(146),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(146),
    [anon_sym_Array] = ACTIONS(146),
    [anon_sym_Array2D] = ACTIONS(146),
    [anon_sym_ArrayedCollection] = ACTIONS(146),
    [anon_sym_DoubleArray] = ACTIONS(146),
    [anon_sym_FloatArray] = ACTIONS(146),
    [anon_sym_Int16Array] = ACTIONS(146),
    [anon_sym_Int32Array] = ACTIONS(146),
    [anon_sym_Int8Array] = ACTIONS(146),
    [anon_sym_LinkedList] = ACTIONS(146),
    [anon_sym_List] = ACTIONS(146),
    [anon_sym_Order] = ACTIONS(146),
    [anon_sym_OrderedIdentitySet] = ACTIONS(146),
    [anon_sym_Pair] = ACTIONS(146),
    [anon_sym_PriorityQueue] = ACTIONS(146),
    [anon_sym_RawArray] = ACTIONS(146),
    [anon_sym_SequenceableCollection] = ACTIONS(146),
    [anon_sym_Signal] = ACTIONS(146),
    [anon_sym_SortedList] = ACTIONS(146),
    [anon_sym_SparseArray] = ACTIONS(146),
    [anon_sym_String] = ACTIONS(146),
    [anon_sym_SymbolArray] = ACTIONS(146),
    [anon_sym_AMP_AMP] = ACTIONS(144),
    [anon_sym_PIPE_PIPE] = ACTIONS(144),
    [anon_sym_AMP] = ACTIONS(146),
    [anon_sym_CARET] = ACTIONS(144),
    [anon_sym_EQ_EQ] = ACTIONS(144),
    [anon_sym_BANG_EQ] = ACTIONS(144),
    [anon_sym_LT] = ACTIONS(146),
    [anon_sym_LT_EQ] = ACTIONS(144),
    [anon_sym_GT] = ACTIONS(146),
    [anon_sym_GT_EQ] = ACTIONS(144),
    [anon_sym_LT_LT] = ACTIONS(144),
    [anon_sym_GT_GT] = ACTIONS(144),
    [anon_sym_PLUS] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(144),
    [anon_sym_STAR] = ACTIONS(144),
    [anon_sym_SLASH] = ACTIONS(146),
    [anon_sym_PERCENT] = ACTIONS(144),
    [sym_class] = ACTIONS(146),
    [anon_sym_DOTwhile] = ACTIONS(144),
    [anon_sym_for] = ACTIONS(146),
    [anon_sym_forBy] = ACTIONS(146),
  },
  [13] = {
    [sym__expression_statement] = STATE(213),
    [sym__object] = STATE(92),
    [sym_function_definition] = STATE(159),
    [sym_function_call] = STATE(159),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(97),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_variable_definition] = STATE(159),
    [sym_comment] = STATE(13),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
    [aux_sym__expression_sequence_repeat1] = STATE(13),
    [sym_identifier] = ACTIONS(148),
    [anon_sym_if] = ACTIONS(151),
    [anon_sym_while] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_BSLASH] = ACTIONS(163),
    [sym_integer] = ACTIONS(166),
    [sym_hexinteger] = ACTIONS(169),
    [sym_float] = ACTIONS(169),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [sym_char] = ACTIONS(175),
    [anon_sym_DQUOTE] = ACTIONS(178),
    [anon_sym_true] = ACTIONS(181),
    [anon_sym_false] = ACTIONS(181),
    [anon_sym_var] = ACTIONS(184),
    [anon_sym_classvar] = ACTIONS(187),
    [aux_sym_environment_var_token1] = ACTIONS(190),
    [anon_sym_TILDE] = ACTIONS(193),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(196),
    [anon_sym_BQUOTE] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_Bag] = ACTIONS(202),
    [anon_sym_Dictionary] = ACTIONS(202),
    [anon_sym_Environment] = ACTIONS(202),
    [anon_sym_Event] = ACTIONS(202),
    [anon_sym_IdentityBag] = ACTIONS(202),
    [anon_sym_IdentityDictionary] = ACTIONS(202),
    [anon_sym_IdentitySet] = ACTIONS(202),
    [anon_sym_LazyEnvir] = ACTIONS(202),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(202),
    [anon_sym_ObjectTable] = ACTIONS(202),
    [anon_sym_Set] = ACTIONS(202),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(202),
    [anon_sym_Array] = ACTIONS(205),
    [anon_sym_Array2D] = ACTIONS(205),
    [anon_sym_ArrayedCollection] = ACTIONS(205),
    [anon_sym_DoubleArray] = ACTIONS(205),
    [anon_sym_FloatArray] = ACTIONS(205),
    [anon_sym_Int16Array] = ACTIONS(205),
    [anon_sym_Int32Array] = ACTIONS(205),
    [anon_sym_Int8Array] = ACTIONS(205),
    [anon_sym_LinkedList] = ACTIONS(205),
    [anon_sym_List] = ACTIONS(205),
    [anon_sym_Order] = ACTIONS(205),
    [anon_sym_OrderedIdentitySet] = ACTIONS(205),
    [anon_sym_Pair] = ACTIONS(205),
    [anon_sym_PriorityQueue] = ACTIONS(205),
    [anon_sym_RawArray] = ACTIONS(205),
    [anon_sym_SequenceableCollection] = ACTIONS(205),
    [anon_sym_Signal] = ACTIONS(205),
    [anon_sym_SortedList] = ACTIONS(205),
    [anon_sym_SparseArray] = ACTIONS(205),
    [anon_sym_String] = ACTIONS(205),
    [anon_sym_SymbolArray] = ACTIONS(205),
    [sym_class] = ACTIONS(208),
    [anon_sym_for] = ACTIONS(211),
    [anon_sym_forBy] = ACTIONS(214),
  },
  [14] = {
    [sym__object] = STATE(102),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_parameter_call_list] = STATE(207),
    [sym_argument_calls] = STATE(130),
    [sym_unnamed_argument] = STATE(189),
    [sym_named_argument] = STATE(189),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(14),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
    [sym_identifier] = ACTIONS(217),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(221),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [15] = {
    [sym__object] = STATE(102),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_parameter_call_list] = STATE(200),
    [sym_argument_calls] = STATE(130),
    [sym_unnamed_argument] = STATE(189),
    [sym_named_argument] = STATE(189),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(15),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
    [sym_identifier] = ACTIONS(217),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(221),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [16] = {
    [sym__object] = STATE(102),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_parameter_call_list] = STATE(198),
    [sym_argument_calls] = STATE(130),
    [sym_unnamed_argument] = STATE(189),
    [sym_named_argument] = STATE(189),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(16),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
    [sym_identifier] = ACTIONS(217),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(221),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [17] = {
    [sym__object] = STATE(102),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_parameter_call_list] = STATE(235),
    [sym_argument_calls] = STATE(130),
    [sym_unnamed_argument] = STATE(189),
    [sym_named_argument] = STATE(189),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(17),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
    [sym_identifier] = ACTIONS(217),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(221),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [18] = {
    [sym__object] = STATE(102),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_argument_calls] = STATE(191),
    [sym_unnamed_argument] = STATE(189),
    [sym_named_argument] = STATE(189),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(18),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
    [sym_identifier] = ACTIONS(217),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_while] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_BSLASH] = ACTIONS(221),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [19] = {
    [sym__object] = STATE(93),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(66),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(19),
    [sym_collection] = STATE(57),
    [sym__collection_sequence] = STATE(203),
    [sym_associative_item] = STATE(144),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
    [sym_identifier] = ACTIONS(67),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [20] = {
    [sym_comment] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(233),
    [sym_identifier] = ACTIONS(235),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_if] = ACTIONS(235),
    [anon_sym_while] = ACTIONS(235),
    [anon_sym_EQ] = ACTIONS(239),
    [anon_sym_DOT] = ACTIONS(239),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_LBRACE] = ACTIONS(233),
    [anon_sym_PIPE] = ACTIONS(239),
    [anon_sym_BSLASH] = ACTIONS(233),
    [sym_integer] = ACTIONS(235),
    [sym_hexinteger] = ACTIONS(233),
    [sym_float] = ACTIONS(233),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [sym_char] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(235),
    [anon_sym_false] = ACTIONS(235),
    [anon_sym_var] = ACTIONS(235),
    [anon_sym_classvar] = ACTIONS(235),
    [aux_sym_environment_var_token1] = ACTIONS(235),
    [anon_sym_TILDE] = ACTIONS(233),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(233),
    [anon_sym_BQUOTE] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_Bag] = ACTIONS(235),
    [anon_sym_Dictionary] = ACTIONS(235),
    [anon_sym_Environment] = ACTIONS(235),
    [anon_sym_Event] = ACTIONS(235),
    [anon_sym_IdentityBag] = ACTIONS(235),
    [anon_sym_IdentityDictionary] = ACTIONS(235),
    [anon_sym_IdentitySet] = ACTIONS(235),
    [anon_sym_LazyEnvir] = ACTIONS(235),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(235),
    [anon_sym_ObjectTable] = ACTIONS(235),
    [anon_sym_Set] = ACTIONS(235),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(235),
    [anon_sym_Array] = ACTIONS(235),
    [anon_sym_Array2D] = ACTIONS(235),
    [anon_sym_ArrayedCollection] = ACTIONS(235),
    [anon_sym_DoubleArray] = ACTIONS(235),
    [anon_sym_FloatArray] = ACTIONS(235),
    [anon_sym_Int16Array] = ACTIONS(235),
    [anon_sym_Int32Array] = ACTIONS(235),
    [anon_sym_Int8Array] = ACTIONS(235),
    [anon_sym_LinkedList] = ACTIONS(235),
    [anon_sym_List] = ACTIONS(235),
    [anon_sym_Order] = ACTIONS(235),
    [anon_sym_OrderedIdentitySet] = ACTIONS(235),
    [anon_sym_Pair] = ACTIONS(235),
    [anon_sym_PriorityQueue] = ACTIONS(235),
    [anon_sym_RawArray] = ACTIONS(235),
    [anon_sym_SequenceableCollection] = ACTIONS(235),
    [anon_sym_Signal] = ACTIONS(235),
    [anon_sym_SortedList] = ACTIONS(235),
    [anon_sym_SparseArray] = ACTIONS(235),
    [anon_sym_String] = ACTIONS(235),
    [anon_sym_SymbolArray] = ACTIONS(235),
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
    [sym_class] = ACTIONS(235),
    [anon_sym_DOTwhile] = ACTIONS(237),
    [anon_sym_for] = ACTIONS(235),
    [anon_sym_forBy] = ACTIONS(235),
  },
  [21] = {
    [sym__object] = STATE(93),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(66),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(21),
    [sym_collection] = STATE(57),
    [sym__collection_sequence] = STATE(226),
    [sym_associative_item] = STATE(144),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
    [sym_identifier] = ACTIONS(67),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [22] = {
    [sym__object] = STATE(103),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(66),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(22),
    [sym_collection] = STATE(57),
    [sym_associative_item] = STATE(184),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
    [sym_identifier] = ACTIONS(67),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [23] = {
    [sym__object] = STATE(101),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(23),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [24] = {
    [sym__object] = STATE(90),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(24),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [25] = {
    [sym__object] = STATE(100),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(25),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [26] = {
    [sym__object] = STATE(96),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(26),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [27] = {
    [sym__object] = STATE(84),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(27),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [28] = {
    [sym__object] = STATE(85),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(28),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [29] = {
    [sym__object] = STATE(73),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(29),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [30] = {
    [sym__object] = STATE(87),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(30),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [31] = {
    [sym__object] = STATE(94),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(95),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(31),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [32] = {
    [sym__object] = STATE(80),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(32),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [33] = {
    [sym__object] = STATE(82),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(33),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [34] = {
    [sym__object] = STATE(88),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(34),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [35] = {
    [sym__object] = STATE(91),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(35),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [36] = {
    [sym__object] = STATE(89),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(36),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
  },
  [37] = {
    [sym__object] = STATE(104),
    [sym_code_block] = STATE(57),
    [sym_function_block] = STATE(57),
    [sym_literal] = STATE(57),
    [sym_number] = STATE(64),
    [sym_symbol] = STATE(64),
    [sym_string] = STATE(64),
    [sym_bool] = STATE(64),
    [sym_variable] = STATE(57),
    [sym_local_var] = STATE(59),
    [sym_classvar] = STATE(59),
    [sym_environment_var] = STATE(59),
    [sym_comment] = STATE(37),
    [sym_collection] = STATE(57),
    [sym__collection_types] = STATE(180),
    [sym__unordered_collection_types] = STATE(171),
    [sym__ordered_collection_types] = STATE(171),
    [sym_binary_expression] = STATE(57),
    [sym_control_structure] = STATE(57),
    [sym_if] = STATE(61),
    [sym_while] = STATE(61),
    [sym_for] = STATE(61),
    [sym_forby] = STATE(61),
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
    [anon_sym_Bag] = ACTIONS(223),
    [anon_sym_Dictionary] = ACTIONS(223),
    [anon_sym_Environment] = ACTIONS(223),
    [anon_sym_Event] = ACTIONS(223),
    [anon_sym_IdentityBag] = ACTIONS(223),
    [anon_sym_IdentityDictionary] = ACTIONS(223),
    [anon_sym_IdentitySet] = ACTIONS(223),
    [anon_sym_LazyEnvir] = ACTIONS(223),
    [anon_sym_MultiLevelIdentityDictionary] = ACTIONS(223),
    [anon_sym_ObjectTable] = ACTIONS(223),
    [anon_sym_Set] = ACTIONS(223),
    [anon_sym_TwoWayIdentityDictionary] = ACTIONS(223),
    [anon_sym_Array] = ACTIONS(47),
    [anon_sym_Array2D] = ACTIONS(225),
    [anon_sym_ArrayedCollection] = ACTIONS(225),
    [anon_sym_DoubleArray] = ACTIONS(225),
    [anon_sym_FloatArray] = ACTIONS(225),
    [anon_sym_Int16Array] = ACTIONS(225),
    [anon_sym_Int32Array] = ACTIONS(225),
    [anon_sym_Int8Array] = ACTIONS(225),
    [anon_sym_LinkedList] = ACTIONS(225),
    [anon_sym_List] = ACTIONS(225),
    [anon_sym_Order] = ACTIONS(47),
    [anon_sym_OrderedIdentitySet] = ACTIONS(225),
    [anon_sym_Pair] = ACTIONS(225),
    [anon_sym_PriorityQueue] = ACTIONS(225),
    [anon_sym_RawArray] = ACTIONS(225),
    [anon_sym_SequenceableCollection] = ACTIONS(225),
    [anon_sym_Signal] = ACTIONS(225),
    [anon_sym_SortedList] = ACTIONS(225),
    [anon_sym_SparseArray] = ACTIONS(225),
    [anon_sym_String] = ACTIONS(225),
    [anon_sym_SymbolArray] = ACTIONS(225),
    [anon_sym_for] = ACTIONS(51),
    [anon_sym_forBy] = ACTIONS(53),
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
    ACTIONS(241), 45,
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
  [73] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(39), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(247), 12,
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
    ACTIONS(245), 45,
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
  [148] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(40), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(247), 12,
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
    ACTIONS(245), 45,
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
  [223] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(41), 1,
      sym_comment,
    ACTIONS(255), 14,
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
    ACTIONS(253), 45,
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
  [296] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(42), 1,
      sym_comment,
    ACTIONS(259), 14,
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
    ACTIONS(257), 45,
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
  [369] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(43), 1,
      sym_comment,
    ACTIONS(261), 13,
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
    ACTIONS(263), 45,
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
  [441] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(44), 1,
      sym_comment,
    ACTIONS(265), 13,
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
    ACTIONS(267), 45,
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
  [513] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(45), 1,
      sym_comment,
    ACTIONS(247), 12,
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
    ACTIONS(245), 45,
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
  [584] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(273), 1,
      anon_sym_DOTfor,
    ACTIONS(275), 1,
      anon_sym_DOTforBy,
    STATE(46), 1,
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
  [630] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(47), 1,
      sym_comment,
    ACTIONS(279), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(277), 19,
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
  [671] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(48), 1,
      sym_comment,
    ACTIONS(283), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(281), 19,
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
  [712] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(49), 1,
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
  [752] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(50), 1,
      sym_comment,
    ACTIONS(291), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(289), 19,
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
  [792] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(51), 1,
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
  [832] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(52), 1,
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
  [872] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(53), 1,
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
  [912] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(54), 1,
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
  [952] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(55), 1,
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
  [992] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(56), 1,
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
  [1032] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(57), 1,
      sym_comment,
    ACTIONS(239), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(237), 19,
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
  [1072] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(58), 1,
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
  [1112] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(59), 1,
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
  [1152] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(60), 1,
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
  [1192] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(61), 1,
      sym_comment,
    ACTIONS(327), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(325), 19,
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
  [1232] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(62), 1,
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
  [1272] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(337), 1,
      anon_sym_COLON,
    STATE(63), 1,
      sym_comment,
    ACTIONS(335), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(333), 18,
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
  [1314] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(64), 1,
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
  [1354] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(65), 1,
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
  [1394] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(66), 1,
      sym_comment,
    ACTIONS(337), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
    ACTIONS(341), 8,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_SLASH,
    ACTIONS(339), 16,
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
  [1436] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(67), 1,
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
  [1476] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(68), 1,
      sym_comment,
    ACTIONS(335), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(333), 19,
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
  [1516] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(69), 1,
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
  [1556] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(70), 1,
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
  [1596] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(71), 1,
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
  [1636] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(72), 1,
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
  [1676] = 17,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(369), 1,
      anon_sym_EQ,
    ACTIONS(371), 1,
      anon_sym_DOT,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    ACTIONS(375), 1,
      anon_sym_AMP_AMP,
    ACTIONS(377), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(379), 1,
      anon_sym_AMP,
    ACTIONS(381), 1,
      anon_sym_CARET,
    ACTIONS(393), 1,
      anon_sym_SLASH,
    STATE(73), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(387), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(383), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(367), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DOTwhile,
  [1740] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(74), 1,
      sym_comment,
    ACTIONS(397), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(395), 19,
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
  [1780] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(75), 1,
      sym_comment,
    ACTIONS(401), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(399), 19,
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
  [1820] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(76), 1,
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
  [1860] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(77), 1,
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
  [1900] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(78), 1,
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
  [1940] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(79), 1,
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
  [1980] = 11,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(379), 1,
      anon_sym_AMP,
    ACTIONS(381), 1,
      anon_sym_CARET,
    ACTIONS(393), 1,
      anon_sym_SLASH,
    STATE(80), 1,
      sym_comment,
    ACTIONS(387), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(369), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(367), 12,
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
  [2032] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(81), 1,
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
  [2072] = 14,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    ACTIONS(379), 1,
      anon_sym_AMP,
    ACTIONS(381), 1,
      anon_sym_CARET,
    ACTIONS(393), 1,
      anon_sym_SLASH,
    STATE(82), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_EQ,
      anon_sym_DOT,
    ACTIONS(385), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(387), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(383), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(367), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOTwhile,
  [2130] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(83), 1,
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
  [2170] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(84), 1,
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
  [2210] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(393), 1,
      anon_sym_SLASH,
    STATE(85), 1,
      sym_comment,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(369), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(367), 17,
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
  [2254] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(86), 1,
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
  [2294] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(393), 1,
      anon_sym_SLASH,
    STATE(87), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(369), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(367), 15,
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
  [2340] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    ACTIONS(379), 1,
      anon_sym_AMP,
    ACTIONS(381), 1,
      anon_sym_CARET,
    ACTIONS(393), 1,
      anon_sym_SLASH,
    STATE(88), 1,
      sym_comment,
    ACTIONS(387), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(369), 4,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(367), 12,
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
  [2394] = 10,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(379), 1,
      anon_sym_AMP,
    ACTIONS(393), 1,
      anon_sym_SLASH,
    STATE(89), 1,
      sym_comment,
    ACTIONS(387), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(369), 5,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(367), 13,
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
  [2444] = 15,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    ACTIONS(375), 1,
      anon_sym_AMP_AMP,
    ACTIONS(379), 1,
      anon_sym_AMP,
    ACTIONS(381), 1,
      anon_sym_CARET,
    ACTIONS(393), 1,
      anon_sym_SLASH,
    STATE(90), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_EQ,
      anon_sym_DOT,
    ACTIONS(385), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(387), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(383), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(367), 7,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE_PIPE,
      anon_sym_DOTwhile,
  [2504] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(393), 1,
      anon_sym_SLASH,
    STATE(91), 1,
      sym_comment,
    ACTIONS(387), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(369), 6,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(367), 13,
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
  [2552] = 19,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    ACTIONS(375), 1,
      anon_sym_AMP_AMP,
    ACTIONS(377), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(379), 1,
      anon_sym_AMP,
    ACTIONS(381), 1,
      anon_sym_CARET,
    ACTIONS(393), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_EQ,
    ACTIONS(435), 1,
      anon_sym_DOT,
    ACTIONS(437), 1,
      anon_sym_DOTwhile,
    STATE(92), 1,
      sym_comment,
    STATE(139), 1,
      sym_instance_method_call,
    ACTIONS(385), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(387), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(431), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(383), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2619] = 20,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(371), 1,
      anon_sym_DOT,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    ACTIONS(375), 1,
      anon_sym_AMP_AMP,
    ACTIONS(377), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(379), 1,
      anon_sym_AMP,
    ACTIONS(381), 1,
      anon_sym_CARET,
    ACTIONS(393), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_EQ,
    ACTIONS(437), 1,
      anon_sym_DOTwhile,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      sym_comment,
    STATE(124), 1,
      aux_sym__collection_sequence_repeat1,
    ACTIONS(385), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(387), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(383), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2687] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(371), 1,
      anon_sym_DOT,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    ACTIONS(375), 1,
      anon_sym_AMP_AMP,
    ACTIONS(377), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(379), 1,
      anon_sym_AMP,
    ACTIONS(381), 1,
      anon_sym_CARET,
    ACTIONS(393), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_EQ,
    ACTIONS(437), 1,
      anon_sym_DOTwhile,
    STATE(94), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(387), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(443), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(383), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2751] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(95), 1,
      sym_comment,
    ACTIONS(445), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
    ACTIONS(239), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(237), 14,
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
  [2791] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(371), 1,
      anon_sym_DOT,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    ACTIONS(375), 1,
      anon_sym_AMP_AMP,
    ACTIONS(377), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(379), 1,
      anon_sym_AMP,
    ACTIONS(381), 1,
      anon_sym_CARET,
    ACTIONS(393), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_EQ,
    ACTIONS(437), 1,
      anon_sym_DOTwhile,
    STATE(96), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(387), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(447), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(383), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2855] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(449), 1,
      anon_sym_EQ,
    STATE(97), 1,
      sym_comment,
    ACTIONS(239), 6,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(237), 17,
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
  [2895] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(451), 1,
      anon_sym_COLON,
    STATE(98), 1,
      sym_comment,
    ACTIONS(335), 7,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(333), 16,
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
  [2935] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(453), 1,
      anon_sym_EQ,
    ACTIONS(457), 1,
      anon_sym_COLON,
    STATE(99), 1,
      sym_comment,
    ACTIONS(455), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(279), 6,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
    ACTIONS(277), 14,
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
  [2979] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(371), 1,
      anon_sym_DOT,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    ACTIONS(375), 1,
      anon_sym_AMP_AMP,
    ACTIONS(377), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(379), 1,
      anon_sym_AMP,
    ACTIONS(381), 1,
      anon_sym_CARET,
    ACTIONS(393), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_EQ,
    ACTIONS(437), 1,
      anon_sym_DOTwhile,
    STATE(100), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(387), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(459), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(383), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3042] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(371), 1,
      anon_sym_DOT,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    ACTIONS(375), 1,
      anon_sym_AMP_AMP,
    ACTIONS(377), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(379), 1,
      anon_sym_AMP,
    ACTIONS(381), 1,
      anon_sym_CARET,
    ACTIONS(393), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_EQ,
    ACTIONS(437), 1,
      anon_sym_DOTwhile,
    STATE(101), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(387), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(461), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(383), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3105] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(371), 1,
      anon_sym_DOT,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    ACTIONS(375), 1,
      anon_sym_AMP_AMP,
    ACTIONS(377), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(379), 1,
      anon_sym_AMP,
    ACTIONS(381), 1,
      anon_sym_CARET,
    ACTIONS(393), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_EQ,
    ACTIONS(437), 1,
      anon_sym_DOTwhile,
    STATE(102), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(387), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(463), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(383), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3168] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(371), 1,
      anon_sym_DOT,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    ACTIONS(375), 1,
      anon_sym_AMP_AMP,
    ACTIONS(377), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(379), 1,
      anon_sym_AMP,
    ACTIONS(381), 1,
      anon_sym_CARET,
    ACTIONS(393), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_EQ,
    ACTIONS(437), 1,
      anon_sym_DOTwhile,
    STATE(103), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(387), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(465), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(383), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3231] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(371), 1,
      anon_sym_DOT,
    ACTIONS(373), 1,
      anon_sym_PIPE,
    ACTIONS(375), 1,
      anon_sym_AMP_AMP,
    ACTIONS(377), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(379), 1,
      anon_sym_AMP,
    ACTIONS(381), 1,
      anon_sym_CARET,
    ACTIONS(393), 1,
      anon_sym_SLASH,
    ACTIONS(433), 1,
      anon_sym_EQ,
    ACTIONS(437), 1,
      anon_sym_DOTwhile,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(387), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(389), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(391), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(383), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3293] = 12,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(469), 1,
      anon_sym_BSLASH,
    ACTIONS(471), 1,
      sym_integer,
    ACTIONS(475), 1,
      anon_sym_SQUOTE,
    ACTIONS(477), 1,
      sym_char,
    ACTIONS(479), 1,
      anon_sym_DQUOTE,
    STATE(105), 1,
      sym_comment,
    STATE(131), 1,
      sym_literal,
    ACTIONS(473), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(481), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [3335] = 12,
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
    ACTIONS(483), 1,
      sym_integer,
    STATE(106), 1,
      sym_comment,
    STATE(131), 1,
      sym_literal,
    ACTIONS(23), 2,
      sym_hexinteger,
      sym_float,
    ACTIONS(485), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(64), 4,
      sym_number,
      sym_symbol,
      sym_string,
      sym_bool,
  [3377] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(491), 1,
      anon_sym_if,
    ACTIONS(493), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_comment,
    ACTIONS(489), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3401] = 9,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      sym_identifier,
    STATE(108), 1,
      sym_comment,
    STATE(153), 1,
      sym_associative_item,
    STATE(186), 1,
      sym_symbol,
    STATE(206), 1,
      sym__paired_associative_sequence,
  [3429] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(19), 1,
      anon_sym_BSLASH,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(495), 1,
      sym_identifier,
    STATE(109), 1,
      sym_comment,
    STATE(169), 1,
      sym_associative_item,
    STATE(186), 1,
      sym_symbol,
  [3454] = 7,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(497), 1,
      anon_sym_DQUOTE,
    ACTIONS(499), 1,
      aux_sym_string_token1,
    ACTIONS(501), 1,
      sym_escape_sequence,
    ACTIONS(503), 1,
      sym_line_comment,
    STATE(110), 1,
      sym_comment,
    STATE(111), 1,
      aux_sym_string_repeat1,
  [3476] = 6,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(503), 1,
      sym_line_comment,
    ACTIONS(505), 1,
      anon_sym_DQUOTE,
    ACTIONS(507), 1,
      aux_sym_string_token1,
    ACTIONS(510), 1,
      sym_escape_sequence,
    STATE(111), 2,
      sym_comment,
      aux_sym_string_repeat1,
  [3496] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(515), 1,
      anon_sym_LPAREN,
    STATE(112), 1,
      sym_comment,
    ACTIONS(513), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3514] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym_comment,
    ACTIONS(517), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3532] = 7,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(499), 1,
      aux_sym_string_token1,
    ACTIONS(501), 1,
      sym_escape_sequence,
    ACTIONS(503), 1,
      sym_line_comment,
    ACTIONS(521), 1,
      anon_sym_DQUOTE,
    STATE(114), 1,
      sym_comment,
    STATE(115), 1,
      aux_sym_string_repeat1,
  [3554] = 7,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(499), 1,
      aux_sym_string_token1,
    ACTIONS(501), 1,
      sym_escape_sequence,
    ACTIONS(503), 1,
      sym_line_comment,
    ACTIONS(523), 1,
      anon_sym_DQUOTE,
    STATE(111), 1,
      aux_sym_string_repeat1,
    STATE(115), 1,
      sym_comment,
  [3576] = 7,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(499), 1,
      aux_sym_string_token1,
    ACTIONS(501), 1,
      sym_escape_sequence,
    ACTIONS(503), 1,
      sym_line_comment,
    ACTIONS(525), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      aux_sym_string_repeat1,
    STATE(116), 1,
      sym_comment,
  [3598] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(117), 1,
      sym_comment,
    ACTIONS(527), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3613] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      sym_function_block,
    STATE(118), 1,
      sym_comment,
  [3632] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(119), 1,
      sym_comment,
    ACTIONS(531), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3647] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    ACTIONS(535), 1,
      anon_sym_COMMA,
    STATE(120), 2,
      sym_comment,
      aux_sym_parameter_call_list_repeat1,
  [3664] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_PIPE,
    STATE(121), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym_parameter_list_repeat1,
  [3683] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(122), 1,
      sym_comment,
    ACTIONS(542), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3698] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_comment,
    STATE(211), 1,
      sym_function_block,
  [3717] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(544), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      sym_comment,
    STATE(160), 1,
      aux_sym__collection_sequence_repeat1,
  [3736] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(125), 1,
      sym_comment,
    ACTIONS(546), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3751] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(548), 1,
      anon_sym_SEMI,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    STATE(126), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [3768] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(548), 1,
      anon_sym_PIPE,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    STATE(127), 2,
      sym_comment,
      aux_sym_parameter_list_repeat1,
  [3785] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(540), 1,
      anon_sym_SEMI,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      sym_comment,
    STATE(157), 1,
      aux_sym_parameter_list_repeat1,
  [3804] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(129), 1,
      sym_comment,
    ACTIONS(548), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3819] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(558), 1,
      anon_sym_RPAREN,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      sym_comment,
    STATE(164), 1,
      aux_sym_parameter_call_list_repeat1,
  [3838] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(131), 1,
      sym_comment,
    ACTIONS(562), 3,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [3853] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(566), 1,
      anon_sym_EQ,
    STATE(132), 1,
      sym_comment,
    ACTIONS(564), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [3870] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(568), 1,
      anon_sym_DOT,
    ACTIONS(570), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
      sym_comment,
    STATE(143), 1,
      sym_class_method_call,
  [3889] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(572), 1,
      anon_sym_SEMI,
    STATE(134), 1,
      sym_comment,
    ACTIONS(249), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3906] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(574), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_function_block,
    STATE(135), 1,
      sym_comment,
  [3925] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(136), 1,
      sym_comment,
    ACTIONS(576), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3940] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      sym_comment,
    STATE(154), 1,
      aux_sym__paired_associative_sequence_repeat1,
  [3959] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(138), 1,
      sym_comment,
    STATE(223), 1,
      sym_function_block,
  [3978] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(139), 1,
      sym_comment,
    ACTIONS(582), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [3993] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(140), 1,
      sym_comment,
    ACTIONS(584), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [4008] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(141), 1,
      sym_comment,
    STATE(225), 1,
      sym_function_block,
  [4027] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(142), 1,
      sym_comment,
    ACTIONS(586), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [4042] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(143), 1,
      sym_comment,
    ACTIONS(588), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [4057] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(441), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      aux_sym__collection_sequence_repeat1,
    STATE(144), 1,
      sym_comment,
  [4076] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      sym_comment,
    STATE(227), 1,
      sym_function_block,
  [4095] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(146), 1,
      sym_comment,
    STATE(190), 1,
      sym_function_block,
  [4114] = 5,
    ACTIONS(11), 1,
      sym_block_comment,
    ACTIONS(503), 1,
      sym_line_comment,
    ACTIONS(592), 1,
      aux_sym_string_token1,
    STATE(147), 1,
      sym_comment,
    ACTIONS(590), 2,
      anon_sym_DQUOTE,
      sym_escape_sequence,
  [4131] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      sym_comment,
    STATE(181), 1,
      sym_function_block,
  [4150] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(149), 1,
      sym_comment,
    STATE(232), 1,
      sym_function_block,
  [4169] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      sym_comment,
    STATE(221), 1,
      sym_function_block,
  [4188] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(594), 1,
      sym_identifier,
    ACTIONS(596), 1,
      anon_sym_PIPE,
    STATE(121), 1,
      sym_argument,
    STATE(151), 1,
      sym_comment,
  [4207] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(596), 1,
      anon_sym_SEMI,
    ACTIONS(598), 1,
      sym_identifier,
    STATE(128), 1,
      sym_argument,
    STATE(152), 1,
      sym_comment,
  [4226] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym__paired_associative_sequence_repeat1,
    STATE(153), 1,
      sym_comment,
  [4245] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    ACTIONS(604), 1,
      anon_sym_COMMA,
    STATE(154), 2,
      sym_comment,
      aux_sym__paired_associative_sequence_repeat1,
  [4262] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(607), 1,
      anon_sym_SEMI,
    STATE(155), 1,
      sym_comment,
    ACTIONS(609), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [4279] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(156), 1,
      sym_comment,
    STATE(217), 1,
      sym_function_block,
  [4298] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(556), 1,
      anon_sym_COMMA,
    ACTIONS(611), 1,
      anon_sym_SEMI,
    STATE(126), 1,
      aux_sym_parameter_list_repeat1,
    STATE(157), 1,
      sym_comment,
  [4317] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(611), 1,
      anon_sym_PIPE,
    STATE(127), 1,
      aux_sym_parameter_list_repeat1,
    STATE(158), 1,
      sym_comment,
  [4336] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(159), 1,
      sym_comment,
    ACTIONS(431), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [4351] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    STATE(160), 2,
      sym_comment,
      aux_sym__collection_sequence_repeat1,
  [4368] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(616), 1,
      anon_sym_EQ,
    STATE(161), 1,
      sym_comment,
    ACTIONS(564), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4385] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(162), 1,
      sym_comment,
    ACTIONS(618), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [4400] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    ACTIONS(529), 1,
      anon_sym_LPAREN,
    STATE(163), 1,
      sym_comment,
    STATE(220), 1,
      sym_function_block,
  [4419] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(560), 1,
      anon_sym_COMMA,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_parameter_call_list_repeat1,
    STATE(164), 1,
      sym_comment,
  [4438] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(622), 1,
      anon_sym_RPAREN,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_comment,
  [4454] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(626), 1,
      sym_identifier,
    ACTIONS(628), 1,
      aux_sym_symbol_token1,
    STATE(166), 1,
      sym_comment,
  [4470] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(598), 1,
      sym_identifier,
    STATE(129), 1,
      sym_argument,
    STATE(167), 1,
      sym_comment,
  [4486] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(168), 1,
      sym_comment,
    ACTIONS(630), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [4500] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(169), 1,
      sym_comment,
    ACTIONS(602), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4514] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(594), 1,
      sym_identifier,
    STATE(129), 1,
      sym_argument,
    STATE(170), 1,
      sym_comment,
  [4530] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(171), 1,
      sym_comment,
    ACTIONS(632), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4544] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(172), 1,
      sym_comment,
    ACTIONS(634), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [4558] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(173), 1,
      sym_comment,
    ACTIONS(297), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4572] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(174), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4586] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(175), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4600] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(176), 1,
      sym_comment,
    ACTIONS(277), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4614] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(177), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4628] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(178), 1,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4642] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(179), 1,
      sym_comment,
    ACTIONS(269), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [4656] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(636), 1,
      anon_sym_LPAREN,
    ACTIONS(638), 1,
      anon_sym_LBRACK,
    STATE(180), 1,
      sym_comment,
  [4672] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(640), 1,
      anon_sym_RPAREN,
    ACTIONS(642), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      sym_comment,
  [4688] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(182), 1,
      sym_comment,
  [4704] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(183), 1,
      sym_comment,
    ACTIONS(644), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [4718] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(184), 1,
      sym_comment,
    ACTIONS(465), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4732] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(185), 1,
      sym_comment,
    ACTIONS(646), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4746] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(186), 1,
      sym_comment,
    ACTIONS(337), 2,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
  [4760] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(187), 1,
      sym_comment,
    ACTIONS(628), 2,
      aux_sym_symbol_token1,
      sym_identifier,
  [4774] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(188), 1,
      sym_comment,
    ACTIONS(648), 2,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [4788] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(189), 1,
      sym_comment,
    ACTIONS(650), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4802] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      sym_comment,
  [4818] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(191), 1,
      sym_comment,
    ACTIONS(533), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4832] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(622), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      sym_comment,
  [4845] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(656), 1,
      sym_integer,
    STATE(193), 1,
      sym_comment,
  [4858] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(658), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      sym_comment,
  [4871] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(660), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_comment,
  [4884] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      sym_comment,
  [4897] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(664), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_comment,
  [4910] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(666), 1,
      anon_sym_RPAREN,
    STATE(198), 1,
      sym_comment,
  [4923] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(668), 1,
      sym_integer,
    STATE(199), 1,
      sym_comment,
  [4936] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    STATE(200), 1,
      sym_comment,
  [4949] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(672), 1,
      anon_sym_LPAREN,
    STATE(201), 1,
      sym_comment,
  [4962] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(674), 1,
      anon_sym_if,
    STATE(202), 1,
      sym_comment,
  [4975] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(676), 1,
      anon_sym_RBRACK,
    STATE(203), 1,
      sym_comment,
  [4988] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(678), 1,
      anon_sym_COMMA,
    STATE(204), 1,
      sym_comment,
  [5001] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(680), 1,
      anon_sym_COMMA,
    STATE(205), 1,
      sym_comment,
  [5014] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(676), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      sym_comment,
  [5027] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      sym_comment,
  [5040] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(337), 1,
      anon_sym_COLON,
    STATE(208), 1,
      sym_comment,
  [5053] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(684), 1,
      sym_integer,
    STATE(209), 1,
      sym_comment,
  [5066] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(686), 1,
      sym_integer,
    STATE(210), 1,
      sym_comment,
  [5079] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      sym_comment,
  [5092] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(690), 1,
      anon_sym_COMMA,
    STATE(212), 1,
      sym_comment,
  [5105] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(692), 1,
      anon_sym_SEMI,
    STATE(213), 1,
      sym_comment,
  [5118] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(694), 1,
      sym_identifier,
    STATE(214), 1,
      sym_comment,
  [5131] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(624), 1,
      anon_sym_RBRACE,
    STATE(215), 1,
      sym_comment,
  [5144] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(696), 1,
      sym_integer,
    STATE(216), 1,
      sym_comment,
  [5157] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(698), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      sym_comment,
  [5170] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(700), 1,
      anon_sym_LBRACE,
    STATE(218), 1,
      sym_comment,
  [5183] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(702), 1,
      sym_integer,
    STATE(219), 1,
      sym_comment,
  [5196] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      sym_comment,
  [5209] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
    STATE(221), 1,
      sym_comment,
  [5222] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(222), 1,
      sym_comment,
  [5235] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      sym_comment,
  [5248] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(712), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      sym_comment,
  [5261] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(714), 1,
      anon_sym_RPAREN,
    STATE(225), 1,
      sym_comment,
  [5274] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(716), 1,
      anon_sym_RBRACK,
    STATE(226), 1,
      sym_comment,
  [5287] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(718), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      sym_comment,
  [5300] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(720), 1,
      anon_sym_SQUOTE,
    STATE(228), 1,
      sym_comment,
  [5313] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(722), 1,
      anon_sym_LPAREN,
    STATE(229), 1,
      sym_comment,
  [5326] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(724), 1,
      anon_sym_LPAREN,
    STATE(230), 1,
      sym_comment,
  [5339] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_comment,
  [5352] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      sym_comment,
  [5365] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      sym_comment,
  [5378] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(234), 1,
      sym_comment,
  [5391] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(728), 1,
      anon_sym_RPAREN,
    STATE(235), 1,
      sym_comment,
  [5404] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(730), 1,
      sym_identifier,
    STATE(236), 1,
      sym_comment,
  [5417] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(732), 1,
      anon_sym_LPAREN,
    STATE(237), 1,
      sym_comment,
  [5430] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(734), 1,
      sym_identifier,
    STATE(238), 1,
      sym_comment,
  [5443] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(736), 1,
      sym_integer,
    STATE(239), 1,
      sym_comment,
  [5456] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(738), 1,
      sym_integer,
    STATE(240), 1,
      sym_comment,
  [5469] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
    STATE(241), 1,
      sym_comment,
  [5482] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(742), 1,
      anon_sym_RBRACE,
    STATE(242), 1,
      sym_comment,
  [5495] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(744), 1,
      anon_sym_COMMA,
    STATE(243), 1,
      sym_comment,
  [5508] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(746), 1,
      anon_sym_SQUOTE,
    STATE(244), 1,
      sym_comment,
  [5521] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(748), 1,
      anon_sym_SEMI,
    STATE(245), 1,
      sym_comment,
  [5534] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(750), 1,
      ts_builtin_sym_end,
    STATE(246), 1,
      sym_comment,
  [5547] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(752), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      sym_comment,
  [5560] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(754), 1,
      anon_sym_LPAREN,
    STATE(248), 1,
      sym_comment,
  [5573] = 1,
    ACTIONS(756), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(38)] = 0,
  [SMALL_STATE(39)] = 73,
  [SMALL_STATE(40)] = 148,
  [SMALL_STATE(41)] = 223,
  [SMALL_STATE(42)] = 296,
  [SMALL_STATE(43)] = 369,
  [SMALL_STATE(44)] = 441,
  [SMALL_STATE(45)] = 513,
  [SMALL_STATE(46)] = 584,
  [SMALL_STATE(47)] = 630,
  [SMALL_STATE(48)] = 671,
  [SMALL_STATE(49)] = 712,
  [SMALL_STATE(50)] = 752,
  [SMALL_STATE(51)] = 792,
  [SMALL_STATE(52)] = 832,
  [SMALL_STATE(53)] = 872,
  [SMALL_STATE(54)] = 912,
  [SMALL_STATE(55)] = 952,
  [SMALL_STATE(56)] = 992,
  [SMALL_STATE(57)] = 1032,
  [SMALL_STATE(58)] = 1072,
  [SMALL_STATE(59)] = 1112,
  [SMALL_STATE(60)] = 1152,
  [SMALL_STATE(61)] = 1192,
  [SMALL_STATE(62)] = 1232,
  [SMALL_STATE(63)] = 1272,
  [SMALL_STATE(64)] = 1314,
  [SMALL_STATE(65)] = 1354,
  [SMALL_STATE(66)] = 1394,
  [SMALL_STATE(67)] = 1436,
  [SMALL_STATE(68)] = 1476,
  [SMALL_STATE(69)] = 1516,
  [SMALL_STATE(70)] = 1556,
  [SMALL_STATE(71)] = 1596,
  [SMALL_STATE(72)] = 1636,
  [SMALL_STATE(73)] = 1676,
  [SMALL_STATE(74)] = 1740,
  [SMALL_STATE(75)] = 1780,
  [SMALL_STATE(76)] = 1820,
  [SMALL_STATE(77)] = 1860,
  [SMALL_STATE(78)] = 1900,
  [SMALL_STATE(79)] = 1940,
  [SMALL_STATE(80)] = 1980,
  [SMALL_STATE(81)] = 2032,
  [SMALL_STATE(82)] = 2072,
  [SMALL_STATE(83)] = 2130,
  [SMALL_STATE(84)] = 2170,
  [SMALL_STATE(85)] = 2210,
  [SMALL_STATE(86)] = 2254,
  [SMALL_STATE(87)] = 2294,
  [SMALL_STATE(88)] = 2340,
  [SMALL_STATE(89)] = 2394,
  [SMALL_STATE(90)] = 2444,
  [SMALL_STATE(91)] = 2504,
  [SMALL_STATE(92)] = 2552,
  [SMALL_STATE(93)] = 2619,
  [SMALL_STATE(94)] = 2687,
  [SMALL_STATE(95)] = 2751,
  [SMALL_STATE(96)] = 2791,
  [SMALL_STATE(97)] = 2855,
  [SMALL_STATE(98)] = 2895,
  [SMALL_STATE(99)] = 2935,
  [SMALL_STATE(100)] = 2979,
  [SMALL_STATE(101)] = 3042,
  [SMALL_STATE(102)] = 3105,
  [SMALL_STATE(103)] = 3168,
  [SMALL_STATE(104)] = 3231,
  [SMALL_STATE(105)] = 3293,
  [SMALL_STATE(106)] = 3335,
  [SMALL_STATE(107)] = 3377,
  [SMALL_STATE(108)] = 3401,
  [SMALL_STATE(109)] = 3429,
  [SMALL_STATE(110)] = 3454,
  [SMALL_STATE(111)] = 3476,
  [SMALL_STATE(112)] = 3496,
  [SMALL_STATE(113)] = 3514,
  [SMALL_STATE(114)] = 3532,
  [SMALL_STATE(115)] = 3554,
  [SMALL_STATE(116)] = 3576,
  [SMALL_STATE(117)] = 3598,
  [SMALL_STATE(118)] = 3613,
  [SMALL_STATE(119)] = 3632,
  [SMALL_STATE(120)] = 3647,
  [SMALL_STATE(121)] = 3664,
  [SMALL_STATE(122)] = 3683,
  [SMALL_STATE(123)] = 3698,
  [SMALL_STATE(124)] = 3717,
  [SMALL_STATE(125)] = 3736,
  [SMALL_STATE(126)] = 3751,
  [SMALL_STATE(127)] = 3768,
  [SMALL_STATE(128)] = 3785,
  [SMALL_STATE(129)] = 3804,
  [SMALL_STATE(130)] = 3819,
  [SMALL_STATE(131)] = 3838,
  [SMALL_STATE(132)] = 3853,
  [SMALL_STATE(133)] = 3870,
  [SMALL_STATE(134)] = 3889,
  [SMALL_STATE(135)] = 3906,
  [SMALL_STATE(136)] = 3925,
  [SMALL_STATE(137)] = 3940,
  [SMALL_STATE(138)] = 3959,
  [SMALL_STATE(139)] = 3978,
  [SMALL_STATE(140)] = 3993,
  [SMALL_STATE(141)] = 4008,
  [SMALL_STATE(142)] = 4027,
  [SMALL_STATE(143)] = 4042,
  [SMALL_STATE(144)] = 4057,
  [SMALL_STATE(145)] = 4076,
  [SMALL_STATE(146)] = 4095,
  [SMALL_STATE(147)] = 4114,
  [SMALL_STATE(148)] = 4131,
  [SMALL_STATE(149)] = 4150,
  [SMALL_STATE(150)] = 4169,
  [SMALL_STATE(151)] = 4188,
  [SMALL_STATE(152)] = 4207,
  [SMALL_STATE(153)] = 4226,
  [SMALL_STATE(154)] = 4245,
  [SMALL_STATE(155)] = 4262,
  [SMALL_STATE(156)] = 4279,
  [SMALL_STATE(157)] = 4298,
  [SMALL_STATE(158)] = 4317,
  [SMALL_STATE(159)] = 4336,
  [SMALL_STATE(160)] = 4351,
  [SMALL_STATE(161)] = 4368,
  [SMALL_STATE(162)] = 4385,
  [SMALL_STATE(163)] = 4400,
  [SMALL_STATE(164)] = 4419,
  [SMALL_STATE(165)] = 4438,
  [SMALL_STATE(166)] = 4454,
  [SMALL_STATE(167)] = 4470,
  [SMALL_STATE(168)] = 4486,
  [SMALL_STATE(169)] = 4500,
  [SMALL_STATE(170)] = 4514,
  [SMALL_STATE(171)] = 4530,
  [SMALL_STATE(172)] = 4544,
  [SMALL_STATE(173)] = 4558,
  [SMALL_STATE(174)] = 4572,
  [SMALL_STATE(175)] = 4586,
  [SMALL_STATE(176)] = 4600,
  [SMALL_STATE(177)] = 4614,
  [SMALL_STATE(178)] = 4628,
  [SMALL_STATE(179)] = 4642,
  [SMALL_STATE(180)] = 4656,
  [SMALL_STATE(181)] = 4672,
  [SMALL_STATE(182)] = 4688,
  [SMALL_STATE(183)] = 4704,
  [SMALL_STATE(184)] = 4718,
  [SMALL_STATE(185)] = 4732,
  [SMALL_STATE(186)] = 4746,
  [SMALL_STATE(187)] = 4760,
  [SMALL_STATE(188)] = 4774,
  [SMALL_STATE(189)] = 4788,
  [SMALL_STATE(190)] = 4802,
  [SMALL_STATE(191)] = 4818,
  [SMALL_STATE(192)] = 4832,
  [SMALL_STATE(193)] = 4845,
  [SMALL_STATE(194)] = 4858,
  [SMALL_STATE(195)] = 4871,
  [SMALL_STATE(196)] = 4884,
  [SMALL_STATE(197)] = 4897,
  [SMALL_STATE(198)] = 4910,
  [SMALL_STATE(199)] = 4923,
  [SMALL_STATE(200)] = 4936,
  [SMALL_STATE(201)] = 4949,
  [SMALL_STATE(202)] = 4962,
  [SMALL_STATE(203)] = 4975,
  [SMALL_STATE(204)] = 4988,
  [SMALL_STATE(205)] = 5001,
  [SMALL_STATE(206)] = 5014,
  [SMALL_STATE(207)] = 5027,
  [SMALL_STATE(208)] = 5040,
  [SMALL_STATE(209)] = 5053,
  [SMALL_STATE(210)] = 5066,
  [SMALL_STATE(211)] = 5079,
  [SMALL_STATE(212)] = 5092,
  [SMALL_STATE(213)] = 5105,
  [SMALL_STATE(214)] = 5118,
  [SMALL_STATE(215)] = 5131,
  [SMALL_STATE(216)] = 5144,
  [SMALL_STATE(217)] = 5157,
  [SMALL_STATE(218)] = 5170,
  [SMALL_STATE(219)] = 5183,
  [SMALL_STATE(220)] = 5196,
  [SMALL_STATE(221)] = 5209,
  [SMALL_STATE(222)] = 5222,
  [SMALL_STATE(223)] = 5235,
  [SMALL_STATE(224)] = 5248,
  [SMALL_STATE(225)] = 5261,
  [SMALL_STATE(226)] = 5274,
  [SMALL_STATE(227)] = 5287,
  [SMALL_STATE(228)] = 5300,
  [SMALL_STATE(229)] = 5313,
  [SMALL_STATE(230)] = 5326,
  [SMALL_STATE(231)] = 5339,
  [SMALL_STATE(232)] = 5352,
  [SMALL_STATE(233)] = 5365,
  [SMALL_STATE(234)] = 5378,
  [SMALL_STATE(235)] = 5391,
  [SMALL_STATE(236)] = 5404,
  [SMALL_STATE(237)] = 5417,
  [SMALL_STATE(238)] = 5430,
  [SMALL_STATE(239)] = 5443,
  [SMALL_STATE(240)] = 5456,
  [SMALL_STATE(241)] = 5469,
  [SMALL_STATE(242)] = 5482,
  [SMALL_STATE(243)] = 5495,
  [SMALL_STATE(244)] = 5508,
  [SMALL_STATE(245)] = 5521,
  [SMALL_STATE(246)] = 5534,
  [SMALL_STATE(247)] = 5547,
  [SMALL_STATE(248)] = 5560,
  [SMALL_STATE(249)] = 5573,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(201),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(197),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(187),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(183),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(116),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(214),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(238),
  [117] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(236),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(180),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(185),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(188),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [138] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(237),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(248),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_block, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_block, 3),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(68),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(201),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(197),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(6),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(4),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(187),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(46),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(58),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(183),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(64),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(116),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(51),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(214),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(238),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(62),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(236),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(180),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(21),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(185),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(188),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(133),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(237),
  [214] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2), SHIFT_REPEAT(248),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__object, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__object, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_sequence_repeat1, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_sequence_repeat1, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 5),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 5),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classvar, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classvar, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6, .production_id = 8),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6, .production_id = 8),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 4),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 6, .production_id = 9),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 6, .production_id = 9),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 3),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 6),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 6),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_control_structure, 1),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_control_structure, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_var, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_var, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 1),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forby, 10),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forby, 10),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forby, 9),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forby, 9),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_block, 4),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_block, 4),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 4, .production_id = 7),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 4, .production_id = 7),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 8, .production_id = 12),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 8, .production_id = 12),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 8),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 8),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 8, .production_id = 11),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 8, .production_id = 11),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_collection, 3),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_collection, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 3, .production_id = 5),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 3, .production_id = 5),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_local_var, 2),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_local_var, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment_var, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_environment_var, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6, .production_id = 10),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6, .production_id = 10),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 7),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 7),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_sequence, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_associative_item, 3, .production_id = 6),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 4),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_argument, 3),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unnamed_argument, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__collection_sequence_repeat1, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 1),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(147),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(147),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 2, .production_id = 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 2, .production_id = 4),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 5, .production_id = 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 4),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_call_list_repeat1, 2),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_call_list_repeat1, 2), SHIFT_REPEAT(18),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 4, .production_id = 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_sequence, 2),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [550] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(167),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(170),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_call_list, 1),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paired_associative_sequence, 2),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 1),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 4, .production_id = 4),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instance_method_call, 5, .production_id = 4),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paired_associative_sequence, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__paired_associative_sequence_repeat1, 2),
  [604] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__paired_associative_sequence_repeat1, 2), SHIFT_REPEAT(109),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_sequence, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [613] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__collection_sequence_repeat1, 2), SHIFT_REPEAT(22),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_method_call, 3),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_call_list, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_types, 1),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unordered_collection_types, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ordered_collection_types, 1),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_calls, 1),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [750] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
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
