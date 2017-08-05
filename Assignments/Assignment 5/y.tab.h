/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 27 "ass5_14CS30017.y" /* yacc.c:1909  */

#include "ass5_14CS30017_translator.h"

#line 48 "y.tab.h" /* yacc.c:1909  */

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
#line 30 "ass5_14CS30017.y" /* yacc.c:1909  */

    int intval;
	char* stringval;
	char charval;
	double floatval;
	struct row* RO;
	Sym_table* SYT;

#line 257 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
