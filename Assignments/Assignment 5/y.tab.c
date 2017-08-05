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
#line 1 "ass5_14CS30017.y" /* yacc.c:339  */
	
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <cstring>
#include <fstream>
#include "ass5_14CS30017_translator.h"
extern int yylex();
extern char* yytext;
extern Sym_table* global_ST;
extern Sym_table* current_ST;
int globaloffset=0,store_type;
int currentoffset=0;
void yyerror(char *s);
row* int2bool(row *r);
row* char2int(row* r);
row* int2doub(row* r);
row* char2doub(row* r);
row* doub2int(row* r);
string array_name;
vector<string> par_list;

#line 92 "y.tab.c" /* yacc.c:339  */

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
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 27 "ass5_14CS30017.y" /* yacc.c:355  */

#include "ass5_14CS30017_translator.h"

#line 126 "y.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOAT = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INLINE = 274,
    INT = 275,
    LONG = 276,
    REGISTER = 277,
    RESTRICT = 278,
    RETURN = 279,
    SHORT = 280,
    SIGNED = 281,
    SIZEOF = 282,
    STATIC = 283,
    STRUCT = 284,
    SWITCH = 285,
    TYPEDEF = 286,
    UNION = 287,
    UNSIGNED = 288,
    VOID = 289,
    VOLATILE = 290,
    WHILE = 291,
    BOOL = 292,
    COMPLEX = 293,
    IMAGINARY = 294,
    SINGLE_COMMENT = 295,
    MULTI_COMMENT = 296,
    ID = 297,
    INT_NO = 298,
    FLOAT_NO = 299,
    CHARACTER = 300,
    STRING = 301,
    LEFT_SQUARE_BRACE = 302,
    RIGHT_SQUARE_BRACE = 303,
    LEFT_ROUND_BRACE = 304,
    RIGHT_ROUND_BRACE = 305,
    LEFT_CURLY_BRACE = 306,
    RIGHT_CURLY_BRACE = 307,
    PERIOD = 308,
    ARROW = 309,
    INCREMENT = 310,
    DECREMENT = 311,
    AMPERSAND = 312,
    MULTIPLY = 313,
    ADD = 314,
    SUBTRACT = 315,
    TILDA = 316,
    NEGATION = 317,
    FORWARDSLASH = 318,
    PERCENTILE = 319,
    LEFT_SHIFT = 320,
    RIGHT_SHIFT = 321,
    LESS_THAN = 322,
    GREATER_THAN = 323,
    LESS_THAN_EQUALTO = 324,
    GREATER_THAN_EQUALTO = 325,
    DOUBLE_EQUAL = 326,
    NOT_EQUAL = 327,
    XOR = 328,
    OR = 329,
    BINARY_AND = 330,
    BINARY_OR = 331,
    QUESTION_MARK = 332,
    COLON = 333,
    SEMI_COLON = 334,
    ELLIPSIS = 335,
    EQUAL = 336,
    STAR_EQUAL = 337,
    SLASH_EQUAL = 338,
    PERCENTILE_EQUAL = 339,
    PLUS_EQUAL = 340,
    MINUS_EQUAL = 341,
    LEFT_SHIFT_EQUAL = 342,
    RIGHT_SHIFT_EQUAL = 343,
    AND_EQUAL = 344,
    XOR_EQUAL = 345,
    OR_EQUAL = 346,
    COMMA = 347,
    HASH = 348,
    THEN = 349
  };
#endif
/* Tokens.  */
#define AUTO 258
#define BREAK 259
#define CASE 260
#define CHAR 261
#define CONST 262
#define CONTINUE 263
#define DEFAULT 264
#define DO 265
#define DOUBLE 266
#define ELSE 267
#define ENUM 268
#define EXTERN 269
#define FLOAT 270
#define FOR 271
#define GOTO 272
#define IF 273
#define INLINE 274
#define INT 275
#define LONG 276
#define REGISTER 277
#define RESTRICT 278
#define RETURN 279
#define SHORT 280
#define SIGNED 281
#define SIZEOF 282
#define STATIC 283
#define STRUCT 284
#define SWITCH 285
#define TYPEDEF 286
#define UNION 287
#define UNSIGNED 288
#define VOID 289
#define VOLATILE 290
#define WHILE 291
#define BOOL 292
#define COMPLEX 293
#define IMAGINARY 294
#define SINGLE_COMMENT 295
#define MULTI_COMMENT 296
#define ID 297
#define INT_NO 298
#define FLOAT_NO 299
#define CHARACTER 300
#define STRING 301
#define LEFT_SQUARE_BRACE 302
#define RIGHT_SQUARE_BRACE 303
#define LEFT_ROUND_BRACE 304
#define RIGHT_ROUND_BRACE 305
#define LEFT_CURLY_BRACE 306
#define RIGHT_CURLY_BRACE 307
#define PERIOD 308
#define ARROW 309
#define INCREMENT 310
#define DECREMENT 311
#define AMPERSAND 312
#define MULTIPLY 313
#define ADD 314
#define SUBTRACT 315
#define TILDA 316
#define NEGATION 317
#define FORWARDSLASH 318
#define PERCENTILE 319
#define LEFT_SHIFT 320
#define RIGHT_SHIFT 321
#define LESS_THAN 322
#define GREATER_THAN 323
#define LESS_THAN_EQUALTO 324
#define GREATER_THAN_EQUALTO 325
#define DOUBLE_EQUAL 326
#define NOT_EQUAL 327
#define XOR 328
#define OR 329
#define BINARY_AND 330
#define BINARY_OR 331
#define QUESTION_MARK 332
#define COLON 333
#define SEMI_COLON 334
#define ELLIPSIS 335
#define EQUAL 336
#define STAR_EQUAL 337
#define SLASH_EQUAL 338
#define PERCENTILE_EQUAL 339
#define PLUS_EQUAL 340
#define MINUS_EQUAL 341
#define LEFT_SHIFT_EQUAL 342
#define RIGHT_SHIFT_EQUAL 343
#define AND_EQUAL 344
#define XOR_EQUAL 345
#define OR_EQUAL 346
#define COMMA 347
#define HASH 348
#define THEN 349

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 30 "ass5_14CS30017.y" /* yacc.c:355  */

    int intval;
	char* stringval;
	char charval;
	double floatval;
	struct row* RO;
	Sym_table* SYT;

#line 335 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 352 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   477

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  148
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  259

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   349

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
       2,     2,    97,    95,     2,    96,     2,    98,     2,     2,
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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   154,   154,   159,   171,   183,   193,   205,   212,   213,
     236,   244,   245,   246,   258,   270,   271,   275,   284,   302,
     303,   307,   308,   312,   313,   325,   337,   351,   352,   353,
     354,   355,   356,   360,   361,   372,   373,   396,   419,   445,
     446,   469,   495,   496,   519,   545,   546,   555,   564,   573,
     585,   586,   595,   607,   608,   634,   635,   661,   662,   688,
     689,   702,   703,   716,   717,   721,   722,   748,   749,   753,
     754,   758,   763,   764,   768,   772,   773,   777,   784,   791,
     792,   799,   800,   809,   814,   819,   824,   832,   839,   840,
     844,   854,   861,   883,   884,   898,   899,   900,   907,   911,
     918,   923,   924,   928,   929,   933,   934,   938,   942,   943,
     947,   948,   952,   956,   960,   961,   965,   969,   970,   974,
     975,   979,   980,   984,   985,   986,   987,   988,   992,   999,
    1003,  1011,  1012,  1016,  1017,  1021,  1025,  1032,  1042,  1050,
    1057,  1069,  1077,  1078,  1082,  1083,  1087,  1095,  1098
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "REGISTER", "RESTRICT",
  "RETURN", "SHORT", "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH",
  "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "BOOL",
  "COMPLEX", "IMAGINARY", "SINGLE_COMMENT", "MULTI_COMMENT", "ID",
  "INT_NO", "FLOAT_NO", "CHARACTER", "STRING", "LEFT_SQUARE_BRACE",
  "RIGHT_SQUARE_BRACE", "LEFT_ROUND_BRACE", "RIGHT_ROUND_BRACE",
  "LEFT_CURLY_BRACE", "RIGHT_CURLY_BRACE", "PERIOD", "ARROW", "INCREMENT",
  "DECREMENT", "AMPERSAND", "MULTIPLY", "ADD", "SUBTRACT", "TILDA",
  "NEGATION", "FORWARDSLASH", "PERCENTILE", "LEFT_SHIFT", "RIGHT_SHIFT",
  "LESS_THAN", "GREATER_THAN", "LESS_THAN_EQUALTO", "GREATER_THAN_EQUALTO",
  "DOUBLE_EQUAL", "NOT_EQUAL", "XOR", "OR", "BINARY_AND", "BINARY_OR",
  "QUESTION_MARK", "COLON", "SEMI_COLON", "ELLIPSIS", "EQUAL",
  "STAR_EQUAL", "SLASH_EQUAL", "PERCENTILE_EQUAL", "PLUS_EQUAL",
  "MINUS_EQUAL", "LEFT_SHIFT_EQUAL", "RIGHT_SHIFT_EQUAL", "AND_EQUAL",
  "XOR_EQUAL", "OR_EQUAL", "COMMA", "HASH", "THEN", "'+'", "'-'", "'*'",
  "'/'", "$accept", "primary_expression", "postfix_expression",
  "array_exp", "argument_expression_listopt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression",
  "assignment_expressionopt", "expression", "bool_expression",
  "bool_expressionopt", "constant_expression", "expressionopt",
  "declaration", "declaration_specifiers", "init_declarator_list",
  "init_declarator", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_listopt", "declarator", "direct_declarator",
  "funcdecstart", "funcdecend", "pointer", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "identifier_listopt", "type_name", "initializer", "initializer_list",
  "designation", "designationopt", "designator_list", "designator",
  "statement", "compound_statement", "block_item_list", "block_item",
  "block_item_listopt", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "M", "N", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,    43,    45,    42,    47
};
# endif

#define YYPACT_NINF -205

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-205)))

#define YYTABLE_NINF -149

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      65,  -205,  -205,  -205,  -205,  -205,    38,  -205,    21,  -205,
    -205,  -205,    38,   -42,   -62,  -205,   -37,     9,   -11,  -205,
    -205,   -25,  -205,  -205,    38,   206,   394,  -205,   106,   -16,
       9,  -205,  -205,   -53,  -205,    -9,     4,   394,  -205,  -205,
    -205,  -205,  -205,  -205,   320,   415,   415,  -205,  -205,  -205,
    -205,  -205,  -205,    23,    48,    32,   -21,   394,  -205,    75,
     -23,     2,   123,    27,    43,    70,    79,    37,     1,  -205,
    -205,    66,    80,  -205,    38,  -205,  -205,   108,  -205,   124,
    -205,  -205,  -205,  -205,  -205,  -205,   394,   129,  -205,   131,
    -205,    65,    90,   133,   373,   394,   394,   109,   136,   -35,
      65,  -205,   137,   320,  -205,  -205,   394,   394,   154,   155,
    -205,  -205,   394,   394,  -205,  -205,   394,   394,   394,   394,
     394,   394,   394,   394,   394,   394,   394,   394,   394,   394,
     394,   394,  -205,  -205,   121,   394,  -205,   263,  -205,   151,
    -205,  -205,    38,  -205,   110,  -205,   161,  -205,  -205,   125,
      66,   157,  -205,   394,  -205,  -205,  -205,   290,   158,   -41,
     163,   113,  -205,  -205,  -205,   -40,  -205,  -205,  -205,  -205,
      75,    75,   -23,   -23,     2,     2,     2,     2,    39,    39,
      27,    43,    70,   394,   394,  -205,  -205,  -205,  -205,  -205,
     164,    13,  -205,   179,  -205,  -205,   170,    35,  -205,   172,
    -205,  -205,   394,  -205,    79,    37,   394,  -205,  -205,  -205,
     176,   394,   373,  -205,   394,   185,   -43,  -205,   394,   -18,
    -205,  -205,    66,   394,  -205,   142,  -205,   373,  -205,   180,
    -205,  -205,    88,  -205,  -205,  -205,   153,   182,  -205,   217,
    -205,  -205,  -205,   394,  -205,   156,   394,  -205,  -205,   394,
    -205,  -205,   373,  -205,   183,  -205,  -205,   373,  -205
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    84,    86,    85,    83,   145,     0,    78,     0,   142,
     144,    92,     0,   101,     0,    79,    81,    91,     0,     1,
     143,     0,   102,    77,     0,    76,     0,   146,    68,    99,
      90,    93,    80,    81,   147,     0,     0,    76,   147,     2,
       3,     4,     6,     5,     0,     0,     0,    27,    28,    29,
      30,    31,    32,     8,    23,     9,    33,     0,    35,    39,
      42,    45,    50,    53,    55,    57,    59,    61,    63,    65,
      69,    75,     0,   132,     0,   131,   123,   147,   129,     0,
     124,   125,   126,   127,   113,    82,     0,    28,    67,     0,
     108,     0,   110,     0,    76,    76,     0,     0,     0,     0,
      89,   112,     0,     0,    24,    25,     0,    20,     0,     0,
      13,    14,     0,     0,    33,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   147,   147,     0,     0,   135,    76,   128,     0,
      96,    94,     0,   100,   103,   105,     0,    98,   147,     0,
      71,     0,   141,     0,     7,    88,    87,     0,     0,     0,
       0,    19,    21,    11,    12,     0,    66,    36,    37,    38,
      40,    41,    43,    44,    46,    47,    48,    49,    52,    51,
      54,    56,    58,     0,     0,   147,    70,   130,    95,   107,
       0,     0,   109,     0,   147,   147,     0,   118,    34,     0,
      17,    10,     0,    18,    60,    62,     0,    97,   104,   106,
       0,    73,    76,   147,     0,     0,     0,   117,     0,     0,
     119,    22,   148,     0,    72,     0,   148,    76,    74,     0,
     122,    15,   118,   114,   116,   120,     0,     0,   147,   136,
     138,   121,    16,     0,   147,     0,    76,   147,   115,     0,
     139,   148,    76,    64,     0,   137,   147,    76,   140
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -205,  -205,  -205,  -205,  -205,  -205,    -3,  -205,   -52,   -28,
      15,    47,    18,   105,   107,   112,    53,    54,  -205,  -204,
     -24,  -205,   -22,  -150,  -205,  -205,   -36,    -7,    -5,  -205,
     215,   -31,   141,  -205,     0,   226,  -205,  -205,   232,  -205,
    -205,    56,  -205,  -205,   150,  -195,  -205,  -205,    22,  -205,
      40,   -83,   240,  -205,   134,  -205,  -205,  -205,  -205,  -205,
    -205,   252,  -205,   -38,  -176
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,    54,    55,   160,   161,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    89,    71,   151,   225,   229,    72,     5,     6,    14,
      15,     7,   101,   156,    33,    17,    91,   190,    18,   143,
     144,   145,    92,    93,   102,    85,   216,   217,   218,   219,
     220,    75,    76,    77,    78,    79,    80,    81,    82,    83,
       8,     9,    10,    94,   134
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      98,    97,    84,   196,    88,   115,    16,   200,   203,   231,
     228,   148,    21,   100,    25,   154,    13,    23,    73,     1,
      74,    19,    99,   233,     2,    31,    90,     1,    26,   214,
      24,    11,     2,     3,  -111,   215,   119,   120,    12,   137,
      95,     3,   104,   105,    26,   253,   236,     4,   248,   232,
     239,   135,   135,    96,   114,     4,    28,   135,    29,   149,
     113,   224,   139,   234,   167,   168,   169,   121,   122,   100,
     106,     1,   100,   237,   150,   254,     2,   133,  -148,   112,
      11,    99,   214,   162,   159,     3,   142,    12,   215,   166,
     165,   170,   171,   208,   183,   184,    13,   107,   128,     4,
     129,   108,   109,   110,   111,   198,   123,   124,   125,   126,
     193,   186,   132,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   226,
      73,   150,    74,   116,    86,   214,   172,   173,   117,   118,
     242,   215,   189,   130,   240,   178,   179,   206,    39,    40,
      41,    42,    43,   131,   114,    44,   211,   212,   135,   136,
    -133,    45,    46,    47,    87,    49,    50,    51,    52,   255,
     174,   175,   176,   177,   258,   227,   138,   140,   221,   141,
     114,   114,   146,   147,   222,   153,   142,   157,   152,   150,
     123,   124,   125,   126,    84,   127,   163,   164,   185,   188,
     246,   150,   191,   192,   194,   202,   249,   195,   199,   252,
     251,   114,     1,   201,   207,   210,    34,     2,   257,    84,
     213,   238,    35,   197,    36,   223,     3,   230,   241,   247,
      37,   244,   245,   256,   180,   250,   204,   181,   205,    32,
       4,   155,    38,   182,    30,    22,   114,   209,    39,    40,
      41,    42,    43,   158,   243,    44,    27,    25,  -134,   235,
      20,    45,    46,    47,    48,    49,    50,    51,    52,     1,
       0,   187,     0,    34,     2,     0,     0,     0,     0,    35,
       0,    36,     0,     3,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     0,    38,
       0,     0,     0,     0,     0,    39,    40,    41,    42,    43,
       0,     0,    44,     0,    25,     0,     0,     0,    45,    46,
      47,    48,    49,    50,    51,    52,     1,     0,     0,     0,
       0,     2,    39,    40,    41,    42,    43,     0,     0,    44,
       3,   197,     0,     0,     0,    45,    46,    47,    48,    49,
      50,    51,    52,     0,     4,     0,     0,     0,     0,     0,
       0,     0,    39,    40,    41,    42,    43,     0,     0,    44,
       0,     0,     0,     0,     0,    45,    46,    47,    48,    49,
      50,    51,    52,    34,     0,     0,     0,     0,     0,    35,
       0,    36,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,    39,    40,    41,    42,    43,
       0,     0,    44,     0,    25,     0,     0,     0,    45,    46,
      47,    48,    49,    50,    51,    52,    39,    40,    41,    42,
      43,     0,     0,    44,     0,     0,     0,     0,     0,    45,
      46,    47,    48,    49,    50,    51,    52,    39,    40,    41,
      42,    43,     0,     0,   103,     0,     0,     0,     0,     0,
      45,    46,    47,    48,    49,    50,    51,    52
};

static const yytype_int16 yycheck[] =
{
      38,    37,    26,   153,    28,    57,     6,    48,    48,    52,
     214,    94,    12,    44,    51,    50,    58,    79,    25,     6,
      25,     0,    44,   218,    11,    50,    42,     6,    81,    47,
      92,    42,    11,    20,    50,    53,    59,    60,    49,    77,
      49,    20,    45,    46,    81,   249,   222,    34,   243,    92,
     226,    92,    92,    49,    57,    34,    47,    92,    49,    95,
      81,   211,    86,    81,   116,   117,   118,    65,    66,   100,
      47,     6,   103,   223,    96,   251,    11,    76,    77,    47,
      42,   103,    47,   107,   106,    20,    91,    49,    53,   113,
     112,   119,   120,    80,   132,   133,    58,    49,    71,    34,
      57,    53,    54,    55,    56,   157,    67,    68,    69,    70,
     148,   135,    75,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   212,
     137,   153,   137,    58,    28,    47,   121,   122,    63,    64,
      52,    53,   142,    73,   227,   127,   128,   185,    42,    43,
      44,    45,    46,    74,   157,    49,   194,   195,    92,    79,
      52,    55,    56,    57,    58,    59,    60,    61,    62,   252,
     123,   124,   125,   126,   257,   213,    52,    48,   202,    48,
     183,   184,    92,    50,   206,    49,   191,    50,    79,   211,
      67,    68,    69,    70,   218,    72,    42,    42,    77,    48,
     238,   223,    92,    42,    79,    92,   244,    50,    50,   247,
     246,   214,     6,    50,    50,    36,    10,    11,   256,   243,
      50,    79,    16,    51,    18,    49,    20,    42,    48,    12,
      24,    78,    50,    50,   129,    79,   183,   130,   184,    24,
      34,   100,    36,   131,    18,    13,   249,   191,    42,    43,
      44,    45,    46,   103,   232,    49,    16,    51,    52,   219,
       8,    55,    56,    57,    58,    59,    60,    61,    62,     6,
      -1,   137,    -1,    10,    11,    -1,    -1,    -1,    -1,    16,
      -1,    18,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      -1,    -1,    49,    -1,    51,    -1,    -1,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,     6,    -1,    -1,    -1,
      -1,    11,    42,    43,    44,    45,    46,    -1,    -1,    49,
      20,    51,    -1,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    10,    -1,    -1,    -1,    -1,    -1,    16,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      -1,    -1,    49,    -1,    51,    -1,    -1,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,    42,    43,    44,    45,
      46,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    42,    43,    44,
      45,    46,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    11,    20,    34,   126,   127,   130,   159,   160,
     161,    42,    49,    58,   128,   129,   133,   134,   137,     0,
     160,   133,   137,    79,    92,    51,    81,   151,    47,    49,
     134,    50,   129,   133,    10,    16,    18,    24,    36,    42,
      43,    44,    45,    46,    49,    55,    56,    57,    58,    59,
      60,    61,    62,   100,   101,   102,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   121,   125,   126,   127,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   119,   144,    28,    58,   119,   120,
      42,   135,   141,   142,   162,    49,    49,   125,   162,   121,
     130,   131,   143,    49,   105,   105,    47,    49,    53,    54,
      55,    56,    47,    81,   105,   107,    58,    63,    64,    59,
      60,    65,    66,    67,    68,    69,    70,    72,    71,    57,
      73,    74,    75,    76,   163,    92,    79,   162,    52,   119,
      48,    48,   127,   138,   139,   140,    92,    50,   150,   125,
     121,   122,    79,    49,    50,   131,   132,    50,   143,   121,
     103,   104,   119,    42,    42,   121,   119,   107,   107,   107,
     108,   108,   109,   109,   110,   110,   110,   110,   111,   111,
     112,   113,   114,   162,   162,    77,   119,   153,    48,   133,
     136,    92,    42,   162,    79,    50,   122,    51,   107,    50,
      48,    50,    92,    48,   115,   116,   162,    50,    80,   140,
      36,   162,   162,    50,    47,    53,   145,   146,   147,   148,
     149,   119,   121,    49,   122,   123,   150,   162,   118,   124,
      42,    52,    92,   144,    81,   149,   163,   122,    79,   163,
     150,    48,    52,   147,    78,    50,   162,    12,   144,   162,
      79,   125,   162,   118,   163,   150,    50,   162,   150
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    99,   100,   100,   100,   100,   100,   100,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   102,   102,   103,
     103,   104,   104,   105,   105,   105,   105,   106,   106,   106,
     106,   106,   106,   107,   107,   108,   108,   108,   108,   109,
     109,   109,   110,   110,   110,   111,   111,   111,   111,   111,
     112,   112,   112,   113,   113,   114,   114,   115,   115,   116,
     116,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     121,   122,   123,   123,   124,   125,   125,   126,   127,   128,
     128,   129,   129,   130,   130,   130,   130,   131,   132,   132,
     133,   133,   134,   134,   134,   134,   134,   134,   134,   135,
     136,   137,   137,   138,   138,   139,   139,   140,   141,   141,
     142,   142,   143,   144,   145,   145,   146,   147,   147,   148,
     148,   149,   149,   150,   150,   150,   150,   150,   151,   152,
     152,   153,   153,   154,   154,   155,   156,   156,   157,   157,
     157,   158,   159,   159,   160,   160,   161,   162,   163
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     1,
       4,     3,     3,     2,     2,     6,     7,     4,     4,     1,
       0,     1,     3,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       4,     1,     4,     1,     9,     1,     3,     1,     0,     1,
       3,     1,     1,     0,     1,     1,     0,     3,     1,     1,
       3,     1,     3,     1,     1,     1,     1,     2,     1,     0,
       2,     1,     1,     3,     4,     5,     4,     6,     4,     0,
       0,     1,     2,     1,     3,     1,     3,     2,     1,     3,
       1,     0,     1,     1,     2,     4,     2,     1,     0,     1,
       2,     3,     2,     1,     1,     1,     1,     1,     3,     1,
       3,     1,     1,     1,     0,     2,     7,    10,     7,     9,
      13,     3,     1,     2,     1,     1,     3,     0,     0
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
#line 155 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
				  			(yyval.RO)=current_ST->lookup(yytext);
				  			(yyval.RO)->isconst=false;
				  		}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 160 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
							(yyval.RO)=Sym_table::gentemp(*current_ST);
							(yyval.RO)->isBoolExp=false;
							(yyval.RO)->init_val=yytext;
							(yyval.RO)->size=4;
							(yyval.RO)->isconst=true;
							(yyval.RO)->offset=currentoffset;
							(yyval.RO)->Typ=inttype;
							currentoffset+=4;
							quad_array.push_back(quad((yyval.RO)->Name,yytext));
						}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 172 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
							(yyval.RO)=Sym_table::gentemp(*current_ST);
							(yyval.RO)->isBoolExp=false;
							(yyval.RO)->isconst=true;
							(yyval.RO)->init_val=yytext;
							(yyval.RO)->size=8;
							(yyval.RO)->offset=currentoffset;
							(yyval.RO)->Typ=doubletype;
							currentoffset+=8;
							quad_array.push_back(quad((yyval.RO)->Name,yytext));
				  		}
#line 1729 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 184 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
				  			(yyval.RO)=Sym_table::gentemp(*current_ST);
							(yyval.RO)->isBoolExp=false;
							(yyval.RO)->isconst=true;
                    		(yyval.RO)->init_val=yytext;
                    		(yyval.RO)->offset=currentoffset;
                    		currentoffset+=8;
							quad_array.push_back(quad((yyval.RO)->Name,yytext));
				  		}
#line 1743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 194 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
				  			(yyval.RO)=Sym_table::gentemp(*current_ST);
							(yyval.RO)->isBoolExp=false;
							(yyval.RO)->isconst=true;
							(yyval.RO)->init_val=yytext[1];
							(yyval.RO)->size=1;
							(yyval.RO)->offset=currentoffset;
							currentoffset+=1;
							(yyval.RO)->Typ=chartype;
							quad_array.push_back(quad((yyval.RO)->Name,yytext));
				  		}
#line 1759 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 206 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
				  			(yyval.RO)=(yyvsp[-1].RO);
				  		}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 212 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 1773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 214 "ass5_14CS30017.y" /* yacc.c:1646  */
    {	
				  		struct row* t=Sym_table::gentemp(*current_ST);
				  		(yyval.RO)=Sym_table::gentemp(*current_ST);
				  		struct row* temp=current_ST->lookup(array_name);
				  		int i=0;
				  		while((yyvsp[0].RO)->typ_vector[i].second==3&&i<(yyvsp[0].RO)->typ_vector.size())i++;
            			if((yyvsp[0].RO)->typ_vector[i].second==0){(yyval.RO)->Typ=inttype;
            			(yyval.RO)->size=4;}
            			if((yyvsp[0].RO)->typ_vector[i].second==1){(yyval.RO)->Typ=doubletype;
            			(yyval.RO)->size=8;}
            			if((yyvsp[0].RO)->typ_vector[i].second==2){(yyval.RO)->Typ=chartype;
            			(yyval.RO)->size=1;}
            			if((yyvsp[0].RO)->typ_vector[i].second==9){(yyval.RO)->Typ=stringtype;
            			(yyval.RO)->size=8;}
            			(yyval.RO)->offset=currentoffset;
            			currentoffset+=(yyval.RO)->size;
            			char c[30];
            			sprintf(c,"%d",(yyval.RO)->size);
            			string s(c);
            			quad_array.push_back(quad("*",t->Name,s,(yyvsp[0].RO)->Name));
				  		quad_array.push_back(quad("=[]",(yyval.RO)->Name,array_name,t->Name));
				  	}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 237 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
				  		(yyval.RO)=current_ST->lookup((yyvsp[-3].RO)->Name)->nested_Table->lookup("RetVal");
				  		int N=current_ST->lookup((yyvsp[-3].RO)->Name)->nested_Table->size-1;
				  		for(int i=0;i<par_list.size();i++)quad_array.push_back(quad("param ",par_list[i]));
				  		par_list.clear();
				  		quad_array.push_back(quad("call",(yyvsp[-3].RO)->Name,N));
				  	}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 247 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
				  		(yyval.RO)=Sym_table::gentemp(*current_ST);
						(yyval.RO)->isBoolExp=false;
				  		(yyval.RO)->offset=currentoffset;
				  		(yyval.RO)->Typ=(yyvsp[-1].RO)->Typ;
				  		(yyval.RO)->size=(yyvsp[-1].RO)->size;
				  		(yyval.RO)->init_val=(yyvsp[-1].RO)->init_val;
				  		currentoffset+=(yyvsp[-1].RO)->size;
				  		quad_array.push_back(quad((yyval.RO)->Name,(yyvsp[-1].RO)->Name));
				  		quad_array.push_back(quad("+",(yyvsp[-1].RO)->Name,(yyval.RO)->Name,"1"));
				  	}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 259 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
				  		(yyval.RO)=Sym_table::gentemp(*current_ST);
						(yyval.RO)->isBoolExp=false;
				  		(yyval.RO)->offset=currentoffset;
				  		(yyval.RO)->Typ=(yyvsp[-1].RO)->Typ;
				  		(yyval.RO)->size=(yyvsp[-1].RO)->size;
				  		(yyval.RO)->init_val=(yyvsp[-1].RO)->init_val;
				  		currentoffset+=(yyvsp[-1].RO)->size;
				  		quad_array.push_back(quad((yyval.RO)->Name,(yyvsp[-1].RO)->Name));
				  		quad_array.push_back(quad("-",(yyvsp[-1].RO)->Name,(yyval.RO)->Name,"1"));
				  	}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 270 "ass5_14CS30017.y" /* yacc.c:1646  */
    {}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 271 "ass5_14CS30017.y" /* yacc.c:1646  */
    {}
#line 1856 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 276 "ass5_14CS30017.y" /* yacc.c:1646  */
    {      	
            	if((yyvsp[-3].RO)->typ_vector.size()==0)cout<<"Error\n";
            	else {
            		array_name=(yyvsp[-3].RO)->Name;
            		(yyval.RO)=(yyvsp[-3].RO);
            		(yyval.RO)->Name=(yyvsp[-1].RO)->Name;
            	}
            }
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 285 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
            		if((yyvsp[-3].RO)->typ_vector.size()==0)cout<<"Error\n";
            		else {
            		struct row* t=Sym_table::gentemp(*current_ST);
            		(yyval.RO)=Sym_table::gentemp(*current_ST);
            		char c[30];
            		sprintf(c,"%d",(yyvsp[-3].RO)->typ_vector[1].first);
            		string s(c);
            		quad_array.push_back(quad("*",t->Name,(yyvsp[-3].RO)->Name,s));
            		quad_array.push_back(quad("+",(yyval.RO)->Name,t->Name,(yyvsp[-1].RO)->Name));
            		int i=1;
            		while(i<(yyvsp[-3].RO)->typ_vector.size()){(yyval.RO)->typ_vector.push_back((yyvsp[-3].RO)->typ_vector[i]);i++;}
            		}
            	}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 302 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 303 "ass5_14CS30017.y" /* yacc.c:1646  */
    {}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 307 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);par_list.push_back((yyvsp[0].RO)->Name);}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 308 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[-2].RO);par_list.push_back((yyvsp[0].RO)->Name);}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 312 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 314 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
				  		quad_array.push_back(quad("+",(yyvsp[0].RO)->Name,(yyvsp[0].RO)->Name,"1"));
						(yyval.RO)=Sym_table::gentemp(*current_ST);
						(yyval.RO)->isBoolExp=false;
				  		(yyval.RO)->offset=currentoffset;
				  		(yyval.RO)->Typ=(yyvsp[0].RO)->Typ;
				  		(yyval.RO)->size=(yyvsp[0].RO)->size;
				  		(yyval.RO)->init_val=(yyvsp[0].RO)->init_val;
				  		currentoffset+=(yyvsp[0].RO)->size;
				  		quad_array.push_back(quad((yyval.RO)->Name,(yyvsp[0].RO)->Name));
					}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 326 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
						(yyval.RO)=Sym_table::gentemp(*current_ST);
						(yyval.RO)->isBoolExp=false;
				  		(yyval.RO)->offset=currentoffset;
				  		(yyval.RO)->Typ=(yyvsp[0].RO)->Typ;
				  		(yyval.RO)->size=(yyvsp[0].RO)->size;
				  		(yyval.RO)->init_val=(yyvsp[0].RO)->init_val;
				  		currentoffset+=(yyvsp[0].RO)->size;
				  		quad_array.push_back(quad("-",(yyvsp[0].RO)->Name,(yyvsp[0].RO)->Name,"1"));
				  		quad_array.push_back(quad((yyval.RO)->Name,(yyvsp[0].RO)->Name));
					}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 338 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
						(yyval.RO)=Sym_table::gentemp(*current_ST);
						(yyval.RO)->isBoolExp=false;
						(yyval.RO)->Typ=(yyvsp[0].RO)->Typ;
				  		(yyval.RO)->size=(yyvsp[0].RO)->size;
						(yyval.RO)->offset=currentoffset;
						currentoffset+=(yyvsp[0].RO)->size;
						string s(1,(yyvsp[-1].charval));
						quad_array.push_back(quad(s,(yyval.RO)->Name,(yyvsp[0].RO)->Name));
					}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 351 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.charval)='&';}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 352 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.charval)='*';}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 353 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.charval)='+';}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 354 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.charval)='-';}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 355 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.charval)='~';}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 356 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.charval)='!';}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 360 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 362 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
			   		(yyval.RO)=(yyvsp[0].RO);
			   		if((yyvsp[-2].intval)==0)(yyval.RO)->Typ=inttype;
			   		if((yyvsp[-2].intval)==1)(yyval.RO)->Typ=doubletype;
			   		if((yyvsp[-2].intval)==2)(yyval.RO)->Typ=chartype;
			   		if((yyvsp[-2].intval)==8)(yyval.RO)->Typ=voidtype;
			   	}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 372 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 374 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
								int flag=1;
								if(typecheck((yyvsp[-2].RO),(yyvsp[0].RO))!=true){
								if((yyvsp[-2].RO)->Typ==chartype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[-2].RO)=char2int((yyvsp[-2].RO));
								else if((yyvsp[0].RO)->Typ==chartype&&(yyvsp[-2].RO)->Typ==inttype)(yyvsp[0].RO)=char2int((yyvsp[0].RO));
								else if((yyvsp[-2].RO)->Typ==inttype&&(yyvsp[0].RO)->Typ==doubletype)(yyvsp[-2].RO)=int2doub((yyvsp[-2].RO));
								else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[0].RO)=int2doub((yyvsp[0].RO));
								else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==chartype)(yyvsp[0].RO)=char2doub((yyvsp[0].RO));
								else if((yyvsp[0].RO)->Typ==doubletype&&(yyvsp[-2].RO)->Typ==chartype)(yyvsp[-2].RO)=char2doub((yyvsp[-2].RO));
								else {flag=0;}
								}
								if(flag==1){
									(yyval.RO)=Sym_table::gentemp(*current_ST);
									(yyval.RO)->isBoolExp=false;
									(yyval.RO)->Typ=(yyvsp[-2].RO)->Typ;
				  					(yyval.RO)->size=(yyvsp[-2].RO)->size;
									(yyval.RO)->offset=currentoffset;
									currentoffset+=(yyvsp[-2].RO)->size;
									string s(1,'*');
									quad_array.push_back(quad(s,(yyval.RO)->Name,(yyvsp[-2].RO)->Name,(yyvsp[0].RO)->Name));
								}
							}
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 397 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
								int flag=1;
								if(typecheck((yyvsp[-2].RO),(yyvsp[0].RO))!=true){
								if((yyvsp[-2].RO)->Typ==chartype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[-2].RO)=char2int((yyvsp[-2].RO));
								else if((yyvsp[0].RO)->Typ==chartype&&(yyvsp[-2].RO)->Typ==inttype)(yyvsp[0].RO)=char2int((yyvsp[0].RO));
								else if((yyvsp[-2].RO)->Typ==inttype&&(yyvsp[0].RO)->Typ==doubletype)(yyvsp[-2].RO)=int2doub((yyvsp[-2].RO));
								else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[0].RO)=int2doub((yyvsp[0].RO));
								else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==chartype)(yyvsp[0].RO)=char2doub((yyvsp[0].RO));
								else if((yyvsp[0].RO)->Typ==doubletype&&(yyvsp[-2].RO)->Typ==chartype)(yyvsp[-2].RO)=char2doub((yyvsp[-2].RO));
								else {flag=0;}
								}
								if(flag==1){
									(yyval.RO)=Sym_table::gentemp(*current_ST);
									(yyval.RO)->isBoolExp=false;
									(yyval.RO)->Typ=(yyvsp[-2].RO)->Typ;
				  					(yyval.RO)->size=(yyvsp[-2].RO)->size;
									(yyval.RO)->offset=currentoffset;
									currentoffset+=(yyvsp[-2].RO)->size;
									string s(1,'/');
									quad_array.push_back(quad(s,(yyval.RO)->Name,(yyvsp[-2].RO)->Name,(yyvsp[0].RO)->Name));
								}
							}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 420 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
								int flag=1;
								if(typecheck((yyvsp[-2].RO),(yyvsp[0].RO))!=true){
								if((yyvsp[-2].RO)->Typ==chartype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[-2].RO)=char2int((yyvsp[-2].RO));
								else if((yyvsp[0].RO)->Typ==chartype&&(yyvsp[-2].RO)->Typ==inttype)(yyvsp[0].RO)=char2int((yyvsp[0].RO));
								else if((yyvsp[-2].RO)->Typ==inttype&&(yyvsp[0].RO)->Typ==doubletype)(yyvsp[-2].RO)=int2doub((yyvsp[-2].RO));
								else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[0].RO)=int2doub((yyvsp[0].RO));
								else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==chartype)(yyvsp[0].RO)=char2doub((yyvsp[0].RO));
								else if((yyvsp[0].RO)->Typ==doubletype&&(yyvsp[-2].RO)->Typ==chartype)(yyvsp[-2].RO)=char2doub((yyvsp[-2].RO));
								else {flag=0;}
								}
								if(flag==1){
									(yyval.RO)=Sym_table::gentemp(*current_ST);
									(yyval.RO)->isBoolExp=false;
									(yyval.RO)->Typ=(yyvsp[-2].RO)->Typ;
				  					(yyval.RO)->size=(yyvsp[-2].RO)->size;
									(yyval.RO)->offset=currentoffset;
									currentoffset+=(yyvsp[-2].RO)->size;
									string s(1,'%');
									quad_array.push_back(quad(s,(yyval.RO)->Name,(yyvsp[-2].RO)->Name,(yyvsp[0].RO)->Name));
								}
							}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 445 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 447 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
				   		int flag=1;
						if(typecheck((yyvsp[-2].RO),(yyvsp[0].RO))!=true){
						if((yyvsp[-2].RO)->Typ==chartype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[-2].RO)=char2int((yyvsp[-2].RO));
						else if((yyvsp[0].RO)->Typ==chartype&&(yyvsp[-2].RO)->Typ==inttype)(yyvsp[0].RO)=char2int((yyvsp[0].RO));
						else if((yyvsp[-2].RO)->Typ==inttype&&(yyvsp[0].RO)->Typ==doubletype)(yyvsp[-2].RO)=int2doub((yyvsp[-2].RO));
						else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[0].RO)=int2doub((yyvsp[0].RO));
						else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==chartype)(yyvsp[0].RO)=char2doub((yyvsp[0].RO));
						else if((yyvsp[0].RO)->Typ==doubletype&&(yyvsp[-2].RO)->Typ==chartype)(yyvsp[-2].RO)=char2doub((yyvsp[-2].RO));
						else {flag=0;}
						}
						if(flag==1){
						(yyval.RO)=Sym_table::gentemp(*current_ST);
						(yyval.RO)->isBoolExp=false;
						(yyval.RO)->Typ=(yyvsp[-2].RO)->Typ;
				  		(yyval.RO)->size=(yyvsp[-2].RO)->size;
						(yyval.RO)->offset=currentoffset;
						currentoffset+=(yyvsp[-2].RO)->size;
						string s(1,'+');
						quad_array.push_back(quad(s,(yyval.RO)->Name,(yyvsp[-2].RO)->Name,(yyvsp[0].RO)->Name));
						}
				   	}
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 470 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
				   		int flag=1;
						if(typecheck((yyvsp[-2].RO),(yyvsp[0].RO))!=true){
						if((yyvsp[-2].RO)->Typ==chartype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[-2].RO)=char2int((yyvsp[-2].RO));
						else if((yyvsp[0].RO)->Typ==chartype&&(yyvsp[-2].RO)->Typ==inttype)(yyvsp[0].RO)=char2int((yyvsp[0].RO));
						else if((yyvsp[-2].RO)->Typ==inttype&&(yyvsp[0].RO)->Typ==doubletype)(yyvsp[-2].RO)=int2doub((yyvsp[-2].RO));
						else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[0].RO)=int2doub((yyvsp[0].RO));
						else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==chartype)(yyvsp[0].RO)=char2doub((yyvsp[0].RO));
						else if((yyvsp[0].RO)->Typ==doubletype&&(yyvsp[-2].RO)->Typ==chartype)(yyvsp[-2].RO)=char2doub((yyvsp[-2].RO));
						else {flag=0;}
						}
						if(flag==1){
						(yyval.RO)=Sym_table::gentemp(*current_ST);
						(yyval.RO)->isBoolExp=false;
						(yyval.RO)->Typ=(yyvsp[-2].RO)->Typ;
				  		(yyval.RO)->size=(yyvsp[-2].RO)->size;
						(yyval.RO)->offset=currentoffset;
						currentoffset+=(yyvsp[-2].RO)->size;
						string s(1,'-');
						quad_array.push_back(quad(s,(yyval.RO)->Name,(yyvsp[-2].RO)->Name,(yyvsp[0].RO)->Name));
						}
				   	}
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 495 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 497 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
						int flag=1;
						if(typecheck((yyvsp[-2].RO),(yyvsp[0].RO))!=true){
						if((yyvsp[-2].RO)->Typ==chartype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[-2].RO)=char2int((yyvsp[-2].RO));
						else if((yyvsp[0].RO)->Typ==chartype&&(yyvsp[-2].RO)->Typ==inttype)(yyvsp[0].RO)=char2int((yyvsp[0].RO));
						else if((yyvsp[-2].RO)->Typ==inttype&&(yyvsp[0].RO)->Typ==doubletype)(yyvsp[-2].RO)=int2doub((yyvsp[-2].RO));
						else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[0].RO)=int2doub((yyvsp[0].RO));
						else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==chartype)(yyvsp[0].RO)=char2doub((yyvsp[0].RO));
						else if((yyvsp[0].RO)->Typ==doubletype&&(yyvsp[-2].RO)->Typ==chartype)(yyvsp[-2].RO)=char2doub((yyvsp[-2].RO));
						else {flag=0;}
						}
						if(flag==1){
						(yyval.RO)=Sym_table::gentemp(*current_ST);
						(yyval.RO)->isBoolExp=false;
						(yyval.RO)->Typ=(yyvsp[-2].RO)->Typ;
				  		(yyval.RO)->size=(yyvsp[-2].RO)->size;
						(yyval.RO)->offset=currentoffset;
						currentoffset+=(yyvsp[-2].RO)->size;
						string s(2,'<<');
						quad_array.push_back(quad(s,(yyval.RO)->Name,(yyvsp[-2].RO)->Name,(yyvsp[0].RO)->Name));
						}
					}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 520 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
						int flag=1;
						if(typecheck((yyvsp[-2].RO),(yyvsp[0].RO))!=true){
						if((yyvsp[-2].RO)->Typ==chartype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[-2].RO)=char2int((yyvsp[-2].RO));
						else if((yyvsp[0].RO)->Typ==chartype&&(yyvsp[-2].RO)->Typ==inttype)(yyvsp[0].RO)=char2int((yyvsp[0].RO));
						else if((yyvsp[-2].RO)->Typ==inttype&&(yyvsp[0].RO)->Typ==doubletype)(yyvsp[-2].RO)=int2doub((yyvsp[-2].RO));
						else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[0].RO)=int2doub((yyvsp[0].RO));
						else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==chartype)(yyvsp[0].RO)=char2doub((yyvsp[0].RO));
						else if((yyvsp[0].RO)->Typ==doubletype&&(yyvsp[-2].RO)->Typ==chartype)(yyvsp[-2].RO)=char2doub((yyvsp[-2].RO));
						else {flag=0;}
						}
						if(flag==1){
						(yyval.RO)=Sym_table::gentemp(*current_ST);
						(yyval.RO)->isBoolExp=false;
						(yyval.RO)->Typ=(yyvsp[-2].RO)->Typ;
				  		(yyval.RO)->size=(yyvsp[-2].RO)->size;
						(yyval.RO)->offset=currentoffset;
						currentoffset+=(yyvsp[-2].RO)->size;
						string s(2,'>>');
						quad_array.push_back(quad(s,(yyval.RO)->Name,(yyvsp[-2].RO)->Name,(yyvsp[0].RO)->Name));
						}
					}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 545 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 547 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
					 		(yyval.RO)=new struct row();
							(yyval.RO)->truelist=makelist(quad_array.size());
							(yyval.RO)->falselist=makelist(quad_array.size()+1);
							(yyval.RO)->isBoolExp=true;
							quad_array.push_back(quad("<","...",(yyvsp[-2].RO)->Name,(yyvsp[0].RO)->Name));
							quad_array.push_back(quad("goto","...",(yyvsp[-2].RO)->Name));
					 	}
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 556 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
					 		(yyval.RO)=new struct row();
							(yyval.RO)->truelist=makelist(quad_array.size());
							(yyval.RO)->falselist=makelist(quad_array.size()+1);
							(yyval.RO)->isBoolExp=true;
							quad_array.push_back(quad(">","...",(yyvsp[-2].RO)->Name,(yyvsp[0].RO)->Name));
							quad_array.push_back(quad("goto","...",(yyvsp[-2].RO)->Name));
					 	}
#line 2258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 565 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
					 		(yyval.RO)=new struct row();
							(yyval.RO)->truelist=makelist(quad_array.size());
							(yyval.RO)->falselist=makelist(quad_array.size()+1);
							(yyval.RO)->isBoolExp=true;
							quad_array.push_back(quad("<=","...",(yyvsp[-2].RO)->Name,(yyvsp[0].RO)->Name));
							quad_array.push_back(quad("goto","...",(yyvsp[-2].RO)->Name));
					 	}
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 574 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
					 		(yyval.RO)=new struct row();
							(yyval.RO)->truelist=makelist(quad_array.size());
							(yyval.RO)->falselist=makelist(quad_array.size()+1);
							(yyval.RO)->isBoolExp=true;
							quad_array.push_back(quad(">=","...",(yyvsp[-2].RO)->Name,(yyvsp[0].RO)->Name));
							quad_array.push_back(quad("goto","...",(yyvsp[-2].RO)->Name));
					 	}
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 585 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 587 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
				   		(yyval.RO)=new struct row();
						(yyval.RO)->truelist=makelist(quad_array.size());
						(yyval.RO)->falselist=makelist(quad_array.size()+1);
						(yyval.RO)->isBoolExp=true;
						quad_array.push_back(quad("==","...",(yyvsp[-2].RO)->Name,(yyvsp[0].RO)->Name));
						quad_array.push_back(quad("goto","...",(yyvsp[-2].RO)->Name));
				   	}
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 596 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
				   		(yyval.RO)=new struct row();
						(yyval.RO)->truelist=makelist(quad_array.size());
						(yyval.RO)->falselist=makelist(quad_array.size()+1);
						(yyval.RO)->isBoolExp=true;
						quad_array.push_back(quad("!=","...",(yyvsp[-2].RO)->Name,(yyvsp[0].RO)->Name));
						quad_array.push_back(quad("goto","...",(yyvsp[-2].RO)->Name));
				   	}
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 607 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 609 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
					int flag=1;
					if(typecheck((yyvsp[-2].RO),(yyvsp[0].RO))!=true){
					if((yyvsp[-2].RO)->Typ==chartype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[-2].RO)=char2int((yyvsp[-2].RO));
					else if((yyvsp[0].RO)->Typ==chartype&&(yyvsp[-2].RO)->Typ==inttype)(yyvsp[0].RO)=char2int((yyvsp[0].RO));
					else if((yyvsp[-2].RO)->Typ==inttype&&(yyvsp[0].RO)->Typ==doubletype)(yyvsp[-2].RO)=int2doub((yyvsp[-2].RO));
					else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[0].RO)=int2doub((yyvsp[0].RO));
					else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==chartype)(yyvsp[0].RO)=char2doub((yyvsp[0].RO));
					else if((yyvsp[0].RO)->Typ==doubletype&&(yyvsp[-2].RO)->Typ==chartype)(yyvsp[-2].RO)=char2doub((yyvsp[-2].RO));
					else {flag=0;}
					}
					if(flag==1){
					(yyval.RO)=Sym_table::gentemp(*current_ST);
					(yyval.RO)->isBoolExp=false;
					(yyval.RO)->Typ=(yyvsp[-2].RO)->Typ;
					(yyval.RO)->size=(yyvsp[-2].RO)->size;
					(yyval.RO)->offset=currentoffset;
					currentoffset+=(yyvsp[-2].RO)->size;
					string s(1,'&');
					quad_array.push_back(quad(s,(yyval.RO)->Name,(yyvsp[-2].RO)->Name,(yyvsp[0].RO)->Name));
					}
				}
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 634 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 636 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
							int flag=1;
							if(typecheck((yyvsp[-2].RO),(yyvsp[0].RO))!=true){
							if((yyvsp[-2].RO)->Typ==chartype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[-2].RO)=char2int((yyvsp[-2].RO));
							else if((yyvsp[0].RO)->Typ==chartype&&(yyvsp[-2].RO)->Typ==inttype)(yyvsp[0].RO)=char2int((yyvsp[0].RO));
							else if((yyvsp[-2].RO)->Typ==inttype&&(yyvsp[0].RO)->Typ==doubletype)(yyvsp[-2].RO)=int2doub((yyvsp[-2].RO));
							else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[0].RO)=int2doub((yyvsp[0].RO));
							else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==chartype)(yyvsp[0].RO)=char2doub((yyvsp[0].RO));
							else if((yyvsp[0].RO)->Typ==doubletype&&(yyvsp[-2].RO)->Typ==chartype)(yyvsp[-2].RO)=char2doub((yyvsp[-2].RO));
							else {flag=0;}
							}
							if(flag==1){
							(yyval.RO)=Sym_table::gentemp(*current_ST);
							(yyval.RO)->isBoolExp=false;
							(yyval.RO)->Typ=(yyvsp[-2].RO)->Typ;
					  		(yyval.RO)->size=(yyvsp[-2].RO)->size;
							(yyval.RO)->offset=currentoffset;
							currentoffset+=(yyvsp[-2].RO)->size;
							string s(1,'^');
							quad_array.push_back(quad(s,(yyval.RO)->Name,(yyvsp[-2].RO)->Name,(yyvsp[0].RO)->Name));
							}
						}
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 661 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 663 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
							int flag=1;
							if(typecheck((yyvsp[-2].RO),(yyvsp[0].RO))!=true){
							if((yyvsp[-2].RO)->Typ==chartype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[-2].RO)=char2int((yyvsp[-2].RO));
							else if((yyvsp[0].RO)->Typ==chartype&&(yyvsp[-2].RO)->Typ==inttype)(yyvsp[0].RO)=char2int((yyvsp[0].RO));
							else if((yyvsp[-2].RO)->Typ==inttype&&(yyvsp[0].RO)->Typ==doubletype)(yyvsp[-2].RO)=int2doub((yyvsp[-2].RO));
							else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[0].RO)=int2doub((yyvsp[0].RO));
							else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==chartype)(yyvsp[0].RO)=char2doub((yyvsp[0].RO));
							else if((yyvsp[0].RO)->Typ==doubletype&&(yyvsp[-2].RO)->Typ==chartype)(yyvsp[-2].RO)=char2doub((yyvsp[-2].RO));
							else {flag=0;}
							}
							if(flag==1){
							(yyval.RO)=Sym_table::gentemp(*current_ST);
							(yyval.RO)->isBoolExp=false;
							(yyval.RO)->Typ=(yyvsp[-2].RO)->Typ;
					  		(yyval.RO)->size=(yyvsp[-2].RO)->size;
							(yyval.RO)->offset=currentoffset;
							currentoffset+=(yyvsp[-2].RO)->size;
							string s(1,'|');
							quad_array.push_back(quad(s,(yyval.RO)->Name,(yyvsp[-2].RO)->Name,(yyvsp[0].RO)->Name));
							}
						}
#line 2415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 688 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 690 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
					  		(yyval.RO)=new struct row();
							if((yyvsp[-3].RO)->isBoolExp==false)(yyvsp[-3].RO)=int2bool((yyvsp[-3].RO));
							if((yyvsp[0].RO)->isBoolExp==false)(yyvsp[0].RO)=int2bool((yyvsp[0].RO));
							(yyval.RO)->isBoolExp=true;
							backpatch((yyvsp[-3].RO)->truelist,(yyvsp[-1].intval));
							(yyval.RO)->falselist=merge((yyvsp[-3].RO)->falselist,(yyvsp[0].RO)->falselist);
							(yyval.RO)->truelist=(yyvsp[0].RO)->truelist;
						}
#line 2435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 702 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2441 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 704 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
					 		(yyval.RO)=new struct row();	
							if((yyvsp[-3].RO)->isBoolExp==false)(yyvsp[-3].RO)=int2bool((yyvsp[-3].RO));
							if((yyvsp[0].RO)->isBoolExp==false)(yyvsp[0].RO)=int2bool((yyvsp[0].RO));
							(yyval.RO)->isBoolExp=true;
							backpatch((yyvsp[-3].RO)->falselist,(yyvsp[-1].intval));
							(yyval.RO)->truelist=merge((yyvsp[-3].RO)->truelist,(yyvsp[0].RO)->truelist);
							(yyval.RO)->falselist=(yyvsp[0].RO)->falselist;
					 	}
#line 2455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 716 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 717 "ass5_14CS30017.y" /* yacc.c:1646  */
    {}
#line 2467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 721 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 723 "ass5_14CS30017.y" /* yacc.c:1646  */
    {	
							int flag=1;
							if(typecheck((yyvsp[-2].RO),(yyvsp[0].RO))!=true){
							if((yyvsp[-2].RO)->Typ==chartype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[-2].RO)=char2int((yyvsp[-2].RO));
							else if((yyvsp[0].RO)->Typ==chartype&&(yyvsp[-2].RO)->Typ==inttype)(yyvsp[0].RO)=char2int((yyvsp[0].RO));
							else if((yyvsp[-2].RO)->Typ==inttype&&(yyvsp[0].RO)->Typ==doubletype)(yyvsp[-2].RO)=int2doub((yyvsp[-2].RO));
							else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==inttype)(yyvsp[0].RO)=int2doub((yyvsp[0].RO));
							else if((yyvsp[-2].RO)->Typ==doubletype&&(yyvsp[0].RO)->Typ==chartype)(yyvsp[0].RO)=char2doub((yyvsp[0].RO));
							else if((yyvsp[0].RO)->Typ==doubletype&&(yyvsp[-2].RO)->Typ==chartype)(yyvsp[-2].RO)=char2doub((yyvsp[-2].RO));
							else {flag=0;}
							}
							if(flag==1){
							(yyval.RO)=Sym_table::gentemp(*current_ST);
							(yyval.RO)->isBoolExp=false;
							(yyval.RO)->Typ=(yyvsp[-2].RO)->Typ;
					  		(yyval.RO)->size=(yyvsp[-2].RO)->size;
							(yyval.RO)->offset=currentoffset;
							currentoffset+=(yyvsp[-2].RO)->size;
							string s(1,'=');
							quad_array.push_back(quad(s,(yyvsp[-2].RO)->Name,(yyvsp[0].RO)->Name));
							}
						}
#line 2500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 748 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 749 "ass5_14CS30017.y" /* yacc.c:1646  */
    {}
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 753 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 758 "ass5_14CS30017.y" /* yacc.c:1646  */
    {if((yyvsp[0].RO)->isBoolExp!=true)(yyvsp[0].RO)=int2bool((yyvsp[0].RO));
				(yyval.RO)=(yyvsp[0].RO);}
#line 2525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 763 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 764 "ass5_14CS30017.y" /* yacc.c:1646  */
    {}
#line 2537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 768 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 773 "ass5_14CS30017.y" /* yacc.c:1646  */
    {}
#line 2549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 778 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
		   		(yyval.RO)=(yyvsp[-1].RO);
		   	}
#line 2557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 785 "ass5_14CS30017.y" /* yacc.c:1646  */
    {	
					   		(yyval.intval)=(yyvsp[0].intval);
					   	}
#line 2565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 791 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 793 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
						(yyval.RO)=(yyvsp[0].RO);
					}
#line 2579 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 799 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2585 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 801 "ass5_14CS30017.y" /* yacc.c:1646  */
    {	
			   		(yyval.RO)=current_ST->Sym_table::lookup((yyvsp[-2].RO)->Name);
			   		(yyval.RO)->init_val=(yyvsp[0].RO)->init_val;
			   		quad_array.push_back(quad((yyval.RO)->Name,(yyvsp[0].RO)->Name));
			   	}
#line 2595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 810 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
			  		store_type=voidtype;
			  		(yyval.intval)=voidtype;
			  	}
#line 2604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 815 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
			  		store_type=chartype;
			  		(yyval.intval)=chartype;
			  	}
#line 2613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 820 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
			  		store_type=inttype;
			  		(yyval.intval)=inttype;
			  	}
#line 2622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 825 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
			  		store_type=doubletype;
			  		(yyval.intval)=doubletype;
			  	}
#line 2631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 833 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
								(yyval.intval)=(yyvsp[-1].intval);
							}
#line 2639 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 845 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
		  		if((yyvsp[0].RO)->Typ==inttype)(yyvsp[0].RO)->Typ=ptr_int;
		  		else if((yyvsp[0].RO)->Typ==doubletype){(yyvsp[0].RO)->Typ=ptr_double;
		  		currentoffset-=4;}
		  		else if((yyvsp[0].RO)->Typ==chartype){(yyvsp[0].RO)->Typ=ptr_char;
		  		currentoffset+=3;}
		  		(yyvsp[0].RO)->size=4;
		  		(yyval.RO)=(yyvsp[0].RO);
		  	}
#line 2653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 855 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
		  			(yyval.RO)=(yyvsp[0].RO);
		  		}
#line 2661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 862 "ass5_14CS30017.y" /* yacc.c:1646  */
    {	
				   		(yyval.RO)=current_ST->lookup(yytext);
				   		(yyval.RO)->offset=currentoffset;
				   		if(store_type==0){(yyval.RO)->Typ=inttype;
				   		(yyval.RO)->size=4;}
				   		if(store_type==1){(yyval.RO)->Typ=doubletype;
				   		(yyval.RO)->size=8;}
				   		if(store_type==2){(yyval.RO)->Typ=chartype;
				   		(yyval.RO)->size=1;}
				   		if(store_type==5){(yyval.RO)->Typ=ptr_int;
				   		(yyval.RO)->size=4;}
				   		if(store_type==6){(yyval.RO)->Typ=ptr_double;
				   		(yyval.RO)->size=4;}
				   		if(store_type==7){(yyval.RO)->Typ=ptr_char;
				   		(yyval.RO)->size=4;}
				   		if(store_type==8){(yyval.RO)->Typ=voidtype;
				   		(yyval.RO)->size=0;}
				   		if(store_type==9){(yyval.RO)->Typ=stringtype;
				   		(yyval.RO)->size=8;}
				   		currentoffset+=(yyval.RO)->size;
				   	}
#line 2687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 883 "ass5_14CS30017.y" /* yacc.c:1646  */
    {}
#line 2693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 885 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
				   		currentoffset-=(yyvsp[-3].RO)->size;
				   		(yyval.RO)=current_ST->lookup((yyvsp[-3].RO)->Name);
				   		int temp=(yyvsp[-3].RO)->offset;
				   		(yyvsp[-3].RO)->offset=(yyvsp[-1].RO)->offset;
				   		(yyvsp[-1].RO)->offset=temp;
				   		(yyval.RO)->Typ=arraytype;
				   		if(store_type==0){(yyval.RO)->size=(yyvsp[-3].RO)->size*atoi((yyvsp[-1].RO)->init_val.c_str());}
				   		if(store_type==1){(yyval.RO)->size=(yyvsp[-3].RO)->size*atoi((yyvsp[-1].RO)->init_val.c_str());}
				   		if(store_type==2){(yyval.RO)->size=(yyvsp[-3].RO)->size*atoi((yyvsp[-1].RO)->init_val.c_str());}
				   		currentoffset+=(yyval.RO)->size;
				   		(yyval.RO)->typ_vector.push_back(make_pair(atoi((yyvsp[-1].RO)->init_val.c_str()),store_type));
				   	}
#line 2711 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 901 "ass5_14CS30017.y" /* yacc.c:1646  */
    {	
				   		struct row* temp=(yyvsp[-3].SYT)->lookup("RetVal");
				   		temp->Typ=(yyvsp[-5].RO)->Typ;
				   		(yyvsp[-5].RO)->nested_Table=(yyvsp[-3].SYT);
				   		(yyvsp[-5].RO)->Typ=functiontype;
				   	}
#line 2722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 911 "ass5_14CS30017.y" /* yacc.c:1646  */
    {global_ST=current_ST;
			(yyval.SYT)=current_ST=new Sym_table();
			globaloffset=currentoffset;
			currentoffset=0;}
#line 2731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 918 "ass5_14CS30017.y" /* yacc.c:1646  */
    {current_ST=global_ST;
			currentoffset=globaloffset;}
#line 2738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 928 "ass5_14CS30017.y" /* yacc.c:1646  */
    {}
#line 2744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 933 "ass5_14CS30017.y" /* yacc.c:1646  */
    {current_ST->param_count++;}
#line 2750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 934 "ass5_14CS30017.y" /* yacc.c:1646  */
    {current_ST->param_count++;}
#line 2756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 956 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 984 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 985 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 986 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 987 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 988 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 993 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
				  		(yyval.RO)=(yyvsp[-1].RO);
				  	}
#line 2800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 999 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
			   		(yyval.RO)=(yyvsp[0].RO);
			   		(yyval.RO)->nextlist.clear();
			   	}
#line 2809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1003 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
			   	    (yyval.RO)=(yyvsp[0].RO);
			   		backpatch((yyvsp[-2].RO)->nextlist,(yyvsp[-1].intval));
			   		(yyval.RO)->nextlist=(yyvsp[0].RO)->nextlist;
			   	}
#line 2819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1011 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1012 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1016 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[0].RO);}
#line 2837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1017 "ass5_14CS30017.y" /* yacc.c:1646  */
    {}
#line 2843 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1021 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.RO)=(yyvsp[-1].RO);}
#line 2849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1026 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
				   		(yyval.RO)=new struct row();
				   		backpatch((yyvsp[0].RO)->nextlist,quad_array.size());
				   		backpatch((yyvsp[-4].RO)->truelist,(yyvsp[-2].intval));
						(yyval.RO)->nextlist=merge((yyvsp[-4].RO)->falselist,(yyvsp[-1].RO)->nextlist);
				   	}
#line 2860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1033 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
				   		(yyval.RO)=new struct row();
				   		backpatch((yyvsp[-7].RO)->truelist,(yyvsp[-5].intval));
						backpatch((yyvsp[-7].RO)->falselist,(yyvsp[-1].intval));
						(yyval.RO)->nextlist=merge(merge((yyvsp[-4].RO)->nextlist,(yyvsp[0].RO)->nextlist),(yyvsp[-3].RO)->nextlist);
				   	}
#line 2871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1043 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
				   		(yyval.RO)=new struct row();
				   		backpatch((yyvsp[0].RO)->nextlist,(yyvsp[-5].intval));
						backpatch((yyvsp[-3].RO)->truelist,(yyvsp[-1].intval));
						(yyval.RO)->nextlist=(yyvsp[-3].RO)->falselist;
						quad_array.push_back(quad("goto",(yyvsp[-5].intval)));
				   	}
#line 2883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1051 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
				   		(yyval.RO)=new struct row();
				   		backpatch((yyvsp[-2].RO)->truelist,(yyvsp[-7].intval));
						backpatch((yyvsp[-6].RO)->nextlist,(yyvsp[-5].intval));
						(yyval.RO)->nextlist=(yyvsp[-2].RO)->falselist;
				   	}
#line 2894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1058 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
				   		(yyval.RO)=new struct row();
				   		backpatch((yyvsp[-7].RO)->truelist,(yyvsp[-1].intval));
						backpatch((yyvsp[0].RO)->nextlist,(yyvsp[-5].intval));
						backpatch((yyvsp[-3].RO)->nextlist,(yyvsp[-8].intval));
						quad_array.push_back(quad("goto",(yyvsp[-5].intval)));
						(yyval.RO)->nextlist=(yyvsp[-7].RO)->falselist;
				   	}
#line 2907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1070 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
			   		(yyval.RO)=(yyvsp[-1].RO);
			   		quad_array.push_back(quad("return",(yyvsp[-1].RO)->Name,"0"));
			   	}
#line 2916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1088 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
				   		struct row* temp1=current_ST->lookup("main");
				   		temp1->Typ=functiontype;
				   	}
#line 2925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1095 "ass5_14CS30017.y" /* yacc.c:1646  */
    {(yyval.intval)=quad_array.size();}
#line 2931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1098 "ass5_14CS30017.y" /* yacc.c:1646  */
    {
		(yyval.RO)=new struct row();
		(yyval.RO)->nextlist=makelist(quad_array.size());
	 	quad_array.push_back(quad("goto",-1));
	}
#line 2941 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2945 "y.tab.c" /* yacc.c:1646  */
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
#line 1104 "ass5_14CS30017.y" /* yacc.c:1906  */


void yyerror(char *s) {
    printf("Error occured due to : %s\n",s);
}
Sym_table* global_ST = new Sym_table();
Sym_table* current_ST=global_ST;
vector<quad> quad_array;

int main(){
	yyparse();
	current_ST->correctST();
	current_ST->activationRecord();
	current_ST->print();
	for(int i=0;i<quad_array.size();i++){
		quad_array[i].emit(quad_array[i],i);
	}
}

row* char2int(row* r)
{
	row* ro;
	ro=Sym_table::gentemp(*current_ST);
	ro->isBoolExp=false;
	ro->Typ=inttype;
	ro->init_val=r->init_val;
	ro->size=r->size;
	string s="char2int("+r->Name+")";
	quad_array.push_back(quad(ro->Name,s));
	return ro;
}

row* int2doub(row* r)
{
	row* ro;
	ro=Sym_table::gentemp(*current_ST);
	ro->isBoolExp=false;
	ro->Typ=doubletype;
	ro->init_val=r->init_val;
	ro->size=r->size;
	string s="int2doub("+r->Name+")";
	quad_array.push_back(quad(ro->Name,s));
	return ro;
}
row* char2doub(row* r)
{
	row* ro;
	ro=Sym_table::gentemp(*current_ST);
	ro->isBoolExp=false;
	ro->Typ=doubletype;
	ro->init_val=r->init_val;
	ro->size=r->size;
	string s="char2doub("+r->Name+")";
	quad_array.push_back(quad(ro->Name,s));
	return ro;
}

row* doub2int(row* r)
{
	row* ro;
	ro=Sym_table::gentemp(*current_ST);
	ro->isBoolExp=false;
	ro->Typ=doubletype;
	ro->init_val=r->init_val;
	ro->size=r->size;
	string s="doub2int("+r->Name+")";
	quad_array.push_back(quad(ro->Name,s));
	return ro;
}

row* int2bool(row* r)
{
	row* ro=r;
	if(r->Typ==chartype)ro=char2int(r);
	if(r->Typ==doubletype)ro=doub2int(r);
	ro->isBoolExp=true;
	ro->truelist.push_back(quad_array.size());
	quad_array.push_back(quad("if","...",ro->Name));
	ro->falselist.push_back(quad_array.size());
	quad_array.push_back(quad("goto","...",ro->Name));
	return ro;
}
