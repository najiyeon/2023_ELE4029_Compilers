/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     WHILE = 259,
     RETURN = 260,
     INT = 261,
     VOID = 262,
     RPAREN = 263,
     ELSE = 264,
     ID = 265,
     NUM = 266,
     EQ = 267,
     NE = 268,
     LT = 269,
     LE = 270,
     GT = 271,
     GE = 272,
     LPAREN = 273,
     LBRACE = 274,
     RBRACE = 275,
     LCURLY = 276,
     RCURLY = 277,
     COMMA = 278,
     SEMI = 279,
     ERROR = 280,
     MINUS = 281,
     PLUS = 282,
     OVER = 283,
     TIMES = 284,
     ASSIGN = 285
   };
#endif
/* Tokens.  */
#define IF 258
#define WHILE 259
#define RETURN 260
#define INT 261
#define VOID 262
#define RPAREN 263
#define ELSE 264
#define ID 265
#define NUM 266
#define EQ 267
#define NE 268
#define LT 269
#define LE 270
#define GT 271
#define GE 272
#define LPAREN 273
#define LBRACE 274
#define RBRACE 275
#define LCURLY 276
#define RCURLY 277
#define COMMA 278
#define SEMI 279
#define ERROR 280
#define MINUS 281
#define PLUS 282
#define OVER 283
#define TIMES 284
#define ASSIGN 285




/* Copy the first part of user declarations.  */
#line 7 "cminus.y"

#define YYPARSER /* distinguishes Yacc output from other code files */

#include "globals.h"
#include "util.h"
#include "scan.h"
#include "parse.h"

#define YYSTYPE TreeNode *
static TreeNode * savedTree; /* stores syntax tree for later return */
static int yyerror(char * message);
static int yylex(void); // added 11/2/11 to ensure no conflict with lex


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 180 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   99

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNRULES -- Number of states.  */
#define YYNSTATES  107

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    18,    25,
      27,    29,    36,    38,    40,    44,    46,    49,    54,    59,
      62,    64,    67,    69,    71,    73,    75,    77,    79,    87,
      93,    96,    98,   104,   107,   111,   115,   117,   119,   124,
     128,   130,   132,   134,   136,   138,   140,   142,   146,   148,
     150,   152,   156,   158,   160,   162,   166,   168,   170,   172,
     177,   179,   181,   185,   187,   189,   191
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      32,     0,    -1,    33,    -1,    33,    34,    -1,    34,    -1,
      35,    -1,    37,    -1,    36,    61,    24,    -1,    36,    61,
      19,    62,    20,    24,    -1,     6,    -1,     7,    -1,    36,
      61,    18,    38,     8,    41,    -1,    39,    -1,     7,    -1,
      39,    23,    40,    -1,    40,    -1,    36,    61,    -1,    36,
      61,    19,    20,    -1,    21,    42,    43,    22,    -1,    42,
      35,    -1,    63,    -1,    43,    44,    -1,    63,    -1,    45,
      -1,    46,    -1,    41,    -1,    47,    -1,    48,    -1,     3,
      18,    49,     8,    44,     9,    44,    -1,     3,    18,    49,
       8,    44,    -1,    49,    24,    -1,    24,    -1,     4,    18,
      49,     8,    44,    -1,     5,    24,    -1,     5,    49,    24,
      -1,    50,    30,    49,    -1,    51,    -1,    61,    -1,    61,
      19,    49,    20,    -1,    53,    52,    53,    -1,    53,    -1,
      15,    -1,    14,    -1,    16,    -1,    17,    -1,    12,    -1,
      13,    -1,    53,    54,    55,    -1,    55,    -1,    27,    -1,
      26,    -1,    55,    56,    57,    -1,    57,    -1,    29,    -1,
      28,    -1,    18,    49,     8,    -1,    50,    -1,    58,    -1,
      62,    -1,    61,    18,    59,     8,    -1,    60,    -1,    63,
      -1,    60,    23,    49,    -1,    49,    -1,    10,    -1,    11,
      -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    33,    33,    35,    46,    48,    49,    51,    59,    71,
      72,    74,    85,    86,    92,   103,   105,   113,   124,   131,
     142,   144,   155,   157,   158,   159,   160,   161,   163,   183,
     190,   191,   193,   200,   205,   211,   217,   219,   225,   233,
     240,   242,   243,   244,   245,   246,   247,   249,   256,   257,
     258,   260,   267,   269,   270,   272,   273,   274,   275,   277,
     285,   286,   288,   299,   301,   308,   315
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "WHILE", "RETURN", "INT", "VOID",
  "RPAREN", "ELSE", "ID", "NUM", "EQ", "NE", "LT", "LE", "GT", "GE",
  "LPAREN", "LBRACE", "RBRACE", "LCURLY", "RCURLY", "COMMA", "SEMI",
  "ERROR", "MINUS", "PLUS", "OVER", "TIMES", "ASSIGN", "$accept",
  "program", "declaration_list", "declaration", "var_declaration",
  "type_specifier", "fun_declaration", "params", "param_list", "param",
  "compound_stmt", "local_declarations", "statement_list", "statement",
  "selection_stmt", "expression_stmt", "iteration_stmt", "return_stmt",
  "expression", "var", "simple_expression", "relop", "additive_expression",
  "addop", "term", "mulop", "factor", "call", "args", "arg_list",
  "identifier", "number", "empty", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    31,    32,    33,    33,    34,    34,    35,    35,    36,
      36,    37,    38,    38,    39,    39,    40,    40,    41,    42,
      42,    43,    43,    44,    44,    44,    44,    44,    45,    45,
      46,    46,    47,    48,    48,    49,    49,    50,    50,    51,
      51,    52,    52,    52,    52,    52,    52,    53,    53,    54,
      54,    55,    55,    56,    56,    57,    57,    57,    57,    58,
      59,    59,    60,    60,    61,    62,    63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     1,
       1,     6,     1,     1,     3,     1,     2,     4,     4,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     7,     5,
       2,     1,     5,     2,     3,     3,     1,     1,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     4,
       1,     1,     3,     1,     1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     9,    10,     0,     2,     4,     5,     0,     6,     1,
       3,    64,     0,     0,     0,     7,    10,     0,     0,    12,
      15,    65,     0,    16,     0,     0,     0,     0,    66,    11,
      14,     8,    17,    66,    20,    19,     0,     0,    22,     0,
       0,     0,     0,     0,    18,    31,    25,    21,    23,    24,
      26,    27,     0,    56,    36,    40,    48,    52,    57,    37,
      58,     0,     0,    33,     0,     0,    30,     0,    45,    46,
      42,    41,    43,    44,    50,    49,     0,     0,    54,    53,
       0,    66,     0,     0,     0,    34,    55,    35,    56,    39,
      47,    51,    63,     0,    60,    61,     0,     0,     0,    59,
       0,    38,    29,    32,    62,     0,    28
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,     8,    18,    19,    20,
      46,    33,    37,    47,    48,    49,    50,    51,    52,    53,
      54,    76,    55,    77,    56,    80,    57,    58,    93,    94,
      59,    60,    34
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -92
static const yytype_int8 yypact[] =
{
      50,   -92,   -92,    11,    50,   -92,   -92,    14,   -92,   -92,
     -92,   -92,    29,    61,    10,   -92,    20,    14,    22,    21,
     -92,   -92,    13,    35,    25,    50,    48,    59,   -92,   -92,
     -92,   -92,   -92,    50,   -92,   -92,    14,     5,   -92,    -2,
      62,    63,    -6,    27,   -92,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,    58,    53,   -92,    47,    42,   -92,   -92,    57,
     -92,    27,    27,   -92,    60,    77,   -92,    27,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -92,    27,    27,   -92,   -92,
      27,    27,    27,    78,    79,   -92,   -92,   -92,   -92,    51,
      42,   -92,   -92,    80,    66,   -92,    70,    31,    31,   -92,
      27,   -92,    82,   -92,   -92,    31,   -92
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -92,   -92,   -92,    88,    64,    18,   -92,   -92,   -92,    68,
      71,   -92,   -92,   -91,   -92,   -92,   -92,   -92,   -42,   -11,
     -92,   -92,    23,   -92,    17,   -92,    16,   -92,   -92,   -92,
      -4,    84,   -31
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -14
static const yytype_int8 yytable[] =
{
      64,    65,    38,    12,    11,    21,   102,   103,    40,    41,
      42,     9,    43,    23,   106,    11,    21,    14,    63,    83,
      84,    21,    15,    43,    11,    87,    28,    44,   -13,    45,
      24,    17,    39,    26,    40,    41,    42,    11,    21,    92,
      96,    11,    21,    17,    25,    43,    28,    13,    14,    43,
      95,    36,    28,    15,    27,    45,     1,     2,   104,    68,
      69,    70,    71,    72,    73,    88,    88,     1,    16,    88,
      78,    79,    31,    74,    75,    81,    82,    74,    75,    32,
      61,    62,    66,    67,    85,    86,    97,    98,    99,   100,
     101,   105,    10,    30,    90,    29,    91,    35,    22,    89
};

static const yytype_uint8 yycheck[] =
{
      42,    43,    33,     7,    10,    11,    97,    98,     3,     4,
       5,     0,    18,    17,   105,    10,    11,    19,    24,    61,
      62,    11,    24,    18,    10,    67,    21,    22,     8,    24,
       8,    13,    36,    20,     3,     4,     5,    10,    11,    81,
      82,    10,    11,    25,    23,    18,    21,    18,    19,    18,
      81,    33,    21,    24,    19,    24,     6,     7,   100,    12,
      13,    14,    15,    16,    17,    76,    77,     6,     7,    80,
      28,    29,    24,    26,    27,    18,    19,    26,    27,    20,
      18,    18,    24,    30,    24,     8,     8,     8,     8,    23,
      20,     9,     4,    25,    77,    24,    80,    33,    14,    76
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    32,    33,    34,    35,    36,    37,     0,
      34,    10,    61,    18,    19,    24,     7,    36,    38,    39,
      40,    11,    62,    61,     8,    23,    20,    19,    21,    41,
      40,    24,    20,    42,    63,    35,    36,    43,    63,    61,
       3,     4,     5,    18,    22,    24,    41,    44,    45,    46,
      47,    48,    49,    50,    51,    53,    55,    57,    58,    61,
      62,    18,    18,    24,    49,    49,    24,    30,    12,    13,
      14,    15,    16,    17,    26,    27,    52,    54,    28,    29,
      56,    18,    19,    49,    49,    24,     8,    49,    50,    53,
      55,    57,    49,    59,    60,    63,    49,     8,     8,     8,
      23,    20,    44,    44,    49,     9,    44
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 33 "cminus.y"
    { savedTree = (yyvsp[(1) - (1)]); }
    break;

  case 3:
#line 36 "cminus.y"
    { 
							YYSTYPE t = (yyvsp[(1) - (2)]); 
							if (t != NULL)
                                   {
								while (t->sibling != NULL) t = t->sibling;
								t->sibling = (yyvsp[(2) - (2)]); 
								(yyval) = (yyvsp[(1) - (2)]); 
							} 
							else (yyval) = (yyvsp[(2) - (2)]);
                         }
    break;

  case 4:
#line 46 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 5:
#line 48 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 6:
#line 49 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 7:
#line 52 "cminus.y"
    { 
							(yyval) = newTreeNode(VariableDecl);
							(yyval)->lineno = (yyvsp[(2) - (3)])->lineno;
							(yyval)->type = (yyvsp[(1) - (3)])->type;
							(yyval)->name = (yyvsp[(2) - (3)])->name;
							free((yyvsp[(1) - (3)])); free((yyvsp[(2) - (3)]));
                         }
    break;

  case 8:
#line 60 "cminus.y"
    { 
							(yyval) = newTreeNode(VariableDecl);
							(yyval)->lineno = (yyvsp[(2) - (6)])->lineno;
							if ((yyvsp[(1) - (6)])->type == Integer) (yyval)->type = IntegerArray;
							else if ((yyvsp[(1) - (6)])->type == Void) (yyval)->type = VoidArray;
							else (yyval)->type = None;
							(yyval)->name = (yyvsp[(2) - (6)])->name;
							(yyval)->child[0] = (yyvsp[(4) - (6)]);
							free((yyvsp[(1) - (6)])); free((yyvsp[(2) - (6)]));
                         }
    break;

  case 9:
#line 71 "cminus.y"
    { (yyval) = newTreeNode(TypeSpecifier); (yyval)->lineno = lineno; (yyval)->type = Integer; }
    break;

  case 10:
#line 72 "cminus.y"
    { (yyval) = newTreeNode(TypeSpecifier); (yyval)->lineno = lineno; (yyval)->type = Void; }
    break;

  case 11:
#line 75 "cminus.y"
    { 
							(yyval) = newTreeNode(FunctionDecl);
                                   (yyval)->lineno = (yyvsp[(2) - (6)])->lineno;
                                   (yyval)->type = (yyvsp[(1) - (6)])->type;
                                   (yyval)->name = (yyvsp[(2) - (6)])->name;
                                   (yyval)->child[0] = (yyvsp[(4) - (6)]);
                                   (yyval)->child[1] = (yyvsp[(6) - (6)]);
                                   free((yyvsp[(1) - (6)])); free((yyvsp[(2) - (6)]));
                         }
    break;

  case 12:
#line 85 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 13:
#line 87 "cminus.y"
    {
							(yyval) = newTreeNode(Params);
                                   (yyval)->flag = TRUE;
                         }
    break;

  case 14:
#line 93 "cminus.y"
    {
							YYSTYPE t = (yyvsp[(1) - (3)]); 
							if (t != NULL)
                                   {
								while (t->sibling != NULL) t = t->sibling;
								t->sibling = (yyvsp[(3) - (3)]); 
								(yyval) = (yyvsp[(1) - (3)]); 
							} 
							else (yyval) = (yyvsp[(3) - (3)]);
                         }
    break;

  case 15:
#line 103 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 16:
#line 106 "cminus.y"
    {
                                   (yyval) = newTreeNode(Params);
                                   (yyval)->lineno = (yyvsp[(2) - (2)])->lineno;
                                   (yyval)->type = (yyvsp[(1) - (2)])->type;
                                   (yyval)->name = (yyvsp[(2) - (2)])->name;
                                   free((yyvsp[(1) - (2)])); free((yyvsp[(2) - (2)]));
                         }
    break;

  case 17:
#line 114 "cminus.y"
    { 
                                   (yyval) = newTreeNode(Params);
                                   (yyval)->lineno = (yyvsp[(2) - (4)])->lineno;
                                   if ((yyvsp[(1) - (4)])->type == Integer) (yyval)->type = IntegerArray;
                                   else if ((yyvsp[(1) - (4)])->type == Void) (yyval)->type = VoidArray;
                                   else (yyval)->type = None;
                                   (yyval)->name = (yyvsp[(2) - (4)])->name;
                                   free((yyvsp[(1) - (4)])); free((yyvsp[(2) - (4)]));
                         }
    break;

  case 18:
#line 125 "cminus.y"
    { 
							(yyval) = newTreeNode(CompoundStmt);
                                   (yyval)->child[0] = (yyvsp[(2) - (4)]);
                                   (yyval)->child[1] = (yyvsp[(3) - (4)]);
                         }
    break;

  case 19:
#line 132 "cminus.y"
    {
                                   YYSTYPE t = (yyvsp[(1) - (2)]); 
							if (t != NULL)
                                   {
								while (t->sibling != NULL) t = t->sibling;
								t->sibling = (yyvsp[(2) - (2)]);
								(yyval) = (yyvsp[(1) - (2)]);
							} 
							else (yyval) = (yyvsp[(2) - (2)]);
                         }
    break;

  case 20:
#line 142 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 21:
#line 145 "cminus.y"
    { 
							YYSTYPE t = (yyvsp[(1) - (2)]); 
							if (t != NULL)
                                   {
								while (t->sibling != NULL) t = t->sibling;
								t->sibling = (yyvsp[(2) - (2)]);
								(yyval) = (yyvsp[(1) - (2)]);
							} 
							else (yyval) = (yyvsp[(2) - (2)]);
                         }
    break;

  case 22:
#line 155 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 23:
#line 157 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 24:
#line 158 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 25:
#line 159 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 26:
#line 160 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 27:
#line 161 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 28:
#line 164 "cminus.y"
    {
                                   YYSTYPE t = (yyvsp[(5) - (7)]); 
                                   if (t->kind == IfStmt && t->flag != TRUE)
                                   {
                                        (yyval) = newTreeNode(IfStmt);
                                        (yyval)->child[0] = (yyvsp[(3) - (7)]);
                                        (yyval)->child[1] = (yyvsp[(5) - (7)]);
                                        (yyvsp[(5) - (7)])->flag = TRUE;
                                        (yyvsp[(5) - (7)])->child[2] = (yyvsp[(7) - (7)]);
                                   }
                                   else
                                   {
                                        (yyval) = newTreeNode(IfStmt);
                                        (yyval)->flag = TRUE;
                                        (yyval)->child[0] = (yyvsp[(3) - (7)]);
                                        (yyval)->child[1] = (yyvsp[(5) - (7)]);
                                        (yyval)->child[2] = (yyvsp[(7) - (7)]);
                                   }
                         }
    break;

  case 29:
#line 184 "cminus.y"
    {     
                              (yyval) = newTreeNode(IfStmt);
                              (yyval)->child[0] = (yyvsp[(3) - (5)]);
                              (yyval)->child[1] = (yyvsp[(5) - (5)]);
                         }
    break;

  case 30:
#line 190 "cminus.y"
    { (yyval)=(yyvsp[(1) - (2)]); }
    break;

  case 31:
#line 191 "cminus.y"
    { (yyval)=NULL; }
    break;

  case 32:
#line 194 "cminus.y"
    { 
							(yyval) = newTreeNode(WhileStmt);
                                   (yyval)->child[0] = (yyvsp[(3) - (5)]);
                                   (yyval)->child[1] = (yyvsp[(5) - (5)]);
                         }
    break;

  case 33:
#line 201 "cminus.y"
    { 
                                   (yyval) = newTreeNode(ReturnStmt);
							(yyval)->flag = TRUE;
                         }
    break;

  case 34:
#line 206 "cminus.y"
    { 
                                   (yyval) = newTreeNode(ReturnStmt);
                                   (yyval)->child[0] = (yyvsp[(2) - (3)]);
                         }
    break;

  case 35:
#line 212 "cminus.y"
    { 
                                   (yyval) = newTreeNode(AssignExpr);
                                   (yyval)->child[0] = (yyvsp[(1) - (3)]);
                                   (yyval)->child[1] = (yyvsp[(3) - (3)]);
                         }
    break;

  case 36:
#line 217 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 37:
#line 220 "cminus.y"
    { 
							(yyval) = newTreeNode(VarAccessExpr);
                                   (yyval)->name = (yyvsp[(1) - (1)])->name;
                                   free((yyvsp[(1) - (1)]));
                         }
    break;

  case 38:
#line 226 "cminus.y"
    {
							(yyval) = newTreeNode(VarAccessExpr);
                                   (yyval)->name = (yyvsp[(1) - (4)])->name;
                                   (yyval)->child[0] = (yyvsp[(3) - (4)]);
                                   free((yyvsp[(1) - (4)]));
                         }
    break;

  case 39:
#line 234 "cminus.y"
    { 
							(yyval) = newTreeNode(BinOpExpr);
                                   (yyval)->opcode = (yyvsp[(2) - (3)])->opcode;
                                   (yyval)->child[0] = (yyvsp[(1) - (3)]);
                                   (yyval)->child[1] = (yyvsp[(3) - (3)]);
                         }
    break;

  case 40:
#line 240 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 41:
#line 242 "cminus.y"
    { (yyval) = newTreeNode(Opcode); (yyval)->lineno = lineno; (yyval)->opcode = LE; }
    break;

  case 42:
#line 243 "cminus.y"
    { (yyval) = newTreeNode(Opcode); (yyval)->lineno = lineno; (yyval)->opcode = LT; }
    break;

  case 43:
#line 244 "cminus.y"
    { (yyval) = newTreeNode(Opcode); (yyval)->lineno = lineno; (yyval)->opcode = GT; }
    break;

  case 44:
#line 245 "cminus.y"
    { (yyval) = newTreeNode(Opcode); (yyval)->lineno = lineno; (yyval)->opcode = GE; }
    break;

  case 45:
#line 246 "cminus.y"
    { (yyval) = newTreeNode(Opcode); (yyval)->lineno = lineno; (yyval)->opcode = EQ; }
    break;

  case 46:
#line 247 "cminus.y"
    { (yyval) = newTreeNode(Opcode); (yyval)->lineno = lineno; (yyval)->opcode = NE; }
    break;

  case 47:
#line 250 "cminus.y"
    { 
							(yyval) = newTreeNode(BinOpExpr);
                                   (yyval)->opcode = (yyvsp[(2) - (3)])->opcode;
                                   (yyval)->child[0] = (yyvsp[(1) - (3)]);
                                   (yyval)->child[1] = (yyvsp[(3) - (3)]);
                         }
    break;

  case 48:
#line 256 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 49:
#line 257 "cminus.y"
    { (yyval) = newTreeNode(Opcode); (yyval)->lineno = lineno; (yyval)->opcode = PLUS; }
    break;

  case 50:
#line 258 "cminus.y"
    { (yyval) = newTreeNode(Opcode); (yyval)->lineno = lineno; (yyval)->opcode = MINUS; }
    break;

  case 51:
#line 261 "cminus.y"
    {
							(yyval) = newTreeNode(BinOpExpr);
                                   (yyval)->opcode = (yyvsp[(2) - (3)])->opcode;
                                   (yyval)->child[0] = (yyvsp[(1) - (3)]);
                                   (yyval)->child[1] = (yyvsp[(3) - (3)]);
                         }
    break;

  case 52:
#line 267 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 53:
#line 269 "cminus.y"
    { (yyval) = newTreeNode(Opcode); (yyval)->lineno = lineno; (yyval)->opcode = TIMES; }
    break;

  case 54:
#line 270 "cminus.y"
    { (yyval) = newTreeNode(Opcode); (yyval)->lineno = lineno; (yyval)->opcode = OVER; }
    break;

  case 55:
#line 272 "cminus.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 56:
#line 273 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 57:
#line 274 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 58:
#line 275 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 59:
#line 278 "cminus.y"
    { 
							(yyval) = newTreeNode(CallExpr);
                                   (yyval)->name = (yyvsp[(1) - (4)])->name;
                                   (yyval)->child[0] = (yyvsp[(3) - (4)]);
                                   free((yyvsp[(1) - (4)]));
                         }
    break;

  case 60:
#line 285 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 61:
#line 286 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 62:
#line 289 "cminus.y"
    {
							YYSTYPE t = (yyvsp[(1) - (3)]); 
							if (t != NULL)
							{ 
								while (t->sibling != NULL) t = t->sibling;
								t->sibling = (yyvsp[(3) - (3)]); 
								(yyval) = (yyvsp[(1) - (3)]); 
							} 
							else (yyval) = (yyvsp[(3) - (3)]);
                         }
    break;

  case 63:
#line 299 "cminus.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 64:
#line 302 "cminus.y"
    {
							(yyval) = newTreeNode(Indentifier);
							(yyval)->lineno = lineno;
							(yyval)->name = copyString(tokenString);
						}
    break;

  case 65:
#line 309 "cminus.y"
    {
							(yyval) = newTreeNode(ConstExpr);
							(yyval)->lineno = lineno;
							(yyval)->val = atoi(tokenString);
						}
    break;

  case 66:
#line 315 "cminus.y"
    { (yyval) = NULL; }
    break;


/* Line 1267 of yacc.c.  */
#line 1958 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 318 "cminus.y"


int yyerror(char * message)
{
	fprintf(listing,"Syntax error at line %d: %s\n",lineno,message);
	fprintf(listing,"Current token: ");
	printToken(yychar,tokenString);
	Error = TRUE;
	return 0;
}

/* yylex calls getToken to make Yacc/Bison output
 * compatible with ealier versions of the TINY scanner
 */
static int yylex(void)
{ return getToken(); }

TreeNode * parse(void)
{ 
	yyparse();
	return savedTree;
}

