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

#line 76 "y.tab.c" /* yacc.c:339  */

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

#line 251 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   499

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  173
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  294

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
       0,    22,    22,    26,    27,    30,    31,    35,    35,    37,
      37,    42,    43,    47,    50,    51,    52,    53,    56,    57,
      58,    62,    63,    67,    68,    71,    72,    76,    77,    78,
      82,    83,    82,    85,    86,    85,    88,    91,    92,    95,
      96,    99,   102,   103,   106,   107,   108,   112,   112,   113,
     113,   114,   117,   118,   121,   122,   122,   126,   127,   130,
     131,   135,   136,   137,   138,   138,   143,   144,   147,   148,
     152,   153,   156,   157,   160,   161,   164,   165,   168,   169,
     170,   173,   174,   175,   176,   177,   181,   182,   185,   186,
     190,   191,   192,   193,   194,   195,   198,   199,   203,   203,
     203,   207,   208,   212,   213,   217,   218,   222,   223,   227,
     228,   229,   233,   234,   235,   238,   239,   243,   244,   245,
     246,   250,   251,   252,   253,   254,   255,   259,   260,   261,
     262,   263,   264,   265,   268,   269,   272,   273,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   289,   290,
     293,   297,   298,   299,   300,   303,   304,   305,   308,   312,
     313,   314,   315,   316,   319,   320,   321,   325,   326,   329,
     330,   334,   335,   339
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
  "@2", "declaration_list_opt", "declaration", "declaration_specifiers",
  "storage_class_specifier", "init_declarator_list_opt",
  "init_declarator_list", "init_declarator", "type_specifier",
  "struct_specifier", "@3", "@4", "@5", "@6", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_specifier", "@7",
  "@8", "enumerator_list", "enumerator", "@9", "declarator", "pointer",
  "direct_declarator", "@10", "constant_expression_opt",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator_opt",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "@11", "@12", "declaration_list",
  "statement_list_opt", "statement_list", "expression_statement",
  "selection_statement", "iteration_statement", "expression_opt",
  "jump_statement", "primary_expression", "postfix_expression",
  "arg_expression_list_opt", "arg_expression_list", "unary_expression",
  "cast_expression", "type_name", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "logical_AND_expression", "logical_OR_expression",
  "expression", "constant_expression", YY_NULLPTR
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

#define YYPACT_NINF -204

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-204)))

#define YYTABLE_NINF -56

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     200,  -204,   -34,  -204,  -204,  -204,  -204,    31,   -12,  -204,
    -204,    67,   200,  -204,  -204,  -204,    31,   113,   113,  -204,
      57,  -204,  -204,   -10,    90,    61,    80,    88,  -204,  -204,
    -204,    29,    94,  -204,   -11,  -204,  -204,   108,   111,   125,
      90,  -204,   386,   134,   122,  -204,  -204,    31,   348,   125,
     142,  -204,  -204,  -204,   113,   403,   441,   441,   284,   386,
     386,   386,   386,   386,  -204,  -204,  -204,  -204,  -204,   149,
    -204,   342,  -204,  -204,   166,   102,  -204,   150,   130,   157,
     165,  -204,   122,   147,    18,  -204,  -204,   152,   348,  -204,
    -204,  -204,  -204,    24,   113,    -8,   169,  -204,   159,  -204,
     284,  -204,   386,  -204,  -204,    59,   162,   173,   181,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,   168,   386,
     386,   171,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,    58,   178,  -204,   122,  -204,
      77,    24,    52,    69,  -204,   235,  -204,    31,   113,   308,
     386,  -204,    25,  -204,  -204,    98,  -204,    20,   184,   341,
     103,  -204,   386,   386,  -204,  -204,   195,   193,  -204,   206,
    -204,  -204,  -204,  -204,   166,   166,   102,   102,   102,   102,
     150,   150,   130,   157,  -204,   386,  -204,  -204,   348,   153,
     386,     3,  -204,   209,  -204,  -204,   202,   386,   205,   218,
     235,   225,   226,   386,   227,   228,  -204,   207,  -204,  -204,
    -204,   224,   235,  -204,  -204,  -204,  -204,   217,  -204,   231,
     232,   233,    98,   113,   386,  -204,  -204,  -204,  -204,  -204,
    -204,   386,  -204,  -204,  -204,  -204,  -204,    52,  -204,   386,
    -204,   234,  -204,   235,   249,   386,   386,   223,  -204,   386,
     386,   229,  -204,  -204,  -204,  -204,  -204,  -204,   237,   238,
    -204,  -204,  -204,   235,  -204,   242,   239,   245,  -204,   246,
     259,  -204,  -204,  -204,  -204,  -204,   386,   386,   235,   235,
     235,   260,   252,   295,  -204,  -204,   258,   386,   235,  -204,
     272,  -204,   235,  -204
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    18,    49,    19,    37,    20,    38,     0,    59,    29,
      61,     0,     2,     3,     5,     6,    21,    15,    14,    27,
      33,    28,     9,     0,    58,    51,     0,     0,    60,     1,
       4,     0,    22,    23,    25,    17,    16,    36,     0,     0,
      57,    64,    66,     0,     0,    62,    13,     0,     0,     0,
       0,    34,    98,    10,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   122,   123,   125,   124,   121,     0,
     127,   138,   148,   151,   155,   158,   159,   164,   167,   169,
     173,    67,     0,    54,     0,    52,    24,    25,     0,    26,
      86,     8,    31,     0,    11,    76,     0,    69,    70,    72,
       0,   146,     0,   139,   140,    76,   148,     0,     0,   171,
     143,   142,   141,   145,   144,    63,   132,   133,     0,   134,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,    88,
       0,     0,     0,     0,    39,   103,   101,    21,    12,    68,
      66,    74,    78,    75,    77,    79,    65,     0,     0,    68,
      78,   150,     0,     0,   126,   131,     0,   135,   136,     0,
     130,   152,   153,   154,   156,   157,   160,   161,   162,   163,
     165,   166,   168,   170,    48,     0,    53,    87,     0,     0,
       0,     0,    42,    44,    35,    40,     0,     0,     0,     0,
       0,     0,     0,   115,     0,     0,   107,     0,   105,    90,
      91,     0,   104,    92,    93,    94,    95,     0,   102,     0,
       0,     0,    80,    68,    66,    71,    73,   147,   172,   149,
     129,     0,   128,    56,    89,    32,    45,     0,    41,     0,
     119,     0,   118,     0,     0,   115,     0,     0,   116,     0,
       0,     0,    99,   106,   108,    83,    81,    82,     0,     0,
     137,    43,    46,     0,    97,     0,     0,     0,   117,     0,
       0,   120,   100,    85,    84,    96,     0,   115,     0,     0,
       0,     0,     0,   109,   111,   112,     0,   115,     0,   113,
       0,   110,     0,   114
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -204,  -204,  -204,   297,  -204,  -204,  -204,  -204,   -79,    14,
    -204,  -204,  -204,   263,   -86,  -204,  -204,  -204,  -204,  -204,
    -204,   172,  -121,  -204,    75,  -204,  -204,  -204,   240,   176,
    -204,    -3,     0,   -18,  -204,  -138,   -48,  -204,  -204,   158,
     211,  -100,   -61,   -77,  -204,  -137,  -204,    63,  -204,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -203,  -204,  -204,  -204,
    -204,  -204,   -55,   -42,   220,    42,    56,  -204,    39,   188,
     183,  -204,   -49,   -32
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    49,    39,   145,    15,    95,
      17,    31,    32,    33,    18,    19,    50,   141,    38,    93,
      20,   143,   144,   191,   192,    21,    43,    26,    84,    85,
     136,    22,    23,    24,    54,    69,   219,    97,    98,    99,
     153,   154,   155,    89,   140,   208,   209,   210,    94,   272,
     148,   211,   212,   213,   214,   215,   247,   216,    70,    71,
     166,   167,    72,    73,   107,    74,    75,    76,    77,    78,
      79,    80,   217,   109
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     101,   103,   104,   106,    27,    40,    96,   142,    28,   108,
      81,   139,   221,    34,    16,   146,    90,   110,   111,   112,
     113,   114,   195,     1,    25,     7,    16,   149,    -7,   150,
       2,    35,    36,     8,     2,     3,     4,     8,     5,     6,
       4,    48,   266,     6,    87,   106,   237,   106,    10,   220,
      10,   108,   238,   108,   225,   142,    90,   142,   137,   220,
     149,   138,   150,   244,   106,   106,     7,    29,   195,   218,
     168,   169,   105,     9,   282,   253,     8,     9,    46,     2,
     171,   172,   173,    10,   290,     4,   259,     7,     6,    10,
     106,   222,   151,   190,   159,   152,   150,     8,   184,   222,
     -47,   138,    53,   142,     8,   160,   264,   106,   147,   194,
      10,   234,    91,   228,   105,    37,     1,   187,    81,    44,
     188,   229,     9,     2,    45,    41,   275,    42,     3,     4,
     106,     5,     6,   223,    40,   224,   233,    47,   159,   193,
     150,   283,   284,   285,    87,   106,    27,   -30,   106,   152,
      51,   291,   125,   126,   248,   293,    90,   106,   236,   160,
     131,   132,   147,     2,    52,   241,     9,   174,   175,     4,
     180,   181,     6,    82,   127,   258,   106,   128,   129,   130,
      83,    92,   260,   176,   177,   178,   179,   115,   106,   133,
     106,   106,    81,   235,   106,   106,   248,   267,   134,   -55,
     269,   270,   157,     1,    48,   156,     9,   262,   106,   163,
       2,   122,   123,   124,   162,     3,     4,   164,     5,     6,
     227,   106,   106,   106,   106,   106,   165,   281,   248,   170,
     185,   230,   106,   106,   193,     7,   231,   106,   248,   196,
     197,   198,   199,   200,   232,     8,   201,   202,   203,    55,
     239,   240,   204,     9,   242,   205,    56,    57,    10,   243,
     245,   246,   249,   250,   252,   251,   254,   255,   256,   265,
      58,   257,   268,   273,    52,   263,   274,   276,   271,    59,
      60,   278,   279,    61,   206,    62,    63,     1,   277,    64,
      65,    66,    67,    68,     2,   280,   286,   207,    55,     3,
       4,   287,     5,     6,   288,    56,    57,   289,   292,    30,
      86,     1,   261,   189,   186,   226,   161,   183,     2,    58,
     158,   182,   135,     3,     4,     0,     5,     6,    59,    60,
       0,     0,    61,     0,    62,    63,     0,     9,    64,    65,
      66,    67,    68,   149,     1,   150,     0,     0,     0,     0,
       0,     2,     0,     8,     0,     0,     3,     4,     0,     5,
       6,     9,    55,   116,   117,   118,    10,     0,     0,    56,
      57,     0,     0,     0,     0,     0,   159,   119,   150,   120,
       0,     0,     0,    58,     0,     0,     8,    88,     0,     0,
       0,     0,    59,    60,     9,     0,    61,     0,    62,    63,
      55,   121,    64,    65,    66,    67,    68,    56,    57,     0,
       0,     0,     0,     0,     0,     0,     0,    55,     0,     0,
       0,    58,     0,     0,    56,    57,     0,     0,     0,     0,
      59,    60,     0,     0,    61,     0,    62,    63,   100,     0,
      64,    65,    66,    67,    68,     0,     0,    59,    60,     0,
       0,    61,     0,    62,    63,    55,     0,    64,    65,    66,
      67,    68,    56,    57,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   102,     0,     0,     0,
       0,     0,     0,     0,     0,    59,    60,     0,     0,    61,
       0,    62,    63,     0,     0,    64,    65,    66,    67,    68
};

static const yytype_int16 yycheck[] =
{
      55,    56,    57,    58,     7,    23,    54,    93,     8,    58,
      42,    88,   150,    16,     0,    94,    48,    59,    60,    61,
      62,    63,   143,     3,    58,    35,    12,    35,    39,    37,
      10,    17,    18,    45,    10,    15,    16,    45,    18,    19,
      16,    52,   245,    19,    47,   100,    43,   102,    58,   149,
      58,   100,    49,   102,    34,   141,    88,   143,    40,   159,
      35,    43,    37,   200,   119,   120,    35,     0,   189,   148,
     119,   120,    58,    53,   277,   212,    45,    53,    49,    10,
     122,   123,   124,    58,   287,    16,   224,    35,    19,    58,
     145,   152,    95,    41,    35,    95,    37,    45,    40,   160,
      39,    43,    39,   189,    45,   105,   243,   162,    94,    40,
      58,   188,    49,   162,   100,    58,     3,    40,   150,    39,
      43,   163,    53,    10,    36,    35,   263,    37,    15,    16,
     185,    18,    19,    35,   152,    37,   185,    43,    35,   142,
      37,   278,   279,   280,   147,   200,   149,    39,   203,   149,
      39,   288,    50,    51,   203,   292,   188,   212,   190,   159,
      30,    31,   148,    10,    39,   197,    53,   125,   126,    16,
     131,   132,    19,    39,    24,   223,   231,    27,    28,    29,
      58,    39,   231,   127,   128,   129,   130,    38,   243,    32,
     245,   246,   224,    40,   249,   250,   245,   246,    33,    52,
     249,   250,    43,     3,    52,    36,    53,   239,   263,    36,
      10,    45,    46,    47,    52,    15,    16,    36,    18,    19,
      36,   276,   277,   278,   279,   280,    58,   276,   277,    58,
      52,    36,   287,   288,   237,    35,    43,   292,   287,     4,
       5,     6,     7,     8,    38,    45,    11,    12,    13,    14,
      41,    49,    17,    53,    49,    20,    21,    22,    58,    41,
      35,    35,    35,    35,    40,    58,    49,    36,    36,    20,
      35,    38,    49,    36,    39,    41,    38,    35,    49,    44,
      45,    36,    36,    48,    49,    50,    51,     3,    49,    54,
      55,    56,    57,    58,    10,    36,    36,    62,    14,    15,
      16,    49,    18,    19,     9,    21,    22,    49,    36,    12,
      47,     3,   237,   141,   138,   157,   105,   134,    10,    35,
     100,   133,    82,    15,    16,    -1,    18,    19,    44,    45,
      -1,    -1,    48,    -1,    50,    51,    -1,    53,    54,    55,
      56,    57,    58,    35,     3,    37,    -1,    -1,    -1,    -1,
      -1,    10,    -1,    45,    -1,    -1,    15,    16,    -1,    18,
      19,    53,    14,    21,    22,    23,    58,    -1,    -1,    21,
      22,    -1,    -1,    -1,    -1,    -1,    35,    35,    37,    37,
      -1,    -1,    -1,    35,    -1,    -1,    45,    39,    -1,    -1,
      -1,    -1,    44,    45,    53,    -1,    48,    -1,    50,    51,
      14,    59,    54,    55,    56,    57,    58,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    35,    -1,    -1,    21,    22,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    48,    -1,    50,    51,    35,    -1,
      54,    55,    56,    57,    58,    -1,    -1,    44,    45,    -1,
      -1,    48,    -1,    50,    51,    14,    -1,    54,    55,    56,
      57,    58,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    48,
      -1,    50,    51,    -1,    -1,    54,    55,    56,    57,    58
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    10,    15,    16,    18,    19,    35,    45,    53,
      58,    64,    65,    66,    67,    71,    72,    73,    77,    78,
      83,    88,    94,    95,    96,    58,    90,    94,    95,     0,
      66,    74,    75,    76,    94,    72,    72,    58,    81,    69,
      96,    35,    37,    89,    39,    36,    49,    43,    52,    68,
      79,    39,    39,   110,    97,    14,    21,    22,    35,    44,
      45,    48,    50,    51,    54,    55,    56,    57,    58,    98,
     121,   122,   125,   126,   128,   129,   130,   131,   132,   133,
     134,   136,    39,    58,    91,    92,    76,    94,    39,   106,
     136,   110,    39,    82,   111,    72,    99,   100,   101,   102,
      35,   125,    35,   125,   125,    72,   125,   127,   135,   136,
     126,   126,   126,   126,   126,    38,    21,    22,    23,    35,
      37,    59,    45,    46,    47,    50,    51,    24,    27,    28,
      29,    30,    31,    32,    33,    91,    93,    40,    43,   106,
     107,    80,    77,    84,    85,    70,    71,    72,   113,    35,
      37,    94,    95,   103,   104,   105,    36,    43,   127,    35,
      95,   103,    52,    36,    36,    58,   123,   124,   135,   135,
      58,   126,   126,   126,   128,   128,   129,   129,   129,   129,
     131,   131,   132,   133,    40,    52,    92,    40,    43,    84,
      41,    86,    87,    94,    40,    85,     4,     5,     6,     7,
       8,    11,    12,    13,    17,    20,    49,    62,   108,   109,
     110,   114,   115,   116,   117,   118,   120,   135,    71,    99,
     104,    98,   105,    35,    37,    34,   102,    36,   135,   126,
      36,    43,    38,   135,   106,    40,   136,    43,    49,    41,
      49,   136,    49,    41,   108,    35,    35,   119,   135,    35,
      35,    58,    40,   108,    49,    36,    36,    38,    99,    98,
     135,    87,   136,    41,   108,    20,   119,   135,    49,   135,
     135,    49,   112,    36,    38,   108,    35,    49,    36,    36,
      36,   135,   119,   108,   108,   108,    36,    49,     9,    49,
     119,   108,    36,   108
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    66,    66,    68,    67,    69,
      67,    70,    70,    71,    72,    72,    72,    72,    73,    73,
      73,    74,    74,    75,    75,    76,    76,    77,    77,    77,
      79,    80,    78,    81,    82,    78,    78,    83,    83,    84,
      84,    85,    86,    86,    87,    87,    87,    89,    88,    90,
      88,    88,    91,    91,    92,    93,    92,    94,    94,    95,
      95,    96,    96,    96,    97,    96,    98,    98,    99,    99,
     100,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     104,   105,   105,   105,   105,   105,   106,   106,   107,   107,
     108,   108,   108,   108,   108,   108,   109,   109,   111,   112,
     110,   113,   113,   114,   114,   115,   115,   116,   116,   117,
     117,   117,   118,   118,   118,   119,   119,   120,   120,   120,
     120,   121,   121,   121,   121,   121,   121,   122,   122,   122,
     122,   122,   122,   122,   123,   123,   124,   124,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   126,   126,
     127,   128,   128,   128,   128,   129,   129,   129,   130,   131,
     131,   131,   131,   131,   132,   132,   132,   133,   133,   134,
     134,   135,   135,   136
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     3,     1,     1,     2,     2,     1,     1,
       1,     0,     1,     1,     3,     1,     3,     1,     1,     1,
       0,     0,     7,     0,     0,     6,     2,     1,     1,     1,
       2,     3,     1,     3,     1,     2,     3,     0,     6,     0,
       5,     2,     1,     3,     1,     0,     4,     2,     1,     1,
       2,     1,     3,     4,     0,     5,     0,     1,     0,     1,
       1,     3,     1,     3,     2,     2,     0,     1,     1,     1,
       2,     3,     3,     3,     4,     4,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     4,     3,     0,     0,
       6,     1,     2,     0,     1,     1,     2,     1,     2,     5,
       7,     5,     5,     7,     9,     0,     1,     3,     2,     2,
       3,     1,     1,     1,     1,     1,     3,     1,     4,     4,
       3,     3,     2,     2,     0,     1,     1,     3,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     4,     1,     4,
       2,     1,     3,     3,     3,     1,     3,     3,     1,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1
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
#line 23 "parse.y" /* yacc.c:1646  */
    {root=makeNode(N_PROGRAM,NIL,(yyvsp[0]),NIL);checkForwardReference();}
#line 1609 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 26 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1615 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 27 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 30 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 31 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 35 "parse.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 1639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 36 "parse.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorBody((yyvsp[-1]),(yyvsp[0]));}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 37 "parse.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[0]),makeSpecifier(int_type,0));}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 38 "parse.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorBody((yyvsp[-1]),(yyvsp[0]));}
#line 1657 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 42 "parse.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 1663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 43 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 47 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorListSpecifier((yyvsp[-1]),(yyvsp[-2]));}
#line 1675 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 50 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeSpecifier((yyvsp[0]),0);}
#line 1681 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 51 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeSpecifier(0,(yyvsp[0]));}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 52 "parse.y" /* yacc.c:1646  */
    {(yyval)=updateSpecifier((yyvsp[0]),(yyvsp[-1]),0);}
#line 1693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 53 "parse.y" /* yacc.c:1646  */
    {(yyval)=updateSpecifier((yyvsp[0]),0,(yyvsp[-1]));}
#line 1699 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 56 "parse.y" /* yacc.c:1646  */
    {(yyval)=S_AUTO;}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 57 "parse.y" /* yacc.c:1646  */
    {(yyval)=S_STATIC;}
#line 1711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 58 "parse.y" /* yacc.c:1646  */
    {(yyval)=S_TYPEDEF;}
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 62 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeDummyIdentifier();}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 63 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 67 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 68 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 71 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 72 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorInit((yyvsp[-2]),(yyvsp[0]));}
#line 1753 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 76 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 77 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 78 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1771 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 82 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeStructOrEnumIdentifier((yyvsp[-1]),(yyvsp[0]),ID_STRUCT);}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 83 "parse.y" /* yacc.c:1646  */
    {(yyval)=current_id; current_level++;}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 84 "parse.y" /* yacc.c:1646  */
    {checkForwardReference(); current_level--; current_id=(yyvsp[-2]); (yyval)=setTypeField((yyvsp[-4]),(yyvsp[-1]))}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 85 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeType((yyvsp[0]));}
#line 1795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 86 "parse.y" /* yacc.c:1646  */
    {(yyval)=current_id; current_level++;}
#line 1801 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 87 "parse.y" /* yacc.c:1646  */
    {checkForwardReference(); current_level--; current_id=(yyvsp[-2]); (yyval)=setTypeField((yyvsp[-4]),(yyvsp[-1]));}
#line 1807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 88 "parse.y" /* yacc.c:1646  */
    {(yyval)=getTypeOfStructOrEnumIdentifier((yyvsp[-1]),(yyvsp[0]),ID_STRUCT);}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 91 "parse.y" /* yacc.c:1646  */
    {(yyval)=T_STRUCT;}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 92 "parse.y" /* yacc.c:1646  */
    {(yyval)=T_UNION;}
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 95 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 96 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 99 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorListSpecifier((yyvsp[-1]),(yyvsp[-2]));}
#line 1843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 102 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 103 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1855 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 106 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 112 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeStructOrEnumIdentifier(T_ENUM,(yyvsp[0]),ID_ENUM);}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 112 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeField((yyvsp[-3]),(yyvsp[-1]));}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 113 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_ENUM);}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 113 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeField((yyvsp[-3]),(yyvsp[-1]));}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 114 "parse.y" /* yacc.c:1646  */
    {(yyval)=getTypeOfStructOrEnumIdentifier(T_ENUM,(yyvsp[0]),ID_ENUM);}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 117 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 118 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 121 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[0])),ID_ENUM_LITERAL);}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 122 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[0])),ID_ENUM_LITERAL);}
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 122 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorInit((yyvsp[-2]),(yyvsp[0]));}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 126 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorElementType((yyvsp[0]),(yyvsp[-1]));}
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 127 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 130 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_POINTER);}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 131 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[0]),makeType(T_POINTER));}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 135 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeIdentifier((yyvsp[0]));}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 136 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 137 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorElementType((yyvsp[-3]),setTypeExpr(makeType(T_ARRAY),(yyvsp[-1])));}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 138 "parse.y" /* yacc.c:1646  */
    {(yyval)=current_id; current_level++;}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 140 "parse.y" /* yacc.c:1646  */
    {checkForwardReference(); current_level--; current_id=(yyvsp[-2]); (yyval)=setDeclaratorElementType((yyvsp[-4]),setTypeField(makeType(T_FUNC),(yyvsp[-1])));}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 143 "parse.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 144 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 147 "parse.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 148 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 152 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 153 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),setDeclaratorKind(makeDummyIdentifier(),ID_PARM));}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 156 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 157 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 160 "parse.y" /* yacc.c:1646  */
    {(yyval)=setParameterDeclaratorSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 161 "parse.y" /* yacc.c:1646  */
    {(yyval)=setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(),(yyvsp[0])),(yyvsp[-1]));}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 164 "parse.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 165 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 168 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_POINTER);}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 169 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 170 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[0]),makeType(T_POINTER));}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 173 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 174 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeExpr(makeType(T_ARRAY),(yyvsp[-1]));}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 175 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeExpr(makeType(T_FUNC),(yyvsp[-1]));}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 176 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[-3]),setTypeExpr(makeType(T_ARRAY),(yyvsp[-1])));}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 177 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[-3]),setTypeExpr(makeType(T_FUNC),(yyvsp[-1])));}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 181 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_INIT_LIST_ONE,NIL,(yyvsp[0]),NIL);}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 182 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 185 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_INIT_LIST,(yyvsp[0]),NIL,makeNode(N_INIT_LIST_NIL,NIL,NIL,NIL));}
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 186 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_INIT_LIST,(yyvsp[-2]),(yyvsp[0]));}
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 190 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 191 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 192 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 193 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 194 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 195 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 198 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LABEL_CASE,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 199 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LABEL_DEFAULT,NIL,(yyvsp[0]),NIL);}
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 203 "parse.y" /* yacc.c:1646  */
    {(yyval)=current_id; current_level++;}
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 203 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_COMPOUND,(yyvsp[-3]),0,(yyvsp[-2]));}
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 204 "parse.y" /* yacc.c:1646  */
    {checkForwardReference(); current_level--; current_id=(yyvsp[-3]);}
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 207 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 208 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 212 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL);}
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 213 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 217 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LIST,(yyvsp[0]),NIL,makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL));}
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 218 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_STMT_LIST,(yyvsp[-1]),(yyvsp[0]));}
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 222 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_EMPTY,NIL,NIL,NIL);}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 223 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_EXPRESSION,NIL,(yyvsp[-1]),NIL);}
#line 2233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 227 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_IF,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 228 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_IF_ELSE,(yyvsp[-4]),(yyvsp[-2]),(yyvsp[0]));}
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 229 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_SWITCH,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 233 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_WHILE,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 234 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_DO,(yyvsp[-5]),NIL,(yyvsp[-2]));}
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 235 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_FOR,(yyvsp[-6]),NIL,(yyvsp[-4]));}
#line 2269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 238 "parse.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 239 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 243 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_RETURN,NIL,(yyvsp[-1]),NIL);}
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 244 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_CONTINUE,NIL,NIL,NIL);}
#line 2293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 245 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_BREAK,NIL,NIL,NIL);}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 246 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_GO,NIL,NIL,NIL);}
#line 2305 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 250 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_IDENT,NIL,getIdentifierDeclared((yyvsp[0])),NIL);}
#line 2311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 251 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_INT_CONST,NIL,(yyvsp[0]),NIL);}
#line 2317 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 252 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_FLOAT_CONST,NIL,(yyvsp[0]),NIL);}
#line 2323 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 253 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_CHAR_CONST,NIL,(yyvsp[0]),NIL);}
#line 2329 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 254 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STRING_CONST,NIL,(yyvsp[0]),NIL);}
#line 2335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 255 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2341 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 259 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2347 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 260 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ARRAY,(yyvsp[-3]),NIL,(yyvsp[-1]));}
#line 2353 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 261 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_FUNCTION,(yyvsp[-3]),NIL,(yyvsp[-1]));}
#line 2359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 262 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STRUCT,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 263 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ARROW,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 264 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_POST_INC,NIL,(yyvsp[-1]),NIL);}
#line 2377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 265 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_POST_DEC,NIL,(yyvsp[-1]),NIL);}
#line 2383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 268 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL);}
#line 2389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 269 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 272 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_ARG_LIST,(yyvsp[0]),NIL,makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL));}
#line 2401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 273 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_ARG_LIST,(yyvsp[-2]),(yyvsp[0]));}
#line 2407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 277 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 278 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PRE_INC,NIL,(yyvsp[0]),NIL);}
#line 2419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 279 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PRE_DEC,NIL,(yyvsp[0]),NIL);}
#line 2425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 280 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_AMP,NIL,(yyvsp[0]),NIL);}
#line 2431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 281 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STAR,NIL,(yyvsp[0]),NIL);}
#line 2437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 282 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_NOT,NIL,(yyvsp[0]),NIL);}
#line 2443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 283 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MINUS,NIL,(yyvsp[0]),NIL);}
#line 2449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 284 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PLUS,NIL,(yyvsp[0]),NIL);}
#line 2455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 285 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SIZE_EXP,NIL,(yyvsp[0]),NIL);}
#line 2461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 286 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SIZE_TYPE,NIL,(yyvsp[-1]),NIL);}
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 289 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 290 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_CAST,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 293 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeNameSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 2485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 297 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 298 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MUL,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 299 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_DIV,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 300 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MOD,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 303 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 304 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ADD,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 305 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SUB,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 308 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 312 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 313 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_LSS,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 314 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_GTR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 315 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_LEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 316 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_GEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 319 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 320 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_EQL,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 321 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_NEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 325 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 326 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_OR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 329 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 330 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_AND,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 334 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 335 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ASSIGN,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 339 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2623 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2627 "y.tab.c" /* yacc.c:1646  */
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
#line 342 "parse.y" /* yacc.c:1906  */
