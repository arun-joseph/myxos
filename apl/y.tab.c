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
#line 1 "apl.y" /* yacc.c:339  */

#include<stdio.h>
#include<stdlib.h>
#include "apl.h"
extern FILE *yyin;

#line 73 "y.tab.c" /* yacc.c:339  */

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
    NUM = 258,
    OPER1 = 259,
    OPER2 = 260,
    ID = 261,
    INT = 262,
    STR = 263,
    STRING = 264,
    MAIN = 265,
    BEGN = 266,
    END = 267,
    DECL = 268,
    ENDDECL = 269,
    ASG = 270,
    READ = 271,
    PRINT = 272,
    RELOP = 273,
    LOGOP = 274,
    NEGOP = 275,
    IF = 276,
    ELSE = 277,
    THEN = 278,
    ENDIF = 279,
    WHILE = 280,
    DO = 281,
    ENDWHILE = 282,
    RETURN = 283,
    SYSCREA = 284,
    SYSOPEN = 285,
    SYSWRIT = 286,
    SYSSEEK = 287,
    SYSREAD = 288,
    SYSCLOS = 289,
    SYSDELE = 290,
    SYSFORK = 291,
    SYSEXEC = 292,
    SYSEXIT = 293,
    SYSGPID = 294,
    SYSGPPID = 295,
    SYSWAIT = 296,
    SYSSIGNAL = 297,
    BREAK = 298,
    CONTINUE = 299,
    BREAKPOINT = 300,
    UMIN = 301
  };
#endif
/* Tokens.  */
#define NUM 258
#define OPER1 259
#define OPER2 260
#define ID 261
#define INT 262
#define STR 263
#define STRING 264
#define MAIN 265
#define BEGN 266
#define END 267
#define DECL 268
#define ENDDECL 269
#define ASG 270
#define READ 271
#define PRINT 272
#define RELOP 273
#define LOGOP 274
#define NEGOP 275
#define IF 276
#define ELSE 277
#define THEN 278
#define ENDIF 279
#define WHILE 280
#define DO 281
#define ENDWHILE 282
#define RETURN 283
#define SYSCREA 284
#define SYSOPEN 285
#define SYSWRIT 286
#define SYSSEEK 287
#define SYSREAD 288
#define SYSCLOS 289
#define SYSDELE 290
#define SYSFORK 291
#define SYSEXEC 292
#define SYSEXIT 293
#define SYSGPID 294
#define SYSGPPID 295
#define SYSWAIT 296
#define SYSSIGNAL 297
#define BREAK 298
#define CONTINUE 299
#define BREAKPOINT 300
#define UMIN 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 8 "apl.y" /* yacc.c:355  */

	struct tree *n;
	struct ArgStruct *arg;

#line 210 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 227 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   266

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  194

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    55,     2,
      51,    52,     2,     2,    48,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    47,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,     2,    54,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    23,    23,    26,    33,    41,    43,    46,    48,    50,
      53,    55,    58,    60,    62,    71,    73,    76,    87,    89,
      93,   100,   105,   107,   109,   113,   116,   118,   122,   124,
     128,   131,   135,   146,   158,   161,   163,   166,   170,   172,
     175,   179,   181,   185,   187,   189,   192,   194,   196,   198,
     200,   202,   209,   216,   220,   226,   233,   235,   237,   239,
     241,   243,   245,   247,   249,   251,   253,   257,   259,   261,
     270,   272,   274,   278,   280,   282,   284,   286,   288,   290,
     292,   294,   296,   298,   300,   302
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "OPER1", "OPER2", "ID", "INT",
  "STR", "STRING", "MAIN", "BEGN", "END", "DECL", "ENDDECL", "ASG", "READ",
  "PRINT", "RELOP", "LOGOP", "NEGOP", "IF", "ELSE", "THEN", "ENDIF",
  "WHILE", "DO", "ENDWHILE", "RETURN", "SYSCREA", "SYSOPEN", "SYSWRIT",
  "SYSSEEK", "SYSREAD", "SYSCLOS", "SYSDELE", "SYSFORK", "SYSEXEC",
  "SYSEXIT", "SYSGPID", "SYSGPPID", "SYSWAIT", "SYSSIGNAL", "BREAK",
  "CONTINUE", "BREAKPOINT", "UMIN", "';'", "','", "'['", "']'", "'('",
  "')'", "'{'", "'}'", "'&'", "$accept", "prog", "GDefblock", "GDefList",
  "GDecl", "Type", "GIdList", "GId", "FDefList", "Fdef", "RType", "fID",
  "fArgList", "ArgList", "ArgDecl", "ArgType", "ArgIdList", "ArgId",
  "Mainblock", "fMAIN", "LDecl", "LIdList", "LId", "Body", "retstmt",
  "stmtlist", "stmt", "ifpad", "whilepad", "expr", "ids", "param",
  "SysCall", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,    59,    44,    91,
      93,    40,    41,   123,   125,    38
};
# endif

#define YYPACT_NINF -133

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-133)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       2,    -1,    39,  -133,  -133,  -133,    28,  -133,    38,  -133,
      30,  -133,  -133,   -35,    35,  -133,    43,  -133,  -133,    50,
    -133,    57,    82,  -133,    38,  -133,    14,  -133,    24,    51,
    -133,  -133,   -44,  -133,    -4,  -133,    59,    82,  -133,    82,
    -133,  -133,    74,    55,  -133,    73,    76,    87,  -133,  -133,
      -4,   141,    84,  -133,   -19,   105,   109,  -133,  -133,    37,
     110,    95,    98,   118,   161,  -133,   114,  -133,   141,  -133,
      37,    37,   155,   141,    37,    37,   165,    37,  -133,    37,
    -133,    37,   124,   125,   145,   146,   149,   150,   154,   157,
     167,   168,   170,   171,   178,    37,    89,  -133,  -133,   140,
    -133,  -133,  -133,  -133,    62,  -133,  -133,  -133,  -133,   212,
     176,    37,   158,    45,   159,     7,   181,     0,  -133,  -133,
      37,    37,    37,    37,    37,    37,    37,   191,    37,   194,
     196,    37,   197,    29,    37,    37,    37,    37,  -133,   187,
    -133,   161,   207,   207,    94,  -133,  -133,    37,  -133,   206,
     208,    10,    48,    54,    71,    79,    91,    92,  -133,   102,
    -133,  -133,   107,  -133,  -133,   249,  -133,   113,     8,  -133,
    -133,   108,   166,  -133,   159,  -133,  -133,  -133,  -133,  -133,
    -133,  -133,  -133,  -133,  -133,  -133,   207,   209,   210,   182,
    -133,  -133,   211,  -133
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    15,     8,     9,     0,     5,     0,     1,
       0,     4,     6,    12,     0,    10,    18,    19,    16,     0,
       2,     0,    22,     7,     0,    33,     0,    20,     0,     0,
      26,    27,     0,    23,     0,    11,     0,    22,    13,     0,
      14,    30,     0,    25,    28,     0,     0,    21,    24,    31,
       0,     0,     0,    29,    67,     0,     0,    54,    55,     0,
       0,     0,     0,     0,     0,    49,     0,    39,     0,    42,
       0,     0,     0,     0,     0,    70,     0,     0,    64,     0,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,    63,     0,
      51,    52,    53,    37,     0,    35,    32,    38,    41,     0,
       0,     0,     0,     0,    71,     0,     0,     0,    62,    60,
      70,    70,    70,    70,    70,    70,    70,     0,    70,     0,
       0,    70,     0,     0,     0,     0,     0,     0,    40,     0,
      34,     0,     0,     0,     0,    17,    68,     0,    69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    80,     0,
      82,    83,     0,    85,    61,    56,    57,    58,    59,    50,
      36,     0,     0,    43,    72,    44,    45,    73,    74,    75,
      76,    77,    78,    79,    81,    84,     0,     0,     0,     0,
      46,    48,     0,    47
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -133,  -133,  -133,  -133,   253,    22,  -133,   236,  -133,  -133,
    -133,  -133,  -133,   224,   223,  -133,  -133,   213,  -133,  -133,
    -133,  -133,   123,   192,   198,  -132,   -67,  -133,  -133,   -50,
     -51,   116,  -133
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     6,     7,    64,    14,    15,    10,    18,
      19,    28,    46,    32,    33,    34,    43,    44,    20,    26,
      65,   104,   105,    66,    67,    68,    69,    70,    71,   114,
      97,   115,    98
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      72,   108,    41,    39,   134,   135,     4,     5,    40,    96,
     171,   172,   134,   135,    21,     1,    22,    72,   136,   137,
     109,   110,    72,     8,   113,   116,   136,   117,     8,   118,
      74,   119,    75,   134,   135,     4,     5,    16,    17,     9,
      78,    79,    11,    54,    13,   133,    80,   136,   137,   134,
     135,    42,   150,    25,   189,   147,    27,    81,   147,   148,
      29,   144,   177,   136,   137,    36,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    37,    91,    92,    93,    94,
      49,   164,    23,    24,   165,   166,   167,   168,    95,    30,
      31,    72,    72,   134,   135,   146,   147,   174,   134,   135,
     178,    38,   147,    50,   108,   108,   179,   136,   137,   140,
     141,    45,   136,   137,    54,     4,     5,   134,   135,   147,
      72,    72,   108,   180,    55,    56,    51,   147,    52,    57,
     186,   181,   187,    58,    39,    72,   138,    73,    72,   147,
     147,   173,   100,   182,   183,   101,    60,    54,     4,     5,
     147,    61,    62,    63,   184,   147,    76,    55,    56,   185,
      77,    99,    57,   134,   135,   102,    58,   103,   106,    59,
     111,    54,    54,     4,     5,   120,   121,   136,   137,    60,
     134,   135,    55,    56,    61,    62,    63,    57,    54,     4,
       5,    58,   139,   188,   136,   137,   122,   123,    55,    56,
     124,   125,   143,    57,    60,   126,   192,    58,   127,    61,
      62,    63,   145,    54,     4,     5,   134,   135,   128,   129,
      60,   130,   131,    55,    56,    61,    62,    63,    57,   132,
     136,   137,    58,   149,   169,   142,   151,   152,   153,   154,
     155,   156,   157,   158,   159,    60,   160,   162,   161,   163,
      61,    62,    63,   175,   135,   176,   190,   191,   193,    12,
      35,    47,    48,    53,   170,   112,   107
};

static const yytype_uint8 yycheck[] =
{
      51,    68,     6,    47,     4,     5,     7,     8,    52,    59,
     142,   143,     4,     5,    49,    13,    51,    68,    18,    19,
      70,    71,    73,     1,    74,    76,    18,    77,     6,    79,
      49,    81,    51,     4,     5,     7,     8,     7,     8,     0,
       3,     4,    14,     6,     6,    95,     9,    18,    19,     4,
       5,    55,    52,    10,   186,    48,     6,    20,    48,    52,
       3,   111,    52,    18,    19,    51,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    51,    39,    40,    41,    42,
       6,    52,    47,    48,   134,   135,   136,   137,    51,     7,
       8,   142,   143,     4,     5,    50,    48,   147,     4,     5,
      52,    50,    48,    48,   171,   172,    52,    18,    19,    47,
      48,    52,    18,    19,     6,     7,     8,     4,     5,    48,
     171,   172,   189,    52,    16,    17,    53,    48,    52,    21,
      22,    52,    24,    25,    47,   186,    47,    53,   189,    48,
      48,    47,    47,    52,    52,    47,    38,     6,     7,     8,
      48,    43,    44,    45,    52,    48,    51,    16,    17,    52,
      51,    51,    21,     4,     5,    47,    25,     6,    54,    28,
      15,     6,     6,     7,     8,    51,    51,    18,    19,    38,
       4,     5,    16,    17,    43,    44,    45,    21,     6,     7,
       8,    25,    52,    27,    18,    19,    51,    51,    16,    17,
      51,    51,    26,    21,    38,    51,    24,    25,    51,    43,
      44,    45,    54,     6,     7,     8,     4,     5,    51,    51,
      38,    51,    51,    16,    17,    43,    44,    45,    21,    51,
      18,    19,    25,    52,    47,    23,   120,   121,   122,   123,
     124,   125,   126,    52,   128,    38,    52,   131,    52,    52,
      43,    44,    45,    47,     5,    47,    47,    47,    47,     6,
      24,    37,    39,    50,   141,    73,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    57,    58,     7,     8,    59,    60,    61,     0,
      64,    14,    60,     6,    62,    63,     7,     8,    65,    66,
      74,    49,    51,    47,    48,    10,    75,     6,    67,     3,
       7,     8,    69,    70,    71,    63,    51,    51,    50,    47,
      52,     6,    55,    72,    73,    52,    68,    69,    70,     6,
      48,    53,    52,    73,     6,    16,    17,    21,    25,    28,
      38,    43,    44,    45,    61,    76,    79,    80,    81,    82,
      83,    84,    86,    53,    49,    51,    51,    51,     3,     4,
       9,    20,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    39,    40,    41,    42,    51,    85,    86,    88,    51,
      47,    47,    47,     6,    77,    78,    54,    80,    82,    85,
      85,    15,    79,    85,    85,    87,    86,    85,    85,    85,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    85,     4,     5,    18,    19,    47,    52,
      47,    48,    23,    26,    85,    54,    50,    48,    52,    52,
      52,    87,    87,    87,    87,    87,    87,    87,    52,    87,
      52,    52,    87,    52,    52,    85,    85,    85,    85,    47,
      78,    81,    81,    47,    85,    47,    47,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    22,    24,    27,    81,
      47,    47,    24,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    58,    59,    59,    60,    61,    61,
      62,    62,    63,    63,    63,    64,    64,    65,    66,    66,
      67,    68,    69,    69,    69,    70,    71,    71,    72,    72,
      73,    73,    74,    75,    76,    77,    77,    78,    79,    79,
      80,    81,    81,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    83,    84,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    86,    86,    86,
      87,    87,    87,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     3,     1,     2,     3,     1,     1,
       1,     3,     1,     4,     4,     0,     2,     8,     1,     1,
       1,     1,     0,     1,     3,     2,     1,     1,     1,     3,
       1,     2,     7,     1,     3,     1,     3,     1,     2,     1,
       3,     2,     1,     4,     5,     5,     6,     8,     6,     1,
       4,     2,     2,     2,     1,     1,     3,     3,     3,     3,
       2,     3,     2,     1,     1,     1,     1,     1,     4,     4,
       0,     1,     3,     4,     4,     4,     4,     4,     4,     4,
       3,     4,     3,     3,     4,     3
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
#line 23 "apl.y" /* yacc.c:1646  */
    {}
#line 1452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 26 "apl.y" /* yacc.c:1646  */
    {
							fflush(fp);
							main_pos = ftell(fp);
							out_linecount++;
							fprintf(fp,"JMP 00000\n");
							}
#line 1463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 33 "apl.y" /* yacc.c:1646  */
    {
							fflush(fp);
							main_pos = ftell(fp);
							out_linecount++;
							fprintf(fp,"JMP 00000\n");
							}
#line 1474 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 41 "apl.y" /* yacc.c:1646  */
    {}
#line 1480 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 43 "apl.y" /* yacc.c:1646  */
    {}
#line 1486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 46 "apl.y" /* yacc.c:1646  */
    {}
#line 1492 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 48 "apl.y" /* yacc.c:1646  */
    {m=0;
							}
#line 1499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 50 "apl.y" /* yacc.c:1646  */
    {m=3;
							}
#line 1506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 53 "apl.y" /* yacc.c:1646  */
    {}
#line 1512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 55 "apl.y" /* yacc.c:1646  */
    {}
#line 1518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 58 "apl.y" /* yacc.c:1646  */
    {install((yyvsp[0].n),m,1);
							}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 60 "apl.y" /* yacc.c:1646  */
    {install((yyvsp[-3].n),m,(yyvsp[-1].n)->value);
							}
#line 1532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 62 "apl.y" /* yacc.c:1646  */
    {finstall((yyvsp[-3].n),m,(yyvsp[-1].arg));
							/*while($3!=NULL)
							{
								printf(" %s-%d\n",$3->name,$3->type);
								$3=$3->next;
							}*/
							}
#line 1544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 71 "apl.y" /* yacc.c:1646  */
    {}
#line 1550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 73 "apl.y" /* yacc.c:1646  */
    {}
#line 1556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 76 "apl.y" /* yacc.c:1646  */
    {/*struct Lsymbol *temp=Lroot;
									while(temp!=NULL)
									{
										printf(" %s-%d-%d\n",temp->name,temp->type,temp->bind);
										temp=temp->next;
									}*/
									codegen((yyvsp[-1].n));
									Lroot=NULL;
									funcid=NULL;										
									}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 87 "apl.y" /* yacc.c:1646  */
    {m3=0;
							}
#line 1578 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 89 "apl.y" /* yacc.c:1646  */
    {m3=3;
							}
#line 1585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 93 "apl.y" /* yacc.c:1646  */
    {memcount=1;
							(yyvsp[0].n)->type=m3;
							funcid=(yyvsp[0].n);
							(yyval.n)=(yyvsp[0].n);
							}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 100 "apl.y" /* yacc.c:1646  */
    {fdefcheck(funcid,(yyvsp[0].arg),m3);
							arglistinstall(funcid);
							}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 105 "apl.y" /* yacc.c:1646  */
    {(yyval.arg)=NULL;
							}
#line 1610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 107 "apl.y" /* yacc.c:1646  */
    {(yyval.arg)=(yyvsp[0].arg);							
							}
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 109 "apl.y" /* yacc.c:1646  */
    {(yyval.arg)=makeargtree((yyvsp[-2].arg),(yyvsp[0].arg));							
							}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 113 "apl.y" /* yacc.c:1646  */
    {(yyval.arg)=(yyvsp[0].arg);}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 116 "apl.y" /* yacc.c:1646  */
    {m2=0;
							}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 118 "apl.y" /* yacc.c:1646  */
    {m2=3;
							}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 122 "apl.y" /* yacc.c:1646  */
    {(yyval.arg)=(yyvsp[0].arg);
							}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 124 "apl.y" /* yacc.c:1646  */
    {(yyval.arg)=makeargtree((yyvsp[-2].arg),(yyvsp[0].arg));
							}
#line 1658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 128 "apl.y" /* yacc.c:1646  */
    {
							(yyval.arg)=makearg((yyvsp[0].n)->name,m2,0);
							}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 131 "apl.y" /* yacc.c:1646  */
    {(yyval.arg)=makearg((yyvsp[0].n)->name,m2,1);
							}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 135 "apl.y" /* yacc.c:1646  */
    {codegen((yyvsp[-1].n));
							out_linecount+=2;
							fprintf(fp, "MOV R0, 10\nPUSH R0\n");
							out_linecount++;
							fprintf(fp, "INT 7\n");;
							fclose(fp);						
				 			//printf("%d Lines Compiled\n",linecount);
							return(0);
							}
#line 1687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 146 "apl.y" /* yacc.c:1646  */
    {m3=0;
							memcount=1;
							funcid=NULL;
							fflush(fp);
							temp_pos = ftell(fp);
							fseek(fp,main_pos,SEEK_SET);
							fprintf(fp,"JMP %05d",out_linecount*2);
							fseek(fp,temp_pos,SEEK_SET);
							out_linecount+=2; fprintf(fp,"PUSH BP\nMOV BP,SP\n"); 
							}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 158 "apl.y" /* yacc.c:1646  */
    {}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 161 "apl.y" /* yacc.c:1646  */
    {}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 163 "apl.y" /* yacc.c:1646  */
    {}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 166 "apl.y" /* yacc.c:1646  */
    {Linstall((yyvsp[0].n),m,1);
							}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 170 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=nontermcreate("Body",(yyvsp[-1].n),(yyvsp[0].n));			
							}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 172 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=nontermcreate("Body",(yyvsp[0].n),NULL);			
							}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 175 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=maketree((yyvsp[-2].n),(yyvsp[-1].n),NULL,NULL);
							}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 179 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=nontermcreate("stmtlist",(yyvsp[-1].n),(yyvsp[0].n));
							}
#line 1755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 181 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=(yyvsp[0].n);
							}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 185 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=maketree((yyvsp[-2].n),(yyvsp[-3].n),(yyvsp[-1].n),NULL);
							}
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 187 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=maketree((yyvsp[-4].n),(yyvsp[-2].n),NULL,NULL);
							}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 189 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=maketree((yyvsp[-4].n),(yyvsp[-2].n),NULL,NULL);
							}
#line 1783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 192 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=maketree((yyvsp[-5].n),(yyvsp[-4].n),(yyvsp[-2].n),NULL);flag_decl--;
										}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 194 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=maketree((yyvsp[-7].n),(yyvsp[-6].n),(yyvsp[-4].n),(yyvsp[-2].n));flag_decl--;
										}
#line 1797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 196 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=maketree((yyvsp[-5].n),(yyvsp[-4].n),(yyvsp[-2].n),NULL);flag_decl--;flag_break=0;
										}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 198 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=NULL;
							}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 200 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=(yyvsp[-3].n);		
							}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 202 "apl.y" /* yacc.c:1646  */
    {if(flag_break==0)
							{
								printf("\n%d: break or continue should be used inside while!!\n",linecount);
								exit(0);								
							}
							(yyval.n)=(yyvsp[-1].n);
							}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 209 "apl.y" /* yacc.c:1646  */
    {if(flag_break==0)
							{
								printf("\n%d: break or continue should be used inside while!!\n",linecount);
								exit(0);								
							}
							(yyval.n)=(yyvsp[-1].n);
							}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 216 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=(yyvsp[-1].n);		
							}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 220 "apl.y" /* yacc.c:1646  */
    {
								flag_decl++;
								(yyval.n)=(yyvsp[0].n);
							}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 226 "apl.y" /* yacc.c:1646  */
    {
								flag_decl++;
								flag_break=1;
								(yyval.n)=(yyvsp[0].n);
							}
#line 1868 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 233 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=maketree((yyvsp[-1].n),(yyvsp[-2].n),(yyvsp[0].n),NULL);
							}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 235 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=maketree((yyvsp[-1].n),(yyvsp[-2].n),(yyvsp[0].n),NULL);
							}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 237 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=maketree((yyvsp[-1].n),(yyvsp[-2].n),(yyvsp[0].n),NULL);
							}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 239 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=maketree((yyvsp[-1].n),(yyvsp[-2].n),(yyvsp[0].n),NULL);
							}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 241 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=maketree((yyvsp[-1].n),(yyvsp[0].n),NULL,NULL);
							}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 243 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=(yyvsp[-1].n);
							}
#line 1910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 245 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=maketree((yyvsp[-1].n),(yyvsp[0].n),NULL,NULL);
							}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 247 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=(yyvsp[0].n);
							}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 249 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=(yyvsp[0].n);
							}
#line 1931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 251 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=(yyvsp[0].n);
							}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 253 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=(yyvsp[0].n);
							}
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 257 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=maketree((yyvsp[0].n),NULL,NULL,NULL);
							}
#line 1952 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 259 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=maketree((yyvsp[-3].n),(yyvsp[-1].n),NULL,NULL);
							}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 261 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=functioncall((yyvsp[-3].n),(yyvsp[-1].n));
							/*while($3!=NULL)
							{
								printf(" %s - %d\n",$3->name,$3->type);
								$3=$3->ptr3;
							}*/
							}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 270 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=NULL;
							}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 272 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=(yyvsp[0].n);
							}
#line 1985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 274 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=makeparam((yyvsp[-2].n),(yyvsp[0].n));
							}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 278 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=syscheck((yyvsp[-3].n),(yyvsp[-1].n),1);
							}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 280 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=syscheck((yyvsp[-3].n),(yyvsp[-1].n),1);
							}
#line 2006 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 282 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=syscheck((yyvsp[-3].n),(yyvsp[-1].n),5);
							}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 284 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=syscheck((yyvsp[-3].n),(yyvsp[-1].n),3);
							}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 286 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=syscheck((yyvsp[-3].n),(yyvsp[-1].n),2);
							}
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 288 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=syscheck((yyvsp[-3].n),(yyvsp[-1].n),4);
							}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 290 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=syscheck((yyvsp[-3].n),(yyvsp[-1].n),1);
							}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 292 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=(yyvsp[-2].n);
							}
#line 2048 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 294 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=syscheck((yyvsp[-3].n),(yyvsp[-1].n),1);
							}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 296 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=(yyvsp[-2].n);
							}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 298 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=(yyvsp[-2].n);
							}
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 300 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=syscheck((yyvsp[-3].n),(yyvsp[-1].n),4);
							}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 302 "apl.y" /* yacc.c:1646  */
    {(yyval.n)=(yyvsp[-2].n);
							}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2087 "y.tab.c" /* yacc.c:1646  */
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
#line 306 "apl.y" /* yacc.c:1906  */

int main (int argc, char **argv)
{	
	FILE *input_fp;
	char filename[200],ch;
	strcpy(filename,argv[1]);	
	if(argc < 2)
	{
		printf("Specify an input filename\n");
		return 0;
	}
	expandpath(filename);
	input_fp = fopen(filename,"r");
	if(!input_fp)
	{
		printf("Invalid input file\n");
		return 0;
	}
	yyin = input_fp;
	changeext(filename);
	fp=fopen(".temp","wb");
	out_linecount++; fprintf(fp,"START\n");
	out_linecount++; fprintf(fp,"MOV SP, 1535\n");
	out_linecount++; fprintf(fp,"MOV BP, 1535\n");
	yyparse();
	fclose(input_fp);
	input_fp = fopen(".temp","r");
	if(!input_fp)
	{
		printf("Writing compiled code to file failed\n");
		return 0;
	}
	fp = fopen(filename,"wb");
	if(!fp)
	{
		fclose(input_fp);
		printf("Writing compiled code to file failed\n");
		return 0;
	}
	while( ( ch = fgetc(input_fp) ) != EOF )
		fputc(ch, fp);
	fclose(input_fp);
	fclose(fp);	
	return 0;	
}
int yyerror (char *msg) 
{
	return fprintf (stderr, "%d: %s\n",linecount,msg);
}
