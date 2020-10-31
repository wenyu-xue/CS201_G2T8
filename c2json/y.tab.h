/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    ALIGNAS = 292,
    ALIGNOF = 293,
    ATOMIC = 294,
    BOOL = 295,
    COMPLEX = 296,
    GENERIC = 297,
    IMAGINARY = 298,
    NORETURN = 299,
    STATIC_ASSERT = 300,
    THREAD_LOCAL = 301,
    TYPEDEF_NAME = 302,
    IDENTIFIER = 303,
    CONSTANT = 304,
    STRING_LITERAL = 305,
    LBRACKET = 306,
    RBRACKET = 307,
    LPAREN = 308,
    RPAREN = 309,
    LBRACE = 310,
    RBRACE = 311,
    DOT = 312,
    ARROW = 313,
    DBL_PLUS = 314,
    DBL_MINUS = 315,
    AMPERSAND = 316,
    ASTERISK = 317,
    PLUS = 318,
    MINUS = 319,
    TILDE = 320,
    EXCLAMATION = 321,
    SLASH = 322,
    PERCENT = 323,
    LSHIFT = 324,
    RSHIFT = 325,
    LS = 326,
    GR = 327,
    LE = 328,
    GE = 329,
    EQ = 330,
    NE = 331,
    CARET = 332,
    VERTICAL = 333,
    LOG_AND = 334,
    LOG_OR = 335,
    QUESTION = 336,
    COLON = 337,
    SEMICOLON = 338,
    ELLIPSIS = 339,
    ASSIGN = 340,
    MUL_ASSIGN = 341,
    DIV_ASSIGN = 342,
    MOD_ASSIGN = 343,
    ADD_ASSIGN = 344,
    SUB_ASSIGN = 345,
    LEFT_ASSIGN = 346,
    RIGHT_ASSIGN = 347,
    AND_ASSIGN = 348,
    XOR_ASSIGN = 349,
    OR_ASSIGN = 350,
    COMMA = 351,
    NO_ELSE = 352
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
#define ALIGNAS 292
#define ALIGNOF 293
#define ATOMIC 294
#define BOOL 295
#define COMPLEX 296
#define GENERIC 297
#define IMAGINARY 298
#define NORETURN 299
#define STATIC_ASSERT 300
#define THREAD_LOCAL 301
#define TYPEDEF_NAME 302
#define IDENTIFIER 303
#define CONSTANT 304
#define STRING_LITERAL 305
#define LBRACKET 306
#define RBRACKET 307
#define LPAREN 308
#define RPAREN 309
#define LBRACE 310
#define RBRACE 311
#define DOT 312
#define ARROW 313
#define DBL_PLUS 314
#define DBL_MINUS 315
#define AMPERSAND 316
#define ASTERISK 317
#define PLUS 318
#define MINUS 319
#define TILDE 320
#define EXCLAMATION 321
#define SLASH 322
#define PERCENT 323
#define LSHIFT 324
#define RSHIFT 325
#define LS 326
#define GR 327
#define LE 328
#define GE 329
#define EQ 330
#define NE 331
#define CARET 332
#define VERTICAL 333
#define LOG_AND 334
#define LOG_OR 335
#define QUESTION 336
#define COLON 337
#define SEMICOLON 338
#define ELLIPSIS 339
#define ASSIGN 340
#define MUL_ASSIGN 341
#define DIV_ASSIGN 342
#define MOD_ASSIGN 343
#define ADD_ASSIGN 344
#define SUB_ASSIGN 345
#define LEFT_ASSIGN 346
#define RIGHT_ASSIGN 347
#define AND_ASSIGN 348
#define XOR_ASSIGN 349
#define OR_ASSIGN 350
#define COMMA 351
#define NO_ELSE 352

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 65 "yacc_syntax.y"

    AST_NODE *node;
    _Bool boolean_v;

#line 256 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void **root);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
