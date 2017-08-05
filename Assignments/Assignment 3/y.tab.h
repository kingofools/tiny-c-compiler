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

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    single_comment = 258,
    multi_comment = 259,
    auto_keyword = 260,
    enum_keyword = 261,
    restrict_keyword = 262,
    unsigned_keyword = 263,
    break_keyword = 264,
    extern_keyword = 265,
    return_keyword = 266,
    void_keyword = 267,
    case_keyword = 268,
    float_keyword = 269,
    short_keyword = 270,
    volatile_keyword = 271,
    char_keyword = 272,
    for_keyword = 273,
    signed_keyword = 274,
    while_keyword = 275,
    const_keyword = 276,
    goto_keyword = 277,
    sizeof_keyword = 278,
    bool_keyword = 279,
    continue_keyword = 280,
    if_keyword = 281,
    static_keyword = 282,
    complex_keyword = 283,
    default_keyword = 284,
    inline_keyword = 285,
    struct_keyword = 286,
    imaginary_keyword = 287,
    do_keyword = 288,
    int_keyword = 289,
    switch_keyword = 290,
    double_keyword = 291,
    long_keyword = 292,
    typedef_keyword = 293,
    else_keyword = 294,
    register_keyword = 295,
    union_keyword = 296,
    identifier = 297,
    integer_constant = 298,
    float_constant = 299,
    enumeration = 300,
    char_constant = 301,
    string_literal = 302,
    val_at = 303,
    plus_plus = 304,
    minus_minus = 305,
    left_shift = 306,
    right_shift = 307,
    less_equal = 308,
    greater_equal = 309,
    equal_equal = 310,
    not_equal = 311,
    logical_and = 312,
    logical_or = 313,
    ellipses = 314,
    star_equal = 315,
    by_equal = 316,
    percent_equal = 317,
    plus_equal = 318,
    minus_equal = 319,
    left_shift_equal = 320,
    right_shift_equal = 321,
    and_equal = 322,
    bitwisenot_equal = 323,
    or_equal = 324,
    left_sq_bkt = 325,
    right_sq_bkt = 326,
    left_paren = 327,
    right_paren = 328,
    left_brace = 329,
    right_brace = 330,
    dot = 331,
    amp = 332,
    asterix = 333,
    plus = 334,
    minus = 335,
    tilde = 336,
    not = 337,
    fw_slash = 338,
    mod = 339,
    less_than = 340,
    more_than = 341,
    caret = 342,
    bit_or = 343,
    ter_que = 344,
    ter_colon = 345,
    semi_colon = 346,
    equals = 347,
    comma = 348,
    hash = 349
  };
#endif
/* Tokens.  */
#define single_comment 258
#define multi_comment 259
#define auto_keyword 260
#define enum_keyword 261
#define restrict_keyword 262
#define unsigned_keyword 263
#define break_keyword 264
#define extern_keyword 265
#define return_keyword 266
#define void_keyword 267
#define case_keyword 268
#define float_keyword 269
#define short_keyword 270
#define volatile_keyword 271
#define char_keyword 272
#define for_keyword 273
#define signed_keyword 274
#define while_keyword 275
#define const_keyword 276
#define goto_keyword 277
#define sizeof_keyword 278
#define bool_keyword 279
#define continue_keyword 280
#define if_keyword 281
#define static_keyword 282
#define complex_keyword 283
#define default_keyword 284
#define inline_keyword 285
#define struct_keyword 286
#define imaginary_keyword 287
#define do_keyword 288
#define int_keyword 289
#define switch_keyword 290
#define double_keyword 291
#define long_keyword 292
#define typedef_keyword 293
#define else_keyword 294
#define register_keyword 295
#define union_keyword 296
#define identifier 297
#define integer_constant 298
#define float_constant 299
#define enumeration 300
#define char_constant 301
#define string_literal 302
#define val_at 303
#define plus_plus 304
#define minus_minus 305
#define left_shift 306
#define right_shift 307
#define less_equal 308
#define greater_equal 309
#define equal_equal 310
#define not_equal 311
#define logical_and 312
#define logical_or 313
#define ellipses 314
#define star_equal 315
#define by_equal 316
#define percent_equal 317
#define plus_equal 318
#define minus_equal 319
#define left_shift_equal 320
#define right_shift_equal 321
#define and_equal 322
#define bitwisenot_equal 323
#define or_equal 324
#define left_sq_bkt 325
#define right_sq_bkt 326
#define left_paren 327
#define right_paren 328
#define left_brace 329
#define right_brace 330
#define dot 331
#define amp 332
#define asterix 333
#define plus 334
#define minus 335
#define tilde 336
#define not 337
#define fw_slash 338
#define mod 339
#define less_than 340
#define more_than 341
#define caret 342
#define bit_or 343
#define ter_que 344
#define ter_colon 345
#define semi_colon 346
#define equals 347
#define comma 348
#define hash 349

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 7 "ass3_14CS30017.y" /* yacc.c:1909  */

  int intval;
  float floatval;
  char *charval;

#line 248 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
