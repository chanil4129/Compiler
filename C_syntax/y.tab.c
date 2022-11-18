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

#include "type.h"
#define YYSTYPE_IS_DECLARED 1
typedef long YYSTYPE;
A_NODE *makeNode(NODE_NAME,A_NODE *,A_NODE *,A_NODE *);
A_NODE *makeNodeList(NODE_NAME,A_NODE *,A_NODE *);
A_ID *makeIdentifier(char *);
A_ID *makeDummyIdentifier();
A_TYPE *makeType(T_KIND);
A_SPECIFIER *makeSpecifier(A_TYPE *,S_KIND);
A_ID *searchIdentifier(char *,A_ID *);
A_ID *searchIdentifierAtCurrentLevel(char *,A_ID *);
A_SPECIFIER *updateSpecifier(A_SPECIFIER *,A_TYPE *,S_KIND);
void checkForwardReference();
void setDefaultSpecifier(A_SPECIFIER *);
A_ID *linkDeclaratorList(A_ID *,A_ID *);
A_ID *getIdentifierDeclared(char *);
A_TYPE *getTypeOfStructOrEnumRefIdentifier(T_KIND,char *,ID_KIND);
A_ID *setDeclaratorInit(A_ID *,A_NODE *);
A_ID *setDeclaratorKind(A_ID *,ID_KIND);
A_ID *setDeclaratorType(A_ID *,A_TYPE *);
A_ID *setDeclaratorElementType(A_ID *,A_TYPE *);
A_ID *setDeclaratorTypeAndKind(A_ID *,A_TYPE *,ID_KIND);
A_ID *setDeclaratorListSpecifier(A_ID *,A_SPECIFIER *);
A_ID *setFunctionDeclaratorSpecifier(A_ID *,A_SPECIFIER *);
A_ID *setFunctionDeclaratorBody(A_ID *,A_NODE *);
A_ID *setParameterDeclaratorSpecifier(A_ID *,A_SPECIFIER *);
A_ID *setStructDeclaratorListSpecifier(A_ID *,A_TYPE *);
A_TYPE *setTypeNameSpecifier(A_TYPE *,A_SPECIFIER *);
A_TYPE *setTypeElementType(A_TYPE *, A_TYPE *);
A_TYPE *setTypeField(A_TYPE *,A_ID *);
A_TYPE *setTypeExpr(A_TYPE *,A_NODE *);
A_TYPE *setTypeAndKindOfDeclarator(A_TYPE *t, ID_KIND k, A_ID *id);
A_TYPE *setTypeStructOrEnumIdentifier(T_KIND,char *,ID_KIND);
BOOLEAN isNotSameFormalParameters(A_ID *,A_ID *);
BOOLEAN isNotSameType(A_TYPE *,A_TYPE *);
BOOLEAN isPointerOrArrayType(A_TYPE *);
void yyerror(char *s);
void syntax_error(int i,char *s);
void initialize();

#line 108 "y.tab.c" /* yacc.c:339  */

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

#line 283 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   519

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  179
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  302

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
       0,    54,    54,    58,    59,    62,    63,    67,    67,    69,
      69,    74,    75,    79,    82,    83,    84,    85,    86,    87,
      90,    91,    92,    95,    96,   100,   101,   105,   106,   109,
     110,   114,   115,   116,   120,   121,   120,   123,   124,   123,
     126,   129,   130,   133,   134,   137,   140,   141,   144,   145,
     146,   150,   150,   151,   151,   152,   155,   156,   159,   160,
     160,   164,   165,   168,   169,   173,   174,   175,   176,   176,
     181,   182,   185,   186,   190,   191,   194,   195,   198,   199,
     202,   203,   206,   207,   208,   211,   212,   213,   214,   215,
     219,   220,   223,   224,   228,   229,   230,   231,   232,   233,
     236,   237,   241,   241,   241,   245,   246,   250,   251,   255,
     256,   260,   261,   265,   266,   267,   271,   272,   273,   276,
     277,   281,   282,   283,   284,   288,   289,   290,   291,   292,
     293,   297,   298,   299,   300,   301,   302,   303,   306,   307,
     310,   311,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   327,   328,   331,   335,   336,   337,   338,   341,
     342,   343,   346,   347,   348,   352,   353,   354,   355,   356,
     359,   360,   361,   365,   366,   369,   370,   374,   375,   379
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
  "storage_class_specifier", "type_qualifier", "init_declarator_list_opt",
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

#define YYPACT_NINF -230

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-230)))

#define YYTABLE_NINF -60

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     205,  -230,   -36,  -230,  -230,  -230,  -230,    60,    62,  -230,
    -230,  -230,  -230,    37,   205,  -230,  -230,  -230,    60,   156,
     156,   156,  -230,    53,  -230,  -230,    11,   101,    91,   111,
      97,  -230,  -230,  -230,   113,   122,  -230,    -8,  -230,  -230,
    -230,   134,   142,   146,   101,  -230,   406,   149,   135,  -230,
    -230,    60,   368,   146,   152,  -230,  -230,  -230,   156,   423,
     461,   461,   289,   406,   406,   406,   406,   406,  -230,  -230,
    -230,  -230,  -230,   164,  -230,    66,  -230,  -230,   110,    33,
      94,   206,   148,   155,   173,  -230,   135,   158,    18,  -230,
    -230,   159,   368,  -230,  -230,  -230,  -230,    38,   156,    79,
     171,  -230,   170,  -230,   289,  -230,   406,  -230,  -230,    -3,
     162,   183,   186,  -230,  -230,  -230,  -230,  -230,  -230,  -230,
    -230,  -230,   180,   406,   406,   181,   406,   406,   406,   406,
     406,   406,   406,   406,   406,   406,   406,   406,   406,   406,
     406,    42,   197,  -230,   135,  -230,    86,    38,    55,    19,
    -230,   240,  -230,    60,   156,   338,   406,  -230,    44,  -230,
    -230,   106,  -230,   129,   219,   349,   133,  -230,   406,   406,
    -230,  -230,   220,   216,  -230,   226,  -230,  -230,  -230,  -230,
     110,   110,    33,    33,    33,    33,    33,    33,   206,   206,
     148,   155,  -230,   406,  -230,  -230,   368,    20,   406,    50,
    -230,   232,  -230,  -230,   225,   406,   227,   236,   240,   243,
     245,   406,   246,   247,  -230,   228,  -230,  -230,  -230,   253,
     240,  -230,  -230,  -230,  -230,   234,  -230,   251,   264,   263,
     106,   156,   406,  -230,  -230,  -230,  -230,  -230,  -230,   406,
    -230,  -230,  -230,  -230,  -230,    55,  -230,   406,  -230,   265,
    -230,   240,   292,   406,   406,   260,  -230,   406,   406,   266,
    -230,  -230,  -230,  -230,  -230,  -230,   277,   276,  -230,  -230,
    -230,   240,  -230,   281,   268,   282,  -230,   283,   284,  -230,
    -230,  -230,  -230,  -230,   406,   406,   240,   240,   240,   285,
     273,   314,  -230,  -230,   278,   406,   240,  -230,   290,  -230,
     240,  -230
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    20,    53,    21,    41,    22,    42,     0,    63,    33,
      65,    23,    24,     0,     2,     3,     5,     6,    25,    15,
      16,    14,    31,    37,    32,     9,     0,    62,    55,     0,
       0,    64,     1,     4,     0,    26,    27,    29,    18,    19,
      17,    40,     0,     0,    61,    68,    70,     0,     0,    66,
      13,     0,     0,     0,     0,    38,   102,    10,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   126,   127,
     129,   128,   125,     0,   131,   142,   152,   155,   159,   162,
     165,   170,   173,   175,   179,    71,     0,    58,     0,    56,
      28,    29,     0,    30,    90,     8,    35,     0,    11,    80,
       0,    73,    74,    76,     0,   150,     0,   143,   144,    80,
     152,     0,     0,   177,   147,   146,   145,   149,   148,    67,
     136,   137,     0,   138,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    54,     0,    92,     0,     0,     0,     0,
      43,   107,   105,    25,    12,    72,    70,    78,    82,    79,
      81,    83,    69,     0,     0,    72,    82,   154,     0,     0,
     130,   135,     0,   139,   140,     0,   134,   156,   157,   158,
     160,   161,   163,   164,   166,   167,   168,   169,   171,   172,
     174,   176,    52,     0,    57,    91,     0,     0,     0,     0,
      46,    48,    39,    44,     0,     0,     0,     0,     0,     0,
       0,   119,     0,     0,   111,     0,   109,    94,    95,     0,
     108,    96,    97,    98,    99,     0,   106,     0,     0,     0,
      84,    72,    70,    75,    77,   151,   178,   153,   133,     0,
     132,    60,    93,    36,    49,     0,    45,     0,   123,     0,
     122,     0,     0,   119,     0,     0,   120,     0,     0,     0,
     103,   110,   112,    87,    85,    86,     0,     0,   141,    47,
      50,     0,   101,     0,     0,     0,   121,     0,     0,   124,
     104,    89,    88,   100,     0,   119,     0,     0,     0,     0,
       0,   113,   115,   116,     0,   119,     0,   117,     0,   114,
       0,   118
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -230,  -230,  -230,   311,  -230,  -230,  -230,  -230,   -77,     6,
    -230,  -230,  -230,  -230,   279,   -69,  -230,  -230,  -230,  -230,
    -230,  -230,   182,  -130,  -230,    83,  -230,  -230,  -230,   249,
     187,  -230,    -2,    -1,   -16,  -230,  -138,   -54,  -230,  -230,
     169,   229,  -115,  -125,   -84,  -230,  -165,  -230,     9,  -230,
    -230,  -230,  -230,  -230,  -230,  -230,  -230,  -229,  -230,  -230,
    -230,  -230,  -230,   -59,   -52,   254,    54,   136,  -230,    59,
     212,   196,  -230,   -53,   -29
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    53,    43,   151,    17,    99,
      19,    20,    34,    35,    36,    21,    22,    54,   147,    42,
      97,    23,   149,   150,   199,   200,    24,    47,    29,    88,
      89,   142,    25,    26,    27,    58,    73,   227,   101,   102,
     103,   159,   160,   161,    93,   146,   216,   217,   218,    98,
     280,   154,   219,   220,   221,   222,   223,   255,   224,    74,
      75,   172,   173,    76,    77,   111,    78,    79,    80,    81,
      82,    83,    84,   225,   113
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     105,   107,   108,   110,   100,    30,    18,    31,   145,   112,
      44,   114,   115,   116,   117,   118,    37,    85,   229,   203,
      18,   152,    28,    94,   274,    38,    39,    40,   148,     2,
       2,    -7,   165,   230,   156,     4,     4,    32,     6,     6,
     228,   230,     8,   252,    52,   110,     7,   110,     2,    91,
     228,   112,    57,   112,     4,   261,   290,     6,   143,   202,
     243,   144,    95,    94,   110,   110,   298,   203,   109,    10,
     174,   175,     9,     9,   177,   178,   179,   226,   148,   155,
     148,   156,   192,   129,   130,   144,   272,   120,   121,   122,
       7,     9,   110,   245,   267,     7,   198,   157,   158,   246,
       8,   123,    10,   124,   153,     8,   283,     8,   166,   110,
     109,    41,   242,    10,   155,   236,   156,   237,    10,   131,
     132,   291,   292,   293,     8,   125,   195,    85,   148,   196,
     -51,   299,     1,    49,   110,   301,    45,    10,    46,     2,
     241,   231,    44,   232,     3,     4,   201,     5,     6,   110,
      48,    91,   110,    30,   158,   126,   127,   128,   256,     1,
     153,   110,    50,   233,   166,    51,     2,    94,   165,   244,
     156,     3,     4,   -34,     5,     6,   249,   266,   137,   138,
     110,    55,     9,   180,   181,    56,   268,   139,    86,    11,
      12,    96,   110,    87,   110,   110,   188,   189,   110,   110,
     256,   275,   119,    85,   277,   278,   140,   162,     1,     9,
     -59,    52,   110,   163,   168,     2,    11,    12,   270,   169,
       3,     4,   170,     5,     6,   110,   110,   110,   110,   110,
     133,   289,   256,   134,   135,   136,   110,   110,   171,   176,
       7,   110,   256,   201,   204,   205,   206,   207,   208,   193,
       8,   209,   210,   211,    59,   235,   238,   212,     9,   239,
     213,    60,    61,    10,   240,    11,    12,   182,   183,   184,
     185,   186,   187,   247,   248,    62,   250,   251,   253,    56,
     254,   257,   258,   262,    63,    64,   259,   263,    65,   214,
      66,    67,     1,   260,    68,    69,    70,    71,    72,     2,
     264,   265,   215,    59,     3,     4,   271,     5,     6,   276,
      60,    61,   273,   281,   282,   279,   284,   285,   286,   287,
     288,   294,   295,   296,    62,    33,   300,   297,   269,   197,
      90,   194,   234,    63,    64,   141,   191,    65,   167,    66,
      67,     1,     9,    68,    69,    70,    71,    72,     2,    11,
      12,   190,     1,     3,     4,     0,     5,     6,   164,     2,
       0,     0,     0,     0,     3,     4,     0,     5,     6,     0,
       0,     0,     0,   155,     0,   156,     0,     0,     0,     0,
       0,     0,    59,     8,   165,     0,   156,     0,     0,    60,
      61,     9,     0,     0,     8,     0,    10,     0,    11,    12,
       0,     0,     9,    62,     0,     0,     0,    92,     0,    11,
      12,     0,    63,    64,     0,     0,    65,     0,    66,    67,
      59,     0,    68,    69,    70,    71,    72,    60,    61,     0,
       0,     0,     0,     0,     0,     0,     0,    59,     0,     0,
       0,    62,     0,     0,    60,    61,     0,     0,     0,     0,
      63,    64,     0,     0,    65,     0,    66,    67,   104,     0,
      68,    69,    70,    71,    72,     0,     0,    63,    64,     0,
       0,    65,     0,    66,    67,    59,     0,    68,    69,    70,
      71,    72,    60,    61,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   106,     0,     0,     0,
       0,     0,     0,     0,     0,    63,    64,     0,     0,    65,
       0,    66,    67,     0,     0,    68,    69,    70,    71,    72
};

static const yytype_int16 yycheck[] =
{
      59,    60,    61,    62,    58,     7,     0,     8,    92,    62,
      26,    63,    64,    65,    66,    67,    18,    46,   156,   149,
      14,    98,    58,    52,   253,    19,    20,    21,    97,    10,
      10,    39,    35,   158,    37,    16,    16,     0,    19,    19,
     155,   166,    45,   208,    52,   104,    35,   106,    10,    51,
     165,   104,    43,   106,    16,   220,   285,    19,    40,    40,
      40,    43,    53,    92,   123,   124,   295,   197,    62,    58,
     123,   124,    53,    53,   126,   127,   128,   154,   147,    35,
     149,    37,    40,    50,    51,    43,   251,    21,    22,    23,
      35,    53,   151,    43,   232,    35,    41,    99,    99,    49,
      45,    35,    58,    37,    98,    45,   271,    45,   109,   168,
     104,    58,   196,    58,    35,   168,    37,   169,    58,    25,
      26,   286,   287,   288,    45,    59,    40,   156,   197,    43,
      39,   296,     3,    36,   193,   300,    35,    58,    37,    10,
     193,    35,   158,    37,    15,    16,   148,    18,    19,   208,
      39,   153,   211,   155,   155,    45,    46,    47,   211,     3,
     154,   220,    49,    34,   165,    43,    10,   196,    35,   198,
      37,    15,    16,    39,    18,    19,   205,   231,    30,    31,
     239,    39,    53,   129,   130,    39,   239,    32,    39,    60,
      61,    39,   251,    58,   253,   254,   137,   138,   257,   258,
     253,   254,    38,   232,   257,   258,    33,    36,     3,    53,
      52,    52,   271,    43,    52,    10,    60,    61,   247,    36,
      15,    16,    36,    18,    19,   284,   285,   286,   287,   288,
      24,   284,   285,    27,    28,    29,   295,   296,    58,    58,
      35,   300,   295,   245,     4,     5,     6,     7,     8,    52,
      45,    11,    12,    13,    14,    36,    36,    17,    53,    43,
      20,    21,    22,    58,    38,    60,    61,   131,   132,   133,
     134,   135,   136,    41,    49,    35,    49,    41,    35,    39,
      35,    35,    35,    49,    44,    45,    58,    36,    48,    49,
      50,    51,     3,    40,    54,    55,    56,    57,    58,    10,
      36,    38,    62,    14,    15,    16,    41,    18,    19,    49,
      21,    22,    20,    36,    38,    49,    35,    49,    36,    36,
      36,    36,    49,     9,    35,    14,    36,    49,   245,   147,
      51,   144,   163,    44,    45,    86,   140,    48,   109,    50,
      51,     3,    53,    54,    55,    56,    57,    58,    10,    60,
      61,   139,     3,    15,    16,    -1,    18,    19,   104,    10,
      -1,    -1,    -1,    -1,    15,    16,    -1,    18,    19,    -1,
      -1,    -1,    -1,    35,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    14,    45,    35,    -1,    37,    -1,    -1,    21,
      22,    53,    -1,    -1,    45,    -1,    58,    -1,    60,    61,
      -1,    -1,    53,    35,    -1,    -1,    -1,    39,    -1,    60,
      61,    -1,    44,    45,    -1,    -1,    48,    -1,    50,    51,
      14,    -1,    54,    55,    56,    57,    58,    21,    22,    -1,
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
      58,    60,    61,    64,    65,    66,    67,    71,    72,    73,
      74,    78,    79,    84,    89,    95,    96,    97,    58,    91,
      95,    96,     0,    66,    75,    76,    77,    95,    72,    72,
      72,    58,    82,    69,    97,    35,    37,    90,    39,    36,
      49,    43,    52,    68,    80,    39,    39,   111,    98,    14,
      21,    22,    35,    44,    45,    48,    50,    51,    54,    55,
      56,    57,    58,    99,   122,   123,   126,   127,   129,   130,
     131,   132,   133,   134,   135,   137,    39,    58,    92,    93,
      77,    95,    39,   107,   137,   111,    39,    83,   112,    72,
     100,   101,   102,   103,    35,   126,    35,   126,   126,    72,
     126,   128,   136,   137,   127,   127,   127,   127,   127,    38,
      21,    22,    23,    35,    37,    59,    45,    46,    47,    50,
      51,    25,    26,    24,    27,    28,    29,    30,    31,    32,
      33,    92,    94,    40,    43,   107,   108,    81,    78,    85,
      86,    70,    71,    72,   114,    35,    37,    95,    96,   104,
     105,   106,    36,    43,   128,    35,    96,   104,    52,    36,
      36,    58,   124,   125,   136,   136,    58,   127,   127,   127,
     129,   129,   130,   130,   130,   130,   130,   130,   132,   132,
     133,   134,    40,    52,    93,    40,    43,    85,    41,    87,
      88,    95,    40,    86,     4,     5,     6,     7,     8,    11,
      12,    13,    17,    20,    49,    62,   109,   110,   111,   115,
     116,   117,   118,   119,   121,   136,    71,   100,   105,    99,
     106,    35,    37,    34,   103,    36,   136,   127,    36,    43,
      38,   136,   107,    40,   137,    43,    49,    41,    49,   137,
      49,    41,   109,    35,    35,   120,   136,    35,    35,    58,
      40,   109,    49,    36,    36,    38,   100,    99,   136,    88,
     137,    41,   109,    20,   120,   136,    49,   136,   136,    49,
     113,    36,    38,   109,    35,    49,    36,    36,    36,   136,
     120,   109,   109,   109,    36,    49,     9,    49,   120,   109,
      36,   109
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    66,    66,    68,    67,    69,
      67,    70,    70,    71,    72,    72,    72,    72,    72,    72,
      73,    73,    73,    74,    74,    75,    75,    76,    76,    77,
      77,    78,    78,    78,    80,    81,    79,    82,    83,    79,
      79,    84,    84,    85,    85,    86,    87,    87,    88,    88,
      88,    90,    89,    91,    89,    89,    92,    92,    93,    94,
      93,    95,    95,    96,    96,    97,    97,    97,    98,    97,
      99,    99,   100,   100,   101,   101,   102,   102,   103,   103,
     104,   104,   105,   105,   105,   106,   106,   106,   106,   106,
     107,   107,   108,   108,   109,   109,   109,   109,   109,   109,
     110,   110,   112,   113,   111,   114,   114,   115,   115,   116,
     116,   117,   117,   118,   118,   118,   119,   119,   119,   120,
     120,   121,   121,   121,   121,   122,   122,   122,   122,   122,
     122,   123,   123,   123,   123,   123,   123,   123,   124,   124,
     125,   125,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   127,   127,   128,   129,   129,   129,   129,   130,
     130,   130,   131,   131,   131,   132,   132,   132,   132,   132,
     133,   133,   133,   134,   134,   135,   135,   136,   136,   137
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     3,     1,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     0,     1,     1,     3,     1,
       3,     1,     1,     1,     0,     0,     7,     0,     0,     6,
       2,     1,     1,     1,     2,     3,     1,     3,     1,     2,
       3,     0,     6,     0,     5,     2,     1,     3,     1,     0,
       4,     2,     1,     1,     2,     1,     3,     4,     0,     5,
       0,     1,     0,     1,     1,     3,     1,     3,     2,     2,
       0,     1,     1,     1,     2,     3,     3,     3,     4,     4,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       4,     3,     0,     0,     6,     1,     2,     0,     1,     1,
       2,     1,     2,     5,     7,     5,     5,     7,     9,     0,
       1,     3,     2,     2,     3,     1,     1,     1,     1,     1,
       3,     1,     4,     4,     3,     3,     2,     2,     0,     1,
       1,     3,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     4,     1,     4,     2,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1
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
#line 55 "parse.y" /* yacc.c:1646  */
    {root=makeNode(N_PROGRAM,NIL,(yyvsp[0]),NIL);checkForwardReference();}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 58 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 59 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 62 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 63 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 67 "parse.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 68 "parse.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorBody((yyvsp[-1]),(yyvsp[0]));}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 69 "parse.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[0]),makeSpecifier(int_type,0));}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 70 "parse.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorBody((yyvsp[-1]),(yyvsp[0]));}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 74 "parse.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 75 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 79 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorListSpecifier((yyvsp[-1]),(yyvsp[-2]));}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 82 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeSpecifier((yyvsp[0]),0);}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 83 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeSpecifier(0,(yyvsp[0]));}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 84 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeSpecifier((yyvsp[0]),0);}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 85 "parse.y" /* yacc.c:1646  */
    {(yyval)=updateSpecifier((yyvsp[0]),(yyvsp[-1]),0);}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 86 "parse.y" /* yacc.c:1646  */
    {(yyval)=updateSpecifier((yyvsp[0]),0,(yyvsp[-1]));}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 87 "parse.y" /* yacc.c:1646  */
    {(yyval)=updateSpecifier((yyvsp[0]),(yyvsp[-1]),0);}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 90 "parse.y" /* yacc.c:1646  */
    {(yyval)=S_AUTO;}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 91 "parse.y" /* yacc.c:1646  */
    {(yyval)=S_STATIC;}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 92 "parse.y" /* yacc.c:1646  */
    {(yyval)=S_TYPEDEF;}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 95 "parse.y" /* yacc.c:1646  */
    {(yyval)=S_CONST;}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 96 "parse.y" /* yacc.c:1646  */
    {(yyval)=S_VOLATILE;}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 100 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeDummyIdentifier();}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 101 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 105 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 106 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 109 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 110 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorInit((yyvsp[-2]),(yyvsp[0]));}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 114 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 115 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 116 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 120 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeStructOrEnumIdentifier((yyvsp[-1]),(yyvsp[0]),ID_STRUCT);}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 121 "parse.y" /* yacc.c:1646  */
    {(yyval)=current_id; current_level++;}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 122 "parse.y" /* yacc.c:1646  */
    {checkForwardReference(); current_level--; current_id=(yyvsp[-2]); (yyval)=setTypeField((yyvsp[-4]),(yyvsp[-1]))}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 123 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeType((yyvsp[0]));}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 124 "parse.y" /* yacc.c:1646  */
    {(yyval)=current_id; current_level++;}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 125 "parse.y" /* yacc.c:1646  */
    {checkForwardReference(); current_level--; current_id=(yyvsp[-2]); (yyval)=setTypeField((yyvsp[-4]),(yyvsp[-1]));}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 126 "parse.y" /* yacc.c:1646  */
    {(yyval)=getTypeOfStructOrEnumIdentifier((yyvsp[-1]),(yyvsp[0]),ID_STRUCT);}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 129 "parse.y" /* yacc.c:1646  */
    {(yyval)=T_STRUCT;}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 130 "parse.y" /* yacc.c:1646  */
    {(yyval)=T_UNION;}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 133 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 134 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 137 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorListSpecifier((yyvsp[-1]),(yyvsp[-2]));}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 140 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 141 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 144 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 150 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeStructOrEnumIdentifier(T_ENUM,(yyvsp[0]),ID_ENUM);}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 150 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeField((yyvsp[-3]),(yyvsp[-1]));}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 151 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_ENUM);}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 151 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeField((yyvsp[-3]),(yyvsp[-1]));}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 152 "parse.y" /* yacc.c:1646  */
    {(yyval)=getTypeOfStructOrEnumIdentifier(T_ENUM,(yyvsp[0]),ID_ENUM);}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 155 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 156 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 159 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[0])),ID_ENUM_LITERAL);}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 160 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[0])),ID_ENUM_LITERAL);}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 160 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorInit((yyvsp[-2]),(yyvsp[0]));}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 164 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorElementType((yyvsp[0]),(yyvsp[-1]));}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 165 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 168 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_POINTER);}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 169 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[0]),makeType(T_POINTER));}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 173 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeIdentifier((yyvsp[0]));}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 174 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 175 "parse.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorElementType((yyvsp[-3]),setTypeExpr(makeType(T_ARRAY),(yyvsp[-1])));}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 176 "parse.y" /* yacc.c:1646  */
    {(yyval)=current_id; current_level++;}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 178 "parse.y" /* yacc.c:1646  */
    {checkForwardReference(); current_level--; current_id=(yyvsp[-2]); (yyval)=setDeclaratorElementType((yyvsp[-4]),setTypeField(makeType(T_FUNC),(yyvsp[-1])));}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 181 "parse.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 182 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 185 "parse.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 186 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 190 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 191 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),setDeclaratorKind(makeDummyIdentifier(),ID_PARM));}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 194 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 195 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 198 "parse.y" /* yacc.c:1646  */
    {(yyval)=setParameterDeclaratorSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 199 "parse.y" /* yacc.c:1646  */
    {(yyval)=setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(),(yyvsp[0])),(yyvsp[-1]));}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 202 "parse.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 203 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 206 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_POINTER);}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 207 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 208 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[0]),makeType(T_POINTER));}
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 211 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 212 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeExpr(makeType(T_ARRAY),(yyvsp[-1]));}
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 213 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeExpr(makeType(T_FUNC),(yyvsp[-1]));}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 214 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[-3]),setTypeExpr(makeType(T_ARRAY),(yyvsp[-1])));}
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 215 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[-3]),setTypeExpr(makeType(T_FUNC),(yyvsp[-1])));}
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 219 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_INIT_LIST_ONE,NIL,(yyvsp[0]),NIL);}
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 220 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 223 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_INIT_LIST,(yyvsp[0]),NIL,makeNode(N_INIT_LIST_NIL,NIL,NIL,NIL));}
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 224 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_INIT_LIST,(yyvsp[-2]),(yyvsp[0]));}
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 228 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 229 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 230 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 231 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 232 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 233 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 236 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LABEL_CASE,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 237 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LABEL_DEFAULT,NIL,(yyvsp[0]),NIL);}
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 241 "parse.y" /* yacc.c:1646  */
    {(yyval)=current_id; current_level++;}
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 241 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_COMPOUND,(yyvsp[-3]),0,(yyvsp[-2]));}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 242 "parse.y" /* yacc.c:1646  */
    {checkForwardReference(); current_level--; current_id=(yyvsp[-3]);}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 245 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 246 "parse.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 250 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL);}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 251 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 255 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LIST,(yyvsp[0]),NIL,makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL));}
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 256 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_STMT_LIST,(yyvsp[-1]),(yyvsp[0]));}
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 260 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_EMPTY,NIL,NIL,NIL);}
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 261 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_EXPRESSION,NIL,(yyvsp[-1]),NIL);}
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 265 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_IF,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 266 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_IF_ELSE,(yyvsp[-4]),(yyvsp[-2]),(yyvsp[0]));}
#line 2308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 267 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_SWITCH,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 271 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_WHILE,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 272 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_DO,(yyvsp[-5]),NIL,(yyvsp[-2]));}
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 273 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_FOR,(yyvsp[-6]),NIL,(yyvsp[-4]));}
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 276 "parse.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 277 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 281 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_RETURN,NIL,(yyvsp[-1]),NIL);}
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 282 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_CONTINUE,NIL,NIL,NIL);}
#line 2356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 283 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_BREAK,NIL,NIL,NIL);}
#line 2362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 284 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_GO,NIL,NIL,NIL);}
#line 2368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 288 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_IDENT,NIL,getIdentifierDeclared((yyvsp[0])),NIL);}
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 289 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_INT_CONST,NIL,(yyvsp[0]),NIL);}
#line 2380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 290 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_FLOAT_CONST,NIL,(yyvsp[0]),NIL);}
#line 2386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 291 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_CHAR_CONST,NIL,(yyvsp[0]),NIL);}
#line 2392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 292 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STRING_CONST,NIL,(yyvsp[0]),NIL);}
#line 2398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 293 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 297 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 298 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ARRAY,(yyvsp[-3]),NIL,(yyvsp[-1]));}
#line 2416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 299 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_FUNCTION,(yyvsp[-3]),NIL,(yyvsp[-1]));}
#line 2422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 300 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STRUCT,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 301 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ARROW,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 302 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_POST_INC,NIL,(yyvsp[-1]),NIL);}
#line 2440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 303 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_POST_DEC,NIL,(yyvsp[-1]),NIL);}
#line 2446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 306 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL);}
#line 2452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 307 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 310 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_ARG_LIST,(yyvsp[0]),NIL,makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL));}
#line 2464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 311 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_ARG_LIST,(yyvsp[-2]),(yyvsp[0]));}
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 315 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 316 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PRE_INC,NIL,(yyvsp[0]),NIL);}
#line 2482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 317 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PRE_DEC,NIL,(yyvsp[0]),NIL);}
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 318 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_AMP,NIL,(yyvsp[0]),NIL);}
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 319 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STAR,NIL,(yyvsp[0]),NIL);}
#line 2500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 320 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_NOT,NIL,(yyvsp[0]),NIL);}
#line 2506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 321 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MINUS,NIL,(yyvsp[0]),NIL);}
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 322 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PLUS,NIL,(yyvsp[0]),NIL);}
#line 2518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 323 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SIZE_EXP,NIL,(yyvsp[0]),NIL);}
#line 2524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 324 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SIZE_TYPE,NIL,(yyvsp[-1]),NIL);}
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 327 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 328 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_CAST,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 331 "parse.y" /* yacc.c:1646  */
    {(yyval)=setTypeNameSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 2548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 335 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 336 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MUL,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 337 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_DIV,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 338 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MOD,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 341 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 342 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ADD,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 343 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SUB,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 346 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 347 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_LSSLSS,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 348 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_RSSRSS,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 352 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 353 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_LSS,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 354 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_GTR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 355 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_LEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 356 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_GEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 359 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 360 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_EQL,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 361 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_NEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 365 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 366 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_OR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 369 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 370 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_AND,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 374 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 375 "parse.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ASSIGN,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 379 "parse.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2698 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2702 "y.tab.c" /* yacc.c:1646  */
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
#line 382 "parse.y" /* yacc.c:1906  */
