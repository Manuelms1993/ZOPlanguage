/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sin.y" /* yacc.c:339  */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "symtable.h"
#include "codeGenerationQ.h"

#include <cmath>
#include <cstdio>
#include <cassert>
#include <cstring>

extern FILE *yyin;
extern int numlin;
int yydebug=1;
void yyerror(const char* mens);

extern "C++" {int yylex(void);}
vartype type;
 
qMachine Q;
FILE* fout;

int trace = 0;
symtable table;
void yyerror (char *s);

int typeConst = -1;

int nFunction = 0;
int addressReturn = 0;
char *typeFunction;
int funExp = 0;

int callAddress = 0;
int callType = 0;
string callName;
symrec *currentCall = NULL;

int loopStart[100];
int loopEnd[100];
int loopIndex=0;

int ifStart[100];
int ifEnd[100];
int ifIndex=0;

int nParam = 0;


#line 117 "sin.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sin.tab.h".  */
#ifndef YY_YY_SIN_TAB_H_INCLUDED
# define YY_YY_SIN_TAB_H_INCLUDED
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
    PARL = 258,
    PARR = 259,
    CORL = 260,
    CORR = 261,
    KEYL = 262,
    KEYR = 263,
    INT = 264,
    FLOAT = 265,
    IF = 266,
    ELSE = 267,
    FUNC = 268,
    LOOP = 269,
    MAIN = 270,
    RETURN = 271,
    BREAK = 272,
    CONTINUE = 273,
    PRINT = 274,
    TRUE = 275,
    FALSE = 276,
    OP_ARI = 277,
    EQUAL = 278,
    OP_BIN = 279,
    FLOATNUM = 280,
    NUM = 281,
    OP_ASSIGN = 282,
    STRING = 283,
    POINTCOMMA = 284,
    FUNTYPE = 285,
    NAME = 286,
    COMMA = 287,
    OP_SUB = 288
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 52 "sin.y" /* yacc.c:355  */

	int integer; 
	char op;
	char string[50];

#line 197 "sin.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SIN_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 212 "sin.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   136

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  149

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    92,    92,    92,    92,    94,    94,    96,    96,    98,
      98,    98,    98,   100,   100,   100,   100,   102,   102,   102,
     104,   104,   106,   106,   106,   106,   108,   108,   108,   108,
     108,   108,   108,   108,   110,   110,   111,   113,   113,   116,
     117,   117,   118,   118,   116,   121,   121,   122,   122,   122,
     122,   122,   126,   127,   129,   125,   132,   133,   134,   132,
     139,   139,   141,   141,   144,   144,   147,   159,   162,   162,
     162,   162,   162,   164,   164,   164,   164,   164,   164,   164,
     166,   166,   166,   166,   167,   167,   169,   177,   177,   177,
     179,   180
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PARL", "PARR", "CORL", "CORR", "KEYL",
  "KEYR", "INT", "FLOAT", "IF", "ELSE", "FUNC", "LOOP", "MAIN", "RETURN",
  "BREAK", "CONTINUE", "PRINT", "TRUE", "FALSE", "OP_ARI", "EQUAL",
  "OP_BIN", "FLOATNUM", "NUM", "OP_ASSIGN", "STRING", "POINTCOMMA",
  "FUNTYPE", "NAME", "COMMA", "OP_SUB", "$accept", "program", "$@1", "$@2",
  "otherFunc", "var_global", "main_function", "$@3", "$@4", "$@5",
  "function", "$@6", "$@7", "$@8", "block", "$@9", "sentences", "args",
  "$@10", "sentence", "init", "$@11", "assign", "if", "$@12", "$@13",
  "$@14", "$@15", "$@16", "else", "$@17", "$@18", "$@19", "$@20", "$@21",
  "loop", "$@22", "$@23", "$@24", "$@25", "$@26", "$@27", "break_continue",
  "$@28", "$@29", "return", "$@30", "print", "expression",
  "expression_bin", "const", "numeric", "callFunction", "param", "var", YY_NULLPTR
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
     285,   286,   287,   288
};
# endif

#define YYPACT_NINF -77

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-77)))

#define YYTABLE_NINF -57

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -77,     8,   108,   -77,   -77,   -77,   -77,   -77,   -18,   -12,
     -77,   108,   -77,    26,   -77,    23,    -9,   -77,   -77,    82,
     -77,    25,    82,   -77,   -77,    45,    34,   -77,   -77,    54,
      16,    39,    82,    82,    60,   -77,    82,    20,    63,   -77,
     -77,    65,    68,    82,   -77,   -77,    16,   -77,   -77,    52,
      71,    38,   -77,   -77,   -77,   -77,    73,    83,   -77,    44,
       9,     6,    82,   -77,   -77,    99,    18,    72,   -77,    58,
      66,   -77,   -77,   -77,   -77,   -77,    67,    52,    16,     9,
     -77,   -77,    45,    74,   -77,   -77,   -77,    78,    34,    75,
      76,   -77,   -77,   -77,    77,    86,   -77,    82,    82,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,    87,     9,   -77,    80,
       9,    93,   -77,   -77,   -77,   -77,    34,    34,     9,   -77,
     -77,     9,    74,   -77,   112,    52,    74,    91,   -77,   -77,
      94,   -77,   -77,    97,    52,   117,     1,   -77,   -77,   -77,
     -77,   -77,    52,   -77,   -77,   -77,    52,   -77,   -77
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     1,    36,    90,    91,     3,     0,     0,
       6,     0,    34,     0,     8,     0,     0,     4,     5,     0,
       9,     0,     0,    85,    84,    69,    35,    68,    70,     0,
       0,     0,    87,     0,     0,    13,     0,    89,     0,    71,
      10,     0,    71,    87,    86,    11,    22,    72,    88,     0,
       0,     0,    19,    17,    12,    14,    23,     0,    15,     0,
       0,     0,     0,    60,    62,     0,     0,     0,    21,     0,
       0,    28,    29,    33,    30,    31,     0,     0,    22,     0,
      73,    74,    76,    39,    75,    77,    52,     0,    64,     0,
       0,    82,    83,    81,     0,     0,    80,     0,     0,    18,
      20,    26,    27,    32,    16,    24,     0,     0,    40,     0,
       0,     0,    61,    63,    67,    66,    37,    38,     0,    78,
      41,     0,    57,    65,    78,     0,    53,     0,    79,    42,
       0,    58,    43,     0,     0,    45,     0,    54,    59,    47,
      44,    46,     0,    48,    55,    49,     0,    50,    51
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -77,   -77,   -77,   -77,   -77,   120,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -76,   -77,   -77,    55,   -77,    69,
     -30,   -77,    -1,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -19,   -74,
     -77,   -56,   -47,    92,   -28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    10,    13,     7,    17,    29,    45,    49,
      18,    41,    58,    77,    54,    57,    67,    50,    59,    68,
       8,    15,    70,    71,   108,   120,   125,   132,   135,   140,
     141,   143,   145,   146,   148,    72,   109,   130,   142,    87,
     127,   134,    73,    89,    90,    74,   111,    75,    37,    83,
      95,    27,    28,    38,     9
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      26,   104,    35,    31,    84,   106,    20,     4,     3,    96,
      76,    11,    79,    85,    39,     5,     6,    42,    51,    12,
      76,    32,    21,    84,    97,     5,     6,    69,    98,    80,
      81,    86,    85,   119,    23,    24,   122,    69,   -56,    16,
      82,    97,    33,    88,   124,    98,    19,   126,    32,   129,
      51,    84,    43,    52,    84,    30,    33,    34,   138,    53,
      85,    36,    84,    85,    40,    84,   144,    44,    46,    56,
     147,    85,    47,     4,    85,    55,    78,   -25,   116,   117,
      99,     5,     6,    60,     4,    22,    61,   101,    62,    63,
      64,    65,     5,     6,    60,   102,   103,    61,   107,    62,
      63,    64,    65,    66,   112,   113,   114,    23,    24,     4,
     110,   118,   121,    25,    66,   115,   128,     5,     6,    91,
      92,    -7,   123,   131,    23,    24,   133,    93,   136,   139,
      94,    14,   137,   105,     0,    48,   100
};

static const yytype_int16 yycheck[] =
{
      19,    77,    30,    22,    60,    79,    15,     1,     0,    65,
      57,    29,     3,    60,    33,     9,    10,    36,    46,    31,
      67,     3,    31,    79,    23,     9,    10,    57,    27,    20,
      21,    61,    79,   107,    25,    26,   110,    67,    32,    13,
      31,    23,    22,    62,   118,    27,    23,   121,     3,   125,
      78,   107,    32,     1,   110,    30,    22,     3,   134,     7,
     107,    22,   118,   110,     4,   121,   142,     4,     3,    31,
     146,   118,     4,     1,   121,     4,    32,     4,    97,    98,
       8,     9,    10,    11,     1,     3,    14,    29,    16,    17,
      18,    19,     9,    10,    11,    29,    29,    14,    24,    16,
      17,    18,    19,    31,    29,    29,    29,    25,    26,     1,
      32,    24,    32,    31,    31,    29,     4,     9,    10,    20,
      21,    13,    29,    32,    25,    26,    32,    28,    31,    12,
      31,    11,   133,    78,    -1,    43,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    35,    36,     0,     1,     9,    10,    39,    54,    88,
      37,    29,    31,    38,    39,    55,    13,    40,    44,    23,
      15,    31,     3,    25,    26,    31,    82,    85,    86,    41,
      30,    82,     3,    22,     3,    88,    22,    82,    87,    82,
       4,    45,    82,    32,     4,    42,     3,     4,    87,    43,
      51,    88,     1,     7,    48,     4,    31,    49,    46,    52,
      11,    14,    16,    17,    18,    19,    31,    50,    53,    54,
      56,    57,    69,    76,    79,    81,    86,    47,    32,     3,
      20,    21,    31,    83,    85,    86,    54,    73,    82,    77,
      78,    20,    21,    28,    31,    84,    85,    23,    27,     8,
      53,    29,    29,    29,    48,    51,    83,    24,    58,    70,
      32,    80,    29,    29,    29,    29,    82,    82,    24,    83,
      59,    32,    83,    29,    83,    60,    83,    74,     4,    48,
      71,    32,    61,    32,    75,    62,    31,    56,    48,    12,
      63,    64,    72,    65,    48,    66,    67,    48,    68
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    34,    36,    37,    35,    38,    38,    39,    39,    41,
      42,    43,    40,    45,    46,    47,    44,    49,    48,    48,
      50,    50,    51,    52,    51,    51,    53,    53,    53,    53,
      53,    53,    53,    53,    55,    54,    54,    56,    56,    58,
      59,    60,    61,    62,    57,    64,    63,    65,    66,    67,
      68,    63,    70,    71,    72,    69,    73,    74,    75,    69,
      77,    76,    78,    76,    80,    79,    81,    81,    82,    82,
      82,    82,    82,    83,    83,    83,    83,    83,    83,    83,
      84,    84,    84,    84,    85,    85,    86,    87,    87,    87,
      88,    88
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     5,     2,     0,     0,     3,     0,
       0,     0,     8,     0,     0,     0,    11,     0,     4,     1,
       2,     1,     0,     0,     5,     2,     2,     2,     1,     1,
       1,     1,     2,     1,     0,     5,     1,     3,     3,     0,
       0,     0,     0,     0,     9,     0,     1,     0,     0,     0,
       0,     6,     0,     0,     0,    10,     0,     0,     0,     8,
       0,     3,     0,     3,     0,     4,     3,     3,     1,     1,
       1,     3,     5,     1,     1,     1,     1,     1,     3,     5,
       1,     1,     1,     1,     1,     1,     4,     0,     3,     1,
       1,     1
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
#line 92 "sin.y" /* yacc.c:1646  */
    {generateCodeStart(fout, &Q);}
#line 1398 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 92 "sin.y" /* yacc.c:1646  */
    {fprintf(fout,"\tGT(1);\t\t\t//To Main\n");}
#line 1404 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 92 "sin.y" /* yacc.c:1646  */
    {generateCodeEnd(fout);}
#line 1410 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 94 "sin.y" /* yacc.c:1646  */
    {if (trace) printf("%d :: <otherFunc> otherFunc function \n",numlin);}
#line 1416 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 98 "sin.y" /* yacc.c:1646  */
    {generateCodeMain(fout, &Q, nFunction); table.insertFun("ZOP", type, 0, 0, 0);}
#line 1422 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 98 "sin.y" /* yacc.c:1646  */
    {if (trace) printf("%d :: <main_function>  FUN MAIN PARL PARR block \n",numlin);}
#line 1428 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 98 "sin.y" /* yacc.c:1646  */
    {table.newScope();}
#line 1434 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 98 "sin.y" /* yacc.c:1646  */
    {table.endScope();}
#line 1440 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 100 "sin.y" /* yacc.c:1646  */
    {nFunction++; typeFunction = (yyvsp[0].string);}
#line 1446 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 100 "sin.y" /* yacc.c:1646  */
    {int *r = generateCodeFunction(fout, &Q, nParam); addressReturn = r[0];  table.insertFun((yyvsp[-6].string), type, r[0], r[1], nParam); releaseR(fout, &Q); if (trace) printf("%d :: <function>  FUN NAME PARL args PARR block \n",numlin);}
#line 1452 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 100 "sin.y" /* yacc.c:1646  */
    {table.newScope();}
#line 1458 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 100 "sin.y" /* yacc.c:1646  */
    {table.endScope();fprintf(fout,"\tGT(R5);\t\t\t//End Function\n");resetZR6(&Q);}
#line 1464 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 102 "sin.y" /* yacc.c:1646  */
    { if (trace) printf("%d :: <block>  KEYL sentences KEYR \n",numlin);}
#line 1470 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 106 "sin.y" /* yacc.c:1646  */
    {if (trace) printf("%d :: <args>  empty \n",numlin);}
#line 1476 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 106 "sin.y" /* yacc.c:1646  */
    {nParam++; table.insertVar((yyvsp[0].string), type, 1, (nParam*4));}
#line 1482 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 106 "sin.y" /* yacc.c:1646  */
    {if (trace) printf("%d :: <args>  var NAME COMMA args \n",numlin);}
#line 1488 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 106 "sin.y" /* yacc.c:1646  */
    {nParam++; table.insertVar((yyvsp[0].string), type, 1, (nParam*4));}
#line 1494 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 110 "sin.y" /* yacc.c:1646  */
    {table.insertVar((yyvsp[0].string), type, 0, assignMemoryVar(fout, &Q, (yyvsp[-1].string)));}
#line 1500 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 111 "sin.y" /* yacc.c:1646  */
    {checkInit(&Q, (yyvsp[-4].string), numlin); generateCodeSave(fout,&Q, table.getSymbol((yyvsp[-3].string)), (yyvsp[-1].string)); if (trace) printf("%d :: <init>  var NAME POINTCOMMA  \n",numlin); resetCheckExpression(&Q);}
#line 1506 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 113 "sin.y" /* yacc.c:1646  */
    {generateCodeSave(fout,&Q, table.getSymbol((yyvsp[-2].string)), (yyvsp[-1].string)); if (trace) printf("%d :: <assign> NAME EQUAL expression  \n",numlin); resetCheckExpression(&Q);}
#line 1512 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 113 "sin.y" /* yacc.c:1646  */
    {generateCodeSave(fout,&Q, table.getSymbol((yyvsp[-2].string)), (yyvsp[-1].string)); if (trace) printf("%d :: <assign> NAME OP_ASSIGN expression  \n",numlin); resetCheckExpression(&Q);}
#line 1518 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 116 "sin.y" /* yacc.c:1646  */
    {int label = generatedCodeIf(fout, &Q); ifStart[ifIndex]=label-1; ifEnd[ifIndex]=label; ifIndex++;}
#line 1524 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 117 "sin.y" /* yacc.c:1646  */
    {if (trace) printf("%d :: <if>  IF expression block else  \n",numlin);}
#line 1530 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 117 "sin.y" /* yacc.c:1646  */
    {table.newScope();}
#line 1536 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 118 "sin.y" /* yacc.c:1646  */
    {generatedCodeCloseIf(fout , &Q, ifEnd[ifIndex-1]);}
#line 1542 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 118 "sin.y" /* yacc.c:1646  */
    {table.endScope();}
#line 1548 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 121 "sin.y" /* yacc.c:1646  */
    {generatedCodeElse(fout , &Q, ifStart[ifIndex-1]);}
#line 1554 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 121 "sin.y" /* yacc.c:1646  */
    {generatedCodeCloseElse(fout , &Q, ifEnd[ifIndex-1]); ifIndex--;}
#line 1560 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 122 "sin.y" /* yacc.c:1646  */
    {generatedCodeElse(fout , &Q, ifStart[ifIndex-1]);}
#line 1566 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 122 "sin.y" /* yacc.c:1646  */
    {if (trace) printf("%d :: <else>  ELSE block  \n",numlin);}
#line 1572 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 122 "sin.y" /* yacc.c:1646  */
    {table.newScope();}
#line 1578 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 122 "sin.y" /* yacc.c:1646  */
    {table.endScope();}
#line 1584 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 122 "sin.y" /* yacc.c:1646  */
    {generatedCodeCloseElse(fout , &Q, ifEnd[ifIndex-1]); ifIndex--;}
#line 1590 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 126 "sin.y" /* yacc.c:1646  */
    {int label = generatedCodeLoop(fout, &Q); loopStart[loopIndex]=label-1; loopEnd[loopIndex]=label; loopIndex++;}
#line 1596 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 127 "sin.y" /* yacc.c:1646  */
    { generatedCodeEvaluateLoop(fout , &Q, loopEnd[loopIndex-1] );}
#line 1602 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 129 "sin.y" /* yacc.c:1646  */
    {if (trace) printf("%d :: <loop>  LOOP assign COMMA expression COMMA increment block_loop  \n",numlin); table.newScope();}
#line 1608 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 130 "sin.y" /* yacc.c:1646  */
    {table.endScope(); generatedCodeCloseLoop(fout , &Q, loopStart[loopIndex-1],loopEnd[loopIndex-1] ); loopIndex--;}
#line 1614 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 132 "sin.y" /* yacc.c:1646  */
    {int label = generatedCodeLoop(fout, &Q); loopStart[loopIndex]=label-1; loopEnd[loopIndex]=label; loopIndex++;}
#line 1620 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 133 "sin.y" /* yacc.c:1646  */
    { generatedCodeEvaluateLoop(fout , &Q, loopEnd[loopIndex-1] );}
#line 1626 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 134 "sin.y" /* yacc.c:1646  */
    {if (trace) printf("%d :: <loop> LOOP COMMA expression OP_BIN expression COMMA increment block_loop  \n",numlin); table.newScope();}
#line 1632 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 135 "sin.y" /* yacc.c:1646  */
    {table.endScope(); generatedCodeCloseLoop(fout , &Q, loopStart[loopIndex-1],loopEnd[loopIndex-1] ); loopIndex--;}
#line 1638 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 139 "sin.y" /* yacc.c:1646  */
    {if (loopIndex>0){generatedCodeBreakContinue(fout, &Q, loopEnd[loopIndex-1]); }}
#line 1644 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 140 "sin.y" /* yacc.c:1646  */
    {if (trace) printf("%d :: <break> \n",numlin);}
#line 1650 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 141 "sin.y" /* yacc.c:1646  */
    {if (loopIndex>0){generatedCodeBreakContinue(fout, &Q, loopStart[loopIndex-1]); }}
#line 1656 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 142 "sin.y" /* yacc.c:1646  */
    {if (trace) printf("%d :: <continue> \n",numlin);}
#line 1662 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 144 "sin.y" /* yacc.c:1646  */
    {generateCodeReturn(fout, &Q, addressReturn, typeFunction);}
#line 1668 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 144 "sin.y" /* yacc.c:1646  */
    {if (trace) printf("%d :: <return> \n",numlin); resetCheckExpression(&Q);}
#line 1674 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 148 "sin.y" /* yacc.c:1646  */
    {
	if(typeConst == 0){
		generateCodePrintInt(fout,&Q, atoi((yyvsp[-1].string)));
	}else if(typeConst == 1){
		generateCodePrintFloat(fout,&Q, atof((yyvsp[-1].string)));
	}else if(typeConst == 2){
		generateCodePrintStr(fout,&Q, (yyvsp[-1].string));
	}
	
	if (trace) printf("%d :: <print> \n",numlin);
}
#line 1690 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 160 "sin.y" /* yacc.c:1646  */
    {symrec *a = table.getSymbol((yyvsp[-1].string)); checkID(&Q, a, numlin); generateCodePrintVar(fout,&Q, a);}
#line 1696 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 162 "sin.y" /* yacc.c:1646  */
    {generateCodeConst(fout, &Q, (yyvsp[0].string), typeConst);}
#line 1702 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 162 "sin.y" /* yacc.c:1646  */
    {checkID(&Q, table.getSymbol((yyvsp[0].string)), numlin); checkExpression(&Q, table.getSymbol((yyvsp[0].string))->typeVar, numlin); typeConst = table.getSymbol((yyvsp[0].string))->typeVar; generateCodeVar(fout, &Q, table.getSymbol((yyvsp[0].string)));}
#line 1708 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 162 "sin.y" /* yacc.c:1646  */
    {generateCodeVar(fout, &Q, currentCall);}
#line 1714 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 162 "sin.y" /* yacc.c:1646  */
    {generateCodeExpressionAri(fout, &Q, (yyvsp[-1].string), typeConst);}
#line 1720 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 162 "sin.y" /* yacc.c:1646  */
    {generateCodeExpressionAri(fout, &Q, (yyvsp[-2].string), typeConst);}
#line 1726 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 164 "sin.y" /* yacc.c:1646  */
    {typeConst = 0; generateCodeBool(fout, &Q, 1);}
#line 1732 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 164 "sin.y" /* yacc.c:1646  */
    {typeConst = 0; generateCodeBool(fout, &Q, 0);}
#line 1738 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 164 "sin.y" /* yacc.c:1646  */
    {generateCodeConst(fout, &Q, (yyvsp[0].string), typeConst);}
#line 1744 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 164 "sin.y" /* yacc.c:1646  */
    {generateCodeVar(fout, &Q, table.getSymbol((yyvsp[0].string)));}
#line 1750 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 164 "sin.y" /* yacc.c:1646  */
    {generateCodeVar(fout, &Q, currentCall);}
#line 1756 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 164 "sin.y" /* yacc.c:1646  */
    {generateCodeExpressionBin(fout, &Q, (yyvsp[-1].string), typeConst);}
#line 1762 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 164 "sin.y" /* yacc.c:1646  */
    {generateCodeExpressionBin(fout, &Q, (yyvsp[-2].string), typeConst);}
#line 1768 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 166 "sin.y" /* yacc.c:1646  */
    {typeConst = 2;}
#line 1774 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 166 "sin.y" /* yacc.c:1646  */
    {typeConst = 2;}
#line 1780 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 166 "sin.y" /* yacc.c:1646  */
    {typeConst = 2;}
#line 1786 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 167 "sin.y" /* yacc.c:1646  */
    {checkExpression(&Q, 0, numlin); typeConst = 0;}
#line 1792 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 167 "sin.y" /* yacc.c:1646  */
    {checkExpression(&Q, 1, numlin); typeConst = 1;}
#line 1798 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 170 "sin.y" /* yacc.c:1646  */
    {
	currentCall = table.getSymbol((yyvsp[-3].string));
	checkID(&Q, currentCall, numlin);
	generateCodeCallFunction(fout, &Q, currentCall);
	//restoreAllR(fout, &Q); 
 	if (trace) printf("%d :: <callFunction> \n",numlin);}
#line 1809 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 177 "sin.y" /* yacc.c:1646  */
    {if (trace) printf("%d :: <param> empty\n",numlin);}
#line 1815 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 177 "sin.y" /* yacc.c:1646  */
    {if (trace) printf("%d :: <param> expression COMMA param \n",numlin);}
#line 1821 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 177 "sin.y" /* yacc.c:1646  */
    {if (trace) printf("%d :: <param> expression \n",numlin);}
#line 1827 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 179 "sin.y" /* yacc.c:1646  */
    {type = _INT; if (trace) printf("%d :: <var> INT \n",numlin);}
#line 1833 "sin.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 180 "sin.y" /* yacc.c:1646  */
    {type = _FLOAT; if (trace) printf("%d :: <var> FLOAT \n",numlin);}
#line 1839 "sin.tab.c" /* yacc.c:1646  */
    break;


#line 1843 "sin.tab.c" /* yacc.c:1646  */
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
#line 182 "sin.y" /* yacc.c:1906  */


int main(int argc, char** argv) {
	fout = fopen("./codeQ.q.c", "w");
	if (argc>1) yyin=fopen(argv[1],"r");
	yyparse();
}
void yyerror(const char* mens) {
	printf("Error en linea %i: %s \n",numlin,mens);
}