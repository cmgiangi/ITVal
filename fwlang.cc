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
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TOKEN_EOF = 0,
     GROUP = 259,
     SERVICE = 261,
     QUERY = 263,
     ASSERT = 265,
     INPUT = 266,
     FORWARD = 267,
     OUTPUT = 268,
     EXAMPLE = 269,
     HISTORY = 270,
     PACKET = 271,
     SPORT = 272,
     DPORT = 273,
     SADDY = 274,
     DADDY = 275,
     STATE = 276,
     CLASSES = 277,
     SCLASSES = 278,
     SGRAPH = 279,
     UDP = 280,
     TCP = 281,
     ICMP = 282,
     BOTH = 283,
     NUM = 284,
     DOT = 285,
     IS = 286,
     ISNT = 287,
     SUBSET_OF = 288,
     NOT_SUBSET_OF = 289,
     LOGGED = 290,
     T_INVALID = 291,
     T_NEW = 292,
     T_ESTABLISHED = 293,
     T_RELATED = 294,
     FIN = 295,
     SYN = 296,
     RST = 297,
     PSH = 298,
     ACK = 299,
     URG = 300,
     NAME = 302,
     LPAREN = 321,
     RPAREN = 322,
     SEMI = 323,
     AND = 325,
     OR = 327,
     NOT = 329,
     DROPPED = 331,
     ACCEPTED = 332,
     OUTFACE = 333,
     INFACE = 334,
     WITH = 335,
     IN = 336,
     ON = 337,
     FOR = 338,
     TO = 339,
     FROM = 340
   };
#endif
/* Tokens.  */
#define TOKEN_EOF 0
#define GROUP 259
#define SERVICE 261
#define QUERY 263
#define ASSERT 265
#define INPUT 266
#define FORWARD 267
#define OUTPUT 268
#define EXAMPLE 269
#define HISTORY 270
#define PACKET 271
#define SPORT 272
#define DPORT 273
#define SADDY 274
#define DADDY 275
#define STATE 276
#define CLASSES 277
#define SCLASSES 278
#define SGRAPH 279
#define UDP 280
#define TCP 281
#define ICMP 282
#define BOTH 283
#define NUM 284
#define DOT 285
#define IS 286
#define ISNT 287
#define SUBSET_OF 288
#define NOT_SUBSET_OF 289
#define LOGGED 290
#define T_INVALID 291
#define T_NEW 292
#define T_ESTABLISHED 293
#define T_RELATED 294
#define FIN 295
#define SYN 296
#define RST 297
#define PSH 298
#define ACK 299
#define URG 300
#define NAME 302
#define LPAREN 321
#define RPAREN 322
#define SEMI 323
#define AND 325
#define OR 327
#define NOT 329
#define DROPPED 331
#define ACCEPTED 332
#define OUTFACE 333
#define INFACE 334
#define WITH 335
#define IN 336
#define ON 337
#define FOR 338
#define TO 339
#define FROM 340




/* Copy the first part of user declarations.  */
#line 3 "src/fwlang.yy"

#include <string>
#include "src/parser.h"
#include "src/structures.h"
int yyerror(char* str);


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 13 "src/fwlang.yy"
{
   int input_chain;
   char dummy;
   group* group_rec;
   service* service_rec;
   query* query_rec;
   assert* assert_rec;
   condition* condition_rec;
   int sub;
   int sv;
   int fv;
   int assert_op;
   port* port_rec;
   char *name;
   address* address_rec;
   int prot;
   char* val;
   int flag;
}
/* Line 193 of yacc.c.  */
#line 241 "fwlang.cc"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */
#line 33 "src/fwlang.yy"


YY_DECL;



/* Line 216 of yacc.c.  */
#line 259 "fwlang.cc"

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
# if YYENABLE_NLS
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
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   165

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNRULES -- Number of states.  */
#define YYNSTATES  126

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   340

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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    14,    17,    20,    22,
      26,    30,    33,    35,    38,    40,    43,    46,    49,    53,
      57,    61,    66,    72,    78,    85,    92,    94,    96,    98,
     100,   102,   104,   106,   108,   110,   112,   114,   116,   118,
     120,   124,   128,   131,   135,   138,   141,   144,   147,   150,
     153,   156,   159,   162,   165,   168,   170,   172,   174,   176,
     178,   180,   182,   184,   186,   188,   190,   192,   194,   196,
     198,   200,   203,   205,   207,   209,   211,   219,   225,   229,
     231
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      87,     0,    -1,    88,    -1,    88,    87,    -1,    89,    68,
      -1,    90,    68,    -1,    93,    68,    -1,    94,    68,    -1,
      68,    -1,     4,    47,    91,    -1,     6,    47,    92,    -1,
      91,   106,    -1,   106,    -1,    92,   104,    -1,   104,    -1,
       8,    22,    -1,     8,    23,    -1,     8,    24,    -1,     8,
      15,    22,    -1,     8,    15,    23,    -1,     8,    97,    98,
      -1,    10,    98,    95,    98,    -1,    10,    14,    98,    95,
      98,    -1,    10,    15,    98,    95,    98,    -1,    10,    14,
      15,    98,    95,    98,    -1,    10,    15,    14,    98,    95,
      98,    -1,    31,    -1,    33,    -1,    32,    -1,    34,    -1,
      11,    -1,    12,    -1,    13,    -1,    16,    -1,    17,    -1,
      18,    -1,    19,    -1,    20,    -1,    21,    -1,    99,    -1,
      98,    70,    98,    -1,    98,    72,    98,    -1,    74,    98,
      -1,    66,    98,    67,    -1,    35,    96,    -1,    85,   100,
      -1,    84,   100,    -1,    82,   101,    -1,    83,   101,    -1,
      81,   102,    -1,    80,   103,    -1,    79,    47,    -1,    78,
      47,    -1,    77,    96,    -1,    76,    96,    -1,    77,    -1,
      76,    -1,    47,    -1,   106,    -1,    47,    -1,   104,    -1,
      36,    -1,    37,    -1,    38,    -1,    39,    -1,    40,    -1,
      41,    -1,    42,    -1,    43,    -1,    44,    -1,    45,    -1,
     105,   107,    -1,    27,    -1,    25,    -1,    26,    -1,    28,
      -1,    29,    30,    29,    30,    29,    30,    29,    -1,    29,
      30,    29,    30,    29,    -1,    29,    30,    29,    -1,    29,
      -1,    29,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    88,    88,    88,    89,    90,    91,    92,    93,    96,
      98,   100,   101,   103,   104,   106,   107,   108,   109,   110,
     111,   117,   118,   119,   120,   121,   124,   125,   126,   127,
     130,   131,   132,   135,   136,   137,   138,   139,   140,   144,
     145,   146,   147,   148,   149,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   166,   167,   169,
     170,   172,   172,   172,   172,   174,   174,   174,   174,   174,
     174,   176,   178,   178,   178,   178,   180,   181,   182,   183,
     185
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "\"group\"", "GROUP",
  "\"service\"", "SERVICE", "\"query\"", "QUERY", "\"assert\"", "ASSERT",
  "INPUT", "FORWARD", "\"selected chain\"", "EXAMPLE",
  "\"ASSERTION flag\"", "PACKET", "SPORT", "DPORT", "SADDY", "DADDY",
  "\"query subject\"", "\"equivalence host classes\"",
  "\"equivalence service classes\"", "\"equivalence class graph\"", "UDP",
  "TCP", "ICMP", "\"protocol\"", "\"number\"", "\".\"", "IS", "ISNT",
  "SUBSET_OF", "\"assertion operators\"", "\"logged condition\"",
  "T_INVALID", "T_NEW", "T_ESTABLISHED", "\"connection state\"", "FIN",
  "SYN", "RST", "PSH", "ACK", "\"tcp flag\"", "\"address\"", "\"name\"",
  "\"port number\"", "\"compound port\"", "\"complete port\"",
  "\"compound address\"", "\"simple condition\"", "\"state value\"",
  "\"flag name\"", "\"query condition\"", "\"subject keyword\"",
  "\"input chain\"", "\"protocol keyword\"", "\"assert expression\"",
  "\"query expression\"", "\"service declaration\"",
  "\"address group declaration\"", "\"address list\"", "\"port list\"",
  "\"assertion operator\"", "LPAREN", "RPAREN", "SEMI", "\"AND\"", "AND",
  "\"OR\"", "OR", "\"NOT\"", "NOT", "\"query primitive\"", "DROPPED",
  "ACCEPTED", "OUTFACE", "INFACE", "WITH", "IN", "ON", "FOR", "TO", "FROM",
  "$accept", "statement", "expression", "group_expression",
  "service_expression", "addy_list", "port_list", "query_expression",
  "assert_expression", "assert_op", "input_chain", "subject", "condition",
  "simple_condition", "compound_addy", "compound_port", "state_value",
  "flag_name", "complete_port", "protocol", "addr", "port", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    88,    88,    88,    88,    88,    89,
      90,    91,    91,    92,    92,    93,    93,    93,    93,    93,
      93,    94,    94,    94,    94,    94,    95,    95,    95,    95,
      96,    96,    96,    97,    97,    97,    97,    97,    97,    98,
      98,    98,    98,    98,    98,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,   100,   100,   101,
     101,   102,   102,   102,   102,   103,   103,   103,   103,   103,
     103,   104,   105,   105,   105,   105,   106,   106,   106,   106,
     107
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     2,     2,     2,     1,     3,
       3,     2,     1,     2,     1,     2,     2,     2,     3,     3,
       3,     4,     5,     5,     6,     6,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     2,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     7,     5,     3,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     8,     0,     2,     0,     0,
       0,     0,     0,     0,     0,    33,    34,    35,    36,    37,
      38,    15,    16,    17,     0,     0,     0,     0,     0,     0,
      56,    55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     1,     3,     4,     5,     6,     7,    79,     9,
      12,    73,    74,    72,    75,    10,    14,     0,    18,    19,
      20,     0,     0,     0,     0,    30,    31,    32,    44,     0,
      42,    54,    53,    52,    51,    65,    66,    67,    68,    69,
      70,    50,    61,    62,    63,    64,    49,    59,    47,    60,
      48,    57,    46,    58,    45,    26,    28,    27,    29,     0,
       0,     0,     0,    11,    13,    80,    71,     0,     0,     0,
       0,    43,    40,    41,    21,    78,     0,    22,     0,    23,
       0,    24,    25,    77,     0,    76
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    49,    55,    10,    11,   101,
      68,    24,    40,    41,    92,    88,    86,    81,    89,    57,
      93,   106
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -57
static const yytype_int16 yypact[] =
{
      11,   -33,   -15,   141,    19,   -57,    36,    11,   -12,    -4,
      22,    23,    77,    34,     7,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,    70,    43,   -11,    76,    70,    70,
      76,    76,     5,    60,     1,    44,     0,     0,   -16,   -16,
     -22,   -57,   -57,   -57,   -57,   -57,   -57,   -57,    78,    77,
     -57,   -57,   -57,   -57,   -57,    34,   -57,    81,   -57,   -57,
     -54,    70,   -22,    70,   -22,   -57,   -57,   -57,   -57,   -32,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,    70,
      70,    70,    82,   -57,   -57,   -57,   -57,   -22,    70,   -22,
      70,   -57,    40,   -57,   -54,    83,    70,   -54,    70,   -54,
      85,   -54,   -54,    86,    89,   -57
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -57,   108,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -56,
      -8,   -57,   -24,   -57,    90,    93,   -57,   -57,    -6,   -57,
       8,   -57
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      60,    62,    64,    63,    69,    70,   108,    56,   110,    95,
      96,    97,    98,    48,    12,     1,    99,     2,   100,     3,
      50,     4,    71,    72,    27,    51,    52,    53,    54,    58,
      59,    91,    13,    25,    26,   111,    42,   107,    99,   109,
     100,    75,    76,    77,    78,    79,    80,    87,    99,   104,
     100,   116,    73,   118,    27,    28,    44,   103,    61,    51,
      52,    53,    54,    29,    45,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,   112,   113,   114,    27,     5,
      82,    83,    84,    85,   117,    28,   119,    65,    66,    67,
      46,    47,   121,    29,   122,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    27,    48,    74,   102,    28,
     105,   115,   100,   120,   123,    43,   124,    29,   125,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    94,
      90,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     0,     0,    29,     0,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23
};

static const yytype_int8 yycheck[] =
{
      24,    25,    26,    14,    28,    29,    62,    13,    64,    31,
      32,    33,    34,    29,    47,     4,    70,     6,    72,     8,
      12,    10,    30,    31,    35,    25,    26,    27,    28,    22,
      23,    47,    47,    14,    15,    67,     0,    61,    70,    63,
      72,    40,    41,    42,    43,    44,    45,    47,    70,    55,
      72,   107,    47,   109,    35,    66,    68,    49,    15,    25,
      26,    27,    28,    74,    68,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    99,   100,   101,    35,    68,
      36,    37,    38,    39,   108,    66,   110,    11,    12,    13,
      68,    68,   116,    74,   118,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    35,    29,    47,    30,    66,
      29,    29,    72,    30,    29,     7,    30,    74,    29,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    39,
      37,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     6,     8,    10,    68,    87,    88,    89,    90,
      93,    94,    47,    47,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    97,    14,    15,    35,    66,    74,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      98,    99,     0,    87,    68,    68,    68,    68,    29,    91,
     106,    25,    26,    27,    28,    92,   104,   105,    22,    23,
      98,    15,    98,    14,    98,    11,    12,    13,    96,    98,
      98,    96,    96,    47,    47,    40,    41,    42,    43,    44,
      45,   103,    36,    37,    38,    39,   102,    47,   101,   104,
     101,    47,   100,   106,   100,    31,    32,    33,    34,    70,
      72,    95,    30,   106,   104,    29,   107,    98,    95,    98,
      95,    67,    98,    98,    98,    29,    95,    98,    95,    98,
      30,    98,    98,    29,    30,    29
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
# if YYLTYPE_IS_TRIVIAL
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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
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
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

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
        case 9:
#line 96 "src/fwlang.yy"
    {(yyval.group_rec) = DefineGroup((yyvsp[(2) - (3)].name), (yyvsp[(3) - (3)].address_rec)); delete[] (yyvsp[(2) - (3)].name);}
    break;

  case 10:
#line 98 "src/fwlang.yy"
    {(yyval.service_rec) = DefineService((yyvsp[(2) - (3)].name), (yyvsp[(3) - (3)].port_rec)); delete[] (yyvsp[(2) - (3)].name);}
    break;

  case 11:
#line 100 "src/fwlang.yy"
    {(yyval.address_rec) = AppendAddy((yyvsp[(1) - (2)].address_rec),(yyvsp[(2) - (2)].address_rec));}
    break;

  case 12:
#line 101 "src/fwlang.yy"
    {(yyval.address_rec) = AppendAddy(NULL, (yyvsp[(1) - (1)].address_rec));}
    break;

  case 13:
#line 103 "src/fwlang.yy"
    {(yyval.port_rec) = AppendPort((yyvsp[(1) - (2)].port_rec), (yyvsp[(2) - (2)].port_rec));}
    break;

  case 14:
#line 104 "src/fwlang.yy"
    {(yyval.port_rec) = AppendPort(NULL, (yyvsp[(1) - (1)].port_rec));}
    break;

  case 15:
#line 106 "src/fwlang.yy"
    {(yyval.query_rec) = PrintClasses(FLAG_NO_HISTORY);}
    break;

  case 16:
#line 107 "src/fwlang.yy"
    {(yyval.query_rec) = PrintServiceClasses(FLAG_NO_HISTORY);}
    break;

  case 17:
#line 108 "src/fwlang.yy"
    {(yyval.query_rec) = PrintServiceGraph(FLAG_HISTORY);}
    break;

  case 18:
#line 109 "src/fwlang.yy"
    {(yyval.query_rec) = PrintClasses(FLAG_HISTORY);}
    break;

  case 19:
#line 110 "src/fwlang.yy"
    {(yyval.query_rec) = PrintServiceClasses(FLAG_HISTORY);}
    break;

  case 20:
#line 111 "src/fwlang.yy"
    {(yyval.query_rec) = PerformQuery((yyvsp[(2) - (3)].sub), (yyvsp[(3) - (3)].condition_rec));}
    break;

  case 21:
#line 117 "src/fwlang.yy"
    {(yyval.assert_rec) = PerformAssertion((yyvsp[(2) - (4)].condition_rec), (yyvsp[(4) - (4)].condition_rec), (yyvsp[(3) - (4)].assert_op), FLAG_NO_EXAMPLE, FLAG_NO_HISTORY);}
    break;

  case 22:
#line 118 "src/fwlang.yy"
    {(yyval.assert_rec) = PerformAssertion((yyvsp[(3) - (5)].condition_rec), (yyvsp[(5) - (5)].condition_rec), (yyvsp[(4) - (5)].assert_op), FLAG_EXAMPLE, FLAG_NO_HISTORY);}
    break;

  case 23:
#line 119 "src/fwlang.yy"
    {(yyval.assert_rec) = PerformAssertion((yyvsp[(3) - (5)].condition_rec), (yyvsp[(5) - (5)].condition_rec), (yyvsp[(4) - (5)].assert_op), FLAG_NO_EXAMPLE, FLAG_HISTORY);}
    break;

  case 24:
#line 120 "src/fwlang.yy"
    {(yyval.assert_rec) = PerformAssertion((yyvsp[(4) - (6)].condition_rec), (yyvsp[(6) - (6)].condition_rec), (yyvsp[(5) - (6)].assert_op), FLAG_EXAMPLE, FLAG_HISTORY);}
    break;

  case 25:
#line 121 "src/fwlang.yy"
    {(yyval.assert_rec) = PerformAssertion((yyvsp[(4) - (6)].condition_rec), (yyvsp[(6) - (6)].condition_rec), (yyvsp[(5) - (6)].assert_op), FLAG_EXAMPLE, FLAG_HISTORY);}
    break;

  case 26:
#line 124 "src/fwlang.yy"
    {(yyval.assert_op) = OP_IS;}
    break;

  case 27:
#line 125 "src/fwlang.yy"
    {(yyval.assert_op)= OP_SUBSET;}
    break;

  case 28:
#line 126 "src/fwlang.yy"
    {(yyval.assert_op) = OP_NOT_IS;}
    break;

  case 29:
#line 127 "src/fwlang.yy"
    {(yyval.assert_op) = OP_NOT_SUBSET;}
    break;

  case 30:
#line 130 "src/fwlang.yy"
    {(yyval.input_chain) = 0;}
    break;

  case 31:
#line 131 "src/fwlang.yy"
    {(yyval.input_chain) = 1;}
    break;

  case 32:
#line 132 "src/fwlang.yy"
    {(yyval.input_chain) = 2;}
    break;

  case 33:
#line 135 "src/fwlang.yy"
    {(yyval.sub)=0;}
    break;

  case 34:
#line 136 "src/fwlang.yy"
    {(yyval.sub)=1;}
    break;

  case 35:
#line 137 "src/fwlang.yy"
    {(yyval.sub)=2;}
    break;

  case 36:
#line 138 "src/fwlang.yy"
    {(yyval.sub)=3;}
    break;

  case 37:
#line 139 "src/fwlang.yy"
    {(yyval.sub)=4;}
    break;

  case 38:
#line 140 "src/fwlang.yy"
    {(yyval.sub)=5;}
    break;

  case 39:
#line 144 "src/fwlang.yy"
    {(yyval.condition_rec) = (yyvsp[(1) - (1)].condition_rec);}
    break;

  case 40:
#line 145 "src/fwlang.yy"
    {(yyval.condition_rec) = IntersectConditions((yyvsp[(1) - (3)].condition_rec),(yyvsp[(3) - (3)].condition_rec));}
    break;

  case 41:
#line 146 "src/fwlang.yy"
    {(yyval.condition_rec) = UnionConditions((yyvsp[(1) - (3)].condition_rec),(yyvsp[(3) - (3)].condition_rec));}
    break;

  case 42:
#line 147 "src/fwlang.yy"
    {(yyval.condition_rec) = NegateCondition((yyvsp[(2) - (2)].condition_rec));}
    break;

  case 43:
#line 148 "src/fwlang.yy"
    {(yyval.condition_rec) = (yyvsp[(2) - (3)].condition_rec);}
    break;

  case 44:
#line 149 "src/fwlang.yy"
    { (yyval.condition_rec) = GetLoggedCondition((yyvsp[(2) - (2)].input_chain));}
    break;

  case 45:
#line 152 "src/fwlang.yy"
    {(yyval.condition_rec)=BuildConditionFromGroup((yyvsp[(2) - (2)].group_rec), 0);}
    break;

  case 46:
#line 153 "src/fwlang.yy"
    {(yyval.condition_rec)=BuildConditionFromGroup((yyvsp[(2) - (2)].group_rec),1);}
    break;

  case 47:
#line 154 "src/fwlang.yy"
    {(yyval.condition_rec)=BuildConditionFromService((yyvsp[(2) - (2)].service_rec), 0);}
    break;

  case 48:
#line 155 "src/fwlang.yy"
    {(yyval.condition_rec)=BuildConditionFromService((yyvsp[(2) - (2)].service_rec), 1);}
    break;

  case 49:
#line 156 "src/fwlang.yy"
    {(yyval.condition_rec)=BuildConditionFromState((yyvsp[(2) - (2)].sv));}
    break;

  case 50:
#line 157 "src/fwlang.yy"
    {(yyval.condition_rec)=BuildConditionFromFlag((yyvsp[(2) - (2)].fv));}
    break;

  case 51:
#line 158 "src/fwlang.yy"
    {(yyval.condition_rec)=BuildConditionFromIface((yyvsp[(2) - (2)].name), 0); delete[] (yyvsp[(2) - (2)].name);}
    break;

  case 52:
#line 159 "src/fwlang.yy"
    {(yyval.condition_rec)=BuildConditionFromIface((yyvsp[(2) - (2)].name), 1); delete[] (yyvsp[(2) - (2)].name);}
    break;

  case 53:
#line 160 "src/fwlang.yy"
    {(yyval.condition_rec)=BuildAcceptCondition((yyvsp[(2) - (2)].input_chain));}
    break;

  case 54:
#line 161 "src/fwlang.yy"
    {(yyval.condition_rec)=BuildDropCondition((yyvsp[(2) - (2)].input_chain));}
    break;

  case 55:
#line 162 "src/fwlang.yy"
    {(yyval.condition_rec)=BuildAcceptCondition(1);}
    break;

  case 56:
#line 163 "src/fwlang.yy"
    {(yyval.condition_rec)=BuildDropCondition(1);}
    break;

  case 57:
#line 166 "src/fwlang.yy"
    {(yyval.group_rec) = GroupLookup((yyvsp[(1) - (1)].name)); delete[] (yyvsp[(1) - (1)].name);}
    break;

  case 58:
#line 167 "src/fwlang.yy"
    {(yyval.group_rec) = BuildGroupFromAddress((yyvsp[(1) - (1)].address_rec));}
    break;

  case 59:
#line 169 "src/fwlang.yy"
    {(yyval.service_rec) = ServiceLookup((yyvsp[(1) - (1)].name)); delete[] (yyvsp[(1) - (1)].name);}
    break;

  case 60:
#line 170 "src/fwlang.yy"
    {(yyval.service_rec) = BuildServiceFromPort((yyvsp[(1) - (1)].port_rec));}
    break;

  case 61:
#line 172 "src/fwlang.yy"
    {(yyval.sv)=0;}
    break;

  case 62:
#line 172 "src/fwlang.yy"
    {(yyval.sv)=1;}
    break;

  case 63:
#line 172 "src/fwlang.yy"
    {(yyval.sv)=2;}
    break;

  case 64:
#line 172 "src/fwlang.yy"
    {(yyval.sv)=3;}
    break;

  case 65:
#line 174 "src/fwlang.yy"
    {(yyval.fv)=0;}
    break;

  case 66:
#line 174 "src/fwlang.yy"
    {(yyval.fv)=1;}
    break;

  case 67:
#line 174 "src/fwlang.yy"
    {(yyval.fv)=2;}
    break;

  case 68:
#line 174 "src/fwlang.yy"
    {(yyval.fv)=3;}
    break;

  case 69:
#line 174 "src/fwlang.yy"
    {(yyval.fv)=4;}
    break;

  case 70:
#line 174 "src/fwlang.yy"
    {(yyval.fv)=5;}
    break;

  case 71:
#line 176 "src/fwlang.yy"
    {(yyval.port_rec) = BuildPort((yyvsp[(1) - (2)].prot), (yyvsp[(2) - (2)].port_rec));}
    break;

  case 72:
#line 178 "src/fwlang.yy"
    {(yyval.prot) = 0;}
    break;

  case 73:
#line 178 "src/fwlang.yy"
    {(yyval.prot) = 1;}
    break;

  case 74:
#line 178 "src/fwlang.yy"
    { (yyval.prot) = 2;}
    break;

  case 75:
#line 178 "src/fwlang.yy"
    { (yyval.prot) = -1;}
    break;

  case 76:
#line 180 "src/fwlang.yy"
    {(yyval.address_rec) = ParseAddr((yyvsp[(1) - (7)].val),(yyvsp[(3) - (7)].val),(yyvsp[(5) - (7)].val),(yyvsp[(7) - (7)].val)); delete[] (yyvsp[(1) - (7)].val); delete[] (yyvsp[(3) - (7)].val); delete[] (yyvsp[(5) - (7)].val); delete[] (yyvsp[(7) - (7)].val);}
    break;

  case 77:
#line 181 "src/fwlang.yy"
    {(yyval.address_rec)=ParseAddr((yyvsp[(1) - (5)].val),(yyvsp[(3) - (5)].val),(yyvsp[(5) - (5)].val),NULL); delete[] (yyvsp[(1) - (5)].val); delete[] (yyvsp[(3) - (5)].val); delete[] (yyvsp[(5) - (5)].val);}
    break;

  case 78:
#line 182 "src/fwlang.yy"
    {(yyval.address_rec)=ParseAddr((yyvsp[(1) - (3)].val),(yyvsp[(3) - (3)].val),NULL,NULL); delete[] (yyvsp[(1) - (3)].val); delete[] (yyvsp[(3) - (3)].val);}
    break;

  case 79:
#line 183 "src/fwlang.yy"
    {(yyval.address_rec)=ParseAddr((yyvsp[(1) - (1)].val),NULL,NULL,NULL); delete[] (yyvsp[(1) - (1)].val);}
    break;

  case 80:
#line 185 "src/fwlang.yy"
    {(yyval.port_rec)=ParsePort((yyvsp[(1) - (1)].val)); delete[] (yyvsp[(1) - (1)].val);}
    break;


/* Line 1267 of yacc.c.  */
#line 1964 "fwlang.cc"
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


#line 187 "src/fwlang.yy"


int yyerror(char* str){
   printf("%s\n", str);
}

