/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parse.y" /* yacc.c:339  */

#define YYSTYPE_IS_DECLARED 1
typedef long YYSTYPE;
#include "header.h"
extern A_NODE *root;
extern A_ID *current_id;
extern int current_level;
extern A_TYPE *int_type;
extern int line_no,syntax_err;

#line 77 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO_SYM = 258,
    BREAK_SYM = 259,
    CASE_SYM = 260,
    CONTINUE_SYM = 261,
    DEFAULT_SYM = 262,
    DO_SYM = 263,
    ELSE_SYM = 264,
    ENUM_SYM = 265,
    FOR_SYM = 266,
    IF_SYM = 267,
    RETURN_SYM = 268,
    SIZEOF_SYM = 269,
    STATIC_SYM = 270,
    STRUCT_SYM = 271,
    SWITCH_SYM = 272,
    TYPEDEF_SYM = 273,
    UNION_SYM = 274,
    WHILE_SYM = 275,
    PLUSPLUS = 276,
    MINUSMINUS = 277,
    ARROW = 278,
    LSS = 279,
    LSSLSS = 280,
    RSSRSS = 281,
    GTR = 282,
    LEQ = 283,
    GEQ = 284,
    EQL = 285,
    NEQ = 286,
    AMPAMP = 287,
    BARBAR = 288,
    DOTDOTDOT = 289,
    LP = 290,
    RP = 291,
    LB = 292,
    RB = 293,
    LR = 294,
    RR = 295,
    COLON = 296,
    PEROID = 297,
    COMMA = 298,
    EXCL = 299,
    STAR = 300,
    SLASH = 301,
    PERCENT = 302,
    AMP = 303,
    SEMICOLON = 304,
    PLUS = 305,
    MINUS = 306,
    ASSIGN = 307,
    TYPE_IDENTIFIER = 308,
    INTEGER_CONSTANT = 309,
    FLOAT_CONSTANT = 310,
    STRING_LITERAL = 311,
    CHARACTER_CONSTANT = 312,
    IDENTIFIER = 313,
    PERIOD = 314,
    CONST_SYM = 315,
    VOLATILE_SYM = 316,
    GOTO_SYM = 317
  };
#endif
/* Tokens.  */
#define AUTO_SYM 258
#define BREAK_SYM 259
#define CASE_SYM 260
#define CONTINUE_SYM 261
#define DEFAULT_SYM 262
#define DO_SYM 263
#define ELSE_SYM 264
#define ENUM_SYM 265
#define FOR_SYM 266
#define IF_SYM 267
#define RETURN_SYM 268
#define SIZEOF_SYM 269
#define STATIC_SYM 270
#define STRUCT_SYM 271
#define SWITCH_SYM 272
#define TYPEDEF_SYM 273
#define UNION_SYM 274
#define WHILE_SYM 275
#define PLUSPLUS 276
#define MINUSMINUS 277
#define ARROW 278
#define LSS 279
#define LSSLSS 280
#define RSSRSS 281
#define GTR 282
#define LEQ 283
#define GEQ 284
#define EQL 285
#define NEQ 286
#define AMPAMP 287
#define BARBAR 288
#define DOTDOTDOT 289
#define LP 290
#define RP 291
#define LB 292
#define RB 293
#define LR 294
#define RR 295
#define COLON 296
#define PEROID 297
#define COMMA 298
#define EXCL 299
#define STAR 300
#define SLASH 301
#define PERCENT 302
#define AMP 303
#define SEMICOLON 304
#define PLUS 305
#define MINUS 306
#define ASSIGN 307
#define TYPE_IDENTIFIER 308
#define INTEGER_CONSTANT 309
#define FLOAT_CONSTANT 310
#define STRING_LITERAL 311
#define CHARACTER_CONSTANT 312
#define IDENTIFIER 313
#define PERIOD 314
#define CONST_SYM 315
#define VOLATILE_SYM 316
#define GOTO_SYM 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 252 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   457

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  293

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    23,    23,    27,    28,    31,    32,    36,    36,    38,
      38,    43,    44,    47,    48,    51,    54,    55,    56,    57,
      60,    61,    62,    66,    67,    71,    72,    75,    76,    79,
      80,    83,    84,    85,    89,    90,    89,    92,    93,    92,
      95,    98,    99,   102,   103,   106,   109,   110,   113,   117,
     117,   118,   118,   119,   122,   123,   126,   127,   127,   131,
     132,   135,   136,   140,   141,   142,   143,   143,   149,   150,
     154,   155,   158,   159,   162,   163,   166,   167,   170,   171,
     172,   175,   176,   177,   178,   179,   183,   184,   188,   189,
     190,   191,   192,   193,   196,   197,   201,   201,   206,   207,
     211,   212,   216,   217,   221,   222,   223,   227,   228,   229,
     232,   233,   237,   240,   241,   242,   246,   247,   248,   249,
     250,   251,   255,   256,   257,   258,   259,   260,   261,   264,
     265,   268,   269,   272,   273,   276,   279,   282,   285,   286,
     289,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   304,   305,   308,   312,   313,   314,   315,   318,   319,
     320,   323,   326,   327,   328,   329,   330,   333,   334,   335,
     339,   340,   343,   344,   347,   350,   353
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO_SYM", "BREAK_SYM", "CASE_SYM",
  "CONTINUE_SYM", "DEFAULT_SYM", "DO_SYM", "ELSE_SYM", "ENUM_SYM",
  "FOR_SYM", "IF_SYM", "RETURN_SYM", "SIZEOF_SYM", "STATIC_SYM",
  "STRUCT_SYM", "SWITCH_SYM", "TYPEDEF_SYM", "UNION_SYM", "WHILE_SYM",
  "PLUSPLUS", "MINUSMINUS", "ARROW", "LSS", "LSSLSS", "RSSRSS", "GTR",
  "LEQ", "GEQ", "EQL", "NEQ", "AMPAMP", "BARBAR", "DOTDOTDOT", "LP", "RP",
  "LB", "RB", "LR", "RR", "COLON", "PEROID", "COMMA", "EXCL", "STAR",
  "SLASH", "PERCENT", "AMP", "SEMICOLON", "PLUS", "MINUS", "ASSIGN",
  "TYPE_IDENTIFIER", "INTEGER_CONSTANT", "FLOAT_CONSTANT",
  "STRING_LITERAL", "CHARACTER_CONSTANT", "IDENTIFIER", "PERIOD",
  "CONST_SYM", "VOLATILE_SYM", "GOTO_SYM", "$accept", "program",
  "translation_unit", "external_declaration", "function_definition", "@1",
  "@2", "declaration_list_opt", "declaration_list", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "initializer", "type_specifier", "struct_type_specifier", "@3", "@4",
  "@5", "@6", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "struct_declarator_list", "struct_declarator",
  "enum_type_specifier", "@7", "@8", "enumerator_list", "enumerator", "@9",
  "declarator", "pointer", "direct_declarator", "@10",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator_opt",
  "abstract_declarator", "direct_abstract_declarator", "initializer_list",
  "statement", "labeled_statement", "compound_statement", "@11",
  "statement_list_opt", "statement_list", "expression_statement",
  "selection_statement", "iteration_statement", "expression_opt",
  "for_expression", "jump_statement", "primary_expression",
  "postfix_expression", "arg_expression_list_opt", "arg_expression_list",
  "constant_expression_opt", "constant_expression", "expression",
  "comma_expression", "assignment_expression", "conditional_expression",
  "unary_expression", "cast_expression", "type_name",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "logical_and_expression",
  "logical_or_expression", "bitwise_or_expression",
  "bitwise_xor_expression", "bitwise_and_expression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};
# endif

#define YYPACT_NINF -227

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-227)))

#define YYTABLE_NINF -58

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      26,  -227,   -25,  -227,  -227,  -227,  -227,    29,   -10,  -227,
    -227,    48,    26,  -227,  -227,  -227,    29,   123,   123,  -227,
      10,  -227,  -227,   -20,   137,    17,    46,    73,  -227,  -227,
    -227,    65,    76,  -227,    34,  -227,  -227,   104,   141,   165,
     137,  -227,   229,   173,    90,  -227,  -227,    29,   344,   165,
     182,  -227,  -227,  -227,   123,   382,   399,   399,   204,   229,
     229,   229,   229,   229,  -227,  -227,  -227,  -227,  -227,  -227,
     109,   121,  -227,  -227,  -227,  -227,  -227,   110,  -227,    82,
      86,  -227,   142,    69,   185,   191,  -227,  -227,  -227,    90,
     176,   120,  -227,  -227,   180,   344,  -227,  -227,  -227,  -227,
      50,   123,   119,   194,  -227,   197,  -227,   204,  -227,   229,
    -227,  -227,    43,   199,   205,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,  -227,   184,   229,   229,   186,  -227,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   138,   193,  -227,    90,  -227,   168,    50,    29,
      94,  -227,   288,   123,  -227,    29,   253,   229,  -227,   -24,
    -227,  -227,   178,  -227,    36,   211,   337,   192,  -227,  -227,
     229,  -227,   217,   222,  -227,   228,  -227,  -227,  -227,  -227,
    -227,    82,    82,  -227,  -227,  -227,  -227,   142,   142,  -227,
     185,  -227,   229,  -227,  -227,   344,   163,    32,  -227,  -227,
    -227,  -227,   218,   229,   221,   234,   288,   241,   243,   229,
     246,   247,  -227,  -227,  -227,  -227,   249,   288,  -227,  -227,
    -227,  -227,   242,  -227,   261,   267,   266,   178,   123,   229,
    -227,  -227,  -227,  -227,  -227,   229,  -227,  -227,  -227,  -227,
      29,  -227,  -227,   271,  -227,   288,   287,   229,   229,   264,
    -227,   229,   229,  -227,  -227,  -227,  -227,  -227,  -227,   278,
     277,  -227,  -227,   288,  -227,   281,   268,   282,   283,  -227,
     284,   285,  -227,  -227,  -227,   229,   229,   288,   288,   288,
     288,   286,   275,  -227,   316,  -227,  -227,   279,   229,   288,
    -227,  -227,  -227
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    20,    51,    21,    41,    22,    42,     0,    61,    33,
      63,     0,     2,     3,     5,     6,    23,    17,    16,    31,
      37,    32,     9,     0,    60,    53,     0,     0,    62,     1,
       4,     0,    24,    25,    27,    19,    18,    40,     0,     0,
      59,    66,   133,     0,     0,    64,    15,     0,     0,     0,
       0,    38,    96,    10,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   117,   118,   120,   119,   116,   122,
     141,     0,   134,   135,   136,   137,   138,   151,   154,   158,
     161,   162,   167,   176,   172,   140,   170,   174,   175,     0,
      56,     0,    54,    26,    27,     0,    28,    29,     8,    35,
       0,    11,    76,     0,    69,    70,    72,     0,   149,     0,
     142,   143,    76,     0,     0,   151,   146,   145,   144,   148,
     147,   127,   128,     0,   129,     0,     0,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,     0,    86,     0,     0,     0,
       0,    43,    98,    12,    13,    23,    68,   133,    74,    78,
      75,    77,    79,    67,     0,     0,    68,    78,   153,   121,
       0,   126,     0,   130,   131,     0,   125,   139,   155,   156,
     157,   159,   160,   163,   164,   165,   166,   168,   169,   171,
     173,    50,     0,    55,    30,     0,     0,     0,    46,    48,
      39,    44,     0,     0,     0,     0,     0,     0,     0,   110,
       0,     0,   102,   100,    88,    89,     0,    99,    90,    91,
      92,    93,     0,    14,     0,     0,     0,    80,    68,   133,
      71,    73,   150,   152,   124,     0,   123,    58,    87,    36,
       0,    45,   115,     0,   114,     0,     0,   110,     0,     0,
     111,     0,     0,    97,   101,   103,    83,    81,    82,     0,
       0,   132,    47,     0,    95,     0,     0,     0,     0,   113,
       0,     0,    85,    84,    94,     0,   110,     0,     0,     0,
       0,     0,     0,   109,   104,   106,   107,     0,   110,     0,
     108,   112,   105
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -227,  -227,  -227,   314,  -227,  -227,  -227,  -227,  -227,   -81,
       5,  -227,  -227,  -227,   294,   -87,   -91,  -227,  -227,  -227,
    -227,  -227,  -227,   181,  -119,  -227,    91,  -227,  -227,  -227,
     245,   190,  -227,    -4,    -1,   -19,  -227,   -53,  -227,  -227,
     166,   236,   -59,  -127,  -227,  -187,  -227,    -2,  -227,  -227,
    -227,  -227,  -227,  -227,  -226,  -227,  -227,  -227,  -227,  -227,
    -227,  -147,   -46,   -42,  -227,  -110,  -227,    61,   -35,   244,
      56,  -227,    49,    99,  -227,   208,  -227,   210,  -227,  -227
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    49,    39,   152,   153,    15,
     102,    17,    31,    32,    33,    96,    18,    19,    50,   148,
      38,   100,    20,   150,   151,   197,   198,    21,    43,    26,
      91,    92,   143,    22,    23,    24,    54,   224,   104,   105,
     106,   160,   161,   162,   147,   213,   214,   215,   101,   216,
     217,   218,   219,   220,   249,   267,   221,    69,    70,   172,
     173,    71,    72,   222,    74,    75,    76,    77,    78,   114,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,   103,    97,    27,    40,    16,    73,    28,   146,   149,
     226,   156,    34,   157,   174,     7,   113,    16,   177,   246,
     154,   266,    35,    36,   116,   117,   118,   119,   120,     1,
     254,   201,   227,    25,    10,     8,     2,    53,    10,     1,
     227,     3,     4,    94,     5,     6,     2,    98,    29,    97,
     282,     3,     4,    73,     5,     6,   -49,   149,   264,   149,
       2,     7,   291,   112,     7,   113,     4,   113,    37,     6,
     230,     8,   223,    -7,     8,   240,   274,   201,   166,     9,
     157,   241,   260,   175,    10,    44,    48,    10,     8,     9,
     283,   284,   285,   286,   178,   179,   180,   225,   158,   138,
     139,   159,   292,     9,     2,   149,   155,   225,   238,    45,
       4,   167,   112,     6,    46,    73,   108,   110,   111,    47,
     115,   115,   115,   115,   115,   261,     1,   129,   130,   131,
     121,   122,   123,     2,   200,   233,   132,   133,     3,     4,
      40,     5,     6,   -34,   124,   199,   125,     9,    90,    97,
     237,    94,    27,    73,   156,   159,   157,   243,   155,   127,
     144,    73,   128,   145,     8,   167,   134,   250,   126,   135,
     136,   137,    41,     2,    42,   259,     9,    10,   191,     4,
      51,   145,     6,   183,   184,   185,   186,    73,   181,   182,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   239,    52,   250,   268,     1,   194,   270,
     271,   195,    89,   228,     2,   229,     9,   140,    55,     3,
       4,    99,     5,     6,   141,    56,    57,   166,   -57,   157,
     163,   115,    48,   281,   250,   169,   199,   187,   188,    58,
     164,   170,   171,    55,   176,   192,   250,   232,    59,    60,
      56,    57,    61,   234,    62,    63,     1,     9,    64,    65,
      66,    67,    68,     2,    58,   235,   236,   242,     3,     4,
     244,     5,     6,    59,    60,   245,   247,    61,   248,    62,
      63,   251,   252,    64,    65,    66,    67,    68,   156,   253,
     157,   255,   202,   203,   204,   205,   206,   256,     8,   207,
     208,   209,    55,   257,   258,   210,     9,   265,   211,    56,
      57,    10,   263,   269,   272,   273,   275,   276,   277,   278,
     279,   280,   287,    58,   288,   289,    30,    52,   290,   196,
     231,   262,    59,    60,   142,   193,    61,   212,    62,    63,
       1,    93,    64,    65,    66,    67,    68,     2,   168,   190,
     189,   165,     3,     4,     0,     5,     6,     0,    55,     0,
       0,     0,     0,     0,     0,    56,    57,     0,     0,     0,
       0,     0,   166,     0,   157,     0,     0,     0,     0,    58,
       0,     0,     8,    95,     0,     0,     0,     0,    59,    60,
       9,     0,    61,     0,    62,    63,    55,     0,    64,    65,
      66,    67,    68,    56,    57,     0,     0,     0,     0,     0,
       0,     0,     0,    55,     0,     0,     0,   107,     0,     0,
      56,    57,     0,     0,     0,     0,    59,    60,     0,     0,
      61,     0,    62,    63,   109,     0,    64,    65,    66,    67,
      68,     0,     0,    59,    60,     0,     0,    61,     0,    62,
      63,     0,     0,    64,    65,    66,    67,    68
};

static const yytype_int16 yycheck[] =
{
      42,    54,    48,     7,    23,     0,    48,     8,    95,   100,
     157,    35,    16,    37,   124,    35,    58,    12,   128,   206,
     101,   247,    17,    18,    59,    60,    61,    62,    63,     3,
     217,   150,   159,    58,    58,    45,    10,    39,    58,     3,
     167,    15,    16,    47,    18,    19,    10,    49,     0,    95,
     276,    15,    16,    95,    18,    19,    39,   148,   245,   150,
      10,    35,   288,    58,    35,   107,    16,   109,    58,    19,
      34,    45,   153,    39,    45,    43,   263,   196,    35,    53,
      37,    49,   229,   125,    58,    39,    52,    58,    45,    53,
     277,   278,   279,   280,   129,   130,   131,   156,   102,    30,
      31,   102,   289,    53,    10,   196,   101,   166,   195,    36,
      16,   112,   107,    19,    49,   157,    55,    56,    57,    43,
      59,    60,    61,    62,    63,   235,     3,    45,    46,    47,
      21,    22,    23,    10,    40,   170,    50,    51,    15,    16,
     159,    18,    19,    39,    35,   149,    37,    53,    58,   195,
     192,   155,   156,   195,    35,   156,    37,   203,   153,    38,
      40,   203,    52,    43,    45,   166,    24,   209,    59,    27,
      28,    29,    35,    10,    37,   228,    53,    58,    40,    16,
      39,    43,    19,   134,   135,   136,   137,   229,   132,   133,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,    40,    39,   247,   248,     3,    40,   251,
     252,    43,    39,    35,    10,    37,    53,    32,    14,    15,
      16,    39,    18,    19,    33,    21,    22,    35,    52,    37,
      36,   170,    52,   275,   276,    36,   240,   138,   139,    35,
      43,    36,    58,    14,    58,    52,   288,    36,    44,    45,
      21,    22,    48,    36,    50,    51,     3,    53,    54,    55,
      56,    57,    58,    10,    35,    43,    38,    49,    15,    16,
      49,    18,    19,    44,    45,    41,    35,    48,    35,    50,
      51,    35,    35,    54,    55,    56,    57,    58,    35,    40,
      37,    49,     4,     5,     6,     7,     8,    36,    45,    11,
      12,    13,    14,    36,    38,    17,    53,    20,    20,    21,
      22,    58,    41,    49,    36,    38,    35,    49,    36,    36,
      36,    36,    36,    35,    49,     9,    12,    39,    49,   148,
     164,   240,    44,    45,    89,   145,    48,    49,    50,    51,
       3,    47,    54,    55,    56,    57,    58,    10,   112,   141,
     140,   107,    15,    16,    -1,    18,    19,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    37,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    45,    39,    -1,    -1,    -1,    -1,    44,    45,
      53,    -1,    48,    -1,    50,    51,    14,    -1,    54,    55,
      56,    57,    58,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    14,    -1,    -1,    -1,    35,    -1,    -1,
      21,    22,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      48,    -1,    50,    51,    35,    -1,    54,    55,    56,    57,
      58,    -1,    -1,    44,    45,    -1,    -1,    48,    -1,    50,
      51,    -1,    -1,    54,    55,    56,    57,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    10,    15,    16,    18,    19,    35,    45,    53,
      58,    64,    65,    66,    67,    72,    73,    74,    79,    80,
      85,    90,    96,    97,    98,    58,    92,    96,    97,     0,
      66,    75,    76,    77,    96,    73,    73,    58,    83,    69,
      98,    35,    37,    91,    39,    36,    49,    43,    52,    68,
      81,    39,    39,   110,    99,    14,    21,    22,    35,    44,
      45,    48,    50,    51,    54,    55,    56,    57,    58,   120,
     121,   124,   125,   126,   127,   128,   129,   130,   131,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,    39,
      58,    93,    94,    77,    96,    39,    78,   125,   110,    39,
      84,   111,    73,   100,   101,   102,   103,    35,   130,    35,
     130,   130,    73,   126,   132,   130,   131,   131,   131,   131,
     131,    21,    22,    23,    35,    37,    59,    38,    52,    45,
      46,    47,    50,    51,    24,    27,    28,    29,    30,    31,
      32,    33,    93,    95,    40,    43,    78,   107,    82,    79,
      86,    87,    70,    71,    72,    73,    35,    37,    96,    97,
     104,   105,   106,    36,    43,   132,    35,    97,   104,    36,
      36,    58,   122,   123,   128,   126,    58,   128,   131,   131,
     131,   133,   133,   135,   135,   135,   135,   136,   136,   140,
     138,    40,    52,    94,    40,    43,    86,    88,    89,    96,
      40,    87,     4,     5,     6,     7,     8,    11,    12,    13,
      17,    20,    49,   108,   109,   110,   112,   113,   114,   115,
     116,   119,   126,    72,   100,   105,   124,   106,    35,    37,
      34,   103,    36,   131,    36,    43,    38,   126,    78,    40,
      43,    49,    49,   125,    49,    41,   108,    35,    35,   117,
     126,    35,    35,    40,   108,    49,    36,    36,    38,   100,
     124,   128,    89,    41,   108,    20,   117,   118,   126,    49,
     126,   126,    36,    38,   108,    35,    49,    36,    36,    36,
      36,   126,   117,   108,   108,   108,   108,    36,    49,     9,
      49,   117,   108
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    66,    66,    68,    67,    69,
      67,    70,    70,    71,    71,    72,    73,    73,    73,    73,
      74,    74,    74,    75,    75,    76,    76,    77,    77,    78,
      78,    79,    79,    79,    81,    82,    80,    83,    84,    80,
      80,    85,    85,    86,    86,    87,    88,    88,    89,    91,
      90,    92,    90,    90,    93,    93,    94,    95,    94,    96,
      96,    97,    97,    98,    98,    98,    99,    98,   100,   100,
     101,   101,   102,   102,   103,   103,   104,   104,   105,   105,
     105,   106,   106,   106,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   109,   109,   111,   110,   112,   112,
     113,   113,   114,   114,   115,   115,   115,   116,   116,   116,
     117,   117,   118,   119,   119,   119,   120,   120,   120,   120,
     120,   120,   121,   121,   121,   121,   121,   121,   121,   122,
     122,   123,   123,   124,   124,   125,   126,   127,   128,   128,
     129,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   131,   131,   132,   133,   133,   133,   133,   134,   134,
     134,   135,   136,   136,   136,   136,   136,   137,   137,   137,
     138,   138,   139,   139,   140,   141,   142
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     0,     0,     7,     0,     0,     6,
       2,     1,     1,     1,     2,     3,     1,     3,     1,     0,
       6,     0,     5,     2,     1,     3,     1,     0,     4,     2,
       1,     1,     2,     1,     3,     4,     0,     5,     0,     1,
       1,     3,     1,     3,     2,     2,     0,     1,     1,     1,
       2,     3,     3,     3,     4,     4,     1,     3,     1,     1,
       1,     1,     1,     1,     4,     3,     0,     5,     0,     1,
       1,     2,     1,     2,     5,     7,     5,     5,     7,     5,
       0,     1,     5,     3,     2,     2,     1,     1,     1,     1,
       1,     3,     1,     4,     4,     3,     3,     2,     2,     0,
       1,     1,     3,     0,     1,     1,     1,     1,     1,     3,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       4,     1,     4,     2,     1,     3,     3,     3,     1,     3,
       3,     1,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 24 "parse.y" /* yacc.c:1646  */
    {root=makeNode(N_PROGRAM,NIL,(yyvsp[0]),NIL);checkForwardReference();}
#line 1604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 27 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 28 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 31 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 32 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 36 "parse.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 1634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 37 "parse.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorBody((yyvsp[-1]),(yyvsp[0]));}
#line 1640 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 38 "parse.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[0]),makeSpecifier(int_type,0));}
#line 1646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 39 "parse.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorBody((yyvsp[-1]),(yyvsp[0]));}
#line 1652 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 43 "parse.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 44 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1664 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 47 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 48 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 51 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorListSpecifier((yyvsp[-1]),(yyvsp[-2]));}
#line 1682 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 54 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeSpecifier((yyvsp[0]),0);}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 55 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeSpecifier(0,(yyvsp[0]));}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 56 "parse.y" /* yacc.c:1646  */
    {(yyval)=updateSpecifier((yyvsp[0]),(yyvsp[-1]),0);}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 57 "parse.y" /* yacc.c:1646  */
    {(yyval)=updateSpecifier((yyvsp[0]),0,(yyvsp[-1]));}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 60 "parse.y" /* yacc.c:1646  */
    {(yyval)=S_AUTO;}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 61 "parse.y" /* yacc.c:1646  */
    {(yyval)=S_STATIC;}
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 62 "parse.y" /* yacc.c:1646  */
    {(yyval)=S_TYPEDEF;}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 66 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeDummyIdentifier();}
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 67 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 71 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 72 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 75 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 76 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorInit((yyvsp[-2]),(yyvsp[0]));}
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 79 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_INIT_LIST_ONE,NIL,(yyvsp[0]),NIL);}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 80 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 83 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 84 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 85 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 89 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeStructOrEnumIdentifier((yyvsp[-1]),(yyvsp[0]),ID_STRUCT);}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 90 "parse.y" /* yacc.c:1646  */
    {(yyval)=current_id; current_level++;}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 91 "parse.y" /* yacc.c:1646  */
    {checkForwardReference(); (yyval)=setTypeField((yyvsp[-4]),(yyvsp[-1])); current_level--; current_id=(yyvsp[-2]);}
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 92 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeType((yyvsp[0]));}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 93 "parse.y" /* yacc.c:1646  */
    {(yyval)=current_id; current_level++;}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 94 "parse.y" /* yacc.c:1646  */
    {checkForwardReference(); (yyval)=setTypeField((yyvsp[-4]),(yyvsp[-1])); current_level--; current_id=(yyvsp[-2]);}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 95 "parse.y" /* yacc.c:1646  */
    {(yyval)=getTypeOfStructOrEnumRefIdentifier((yyvsp[-1]),(yyvsp[0]),ID_STRUCT);}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 98 "parse.y" /* yacc.c:1646  */
    {(yyval)=T_STRUCT;}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 99 "parse.y" /* yacc.c:1646  */
    {(yyval)=T_UNION;}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 102 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 103 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 106 "parse.y" /* yacc.c:1646  */
    {(yyval)=setStructDeclaratorListSpecifier((yyvsp[-1]),(yyvsp[-2]));}
#line 1862 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 109 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 110 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 113 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 117 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeStructOrEnumIdentifier(T_ENUM,(yyvsp[0]),ID_ENUM);}
#line 1886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 117 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeField((yyvsp[-3]),(yyvsp[-1]));}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 118 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_ENUM);}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 118 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeField((yyvsp[-3]),(yyvsp[-1]));}
#line 1904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 119 "parse.y" /* yacc.c:1646  */
    {(yyval)=getTypeOfStructOrEnumRefIdentifier(T_ENUM,(yyvsp[0]),ID_ENUM);}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 122 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 123 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 126 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[0])),ID_ENUM_LITERAL);}
#line 1928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 127 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[0])),ID_ENUM_LITERAL);}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 127 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorInit((yyvsp[-2]),(yyvsp[0]));}
#line 1940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 131 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorElementType((yyvsp[0]),(yyvsp[-1]));}
#line 1946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 132 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 135 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_POINTER);}
#line 1958 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 136 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[0]),makeType(T_POINTER));}
#line 1964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 140 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeIdentifier((yyvsp[0]));}
#line 1970 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 141 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 142 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorElementType((yyvsp[-3]),setTypeExpr(makeType(T_ARRAY),(yyvsp[-1])));}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 143 "parse.y" /* yacc.c:1646  */
    {(yyval)=current_id; current_level++;}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 145 "parse.y" /* yacc.c:1646  */
    {checkForwardReference(); current_level--; current_id=(yyvsp[-2]); (yyval)=setDeclaratorElementType((yyvsp[-4]),setTypeField(makeType(T_FUNC),(yyvsp[-1])));}
#line 1994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 149 "parse.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 150 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 154 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 155 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),setDeclaratorKind(makeDummyIdentifier(),ID_PARM));}
#line 2018 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 158 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2024 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 159 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 2030 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 162 "parse.y" /* yacc.c:1646  */
    {(yyval)=setParameterDeclaratorSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 2036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 163 "parse.y" /* yacc.c:1646  */
    {(yyval)=setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(),(yyvsp[0])),(yyvsp[-1]));}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 166 "parse.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 167 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2054 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 170 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 171 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 172 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[0]),makeType(T_POINTER));}
#line 2072 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 175 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 176 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeExpr(makeType(T_ARRAY),(yyvsp[-1]));}
#line 2084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 177 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeExpr(makeType(T_FUNC),(yyvsp[-1]));}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 178 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[-3]),setTypeExpr(makeType(T_ARRAY),(yyvsp[-1])));}
#line 2096 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 179 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[-3]),setTypeExpr(makeType(T_FUNC),(yyvsp[-1])));}
#line 2102 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 183 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_INIT_LIST,(yyvsp[0]),NIL,makeNode(N_INIT_LIST_NIL,NIL,NIL,NIL));}
#line 2108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 184 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_INIT_LIST,(yyvsp[-2]),(yyvsp[0]));}
#line 2114 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 188 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2120 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 189 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 190 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 191 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2138 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 192 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2144 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 193 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2150 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 196 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LABEL_CASE,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 197 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LABEL_DEFAULT,NIL,(yyvsp[0]),NIL);}
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 201 "parse.y" /* yacc.c:1646  */
    {(yyval)=current_id; current_level++;}
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 202 "parse.y" /* yacc.c:1646  */
    {checkForwardReference(); (yyval)=makeNode(N_STMT_COMPOUND,(yyvsp[-2]),NIL,(yyvsp[-1])); current_id=(yyvsp[-3]); current_level--;}
#line 2174 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 206 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL);}
#line 2180 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 207 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 211 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LIST,(yyvsp[0]),NIL,makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL));}
#line 2192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 212 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_STMT_LIST,(yyvsp[-1]),(yyvsp[0]));}
#line 2198 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 216 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_EMPTY,NIL,NIL,NIL);}
#line 2204 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 217 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_EXPRESSION,NIL,(yyvsp[-1]),NIL);}
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 221 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_IF,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 222 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_IF_ELSE,(yyvsp[-4]),(yyvsp[-2]),(yyvsp[0]));}
#line 2222 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 223 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_SWITCH,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2228 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 227 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_WHILE,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 228 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_DO,(yyvsp[-5]),NIL,(yyvsp[-2]));}
#line 2240 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 229 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_FOR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2246 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 232 "parse.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2252 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 233 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 237 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_FOR_EXP,(yyvsp[-4]),(yyvsp[-2]),(yyvsp[0]));}
#line 2264 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 240 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_RETURN,NIL,(yyvsp[-1]),NIL);}
#line 2270 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 241 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_CONTINUE,NIL,NIL,NIL);}
#line 2276 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 242 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_BREAK,NIL,NIL,NIL);}
#line 2282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 246 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_IDENT,NIL,getIdentifierDeclared((yyvsp[0])),NIL);}
#line 2288 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 247 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_INT_CONST,NIL,(yyvsp[0]),NIL);}
#line 2294 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 248 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_FLOAT_CONST,NIL,(yyvsp[0]),NIL);}
#line 2300 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 249 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_CHAR_CONST,NIL,(yyvsp[0]),NIL);}
#line 2306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 250 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STRING_LITERAL,NIL,(yyvsp[0]),NIL);}
#line 2312 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 251 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2318 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 255 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2324 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 256 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ARRAY,(yyvsp[-3]),NIL,(yyvsp[-1]));}
#line 2330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 257 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_FUNCTION_CALL,(yyvsp[-3]),NIL,(yyvsp[-1]));}
#line 2336 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 258 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STRUCT,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 259 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ARROW,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2348 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 260 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_POST_INC,NIL,(yyvsp[-1]),NIL);}
#line 2354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 261 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_POST_DEC,NIL,(yyvsp[-1]),NIL);}
#line 2360 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 264 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL);}
#line 2366 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 265 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2372 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 268 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_ARG_LIST,(yyvsp[0]),NIL,makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL));}
#line 2378 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 269 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_ARG_LIST,(yyvsp[-2]),(yyvsp[0]));}
#line 2384 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 272 "parse.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2390 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 273 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 276 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2402 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 279 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2408 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 282 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 285 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 286 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ASSIGN,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 289 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 292 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 293 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PRE_INC,NIL,(yyvsp[0]),NIL);}
#line 2444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 294 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PRE_DEC,NIL,(yyvsp[0]),NIL);}
#line 2450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 295 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_AMP,NIL,(yyvsp[0]),NIL);}
#line 2456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 296 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STAR,NIL,(yyvsp[0]),NIL);}
#line 2462 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 297 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_NOT,NIL,(yyvsp[0]),NIL);}
#line 2468 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 298 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MINUS,NIL,(yyvsp[0]),NIL);}
#line 2474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 299 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PLUS,NIL,(yyvsp[0]),NIL);}
#line 2480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 300 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SIZE_EXP,NIL,(yyvsp[0]),NIL);}
#line 2486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 301 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SIZE_TYPE,NIL,(yyvsp[-1]),NIL);}
#line 2492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 304 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 305 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_CAST,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 308 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeNameSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 2510 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 312 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2516 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 313 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MUL,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 314 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_DIV,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 315 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MOD,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2534 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 318 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 319 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ADD,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2546 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 320 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SUB,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 323 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 326 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 327 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_LSS,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2570 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 328 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_GTR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2576 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 329 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_LEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 330 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_GEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 333 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 334 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_EQL,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 335 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_NEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 339 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 340 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_AND,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 343 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 344 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_OR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 347 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 350 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 353 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2648 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2652 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 356 "parse.y" /* yacc.c:1906  */

