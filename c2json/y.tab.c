/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 18 "yacc_syntax.y"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alloc_wrap.h"
#include "ast.h"
#include "string_tools.h"
#include "typedef_name.h"
#include "y.tab.h"

/// Create an instance of AST_CONTENT with a `token' stored inside.
#define content_t(v)  ((AST_CONTENT) {.token = v})

/// Create an instance of AST_CONTENT with a `value' = NULL inside.
#define content_null  ((AST_CONTENT) {.value = NULL})

/// Get next token from the specified input.
///
/// \return Next token of the source
extern int yylex();

/// Was error already found?
_Bool error_found = false;

/// Called when parse error was detected.
///
/// root AST root node link
/// \param str Error description to be printed
/// \return Always 0
int yyerror(void *root, const char *str);

/// Does this node contains TYPEDEF token?
///
/// \param node AST Node of `DeclarationSpecifiers' to search trough
/// \return `true' - TYPEDEF is found, `false' - otherwise
_Bool is_typedef_used(AST_NODE *node);

/// Collect all the identifiers (DirectDeclarators) from this node.
///
/// \param node AST Node of `InitDeclaratorList' to collect from
void collect_typedef_names(AST_NODE *node);

#line 114 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 365 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void **root);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2155

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  98
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  263
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  468

#define YYUNDEFTOK  2
#define YYMAXUTOK   352


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   286,   286,   293,   303,   304,   308,   312,   319,   323,
     332,   336,   341,   345,   349,   353,   357,   361,   365,   369,
     373,   377,   381,   388,   392,   399,   403,   410,   411,   412,
     413,   414,   415,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   438,
     442,   446,   453,   454,   458,   462,   469,   473,   477,   481,
     485,   489,   493,   497,   501,   508,   512,   519,   520,   521,
     528,   532,   536,   540,   544,   551,   555,   562,   566,   573,
     580,   581,   582,   583,   587,   588,   592,   596,   603,   607,
     614,   618,   622,   626,   630,   634,   638,   642,   646,   650,
     654,   658,   662,   666,   673,   677,   681,   685,   692,   696,
     703,   704,   712,   716,   723,   727,   731,   738,   742,   749,
     753,   760,   764,   768,   775,   779,   784,   789,   794,   799,
     804,   809,   814,   819,   824,   829,   833,   837,   841,   845,
     849,   853,   857,   861,   865,   872,   877,   881,   885,   892,
     896,   900,   904,   911,   915,   919,   926,   927,   931,   940,
     941,   942,   943,   944,   945,   949,   953,   957,   964,   965,
     969,   973,   980,   981,   985,   986,   990,   994,   998,  1005,
    1009,  1013,  1017,  1024,  1028,  1032,  1036,  1040,  1049,  1055,
    1056,  1060,  1064,  1071,  1072,  1079,  1080,  1081,  1082,  1083,
    1084,  1085,  1086,  1087,  1088,  1089,  1093,  1094,  1101,  1102,
    1106,  1110,  1114,  1118,  1122,  1126,  1130,  1134,  1138,  1142,
    1146,  1150,  1154,  1158,  1162,  1166,  1170,  1177,  1178,  1185,
    1186,  1190,  1194,  1198,  1202,  1206,  1213,  1214,  1215,  1216,
    1217,  1218,  1222,  1223,  1227,  1231,  1235,  1239,  1243,  1247,
    1251,  1255,  1262,  1266,  1273,  1274,  1276,  1277,  1278,  1282,
    1289,  1293,  1300,  1304
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
  "TYPEDEF", "UNION", "UNSIGNED", "VOID", "VOLATILE", "WHILE", "ALIGNAS",
  "ALIGNOF", "ATOMIC", "BOOL", "COMPLEX", "GENERIC", "IMAGINARY",
  "NORETURN", "STATIC_ASSERT", "THREAD_LOCAL", "TYPEDEF_NAME",
  "IDENTIFIER", "CONSTANT", "STRING_LITERAL", "LBRACKET", "RBRACKET",
  "LPAREN", "RPAREN", "LBRACE", "RBRACE", "DOT", "ARROW", "DBL_PLUS",
  "DBL_MINUS", "AMPERSAND", "ASTERISK", "PLUS", "MINUS", "TILDE",
  "EXCLAMATION", "SLASH", "PERCENT", "LSHIFT", "RSHIFT", "LS", "GR", "LE",
  "GE", "EQ", "NE", "CARET", "VERTICAL", "LOG_AND", "LOG_OR", "QUESTION",
  "COLON", "SEMICOLON", "ELLIPSIS", "ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "COMMA", "NO_ELSE", "$accept",
  "TranslationUnit", "ExternalDeclaration", "FunctionDefinition",
  "DeclarationList", "Declaration", "DeclarationSpecifiers",
  "InitDeclaratorList", "InitDeclarator", "StorageClassSpecifier",
  "TypeSpecifier", "StructOrUnionSpecifier", "StructOrUnion",
  "StructDeclarationList", "StructDeclaration", "SpecifierQualifierList",
  "StructDeclaratorList", "StructDeclarator", "EnumSpecifier",
  "EnumeratorList", "Enumerator", "AtomicTypeSpecifier", "TypeQualifier",
  "FunctionSpecifier", "AlignmentSpecifier", "Declarator",
  "DirectDeclarator", "Pointer", "TypeQualifierList", "ParameterTypeList",
  "ParameterList", "ParameterDeclaration", "IdentifierList", "TypeName",
  "AbstractDeclarator", "DirectAbstractDeclarator", "TypedefName",
  "Initializer", "InitializerList", "Designation", "DesignatorList",
  "Designator", "StaticAssertDeclaration", "Statement", "LabeledStatement",
  "CompoundStatement", "BlockItemList", "BlockItem", "ExpressionStatement",
  "SelectionStatement", "IterationStatement", "JumpStatement",
  "ConstantExpression", "ExpressionOpt", "Expression",
  "AssignmentExpression", "AssignmentOperator", "ConditionalExpression",
  "ArithmeticalExpression", "CastExpression", "UnaryExpression",
  "UnaryOperator", "PostfixExpression", "ArgumentExpressionList",
  "PrimaryExpression", "GenericSelection", "GenericAssocList",
  "GenericAssociation", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
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
     345,   346,   347,   348,   349,   350,   351,   352
};
# endif

#define YYPACT_NINF (-368)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1595,  -368,  -368,  -368,  -368,   -21,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,  -368,
    -368,  -368,   -24,   -20,  -368,  -368,  -368,  -368,   -14,  -368,
    -368,  1550,  -368,  -368,  -368,   281,  1640,  1640,  -368,   133,
    -368,  -368,  1640,  1640,  1640,  -368,  -368,    -2,    14,   826,
    1762,  1915,  -368,  -368,  -368,   -27,   118,  -368,   -45,  -368,
     447,   158,   112,  -368,  -368,    10,  1682,  -368,  -368,  -368,
      14,    32,    53,  -368,  1944,    34,    70,  -368,  -368,  -368,
     826,  1973,  1973,  -368,  -368,  -368,  -368,  -368,  -368,  1762,
     136,  1762,  1762,    92,    96,  -368,   481,  -368,  -368,  1915,
     325,  -368,  -368,   117,    42,   123,  -368,  -368,  -368,   118,
    -368,   -27,   566,   376,  1329,  -368,   281,  -368,   971,  1374,
     158,  1682,  1462,  -368,   278,  -368,    77,  1915,  -368,    -4,
     826,  -368,  1762,  1915,   142,   -39,  -368,  -368,   307,   826,
    -368,  -368,  -368,  1015,   942,   169,  -368,   173,  -368,  -368,
    -368,  -368,  1915,  1915,  1915,  1915,  1915,  1915,  1915,  1915,
    1915,  1915,  1915,  1915,  1915,  1915,  1915,  1915,  1915,  1915,
    1915,  -368,  1915,  1857,   152,   153,  -368,  -368,  -368,   140,
    -368,  -368,  -368,  -368,   119,   122,  1915,   125,   130,   700,
     170,   179,   178,  1264,   180,   188,   163,  -368,  -368,  -368,
    -368,  -368,  -368,   637,  -368,  -368,  -368,  -368,  -368,    52,
    1828,  -368,  -368,  -368,  -368,  1235,  -368,   215,  1059,   222,
    -368,  -368,   235,   214,   186,  -368,    -5,  1504,  -368,  -368,
    1915,  -368,    71,  -368,   210,  -368,     2,  -368,  -368,  -368,
     251,   252,   221,  1886,  -368,  1915,  -368,  -368,  -368,  -368,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,  1915,   257,  1235,
    -368,   269,  1103,   270,  -368,   271,   274,   173,  1147,  1420,
    2066,  -368,   223,   223,  -368,  -368,   176,   176,   677,   677,
     677,   677,  2081,  2081,  2051,  2034,  2016,  1979,   -50,   -33,
    -368,  -368,     7,  -368,  -368,   279,  -368,   241,  -368,   700,
     296,   765,   253,  1915,  -368,   103,  1915,  1915,   700,  -368,
    -368,  -368,  1915,   291,  -368,    78,   376,    85,  -368,  1235,
     290,  -368,  1915,  -368,   292,   293,  -368,   890,  -368,   250,
    -368,  -368,   494,  -368,   302,  -368,  -368,  -368,   231,  1915,
    -368,   297,  -368,  1724,  1828,  -368,  -368,  -368,   297,  1235,
     304,  -368,  1915,  -368,   305,  -368,  -368,  -368,  1235,  -368,
     306,  1191,   310,  -368,   300,  1915,  -368,  -368,  1915,   282,
     700,  -368,   313,  1915,   284,   273,  -368,    17,  -368,    28,
      35,  -368,   318,  -368,  -368,  1766,  -368,  -368,  -368,   320,
    -368,   321,  -368,  -368,  -368,  -368,  -368,  -368,  -368,   299,
     308,    44,  -368,    83,   323,  -368,   327,  -368,  1235,   337,
    -368,  1915,  -368,   353,  -368,  -368,  -368,  -368,  -368,  -368,
    1915,   324,  1915,   700,   700,   700,  -368,  -368,  -368,   376,
    -368,  -368,  1915,  1915,  -368,  1724,  -368,  1797,  -368,  -368,
     356,  -368,   357,  -368,    65,  1915,   329,   401,  -368,  -368,
    -368,  -368,  -368,  -368,  -368,  -368,  -368,   332,   363,  1915,
     700,  -368,   700,   365,  -368,  -368,   700,  -368
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,    31,    34,    80,    39,     0,    28,    38,    84,    36,
      37,    32,    81,    35,    40,    29,    52,    27,    53,    41,
      33,    82,     0,    83,    42,    43,    44,    85,     0,    30,
     145,     0,     2,     4,     5,     0,    13,    14,    46,     0,
      47,    45,    15,    16,    17,    48,    12,    74,     0,     0,
       0,     0,     1,     3,    90,     0,   104,    10,     0,    23,
      25,    88,     0,    18,    19,    51,     0,    20,    21,    22,
       0,    77,     0,    75,     0,     0,     0,   254,   255,   256,
       0,     0,     0,   236,   237,   238,   239,   240,   241,    59,
     119,    60,    61,     0,     0,   188,   206,   208,   227,     0,
     229,   242,   258,     0,     0,     0,    83,   108,   106,   105,
      11,     0,     0,     0,     0,     8,     0,     6,     0,     0,
      89,     0,     0,    54,     0,    58,     0,     0,    70,     0,
       0,   233,     0,     0,     0,     0,   191,   193,   227,     0,
     230,   231,    62,     0,     0,   121,   120,   122,    63,    64,
      86,    87,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   232,     0,     0,     0,     0,   248,   249,    79,     0,
      91,   109,   107,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   254,   168,   174,   172,
     173,   159,   160,     0,   170,   161,   162,   163,   164,     0,
       0,    26,   146,     9,     7,     0,    92,   237,     0,     0,
     117,   102,   115,     0,   110,   112,     0,     0,    49,    55,
       0,    56,     0,    65,    67,    72,     0,    78,    71,    76,
       0,     0,     0,     0,   257,     0,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,     0,     0,
     125,   237,     0,     0,   133,     0,     0,   123,     0,     0,
     213,   224,   222,   223,   225,   226,   220,   221,   216,   217,
     218,   219,   214,   215,   212,   211,   210,   209,     0,     0,
     244,   252,     0,   246,   247,     0,   185,     0,   184,     0,
       0,   189,     0,     0,   186,     0,     0,     0,     0,   169,
     171,   175,     0,     0,   149,     0,     0,     0,   154,     0,
       0,    99,     0,    94,   237,     0,    93,     0,   114,   121,
     116,   101,     0,   103,     0,    50,    68,    57,     0,     0,
      73,   234,   235,     0,     0,   228,   192,   194,     0,     0,
       0,   132,     0,   127,     0,   126,   134,   124,     0,   135,
     237,     0,     0,   143,     0,     0,   243,   245,     0,     0,
       0,   167,     0,   189,     0,   190,   183,     0,   187,     0,
       0,   165,     0,   157,   147,     0,   150,   153,   155,     0,
      96,     0,   100,    95,   111,   113,   118,    66,    69,     0,
       0,     0,   260,     0,     0,   129,     0,   128,     0,     0,
     142,     0,   137,     0,   136,   144,   207,   253,   158,   166,
       0,     0,   189,     0,     0,     0,   156,   148,   151,     0,
      97,    98,     0,     0,   259,     0,   250,     0,   130,   131,
       0,   139,     0,   138,     0,   189,     0,   176,   178,   179,
     152,   263,   262,   261,   251,   140,   141,     0,     0,   189,
       0,   180,     0,     0,   177,   182,     0,   181
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -368,  -368,   389,  -368,  -368,    -6,    84,  -368,   311,  -368,
     -44,  -368,  -368,   322,  -109,    93,  -368,    90,  -368,   351,
    -106,  -368,   -49,  -368,   -25,   -31,   -60,    20,   -43,  -111,
    -368,    91,  -368,   216,   -78,  -135,  -368,  -110,    88,  -367,
    -368,   127,   -10,  -152,  -368,   -40,  -368,   242,  -368,  -368,
    -368,  -368,   -23,  -343,   -71,    19,  -368,   -35,  1907,   -88,
      94,  -368,  -368,  -368,  -368,  -368,  -368,    -1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,    32,    33,   114,    34,   116,    58,    59,    36,
      37,    38,    39,   122,   123,    90,   232,   233,    40,    72,
      73,    41,    42,    43,    44,   105,    61,    62,   109,   265,
     224,   225,   226,   400,   266,   147,    45,   314,   315,   316,
     317,   318,    46,   200,   201,   202,   203,   204,   205,   206,
     207,   208,    94,   374,   209,   136,   257,   137,    96,    97,
     138,    99,   100,   292,   101,   102,   401,   402
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,    91,   120,   211,    60,    89,    89,   107,   223,   135,
     267,   171,   146,   229,    95,   244,    95,    91,   429,   366,
     117,    54,    89,   239,    92,    92,    55,    47,   104,    49,
     421,    91,   365,    50,    48,    56,    89,   300,   110,    51,
      91,    92,    91,    91,    71,    89,   245,    89,    89,   333,
      71,   111,   238,    70,   115,    92,   125,   245,   340,   135,
     181,   367,    71,   245,    92,   121,    92,    92,   135,   107,
     429,   423,    91,    91,   214,   218,   108,    89,    89,   446,
     184,    91,   424,    91,    35,   184,    89,   132,    89,   425,
      91,   334,    95,   234,   107,    89,    92,    92,   434,   288,
     262,   289,   458,   368,   237,    92,   199,    92,   213,   128,
     145,   125,   125,   245,    92,    35,   463,   127,   229,   457,
      63,    64,   305,   133,   245,     3,    67,    68,    69,   182,
     239,   245,   212,   235,   384,   311,   312,   219,   179,   436,
     435,    12,   313,    98,   330,    98,   150,   371,   245,   129,
     151,    95,   242,    21,   337,   345,   381,   106,   364,   124,
      54,   245,   263,   297,   145,    55,   107,   338,   131,   181,
     387,   178,   319,   236,   385,   140,   141,   180,    91,   437,
      56,    65,   142,    89,   148,   149,   378,   143,    66,   144,
     295,   328,   291,    98,   267,    95,   243,   199,    56,   245,
     293,   294,    92,   222,   113,   296,   386,   336,   298,   118,
     107,   119,   299,   181,   124,   124,   349,   125,   419,   107,
     143,    98,   144,   301,   268,   361,   269,   302,   222,   212,
     375,   303,   377,   306,   320,   379,   380,   325,   153,   154,
     155,   307,   329,   156,   157,   308,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,   346,    93,   103,   321,   331,   120,
     181,   447,   448,   449,   326,   428,   347,    95,   350,    54,
      98,   354,   332,    54,    55,   153,   143,   362,   327,   382,
     156,   157,   339,    56,    91,   373,   134,    56,    54,    89,
     181,   143,   375,   327,    95,   341,   342,   234,   464,   107,
     465,   348,   181,   230,   467,   408,   398,   343,    92,   450,
     124,   351,   355,   370,    98,   356,    54,   428,   357,    54,
     416,    55,   372,   369,    55,   212,   376,    98,   389,   383,
      56,   391,   390,    56,   392,   393,   240,   329,   241,   444,
     396,   375,   344,   222,   415,   258,   405,   407,   410,   181,
     230,   231,   414,   212,    57,   418,   420,   422,   404,   245,
     426,   406,   430,   431,   375,   438,   172,   409,   173,   439,
     413,   432,   174,   175,   176,   177,    91,   417,   375,   441,
     433,    89,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,    74,   212,   443,    98,   445,   455,   456,
      92,   222,   459,   460,    75,   461,   222,   462,    76,   466,
      53,   126,   183,   395,    77,    78,    79,   440,   397,    80,
     442,   210,   403,    98,   453,    81,    82,    83,    84,    85,
      86,    87,    88,   227,   388,   310,     0,     0,   212,     0,
       1,   451,   452,     2,     3,     0,   212,     0,     4,    98,
       5,     6,     7,     0,     0,     0,     8,     9,    10,    11,
      12,     0,    13,    14,     0,    15,    16,     0,    17,    18,
      19,    20,    21,     0,    22,     0,    23,    24,    25,     0,
      26,    27,    28,    29,    30,     0,     0,     1,     0,     0,
       2,     3,   112,     0,     0,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,    11,    12,     0,    13,
      14,     0,    15,    16,     0,    17,    18,    19,    20,    21,
       0,    22,   113,    23,    24,    25,     0,    26,    27,     0,
      29,    30,   152,   153,   154,   155,     0,     0,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,     0,     0,     0,     0,     0,     0,     1,
     185,   186,     2,     3,   187,   188,   189,     4,   394,     5,
       6,     7,   190,   191,   192,     8,     9,    10,    11,    12,
     193,    13,    14,    74,    15,    16,   194,    17,    18,    19,
      20,    21,   195,    22,    75,    23,    24,    25,    76,    26,
      27,    28,    29,    30,   196,    78,    79,     0,     0,    80,
       0,   112,   197,     0,     0,    81,    82,    83,    84,    85,
      86,    87,    88,     0,     0,     0,     0,     0,     0,     0,
       1,   185,   186,     2,     3,   187,   188,   189,     4,   198,
       5,     6,     7,   190,   191,   192,     8,     9,    10,    11,
      12,   193,    13,    14,    74,    15,    16,   194,    17,    18,
      19,    20,    21,   195,    22,    75,    23,    24,    25,    76,
      26,    27,    28,    29,    30,   196,    78,    79,     0,     0,
      80,     0,   112,   309,     0,     0,    81,    82,    83,    84,
      85,    86,    87,    88,   185,   186,     0,     0,   187,   188,
     189,     0,     0,     0,     0,     0,   190,   191,   192,     0,
     198,     0,     0,     0,   193,     0,     0,    74,     0,     0,
     194,     0,     0,     0,     0,     0,   195,     0,    75,   153,
     154,   155,    76,     0,   156,   157,   158,   159,   196,    78,
      79,     0,     0,    80,     0,   112,     0,     0,     0,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     0,     0,   198,     8,     9,    10,    11,    12,     0,
      13,    14,    74,    15,    16,     0,    17,    18,    19,    20,
      21,     0,    22,    75,    23,    24,    25,    76,    26,    27,
      28,    29,    30,    77,    78,    79,     0,     0,    80,     0,
       0,     0,     0,     0,    81,    82,    83,    84,    85,    86,
      87,    88,     2,     3,     0,     0,     0,     4,     0,     5,
       0,     7,     0,     0,     0,     0,     9,    10,     0,    12,
       0,    13,    14,    74,     0,    16,     0,     0,    18,    19,
      20,    21,     0,    22,    75,    23,    24,    25,    76,    26,
       0,     0,     0,    30,    77,    78,    79,     0,     0,    80,
       0,     0,     0,     0,     0,    81,    82,    83,    84,    85,
      86,    87,    88,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,    11,    12,     0,    13,    14,     0,    15,    16,
       0,    17,    18,    19,    20,    21,     0,    22,     0,    23,
      24,    25,     0,    26,    27,     0,    29,    30,    54,     0,
       0,   143,     0,   327,   264,     1,     0,     0,     2,     3,
       0,     0,    56,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,    11,    12,     0,    13,    14,     0,
      15,    16,     0,    17,    18,    19,    20,    21,     3,    22,
       0,    23,    24,    25,     0,    26,    27,     0,    29,    30,
       0,     0,     0,   143,    12,   144,   264,     0,    74,   215,
       0,     0,     0,     0,    56,     0,    21,     0,     0,    75,
     106,     0,     0,    76,     0,     0,     0,     0,     0,    77,
      78,    79,     3,   216,    80,     0,     0,     0,     0,     0,
      81,    82,    83,   217,    85,    86,    87,    88,    12,     0,
       0,     0,    74,   259,     0,     0,     0,     0,     0,     0,
      21,     0,     0,    75,   106,     0,     0,    76,     0,     0,
       0,     0,     0,    77,    78,    79,     3,   260,    80,     0,
       0,     0,     0,     0,    81,    82,    83,   261,    85,    86,
      87,    88,    12,     0,     0,     0,    74,   322,     0,     0,
       0,     0,     0,     0,    21,     0,     0,    75,   106,     0,
       0,    76,     0,     0,     0,     0,     0,    77,    78,    79,
       3,   323,    80,     0,     0,     0,     0,     0,    81,    82,
      83,   324,    85,    86,    87,    88,    12,     0,     0,     0,
      74,   352,     0,     0,     0,     0,     0,     0,    21,     0,
       0,    75,   106,     0,     0,    76,     0,     0,     0,     0,
       0,    77,    78,    79,     3,   353,    80,     0,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,    87,    88,
      12,     0,     0,     0,    74,   358,     0,     0,     0,     0,
       0,     0,    21,     0,     0,    75,   106,     0,     0,    76,
       0,     0,     0,     0,     0,    77,    78,    79,     3,   359,
      80,     0,     0,     0,     0,     0,    81,    82,    83,   360,
      85,    86,    87,    88,    12,     0,     0,     0,    74,   411,
       0,     0,     0,     0,     0,     0,    21,     0,     0,    75,
     106,     0,     0,    76,     0,     0,     0,     0,     0,    77,
      78,    79,     3,   412,    80,     0,     0,     0,     0,     0,
      81,    82,    83,    84,    85,    86,    87,    88,    12,     0,
       0,     0,    74,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,    75,   106,     0,     0,    76,     0,     0,
       0,     0,     0,    77,    78,    79,     0,     0,    80,     0,
       0,    74,     0,     0,    81,    82,    83,    84,    85,    86,
      87,    88,    75,     0,     0,     0,    76,     0,     0,     0,
       0,     0,    77,    78,    79,     0,     0,    80,     0,     0,
       0,     0,     0,    81,    82,    83,    84,    85,    86,    87,
      88,     0,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,   304,     8,     9,
      10,    11,    12,     0,    13,    14,     0,    15,    16,     0,
      17,    18,    19,    20,    21,     0,    22,     0,    23,    24,
      25,     0,    26,    27,    28,    29,    30,     1,     0,     0,
       2,     3,     0,     0,   112,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,    11,    12,     0,    13,
      14,     0,    15,    16,     0,    17,    18,    19,    20,    21,
       0,    22,     0,    23,    24,    25,     0,    26,    27,     0,
      29,    30,   220,     1,     0,     0,     2,     3,   221,     0,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,    11,    12,     0,    13,    14,     0,    15,    16,
       0,    17,    18,    19,    20,    21,     0,    22,     0,    23,
      24,    25,     0,    26,    27,     0,    29,    30,     2,     3,
       0,     0,     0,     4,   363,     5,     0,     7,     0,     0,
       0,     0,     9,    10,     0,    12,     0,    13,    14,     0,
       0,    16,     0,     0,    18,    19,    20,    21,     0,    22,
       0,    23,    24,    25,     0,    26,     0,    28,     0,    30,
       2,     3,     0,     0,     0,     4,     0,     5,   228,     7,
       0,     0,     0,     0,     9,    10,     0,    12,     0,    13,
      14,     0,     0,    16,     0,     0,    18,    19,    20,    21,
       0,    22,     0,    23,    24,    25,     0,    26,     0,    28,
      52,    30,     0,     1,     0,     0,     2,     3,     0,     0,
     335,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,    11,    12,     0,    13,    14,     0,    15,    16,
       0,    17,    18,    19,    20,    21,     0,    22,     0,    23,
      24,    25,     0,    26,    27,    28,    29,    30,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,    16,     0,    17,    18,    19,    20,
      21,     0,    22,     0,    23,    24,    25,     0,    26,    27,
      28,    29,    30,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,    11,    12,     0,    13,    14,     0,    15,    16,
       0,    17,    18,    19,    20,    21,     0,    22,     0,    23,
      24,    25,     0,    26,    27,     0,    29,    30,     2,     3,
       0,     0,     0,     4,     0,     5,     0,     7,     0,     0,
       0,     0,     9,    10,     0,    12,     0,    13,    14,     0,
       0,    16,     0,     0,    18,    19,    20,    21,     0,    22,
       0,    23,    24,    25,     0,    26,     0,    28,     0,    30,
       2,     3,     0,   399,     0,     4,     0,     5,     0,     7,
       0,     0,     0,     0,     9,    10,     0,    12,     0,    13,
      14,     0,     0,    16,     0,     0,    18,    19,    20,    21,
       0,    22,     0,    23,    24,    25,     0,    26,     2,     3,
       0,    30,     0,     4,     0,     5,     0,     7,     0,     0,
       0,     0,     9,    10,     0,    12,     0,    13,    14,     0,
       0,    16,     0,    74,    18,    19,    20,    21,     0,    22,
       0,    23,    24,    25,    75,    26,     0,     0,    76,    30,
       0,     0,     0,     0,    77,    78,    79,   312,     0,    80,
       0,   210,   427,   313,    74,    81,    82,    83,    84,    85,
      86,    87,    88,     0,     0,    75,     0,     0,     0,    76,
       0,     0,     0,     0,     0,    77,    78,    79,   312,     0,
      80,     0,   210,   454,   313,    74,    81,    82,    83,    84,
      85,    86,    87,    88,     0,     0,    75,     0,     0,     0,
      76,     0,     0,     0,     0,     0,    77,    78,    79,   312,
       0,    80,     0,   210,    74,   313,     0,    81,    82,    83,
      84,    85,    86,    87,    88,    75,     0,     0,     0,    76,
       0,     0,     0,     0,     0,    77,    78,    79,     0,     0,
      80,   290,     0,    74,     0,     0,    81,    82,    83,    84,
      85,    86,    87,    88,    75,     0,     0,     0,    76,     0,
       0,     0,     0,     0,    77,    78,    79,     0,     0,    80,
       0,   344,    74,     0,     0,    81,    82,    83,    84,    85,
      86,    87,    88,    75,     0,     0,     0,    76,     0,     0,
       0,     0,     0,    77,    78,    79,     0,     0,    80,     0,
       0,    74,     0,     0,    81,    82,    83,    84,    85,    86,
      87,    88,    75,     0,     0,     0,    76,     0,     0,     0,
       0,     0,    77,    78,    79,     0,     0,   130,     0,     0,
      74,     0,     0,    81,    82,    83,    84,    85,    86,    87,
      88,    75,     0,     0,     0,    76,     0,     0,     0,     0,
       0,    77,    78,    79,     0,     0,   139,     0,     0,     0,
       0,     0,    81,    82,    83,    84,    85,    86,    87,    88,
     152,   153,   154,   155,     0,     0,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   152,   153,   154,
     155,     0,     0,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   152,   153,   154,   155,     0,
       0,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   152,   153,   154,   155,     0,     0,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   153,   154,
     155,     0,     0,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   153,   154,   155,     0,     0,   156,   157,
     158,   159,   160,   161,   162,   163
};

static const yytype_int16 yycheck[] =
{
      49,    50,    62,   113,    35,    49,    50,    56,   119,    80,
     145,    99,    90,   122,    49,    54,    51,    66,   385,    52,
      60,    48,    66,   129,    49,    50,    53,    48,    51,    53,
     373,    80,    82,    53,    55,    62,    80,   189,    83,    53,
      89,    66,    91,    92,    48,    89,    96,    91,    92,    54,
      48,    96,    56,    55,    60,    80,    66,    96,    56,   130,
     109,    54,    48,    96,    89,    55,    91,    92,   139,   118,
     437,    54,   121,   122,   114,   118,    56,   121,   122,   422,
     111,   130,    54,   132,     0,   116,   130,    53,   132,    54,
     139,    96,   127,   124,   143,   139,   121,   122,    54,   170,
     143,   172,   445,    96,   127,   130,   112,   132,   114,    56,
      90,   121,   122,    96,   139,    31,   459,    85,   227,    54,
      36,    37,   193,    53,    96,     7,    42,    43,    44,   109,
     236,    96,   113,    56,    56,    83,    51,   118,    96,    56,
      96,    23,    57,    49,   222,    51,    54,   299,    96,    96,
      54,   186,   133,    35,    83,   243,   308,    39,   269,    66,
      48,    96,   143,   186,   144,    53,   215,    96,    74,   218,
      85,    54,   215,    96,    96,    81,    82,    54,   227,    96,
      62,    48,    89,   227,    91,    92,    83,    51,    55,    53,
      50,   222,   173,    99,   329,   230,    54,   203,    62,    96,
      48,    48,   227,   119,    85,    83,   316,   230,    83,    51,
     259,    53,    82,   262,   121,   122,   259,   227,   370,   268,
      51,   127,    53,    53,    51,   268,    53,    48,   144,   210,
     301,    53,   303,    53,   215,   306,   307,   218,    62,    63,
      64,    53,   222,    67,    68,    82,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   245,    49,    50,    52,    54,   329,
     319,   423,   424,   425,    52,   385,   257,   312,   259,    48,
     186,   262,    96,    48,    53,    62,    51,   268,    53,   312,
      67,    68,    82,    62,   343,   301,    80,    62,    48,   343,
     349,    51,   373,    53,   339,    54,    54,   338,   460,   358,
     462,    54,   361,    82,   466,   358,   339,    96,   343,   429,
     227,    52,    52,    82,   230,    54,    48,   437,    54,    48,
     365,    53,    36,    54,    53,   316,    83,   243,   319,    48,
      62,   322,    52,    62,    52,    52,   130,   327,   132,   420,
      48,   422,    55,   269,    54,   139,    52,    52,    52,   408,
      82,    83,    52,   344,    83,    83,    53,    83,   349,    96,
      52,   352,    52,    52,   445,    52,    51,   358,    53,    52,
     361,    82,    57,    58,    59,    60,   435,   368,   459,    52,
      82,   435,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    27,   385,    52,   312,    83,    52,    52,
     435,   327,    83,    12,    38,    83,   332,    54,    42,    54,
      31,    70,   111,   332,    48,    49,    50,   408,   338,    53,
     411,    55,   344,   339,   435,    59,    60,    61,    62,    63,
      64,    65,    66,   121,   317,   203,    -1,    -1,   429,    -1,
       3,   432,   433,     6,     7,    -1,   437,    -1,    11,   365,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    -1,    25,    26,    -1,    28,    29,    -1,    31,    32,
      33,    34,    35,    -1,    37,    -1,    39,    40,    41,    -1,
      43,    44,    45,    46,    47,    -1,    -1,     3,    -1,    -1,
       6,     7,    55,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    25,
      26,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    85,    39,    40,    41,    -1,    43,    44,    -1,
      46,    47,    61,    62,    63,    64,    -1,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    84,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    53,
      -1,    55,    56,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    83,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    -1,
      53,    -1,    55,    56,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,     4,     5,    -1,    -1,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    -1,
      83,    -1,    -1,    -1,    24,    -1,    -1,    27,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    38,    62,
      63,    64,    42,    -1,    67,    68,    69,    70,    48,    49,
      50,    -1,    -1,    53,    -1,    55,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    -1,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,
      15,    -1,    -1,    83,    19,    20,    21,    22,    23,    -1,
      25,    26,    27,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      -1,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,    23,
      -1,    25,    26,    27,    -1,    29,    -1,    -1,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    47,    48,    49,    50,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    46,    47,    48,    -1,
      -1,    51,    -1,    53,    54,     3,    -1,    -1,     6,     7,
      -1,    -1,    62,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    -1,    25,    26,    -1,
      28,    29,    -1,    31,    32,    33,    34,    35,     7,    37,
      -1,    39,    40,    41,    -1,    43,    44,    -1,    46,    47,
      -1,    -1,    -1,    51,    23,    53,    54,    -1,    27,    28,
      -1,    -1,    -1,    -1,    62,    -1,    35,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,     7,    52,    53,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    23,    -1,
      -1,    -1,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,     7,    52,    53,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    23,    -1,    -1,    -1,    27,    28,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    38,    39,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,
       7,    52,    53,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    23,    -1,    -1,    -1,
      27,    28,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,     7,    52,    53,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      23,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,     7,    52,
      53,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    23,    -1,    -1,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,
      49,    50,     7,    52,    53,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    23,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    27,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    83,    19,    20,
      21,    22,    23,    -1,    25,    26,    -1,    28,    29,    -1,
      31,    32,    33,    34,    35,    -1,    37,    -1,    39,    40,
      41,    -1,    43,    44,    45,    46,    47,     3,    -1,    -1,
       6,     7,    -1,    -1,    55,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,    25,
      26,    -1,    28,    29,    -1,    31,    32,    33,    34,    35,
      -1,    37,    -1,    39,    40,    41,    -1,    43,    44,    -1,
      46,    47,    48,     3,    -1,    -1,     6,     7,    54,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    46,    47,     6,     7,
      -1,    -1,    -1,    11,    54,    13,    -1,    15,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,    -1,
      -1,    29,    -1,    -1,    32,    33,    34,    35,    -1,    37,
      -1,    39,    40,    41,    -1,    43,    -1,    45,    -1,    47,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    56,    15,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,
      26,    -1,    -1,    29,    -1,    -1,    32,    33,    34,    35,
      -1,    37,    -1,    39,    40,    41,    -1,    43,    -1,    45,
       0,    47,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,
      56,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    -1,    39,
      40,    41,    -1,    43,    44,    45,    46,    47,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      25,    26,    -1,    28,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    -1,    39,    40,    41,    -1,    43,    44,
      45,    46,    47,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    28,    29,
      -1,    31,    32,    33,    34,    35,    -1,    37,    -1,    39,
      40,    41,    -1,    43,    44,    -1,    46,    47,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    -1,    15,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,    -1,
      -1,    29,    -1,    -1,    32,    33,    34,    35,    -1,    37,
      -1,    39,    40,    41,    -1,    43,    -1,    45,    -1,    47,
       6,     7,    -1,     9,    -1,    11,    -1,    13,    -1,    15,
      -1,    -1,    -1,    -1,    20,    21,    -1,    23,    -1,    25,
      26,    -1,    -1,    29,    -1,    -1,    32,    33,    34,    35,
      -1,    37,    -1,    39,    40,    41,    -1,    43,     6,     7,
      -1,    47,    -1,    11,    -1,    13,    -1,    15,    -1,    -1,
      -1,    -1,    20,    21,    -1,    23,    -1,    25,    26,    -1,
      -1,    29,    -1,    27,    32,    33,    34,    35,    -1,    37,
      -1,    39,    40,    41,    38,    43,    -1,    -1,    42,    47,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    -1,    53,
      -1,    55,    56,    57,    27,    59,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    38,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    -1,
      53,    -1,    55,    56,    57,    27,    59,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    38,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      -1,    53,    -1,    55,    27,    57,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    38,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    -1,    -1,
      53,    54,    -1,    27,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    38,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    -1,    -1,    53,
      -1,    55,    27,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    38,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    -1,    -1,    53,    -1,
      -1,    27,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    -1,    -1,    53,    -1,    -1,
      27,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      61,    62,    63,    64,    -1,    -1,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,    61,    62,    63,
      64,    -1,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    61,    62,    63,    64,    -1,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    61,    62,    63,    64,    -1,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    62,    63,
      64,    -1,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    62,    63,    64,    -1,    -1,    67,    68,
      69,    70,    71,    72,    73,    74
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    22,    23,    25,    26,    28,    29,    31,    32,    33,
      34,    35,    37,    39,    40,    41,    43,    44,    45,    46,
      47,    99,   100,   101,   103,   104,   107,   108,   109,   110,
     116,   119,   120,   121,   122,   134,   140,    48,    55,    53,
      53,    53,     0,   100,    48,    53,    62,    83,   105,   106,
     123,   124,   125,   104,   104,    48,    55,   104,   104,   104,
      55,    48,   117,   118,    27,    38,    42,    48,    49,    50,
      53,    59,    60,    61,    62,    63,    64,    65,    66,   108,
     113,   120,   122,   131,   150,   155,   156,   157,   158,   159,
     160,   162,   163,   131,   150,   123,    39,   120,   125,   126,
      83,    96,    55,    85,   102,   103,   104,   143,    51,    53,
     124,    55,   111,   112,   113,   140,   117,    85,    56,    96,
      53,   158,    53,    53,   131,   152,   153,   155,   158,    53,
     158,   158,   113,    51,    53,   125,   132,   133,   113,   113,
      54,    54,    61,    62,    63,    64,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,   157,    51,    53,    57,    58,    59,    60,    54,    96,
      54,   120,   125,   106,   123,     4,     5,     8,     9,    10,
      16,    17,    18,    24,    30,    36,    48,    56,    83,   103,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   152,
      55,   135,   153,   103,   143,    28,    52,    62,   126,   153,
      48,    54,   104,   127,   128,   129,   130,   111,    56,   112,
      82,    83,   114,   115,   123,    56,    96,   150,    56,   118,
     131,   131,   153,    54,    54,    96,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,   154,   131,    28,
      52,    62,   126,   153,    54,   127,   132,   133,    51,    53,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   152,   152,
      54,   153,   161,    48,    48,    50,    83,   150,    83,    82,
     141,    53,    48,    53,    83,   152,    53,    53,    82,    56,
     145,    83,    51,    57,   135,   136,   137,   138,   139,   126,
     153,    52,    28,    52,    62,   153,    52,    53,   123,   125,
     132,    54,    96,    54,    96,    56,   150,    83,    96,    82,
      56,    54,    54,    96,    55,   157,   153,   153,    54,   126,
     153,    52,    28,    52,   153,    52,    54,    54,    28,    52,
      62,   126,   153,    54,   127,    82,    52,    54,    96,    54,
      82,   141,    36,   103,   151,   152,    83,   152,    83,   152,
     152,   141,   150,    48,    56,    96,   135,    85,   139,   153,
      52,   153,    52,    52,    84,   129,    48,   115,   150,     9,
     131,   164,   165,   136,   153,    52,   153,    52,   126,   153,
      52,    28,    52,   153,    52,    54,   155,   153,    83,   141,
      53,   151,    83,    54,    54,    54,    52,    56,   135,   137,
      52,    52,    82,    82,    54,    96,    56,    96,    52,    52,
     153,    52,   153,    52,   152,    83,   151,   141,   141,   141,
     135,   153,   153,   165,    56,    52,    52,    54,   151,    83,
      12,    83,    54,   151,   141,   141,    54,   141
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   103,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   105,   105,   106,   106,   107,   107,   107,
     107,   107,   107,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   109,
     109,   109,   110,   110,   111,   111,   112,   112,   112,   113,
     113,   113,   113,   113,   113,   114,   114,   115,   115,   115,
     116,   116,   116,   116,   116,   117,   117,   118,   118,   119,
     120,   120,   120,   120,   121,   121,   122,   122,   123,   123,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   124,   125,   125,   125,   125,   126,   126,
     127,   127,   128,   128,   129,   129,   129,   130,   130,   131,
     131,   132,   132,   132,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   134,   135,   135,   135,   136,
     136,   136,   136,   137,   138,   138,   139,   139,   140,   141,
     141,   141,   141,   141,   141,   142,   142,   142,   143,   143,
     144,   144,   145,   145,   146,   146,   147,   147,   147,   148,
     148,   148,   148,   149,   149,   149,   149,   149,   150,   151,
     151,   152,   152,   153,   153,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   155,   155,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   157,   157,   158,
     158,   158,   158,   158,   158,   158,   159,   159,   159,   159,
     159,   159,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   161,   161,   162,   162,   162,   162,   162,   163,
     164,   164,   165,   165
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     3,     4,     1,     2,
       2,     3,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       5,     2,     1,     1,     1,     2,     2,     3,     1,     1,
       1,     1,     2,     2,     2,     1,     3,     1,     2,     3,
       4,     5,     5,     6,     2,     1,     3,     1,     3,     4,
       1,     1,     1,     1,     1,     1,     4,     4,     1,     2,
       1,     3,     3,     4,     4,     5,     5,     6,     6,     4,
       5,     4,     3,     4,     1,     2,     2,     3,     1,     2,
       1,     3,     1,     3,     2,     1,     2,     1,     3,     1,
       2,     1,     1,     2,     3,     2,     3,     3,     4,     4,
       5,     5,     3,     2,     3,     3,     4,     4,     5,     5,
       6,     6,     4,     3,     4,     1,     1,     3,     4,     1,
       2,     3,     4,     2,     1,     2,     3,     2,     7,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     2,     3,
       1,     2,     1,     1,     1,     2,     5,     7,     5,     5,
       7,     9,     8,     3,     2,     2,     2,     3,     1,     0,
       1,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     4,     1,
       2,     2,     2,     2,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     4,     3,     3,     2,     2,
       6,     7,     1,     3,     1,     1,     1,     3,     1,     6,
       1,     3,     3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (root, YY_("syntax error: cannot back up")); \
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
                  Type, Value, root); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, void **root)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (root);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, void **root)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep, root);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule, void **root)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              , root);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, root); \
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, void **root)
{
  YYUSE (yyvaluep);
  YYUSE (root);
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
yyparse (void **root)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 287 "yacc_syntax.y"
        {
            if (!error_found)
            {
                *root = (void *) ast_create_node(TranslationUnit, content_null, 1, (yyvsp[0].node));
            }
        }
#line 2245 "y.tab.c"
    break;

  case 3:
#line 294 "yacc_syntax.y"
        {
            if (!error_found)
            {
                *root = (void *) ast_expand_node(*root, (yyvsp[0].node));
            }
        }
#line 2256 "y.tab.c"
    break;

  case 4:
#line 303 "yacc_syntax.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 2262 "y.tab.c"
    break;

  case 5:
#line 304 "yacc_syntax.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 2268 "y.tab.c"
    break;

  case 6:
#line 309 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(FunctionDefinition, content_null, 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        }
#line 2276 "y.tab.c"
    break;

  case 7:
#line 313 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(FunctionDefinition, content_null, 4, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        }
#line 2284 "y.tab.c"
    break;

  case 8:
#line 320 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(DeclarationList, content_null, 1, (yyvsp[0].node));
        }
#line 2292 "y.tab.c"
    break;

  case 9:
#line 324 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-1].node), (yyvsp[0].node));
        }
#line 2300 "y.tab.c"
    break;

  case 10:
#line 333 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(Declaration, content_null, 1, (yyvsp[-1].node));
        }
#line 2308 "y.tab.c"
    break;

  case 11:
#line 337 "yacc_syntax.y"
        {
            if (is_typedef_used((yyvsp[-2].node))) collect_typedef_names((yyvsp[-1].node));  // Storing typedef-name
            (yyval.node) = ast_create_node(Declaration, content_null, 2, (yyvsp[-2].node), (yyvsp[-1].node));
        }
#line 2317 "y.tab.c"
    break;

  case 12:
#line 341 "yacc_syntax.y"
                                   { (yyval.node) = (yyvsp[0].node); }
#line 2323 "y.tab.c"
    break;

  case 13:
#line 346 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(DeclarationSpecifiers, content_null, 1, (yyvsp[0].node));
        }
#line 2331 "y.tab.c"
    break;

  case 14:
#line 350 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(DeclarationSpecifiers, content_null, 1, (yyvsp[0].node));
        }
#line 2339 "y.tab.c"
    break;

  case 15:
#line 354 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(DeclarationSpecifiers, content_null, 1, (yyvsp[0].node));
        }
#line 2347 "y.tab.c"
    break;

  case 16:
#line 358 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(DeclarationSpecifiers, content_null, 1, (yyvsp[0].node));
        }
#line 2355 "y.tab.c"
    break;

  case 17:
#line 362 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(DeclarationSpecifiers, content_null, 1, (yyvsp[0].node));
        }
#line 2363 "y.tab.c"
    break;

  case 18:
#line 366 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[0].node), (yyvsp[-1].node));
        }
#line 2371 "y.tab.c"
    break;

  case 19:
#line 370 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[0].node), (yyvsp[-1].node));
        }
#line 2379 "y.tab.c"
    break;

  case 20:
#line 374 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[0].node), (yyvsp[-1].node));
        }
#line 2387 "y.tab.c"
    break;

  case 21:
#line 378 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[0].node), (yyvsp[-1].node));
        }
#line 2395 "y.tab.c"
    break;

  case 22:
#line 382 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[0].node), (yyvsp[-1].node));
        }
#line 2403 "y.tab.c"
    break;

  case 23:
#line 389 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(InitDeclaratorList, content_null, 1, (yyvsp[0].node));
        }
#line 2411 "y.tab.c"
    break;

  case 24:
#line 393 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-2].node), (yyvsp[0].node));
        }
#line 2419 "y.tab.c"
    break;

  case 25:
#line 400 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(InitDeclarator, content_null, 1, (yyvsp[0].node));
        }
#line 2427 "y.tab.c"
    break;

  case 26:
#line 404 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(InitDeclarator, content_null, 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 2435 "y.tab.c"
    break;

  case 27:
#line 410 "yacc_syntax.y"
                        { (yyval.node) = ast_create_node(StorageClassSpecifier, content_t(TYPEDEF), 0); }
#line 2441 "y.tab.c"
    break;

  case 28:
#line 411 "yacc_syntax.y"
                        { (yyval.node) = ast_create_node(StorageClassSpecifier, content_t(EXTERN), 0); }
#line 2447 "y.tab.c"
    break;

  case 29:
#line 412 "yacc_syntax.y"
                        { (yyval.node) = ast_create_node(StorageClassSpecifier, content_t(STATIC), 0); }
#line 2453 "y.tab.c"
    break;

  case 30:
#line 413 "yacc_syntax.y"
                        { (yyval.node) = ast_create_node(StorageClassSpecifier, content_t(THREAD_LOCAL), 0); }
#line 2459 "y.tab.c"
    break;

  case 31:
#line 414 "yacc_syntax.y"
                        { (yyval.node) = ast_create_node(StorageClassSpecifier, content_t(AUTO), 0); }
#line 2465 "y.tab.c"
    break;

  case 32:
#line 415 "yacc_syntax.y"
                        { (yyval.node) = ast_create_node(StorageClassSpecifier, content_t(REGISTER), 0); }
#line 2471 "y.tab.c"
    break;

  case 33:
#line 419 "yacc_syntax.y"
                     { (yyval.node) = ast_create_node(TypeSpecifier, content_t(VOID), 0); }
#line 2477 "y.tab.c"
    break;

  case 34:
#line 420 "yacc_syntax.y"
                     { (yyval.node) = ast_create_node(TypeSpecifier, content_t(CHAR), 0); }
#line 2483 "y.tab.c"
    break;

  case 35:
#line 421 "yacc_syntax.y"
                     { (yyval.node) = ast_create_node(TypeSpecifier, content_t(SHORT), 0); }
#line 2489 "y.tab.c"
    break;

  case 36:
#line 422 "yacc_syntax.y"
                     { (yyval.node) = ast_create_node(TypeSpecifier, content_t(INT), 0); }
#line 2495 "y.tab.c"
    break;

  case 37:
#line 423 "yacc_syntax.y"
                     { (yyval.node) = ast_create_node(TypeSpecifier, content_t(LONG), 0); }
#line 2501 "y.tab.c"
    break;

  case 38:
#line 424 "yacc_syntax.y"
                     { (yyval.node) = ast_create_node(TypeSpecifier, content_t(FLOAT), 0); }
#line 2507 "y.tab.c"
    break;

  case 39:
#line 425 "yacc_syntax.y"
                     { (yyval.node) = ast_create_node(TypeSpecifier, content_t(DOUBLE), 0); }
#line 2513 "y.tab.c"
    break;

  case 40:
#line 426 "yacc_syntax.y"
                     { (yyval.node) = ast_create_node(TypeSpecifier, content_t(SIGNED), 0); }
#line 2519 "y.tab.c"
    break;

  case 41:
#line 427 "yacc_syntax.y"
                     { (yyval.node) = ast_create_node(TypeSpecifier, content_t(UNSIGNED), 0); }
#line 2525 "y.tab.c"
    break;

  case 42:
#line 428 "yacc_syntax.y"
                     { (yyval.node) = ast_create_node(TypeSpecifier, content_t(BOOL), 0); }
#line 2531 "y.tab.c"
    break;

  case 43:
#line 429 "yacc_syntax.y"
                     { (yyval.node) = ast_create_node(TypeSpecifier, content_t(COMPLEX), 0); }
#line 2537 "y.tab.c"
    break;

  case 44:
#line 430 "yacc_syntax.y"
                     { (yyval.node) = ast_create_node(TypeSpecifier, content_t(IMAGINARY), 0); }
#line 2543 "y.tab.c"
    break;

  case 45:
#line 431 "yacc_syntax.y"
                                  { (yyval.node) = (yyvsp[0].node); }
#line 2549 "y.tab.c"
    break;

  case 46:
#line 432 "yacc_syntax.y"
                                  { (yyval.node) = (yyvsp[0].node); }
#line 2555 "y.tab.c"
    break;

  case 47:
#line 433 "yacc_syntax.y"
                                  { (yyval.node) = (yyvsp[0].node); }
#line 2561 "y.tab.c"
    break;

  case 48:
#line 434 "yacc_syntax.y"
                                  { (yyval.node) = (yyvsp[0].node); }
#line 2567 "y.tab.c"
    break;

  case 49:
#line 439 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node((yyvsp[-3].boolean_v) ? StructSpecifier : UnionSpecifier, content_null, 1, (yyvsp[-1].node));
        }
#line 2575 "y.tab.c"
    break;

  case 50:
#line 443 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node((yyvsp[-4].boolean_v) ? StructSpecifier : UnionSpecifier, content_null, 2, (yyvsp[-3].node), (yyvsp[-1].node));
        }
#line 2583 "y.tab.c"
    break;

  case 51:
#line 447 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node((yyvsp[-1].boolean_v) ? StructSpecifier : UnionSpecifier, content_null, 1, (yyvsp[0].node));
        }
#line 2591 "y.tab.c"
    break;

  case 52:
#line 453 "yacc_syntax.y"
                  { (yyval.boolean_v) = true; }
#line 2597 "y.tab.c"
    break;

  case 53:
#line 454 "yacc_syntax.y"
                  { (yyval.boolean_v) = false; }
#line 2603 "y.tab.c"
    break;

  case 54:
#line 459 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(StructDeclarationList, content_null, 1, (yyvsp[0].node));
        }
#line 2611 "y.tab.c"
    break;

  case 55:
#line 463 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-1].node), (yyvsp[0].node));
        }
#line 2619 "y.tab.c"
    break;

  case 56:
#line 470 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(StructDeclaration, content_null, 1, (yyvsp[-1].node));
        }
#line 2627 "y.tab.c"
    break;

  case 57:
#line 474 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(StructDeclaration, content_null, 2, (yyvsp[-2].node), (yyvsp[-1].node));
        }
#line 2635 "y.tab.c"
    break;

  case 58:
#line 477 "yacc_syntax.y"
                                   { (yyval.node) = (yyvsp[0].node); }
#line 2641 "y.tab.c"
    break;

  case 59:
#line 482 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(SpecifierQualifierList, content_null, 1, (yyvsp[0].node));
        }
#line 2649 "y.tab.c"
    break;

  case 60:
#line 486 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(SpecifierQualifierList, content_null, 1, (yyvsp[0].node));
        }
#line 2657 "y.tab.c"
    break;

  case 61:
#line 490 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(SpecifierQualifierList, content_null, 1, (yyvsp[0].node));
        }
#line 2665 "y.tab.c"
    break;

  case 62:
#line 494 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[0].node), (yyvsp[-1].node));
        }
#line 2673 "y.tab.c"
    break;

  case 63:
#line 498 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[0].node), (yyvsp[-1].node));
        }
#line 2681 "y.tab.c"
    break;

  case 64:
#line 502 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[0].node), (yyvsp[-1].node));
        }
#line 2689 "y.tab.c"
    break;

  case 65:
#line 509 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(StructDeclaratorList, content_null, 1, (yyvsp[0].node));
        }
#line 2697 "y.tab.c"
    break;

  case 66:
#line 513 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-2].node), (yyvsp[0].node));
        }
#line 2705 "y.tab.c"
    break;

  case 67:
#line 519 "yacc_syntax.y"
                                               { (yyval.node) = (yyvsp[0].node); }
#line 2711 "y.tab.c"
    break;

  case 68:
#line 520 "yacc_syntax.y"
                                               { (yyval.node) = (yyvsp[0].node); }
#line 2717 "y.tab.c"
    break;

  case 69:
#line 522 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(StructDeclarator, content_null, 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 2725 "y.tab.c"
    break;

  case 70:
#line 529 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(EnumSpecifier, content_null, 1, (yyvsp[-1].node));
        }
#line 2733 "y.tab.c"
    break;

  case 71:
#line 533 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(EnumSpecifier, content_null, 1, (yyvsp[-2].node));
        }
#line 2741 "y.tab.c"
    break;

  case 72:
#line 537 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(EnumSpecifier, content_null, 2, (yyvsp[-3].node), (yyvsp[-1].node));
        }
#line 2749 "y.tab.c"
    break;

  case 73:
#line 541 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(EnumSpecifier, content_null, 2, (yyvsp[-4].node), (yyvsp[-2].node));
        }
#line 2757 "y.tab.c"
    break;

  case 74:
#line 545 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(EnumSpecifier, content_null, 1, (yyvsp[0].node));
        }
#line 2765 "y.tab.c"
    break;

  case 75:
#line 552 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(EnumeratorList, content_null, 1, (yyvsp[0].node));
        }
#line 2773 "y.tab.c"
    break;

  case 76:
#line 556 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-2].node), (yyvsp[0].node));
        }
#line 2781 "y.tab.c"
    break;

  case 77:
#line 563 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(Enumerator, content_null, 1, (yyvsp[0].node));
        }
#line 2789 "y.tab.c"
    break;

  case 78:
#line 567 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(Enumerator, content_null, 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 2797 "y.tab.c"
    break;

  case 79:
#line 574 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(AtomicTypeSpecifier, content_null, 1, (yyvsp[-1].node));
        }
#line 2805 "y.tab.c"
    break;

  case 80:
#line 580 "yacc_syntax.y"
                    { (yyval.node) = ast_create_node(TypeQualifier, content_t(CONST), 0); }
#line 2811 "y.tab.c"
    break;

  case 81:
#line 581 "yacc_syntax.y"
                    { (yyval.node) = ast_create_node(TypeQualifier, content_t(RESTRICT), 0); }
#line 2817 "y.tab.c"
    break;

  case 82:
#line 582 "yacc_syntax.y"
                    { (yyval.node) = ast_create_node(TypeQualifier, content_t(VOLATILE), 0); }
#line 2823 "y.tab.c"
    break;

  case 83:
#line 583 "yacc_syntax.y"
                    { (yyval.node) = ast_create_node(TypeQualifier, content_t(ATOMIC), 0); }
#line 2829 "y.tab.c"
    break;

  case 84:
#line 587 "yacc_syntax.y"
                    { (yyval.node) = ast_create_node(FunctionSpecifier, content_t(INLINE), 0); }
#line 2835 "y.tab.c"
    break;

  case 85:
#line 588 "yacc_syntax.y"
                    { (yyval.node) = ast_create_node(FunctionSpecifier, content_t(NORETURN), 0); }
#line 2841 "y.tab.c"
    break;

  case 86:
#line 593 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(AlignmentSpecifier, content_null, 1, (yyvsp[-1].node));
        }
#line 2849 "y.tab.c"
    break;

  case 87:
#line 597 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(AlignmentSpecifier, content_null, 1, (yyvsp[-1].node));
        }
#line 2857 "y.tab.c"
    break;

  case 88:
#line 604 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(Declarator, content_null, 1, (yyvsp[0].node));
        }
#line 2865 "y.tab.c"
    break;

  case 89:
#line 608 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(Declarator, content_null, 2, (yyvsp[-1].node), (yyvsp[0].node));
        }
#line 2873 "y.tab.c"
    break;

  case 90:
#line 615 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(DirectDeclarator, content_null, 1, (yyvsp[0].node));
        }
#line 2881 "y.tab.c"
    break;

  case 91:
#line 619 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(DirectDeclarator, content_t(LPAREN), 1, (yyvsp[-1].node));
        }
#line 2889 "y.tab.c"
    break;

  case 92:
#line 623 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-2].node), ast_create_node(DirectDeclaratorBrackets, content_null, 0));
        }
#line 2897 "y.tab.c"
    break;

  case 93:
#line 627 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-3].node), ast_create_node(DirectDeclaratorBrackets, content_null, 1, (yyvsp[-1].node)));
        }
#line 2905 "y.tab.c"
    break;

  case 94:
#line 631 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-3].node), ast_create_node(DirectDeclaratorBrackets, content_null, 1, (yyvsp[-1].node)));
        }
#line 2913 "y.tab.c"
    break;

  case 95:
#line 635 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-4].node), ast_create_node(DirectDeclaratorBrackets, content_null, 2, (yyvsp[-2].node), (yyvsp[-1].node)));
        }
#line 2921 "y.tab.c"
    break;

  case 96:
#line 639 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-4].node), ast_create_node(DirectDeclaratorBrackets, content_t(STATIC), 1, (yyvsp[-1].node)));
        }
#line 2929 "y.tab.c"
    break;

  case 97:
#line 643 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-5].node), ast_create_node(DirectDeclaratorBrackets, content_t(STATIC), 2, (yyvsp[-2].node), (yyvsp[-1].node)));
        }
#line 2937 "y.tab.c"
    break;

  case 98:
#line 647 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-5].node), ast_create_node(DirectDeclaratorBrackets, content_t(STATIC), 2, (yyvsp[-3].node), (yyvsp[-1].node)));
        }
#line 2945 "y.tab.c"
    break;

  case 99:
#line 651 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-3].node), ast_create_node(DirectDeclaratorBrackets, content_t(ASTERISK), 0));
        }
#line 2953 "y.tab.c"
    break;

  case 100:
#line 655 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-4].node), ast_create_node(DirectDeclaratorBrackets, content_t(ASTERISK), 1, (yyvsp[-2].node)));
        }
#line 2961 "y.tab.c"
    break;

  case 101:
#line 659 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-3].node), ast_create_node(DirectDeclaratorParen, content_null, 1, (yyvsp[-1].node)));
        }
#line 2969 "y.tab.c"
    break;

  case 102:
#line 663 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-2].node), ast_create_node(DirectDeclaratorParen, content_null, 0));
        }
#line 2977 "y.tab.c"
    break;

  case 103:
#line 667 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-3].node), ast_create_node(DirectDeclaratorParen, content_null, 1, (yyvsp[-1].node)));
        }
#line 2985 "y.tab.c"
    break;

  case 104:
#line 674 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(Pointer, content_null, 0);
        }
#line 2993 "y.tab.c"
    break;

  case 105:
#line 678 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(Pointer, content_null, 1, (yyvsp[0].node));
        }
#line 3001 "y.tab.c"
    break;

  case 106:
#line 682 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node(ast_create_node(Pointer, content_null, 0), (yyvsp[0].node));
        }
#line 3009 "y.tab.c"
    break;

  case 107:
#line 686 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node(ast_create_node(Pointer, content_null, 1, (yyvsp[-1].node)), (yyvsp[0].node));
        }
#line 3017 "y.tab.c"
    break;

  case 108:
#line 693 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(TypeQualifierList, content_null, 1, (yyvsp[0].node));
        }
#line 3025 "y.tab.c"
    break;

  case 109:
#line 697 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-1].node), (yyvsp[0].node));
        }
#line 3033 "y.tab.c"
    break;

  case 110:
#line 703 "yacc_syntax.y"
                         { (yyval.node) = (yyvsp[0].node); }
#line 3039 "y.tab.c"
    break;

  case 111:
#line 705 "yacc_syntax.y"
        {
            (yyvsp[-2].node)->content = content_t(ELLIPSIS);
            (yyval.node) = (yyvsp[-2].node);
        }
#line 3048 "y.tab.c"
    break;

  case 112:
#line 713 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ParameterList, content_null, 1, (yyvsp[0].node));
        }
#line 3056 "y.tab.c"
    break;

  case 113:
#line 717 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3064 "y.tab.c"
    break;

  case 114:
#line 724 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ParameterDeclaration, content_null, 2, (yyvsp[-1].node), (yyvsp[0].node));
        }
#line 3072 "y.tab.c"
    break;

  case 115:
#line 728 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ParameterDeclaration, content_null, 1, (yyvsp[0].node));
        }
#line 3080 "y.tab.c"
    break;

  case 116:
#line 732 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ParameterDeclaration, content_null, 2, (yyvsp[-1].node), (yyvsp[0].node));
        }
#line 3088 "y.tab.c"
    break;

  case 117:
#line 739 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(IdentifierList, content_null, 1, (yyvsp[0].node));
        }
#line 3096 "y.tab.c"
    break;

  case 118:
#line 743 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3104 "y.tab.c"
    break;

  case 119:
#line 750 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(TypeName, content_null, 1, (yyvsp[0].node));
        }
#line 3112 "y.tab.c"
    break;

  case 120:
#line 754 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(TypeName, content_null, 2, (yyvsp[-1].node), (yyvsp[0].node));
        }
#line 3120 "y.tab.c"
    break;

  case 121:
#line 761 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(AbstractDeclarator, content_null, 1, (yyvsp[0].node));
        }
#line 3128 "y.tab.c"
    break;

  case 122:
#line 765 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(AbstractDeclarator, content_null, 1, (yyvsp[0].node));
        }
#line 3136 "y.tab.c"
    break;

  case 123:
#line 769 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(AbstractDeclarator, content_null, 2, (yyvsp[-1].node), (yyvsp[0].node));
        }
#line 3144 "y.tab.c"
    break;

  case 124:
#line 776 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(DirectAbstractDeclarator, content_null, 1, (yyvsp[-1].node));
        }
#line 3152 "y.tab.c"
    break;

  case 125:
#line 780 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(DirectAbstractDeclarator, content_null, 1,
                ast_create_node(DirectAbstractDeclaratorBrackets, content_null, 0));
        }
#line 3161 "y.tab.c"
    break;

  case 126:
#line 785 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(DirectAbstractDeclarator, content_null, 1,
                ast_create_node(DirectAbstractDeclaratorBrackets, content_null, 1, (yyvsp[-1].node)));
        }
#line 3170 "y.tab.c"
    break;

  case 127:
#line 790 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(DirectAbstractDeclarator, content_null, 1,
                ast_create_node(DirectAbstractDeclaratorBrackets, content_null, 1, (yyvsp[-1].node)));
        }
#line 3179 "y.tab.c"
    break;

  case 128:
#line 795 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(DirectAbstractDeclarator, content_null, 1,
                ast_create_node(DirectAbstractDeclaratorBrackets, content_null, 2, (yyvsp[-2].node), (yyvsp[-1].node)));
        }
#line 3188 "y.tab.c"
    break;

  case 129:
#line 800 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(DirectAbstractDeclarator, content_null, 1,
                ast_create_node(DirectAbstractDeclaratorBrackets, content_t(STATIC), 1, (yyvsp[-1].node)));
        }
#line 3197 "y.tab.c"
    break;

  case 130:
#line 805 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(DirectAbstractDeclarator, content_null, 1,
                ast_create_node(DirectAbstractDeclaratorBrackets, content_t(STATIC), 2, (yyvsp[-2].node), (yyvsp[-1].node)));
        }
#line 3206 "y.tab.c"
    break;

  case 131:
#line 810 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(DirectAbstractDeclarator, content_null, 1,
                ast_create_node(DirectAbstractDeclaratorBrackets, content_t(STATIC), 2, (yyvsp[-3].node), (yyvsp[-1].node)));
        }
#line 3215 "y.tab.c"
    break;

  case 132:
#line 815 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(DirectAbstractDeclarator, content_null, 1,
                ast_create_node(DirectAbstractDeclaratorBrackets, content_t(ASTERISK), 0));
        }
#line 3224 "y.tab.c"
    break;

  case 133:
#line 820 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(DirectAbstractDeclarator, content_null, 1,
                ast_create_node(DirectAbstractDeclaratorParen, content_null, 0));
        }
#line 3233 "y.tab.c"
    break;

  case 134:
#line 825 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(DirectAbstractDeclarator, content_null, 1,
                ast_create_node(DirectAbstractDeclaratorParen, content_null, 1, (yyvsp[-1].node)));
        }
#line 3242 "y.tab.c"
    break;

  case 135:
#line 830 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-2].node), ast_create_node(DirectAbstractDeclaratorBrackets, content_null, 0));
        }
#line 3250 "y.tab.c"
    break;

  case 136:
#line 834 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-3].node), ast_create_node(DirectAbstractDeclaratorBrackets, content_null, 1, (yyvsp[-1].node)));
        }
#line 3258 "y.tab.c"
    break;

  case 137:
#line 838 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-3].node), ast_create_node(DirectAbstractDeclaratorBrackets, content_null, 1, (yyvsp[-1].node)));
        }
#line 3266 "y.tab.c"
    break;

  case 138:
#line 842 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-4].node), ast_create_node(DirectAbstractDeclaratorBrackets, content_null, 2, (yyvsp[-2].node), (yyvsp[-1].node)));
        }
#line 3274 "y.tab.c"
    break;

  case 139:
#line 846 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-4].node), ast_create_node(DirectAbstractDeclaratorBrackets, content_t(STATIC), 1, (yyvsp[-1].node)));
        }
#line 3282 "y.tab.c"
    break;

  case 140:
#line 850 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-5].node), ast_create_node(DirectAbstractDeclaratorBrackets, content_t(STATIC), 2, (yyvsp[-2].node), (yyvsp[-1].node)));
        }
#line 3290 "y.tab.c"
    break;

  case 141:
#line 854 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-5].node), ast_create_node(DirectAbstractDeclaratorBrackets, content_t(STATIC), 2, (yyvsp[-3].node), (yyvsp[-1].node)));
        }
#line 3298 "y.tab.c"
    break;

  case 142:
#line 858 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-3].node), ast_create_node(DirectAbstractDeclaratorBrackets, content_t(ASTERISK), 0));
        }
#line 3306 "y.tab.c"
    break;

  case 143:
#line 862 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-2].node), ast_create_node(DirectAbstractDeclaratorParen, content_null, 0));
        }
#line 3314 "y.tab.c"
    break;

  case 144:
#line 866 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-3].node), ast_create_node(DirectAbstractDeclaratorParen, content_null, 1, (yyvsp[-1].node)));
        }
#line 3322 "y.tab.c"
    break;

  case 145:
#line 872 "yacc_syntax.y"
                        { (yyval.node) = (yyvsp[0].node); }
#line 3328 "y.tab.c"
    break;

  case 146:
#line 878 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(Initializer, content_null, 1, (yyvsp[0].node));
        }
#line 3336 "y.tab.c"
    break;

  case 147:
#line 882 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(Initializer, content_null, 1, (yyvsp[-1].node));
        }
#line 3344 "y.tab.c"
    break;

  case 148:
#line 886 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(Initializer, content_null, 1, (yyvsp[-2].node));
        }
#line 3352 "y.tab.c"
    break;

  case 149:
#line 893 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(InitializerList, content_null, 1, ast_create_node(InitializerListElem, content_null, 1, (yyvsp[0].node)));
        }
#line 3360 "y.tab.c"
    break;

  case 150:
#line 897 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(InitializerList, content_null, 1, ast_create_node(InitializerListElem, content_null, 2, (yyvsp[-1].node), (yyvsp[0].node)));
        }
#line 3368 "y.tab.c"
    break;

  case 151:
#line 901 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-2].node), ast_create_node(InitializerListElem, content_null, 1, (yyvsp[0].node)));
        }
#line 3376 "y.tab.c"
    break;

  case 152:
#line 905 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-3].node), ast_create_node(InitializerListElem, content_null, 2, (yyvsp[-1].node), (yyvsp[0].node)));
        }
#line 3384 "y.tab.c"
    break;

  case 153:
#line 911 "yacc_syntax.y"
                                 { (yyval.node) = (yyvsp[-1].node); }
#line 3390 "y.tab.c"
    break;

  case 154:
#line 916 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(DesignatorList, content_null, 1, (yyvsp[0].node));
        }
#line 3398 "y.tab.c"
    break;

  case 155:
#line 920 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-1].node), (yyvsp[0].node));
        }
#line 3406 "y.tab.c"
    break;

  case 156:
#line 926 "yacc_syntax.y"
                                                { (yyval.node) = (yyvsp[-1].node); }
#line 3412 "y.tab.c"
    break;

  case 157:
#line 927 "yacc_syntax.y"
                                                { (yyval.node) = (yyvsp[0].node); }
#line 3418 "y.tab.c"
    break;

  case 158:
#line 932 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(StaticAssertDeclaration, content_null, 2, (yyvsp[-4].node), (yyvsp[-2].node));
        }
#line 3426 "y.tab.c"
    break;

  case 159:
#line 940 "yacc_syntax.y"
                               { (yyval.node) = (yyvsp[0].node); }
#line 3432 "y.tab.c"
    break;

  case 160:
#line 941 "yacc_syntax.y"
                               { (yyval.node) = (yyvsp[0].node); }
#line 3438 "y.tab.c"
    break;

  case 161:
#line 942 "yacc_syntax.y"
                               { (yyval.node) = (yyvsp[0].node); }
#line 3444 "y.tab.c"
    break;

  case 162:
#line 943 "yacc_syntax.y"
                               { (yyval.node) = (yyvsp[0].node); }
#line 3450 "y.tab.c"
    break;

  case 163:
#line 944 "yacc_syntax.y"
                               { (yyval.node) = (yyvsp[0].node); }
#line 3456 "y.tab.c"
    break;

  case 164:
#line 945 "yacc_syntax.y"
                               { (yyval.node) = (yyvsp[0].node); }
#line 3462 "y.tab.c"
    break;

  case 165:
#line 950 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(LabeledStatement, content_null, 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3470 "y.tab.c"
    break;

  case 166:
#line 954 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(LabeledStatement, content_t(CASE), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3478 "y.tab.c"
    break;

  case 167:
#line 958 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(LabeledStatement, content_t(DEFAULT), 1, (yyvsp[0].node));
        }
#line 3486 "y.tab.c"
    break;

  case 168:
#line 964 "yacc_syntax.y"
                                       { (yyval.node) = NULL; }
#line 3492 "y.tab.c"
    break;

  case 169:
#line 965 "yacc_syntax.y"
                                       { (yyval.node) = (yyvsp[-1].node); }
#line 3498 "y.tab.c"
    break;

  case 170:
#line 970 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(BlockItemList, content_null, 1, (yyvsp[0].node));
        }
#line 3506 "y.tab.c"
    break;

  case 171:
#line 974 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-1].node), (yyvsp[0].node));
        }
#line 3514 "y.tab.c"
    break;

  case 172:
#line 980 "yacc_syntax.y"
                       { (yyval.node) = (yyvsp[0].node); }
#line 3520 "y.tab.c"
    break;

  case 173:
#line 981 "yacc_syntax.y"
                       { (yyval.node) = (yyvsp[0].node); }
#line 3526 "y.tab.c"
    break;

  case 174:
#line 985 "yacc_syntax.y"
                                { (yyval.node) = NULL; }
#line 3532 "y.tab.c"
    break;

  case 175:
#line 986 "yacc_syntax.y"
                                { (yyval.node) = (yyvsp[-1].node); }
#line 3538 "y.tab.c"
    break;

  case 176:
#line 991 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(SelectionStatement, content_t(IF), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3546 "y.tab.c"
    break;

  case 177:
#line 995 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(SelectionStatement, content_t(IF), 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3554 "y.tab.c"
    break;

  case 178:
#line 999 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(SelectionStatement, content_t(SWITCH), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3562 "y.tab.c"
    break;

  case 179:
#line 1006 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(IterationStatement, content_t(WHILE), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3570 "y.tab.c"
    break;

  case 180:
#line 1010 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(IterationStatement, content_t(DO), 2, (yyvsp[-2].node), (yyvsp[-5].node));  // Expression first
        }
#line 3578 "y.tab.c"
    break;

  case 181:
#line 1014 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(IterationStatement, content_t(FOR), 4, (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3586 "y.tab.c"
    break;

  case 182:
#line 1018 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(IterationStatement, content_t(FOR), 3, (yyvsp[-5].node), (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3594 "y.tab.c"
    break;

  case 183:
#line 1025 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(JumpStatement, content_t(GOTO), 1, (yyvsp[-1].node));
        }
#line 3602 "y.tab.c"
    break;

  case 184:
#line 1029 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(JumpStatement, content_t(CONTINUE), 0);
        }
#line 3610 "y.tab.c"
    break;

  case 185:
#line 1033 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(JumpStatement, content_t(BREAK), 0);
        }
#line 3618 "y.tab.c"
    break;

  case 186:
#line 1037 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(JumpStatement, content_t(RETURN), 0);
        }
#line 3626 "y.tab.c"
    break;

  case 187:
#line 1041 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(JumpStatement, content_t(RETURN), 1, (yyvsp[-1].node));
        }
#line 3634 "y.tab.c"
    break;

  case 188:
#line 1049 "yacc_syntax.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 3640 "y.tab.c"
    break;

  case 189:
#line 1055 "yacc_syntax.y"
                       { (yyval.node) = NULL; }
#line 3646 "y.tab.c"
    break;

  case 190:
#line 1056 "yacc_syntax.y"
                       { (yyval.node) = (yyvsp[0].node); }
#line 3652 "y.tab.c"
    break;

  case 191:
#line 1061 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(Expression, content_null, 1, (yyvsp[0].node));
        }
#line 3660 "y.tab.c"
    break;

  case 192:
#line 1065 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3668 "y.tab.c"
    break;

  case 193:
#line 1071 "yacc_syntax.y"
                                 { (yyval.node) = (yyvsp[0].node); }
#line 3674 "y.tab.c"
    break;

  case 194:
#line 1073 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(AssignmentExpression, content_null, 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
        }
#line 3682 "y.tab.c"
    break;

  case 195:
#line 1079 "yacc_syntax.y"
                        { (yyval.node) = ast_create_node(AssignmentOperator, content_t(ASSIGN), 0); }
#line 3688 "y.tab.c"
    break;

  case 196:
#line 1080 "yacc_syntax.y"
                        { (yyval.node) = ast_create_node(AssignmentOperator, content_t(MUL_ASSIGN), 0); }
#line 3694 "y.tab.c"
    break;

  case 197:
#line 1081 "yacc_syntax.y"
                        { (yyval.node) = ast_create_node(AssignmentOperator, content_t(DIV_ASSIGN), 0); }
#line 3700 "y.tab.c"
    break;

  case 198:
#line 1082 "yacc_syntax.y"
                        { (yyval.node) = ast_create_node(AssignmentOperator, content_t(MOD_ASSIGN), 0); }
#line 3706 "y.tab.c"
    break;

  case 199:
#line 1083 "yacc_syntax.y"
                        { (yyval.node) = ast_create_node(AssignmentOperator, content_t(ADD_ASSIGN), 0); }
#line 3712 "y.tab.c"
    break;

  case 200:
#line 1084 "yacc_syntax.y"
                        { (yyval.node) = ast_create_node(AssignmentOperator, content_t(SUB_ASSIGN), 0); }
#line 3718 "y.tab.c"
    break;

  case 201:
#line 1085 "yacc_syntax.y"
                        { (yyval.node) = ast_create_node(AssignmentOperator, content_t(LEFT_ASSIGN), 0); }
#line 3724 "y.tab.c"
    break;

  case 202:
#line 1086 "yacc_syntax.y"
                        { (yyval.node) = ast_create_node(AssignmentOperator, content_t(RIGHT_ASSIGN), 0); }
#line 3730 "y.tab.c"
    break;

  case 203:
#line 1087 "yacc_syntax.y"
                        { (yyval.node) = ast_create_node(AssignmentOperator, content_t(AND_ASSIGN), 0); }
#line 3736 "y.tab.c"
    break;

  case 204:
#line 1088 "yacc_syntax.y"
                        { (yyval.node) = ast_create_node(AssignmentOperator, content_t(XOR_ASSIGN), 0); }
#line 3742 "y.tab.c"
    break;

  case 205:
#line 1089 "yacc_syntax.y"
                        { (yyval.node) = ast_create_node(AssignmentOperator, content_t(OR_ASSIGN), 0); }
#line 3748 "y.tab.c"
    break;

  case 206:
#line 1093 "yacc_syntax.y"
                                  { (yyval.node) = (yyvsp[0].node); }
#line 3754 "y.tab.c"
    break;

  case 207:
#line 1095 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ConditionalExpression, content_null, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3762 "y.tab.c"
    break;

  case 208:
#line 1101 "yacc_syntax.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 3768 "y.tab.c"
    break;

  case 209:
#line 1103 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ArithmeticalExpression, content_t(LOG_OR), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3776 "y.tab.c"
    break;

  case 210:
#line 1107 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ArithmeticalExpression, content_t(LOG_AND), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3784 "y.tab.c"
    break;

  case 211:
#line 1111 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ArithmeticalExpression, content_t(VERTICAL), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3792 "y.tab.c"
    break;

  case 212:
#line 1115 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ArithmeticalExpression, content_t(CARET), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3800 "y.tab.c"
    break;

  case 213:
#line 1119 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ArithmeticalExpression, content_t(AMPERSAND), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3808 "y.tab.c"
    break;

  case 214:
#line 1123 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ArithmeticalExpression, content_t(EQ), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3816 "y.tab.c"
    break;

  case 215:
#line 1127 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ArithmeticalExpression, content_t(NE), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3824 "y.tab.c"
    break;

  case 216:
#line 1131 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ArithmeticalExpression, content_t(LS), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3832 "y.tab.c"
    break;

  case 217:
#line 1135 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ArithmeticalExpression, content_t(GR), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3840 "y.tab.c"
    break;

  case 218:
#line 1139 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ArithmeticalExpression, content_t(LE), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3848 "y.tab.c"
    break;

  case 219:
#line 1143 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ArithmeticalExpression, content_t(GE), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3856 "y.tab.c"
    break;

  case 220:
#line 1147 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ArithmeticalExpression, content_t(LSHIFT), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3864 "y.tab.c"
    break;

  case 221:
#line 1151 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ArithmeticalExpression, content_t(RSHIFT), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3872 "y.tab.c"
    break;

  case 222:
#line 1155 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ArithmeticalExpression, content_t(PLUS), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3880 "y.tab.c"
    break;

  case 223:
#line 1159 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ArithmeticalExpression, content_t(MINUS), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3888 "y.tab.c"
    break;

  case 224:
#line 1163 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ArithmeticalExpression, content_t(ASTERISK), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3896 "y.tab.c"
    break;

  case 225:
#line 1167 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ArithmeticalExpression, content_t(SLASH), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3904 "y.tab.c"
    break;

  case 226:
#line 1171 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ArithmeticalExpression, content_t(PERCENT), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3912 "y.tab.c"
    break;

  case 227:
#line 1177 "yacc_syntax.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 3918 "y.tab.c"
    break;

  case 228:
#line 1179 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(CastExpression, content_null, 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 3926 "y.tab.c"
    break;

  case 229:
#line 1185 "yacc_syntax.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 3932 "y.tab.c"
    break;

  case 230:
#line 1187 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(UnaryExpression, content_t(DBL_PLUS), 1, (yyvsp[0].node));
        }
#line 3940 "y.tab.c"
    break;

  case 231:
#line 1191 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(UnaryExpression, content_t(DBL_MINUS), 1, (yyvsp[0].node));
        }
#line 3948 "y.tab.c"
    break;

  case 232:
#line 1195 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(UnaryExpression, content_null, 2, (yyvsp[-1].node), (yyvsp[0].node));
        }
#line 3956 "y.tab.c"
    break;

  case 233:
#line 1199 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(UnaryExpression, content_t(SIZEOF), 1, (yyvsp[0].node));
        }
#line 3964 "y.tab.c"
    break;

  case 234:
#line 1203 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(UnaryExpression, content_t(SIZEOF), 1, (yyvsp[-1].node));
        }
#line 3972 "y.tab.c"
    break;

  case 235:
#line 1207 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(UnaryExpression, content_t(ALIGNOF), 1, (yyvsp[-1].node));
        }
#line 3980 "y.tab.c"
    break;

  case 236:
#line 1213 "yacc_syntax.y"
                       { (yyval.node) = ast_create_node(UnaryOperator, content_t(AMPERSAND), 0); }
#line 3986 "y.tab.c"
    break;

  case 237:
#line 1214 "yacc_syntax.y"
                       { (yyval.node) = ast_create_node(UnaryOperator, content_t(ASTERISK), 0); }
#line 3992 "y.tab.c"
    break;

  case 238:
#line 1215 "yacc_syntax.y"
                       { (yyval.node) = ast_create_node(UnaryOperator, content_t(PLUS), 0); }
#line 3998 "y.tab.c"
    break;

  case 239:
#line 1216 "yacc_syntax.y"
                       { (yyval.node) = ast_create_node(UnaryOperator, content_t(MINUS), 0); }
#line 4004 "y.tab.c"
    break;

  case 240:
#line 1217 "yacc_syntax.y"
                       { (yyval.node) = ast_create_node(UnaryOperator, content_t(TILDE), 0); }
#line 4010 "y.tab.c"
    break;

  case 241:
#line 1218 "yacc_syntax.y"
                       { (yyval.node) = ast_create_node(UnaryOperator, content_t(EXCLAMATION), 0); }
#line 4016 "y.tab.c"
    break;

  case 242:
#line 1222 "yacc_syntax.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 4022 "y.tab.c"
    break;

  case 243:
#line 1224 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(PostfixExpression, content_t(LBRACKET), 2, (yyvsp[-3].node), (yyvsp[-1].node));
        }
#line 4030 "y.tab.c"
    break;

  case 244:
#line 1228 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(PostfixExpression, content_t(LPAREN), 1, (yyvsp[-2].node));
        }
#line 4038 "y.tab.c"
    break;

  case 245:
#line 1232 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(PostfixExpression, content_t(LPAREN), 2, (yyvsp[-3].node), (yyvsp[-1].node));
        }
#line 4046 "y.tab.c"
    break;

  case 246:
#line 1236 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(PostfixExpression, content_t(DOT), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 4054 "y.tab.c"
    break;

  case 247:
#line 1240 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(PostfixExpression, content_t(ARROW), 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 4062 "y.tab.c"
    break;

  case 248:
#line 1244 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(PostfixExpression, content_t(DBL_PLUS), 1, (yyvsp[-1].node));
        }
#line 4070 "y.tab.c"
    break;

  case 249:
#line 1248 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(PostfixExpression, content_t(DBL_MINUS), 1, (yyvsp[-1].node));
        }
#line 4078 "y.tab.c"
    break;

  case 250:
#line 1252 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(PostfixExpression, content_null, 2, (yyvsp[-4].node), (yyvsp[-1].node));
        }
#line 4086 "y.tab.c"
    break;

  case 251:
#line 1256 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(PostfixExpression, content_null, 2, (yyvsp[-5].node), (yyvsp[-2].node));
        }
#line 4094 "y.tab.c"
    break;

  case 252:
#line 1263 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(ArgumentExpressionList, content_null, 1, (yyvsp[0].node));
        }
#line 4102 "y.tab.c"
    break;

  case 253:
#line 1267 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-2].node), (yyvsp[0].node));
        }
#line 4110 "y.tab.c"
    break;

  case 254:
#line 1273 "yacc_syntax.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 4116 "y.tab.c"
    break;

  case 255:
#line 1274 "yacc_syntax.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 4122 "y.tab.c"
    break;

  case 256:
#line 1276 "yacc_syntax.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 4128 "y.tab.c"
    break;

  case 257:
#line 1277 "yacc_syntax.y"
                                    { (yyval.node) = (yyvsp[-1].node); }
#line 4134 "y.tab.c"
    break;

  case 258:
#line 1278 "yacc_syntax.y"
                                    { (yyval.node) = (yyvsp[0].node); }
#line 4140 "y.tab.c"
    break;

  case 259:
#line 1283 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(GenericSelection, content_null, 2, (yyvsp[-3].node), (yyvsp[-1].node));
        }
#line 4148 "y.tab.c"
    break;

  case 260:
#line 1290 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(GenericAssocList, content_null, 1, (yyvsp[0].node));
        }
#line 4156 "y.tab.c"
    break;

  case 261:
#line 1294 "yacc_syntax.y"
        {
            (yyval.node) = ast_expand_node((yyvsp[-2].node), (yyvsp[0].node));
        }
#line 4164 "y.tab.c"
    break;

  case 262:
#line 1301 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(GenericAssociation, content_null, 2, (yyvsp[-2].node), (yyvsp[0].node));
        }
#line 4172 "y.tab.c"
    break;

  case 263:
#line 1305 "yacc_syntax.y"
        {
            (yyval.node) = ast_create_node(GenericAssociation, content_t(DEFAULT), 1, (yyvsp[0].node));
        }
#line 4180 "y.tab.c"
    break;


#line 4184 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
      yyerror (root, YY_("syntax error"));
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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
        yyerror (root, yymsgp);
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
                      yytoken, &yylval, root);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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
                  yystos[yystate], yyvsp, root);
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
  yyerror (root, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, root);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, root);
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
#line 1310 "yacc_syntax.y"


int yyerror(void *root, const char *str)
{
    error_found = true;
    fprintf(stderr, "%s\n", str);
    return 0;
}

_Bool is_typedef_used(AST_NODE *node)
{
    if (node->type != DeclarationSpecifiers) return false;
    for (int i = 0; i < node->children_number; ++i)
    {
        if (node->children[i] && node->children[i]->content.token == TYPEDEF) return true;
    }
    return false;
}

void collect_typedef_names(AST_NODE *node)
{
    if (node->type != InitDeclaratorList) return;
    if (node->children_number < 1) return;
    AST_NODE *cur_decl;
    AST_NODE *cur_direct_decl;
    for (int i = 0; i < node->children_number; ++i)
    {
        cur_decl = node->children[i]->children[0];
        sub_decl:
        cur_direct_decl = cur_decl->children[cur_decl->children_number == 2];
        if (cur_direct_decl->content.token == LPAREN)
        {
            cur_decl = cur_direct_decl->children[0];
            goto sub_decl;
        }
        else if (cur_direct_decl->children[0]->type == Identifier)
        {
            put_typedef_name(cur_direct_decl->children[0]->content.value);
        }
    }
}
