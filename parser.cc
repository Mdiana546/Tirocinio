/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include<iostream>
#include<cstdio>
#include <string>
#include<list>
#include <fstream>
#include "lexer.hh"
#include "untyped.hh"
#include "Expression.hpp"
#include "HandleFiles.hpp"
void yyerror(const char *msg);
void returnMonaSmtLibFormat();
void addElementStringEx(std::string);
void addOperatorStringStr(std::string);
int count=0;
std::string ex;
std::string smtLib;
std::string str;
std::list<Expression*> l;
int counter=0;

#line 93 "parser.cc"

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

#include "parser.hh"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_tokALL0 = 3,                    /* tokALL0  */
  YYSYMBOL_tokALL1 = 4,                    /* tokALL1  */
  YYSYMBOL_tokALL2 = 5,                    /* tokALL2  */
  YYSYMBOL_tokAND = 6,                     /* tokAND  */
  YYSYMBOL_tokARROW = 7,                   /* tokARROW  */
  YYSYMBOL_tokASSERT = 8,                  /* tokASSERT  */
  YYSYMBOL_tokBIIMPL = 9,                  /* tokBIIMPL  */
  YYSYMBOL_tokCOLON = 10,                  /* tokCOLON  */
  YYSYMBOL_tokCOMMA = 11,                  /* tokCOMMA  */
  YYSYMBOL_tokCONST = 12,                  /* tokCONST  */
  YYSYMBOL_tokDEFAULT1 = 13,               /* tokDEFAULT1  */
  YYSYMBOL_tokDEFAULT2 = 14,               /* tokDEFAULT2  */
  YYSYMBOL_tokDOT = 15,                    /* tokDOT  */
  YYSYMBOL_tokEMPTY = 16,                  /* tokEMPTY  */
  YYSYMBOL_tokEQUAL = 17,                  /* tokEQUAL  */
  YYSYMBOL_tokEX0 = 18,                    /* tokEX0  */
  YYSYMBOL_tokEX1 = 19,                    /* tokEX1  */
  YYSYMBOL_tokEX2 = 20,                    /* tokEX2  */
  YYSYMBOL_tokFALSE = 21,                  /* tokFALSE  */
  YYSYMBOL_tokGREATER = 22,                /* tokGREATER  */
  YYSYMBOL_tokGREATEREQ = 23,              /* tokGREATEREQ  */
  YYSYMBOL_tokGUIDE = 24,                  /* tokGUIDE  */
  YYSYMBOL_tokIMPL = 25,                   /* tokIMPL  */
  YYSYMBOL_tokIN = 26,                     /* tokIN  */
  YYSYMBOL_tokINTER = 27,                  /* tokINTER  */
  YYSYMBOL_tokINTERVAL = 28,               /* tokINTERVAL  */
  YYSYMBOL_tokLBRACE = 29,                 /* tokLBRACE  */
  YYSYMBOL_tokLBRACKET = 30,               /* tokLBRACKET  */
  YYSYMBOL_tokLESS = 31,                   /* tokLESS  */
  YYSYMBOL_tokLESSEQ = 32,                 /* tokLESSEQ  */
  YYSYMBOL_tokLET0 = 33,                   /* tokLET0  */
  YYSYMBOL_tokLET1 = 34,                   /* tokLET1  */
  YYSYMBOL_tokLET2 = 35,                   /* tokLET2  */
  YYSYMBOL_tokLPAREN = 36,                 /* tokLPAREN  */
  YYSYMBOL_tokMACRO = 37,                  /* tokMACRO  */
  YYSYMBOL_tokMAX = 38,                    /* tokMAX  */
  YYSYMBOL_tokMIN = 39,                    /* tokMIN  */
  YYSYMBOL_tokMINUS = 40,                  /* tokMINUS  */
  YYSYMBOL_tokMODULO = 41,                 /* tokMODULO  */
  YYSYMBOL_tokNOT = 42,                    /* tokNOT  */
  YYSYMBOL_tokNOTEQUAL = 43,               /* tokNOTEQUAL  */
  YYSYMBOL_tokNOTIN = 44,                  /* tokNOTIN  */
  YYSYMBOL_tokOR = 45,                     /* tokOR  */
  YYSYMBOL_tokPLUS = 46,                   /* tokPLUS  */
  YYSYMBOL_tokPRED = 47,                   /* tokPRED  */
  YYSYMBOL_tokRBRACE = 48,                 /* tokRBRACE  */
  YYSYMBOL_tokRESTRICT = 49,               /* tokRESTRICT  */
  YYSYMBOL_tokRBRACKET = 50,               /* tokRBRACKET  */
  YYSYMBOL_tokUNIVROOT = 51,               /* tokUNIVROOT  */
  YYSYMBOL_tokRPAREN = 52,                 /* tokRPAREN  */
  YYSYMBOL_tokSEMICOLON = 53,              /* tokSEMICOLON  */
  YYSYMBOL_tokSETMINUS = 54,               /* tokSETMINUS  */
  YYSYMBOL_tokSLASH = 55,                  /* tokSLASH  */
  YYSYMBOL_tokSTAR = 56,                   /* tokSTAR  */
  YYSYMBOL_tokVERIFY = 57,                 /* tokVERIFY  */
  YYSYMBOL_tokSUB = 58,                    /* tokSUB  */
  YYSYMBOL_tokTREE = 59,                   /* tokTREE  */
  YYSYMBOL_tokTRUE = 60,                   /* tokTRUE  */
  YYSYMBOL_tokUNION = 61,                  /* tokUNION  */
  YYSYMBOL_tokUNIVERSE = 62,               /* tokUNIVERSE  */
  YYSYMBOL_tokUP = 63,                     /* tokUP  */
  YYSYMBOL_tokVAR0 = 64,                   /* tokVAR0  */
  YYSYMBOL_tokVAR1 = 65,                   /* tokVAR1  */
  YYSYMBOL_tokVAR2 = 66,                   /* tokVAR2  */
  YYSYMBOL_tokWHERE = 67,                  /* tokWHERE  */
  YYSYMBOL_tokINCLUDE = 68,                /* tokINCLUDE  */
  YYSYMBOL_tokIMPORT = 69,                 /* tokIMPORT  */
  YYSYMBOL_tokEXPORT = 70,                 /* tokEXPORT  */
  YYSYMBOL_tokPREFIX = 71,                 /* tokPREFIX  */
  YYSYMBOL_tokM2LSTR = 72,                 /* tokM2LSTR  */
  YYSYMBOL_tokM2LTREE = 73,                /* tokM2LTREE  */
  YYSYMBOL_tokLASTPOS = 74,                /* tokLASTPOS  */
  YYSYMBOL_tokINSTATESPACE = 75,           /* tokINSTATESPACE  */
  YYSYMBOL_tokEXECUTE = 76,                /* tokEXECUTE  */
  YYSYMBOL_tokTYPE = 77,                   /* tokTYPE  */
  YYSYMBOL_tokSOMETYPE = 78,               /* tokSOMETYPE  */
  YYSYMBOL_tokVARIANT = 79,                /* tokVARIANT  */
  YYSYMBOL_tokSUCC = 80,                   /* tokSUCC  */
  YYSYMBOL_tokWS1S = 81,                   /* tokWS1S  */
  YYSYMBOL_tokWS2S = 82,                   /* tokWS2S  */
  YYSYMBOL_tokTREEROOT = 83,               /* tokTREEROOT  */
  YYSYMBOL_tokCONSTTREE = 84,              /* tokCONSTTREE  */
  YYSYMBOL_tokALLPOS = 85,                 /* tokALLPOS  */
  YYSYMBOL_tokNAME = 86,                   /* tokNAME  */
  YYSYMBOL_tokReal = 87,                   /* tokReal  */
  YYSYMBOL_tokBool = 88,                   /* tokBool  */
  YYSYMBOL_tokSTRING = 89,                 /* tokSTRING  */
  YYSYMBOL_tokINT = 90,                    /* tokINT  */
  YYSYMBOL_LOW = 91,                       /* LOW  */
  YYSYMBOL_YYACCEPT = 92,                  /* $accept  */
  YYSYMBOL_start = 93,                     /* start  */
  YYSYMBOL_header = 94,                    /* header  */
  YYSYMBOL_declarations = 95,              /* declarations  */
  YYSYMBOL_declaration = 96,               /* declaration  */
  YYSYMBOL_97_1 = 97,                      /* $@1  */
  YYSYMBOL_98_2 = 98,                      /* $@2  */
  YYSYMBOL_99_3 = 99,                      /* $@3  */
  YYSYMBOL_exp = 100,                      /* exp  */
  YYSYMBOL_arith_exp = 101,                /* arith_exp  */
  YYSYMBOL_dotExp = 102,                   /* dotExp  */
  YYSYMBOL_par_list = 103,                 /* par_list  */
  YYSYMBOL_defs = 104,                     /* defs  */
  YYSYMBOL_def = 105,                      /* def  */
  YYSYMBOL_set_body = 106,                 /* set_body  */
  YYSYMBOL_non_empty_set_body = 107,       /* non_empty_set_body  */
  YYSYMBOL_exp_list = 108,                 /* exp_list  */
  YYSYMBOL_non_empty_exp_list = 109,       /* non_empty_exp_list  */
  YYSYMBOL_universe = 110,                 /* universe  */
  YYSYMBOL_name = 111,                     /* name  */
  YYSYMBOL_name_list = 112,                /* name_list  */
  YYSYMBOL_name_where_list = 113,          /* name_where_list  */
  YYSYMBOL_func_list = 114,                /* func_list  */
  YYSYMBOL_func = 115,                     /* func  */
  YYSYMBOL_univs = 116,                    /* univs  */
  YYSYMBOL_univ = 117,                     /* univ  */
  YYSYMBOL_where = 118,                    /* where  */
  YYSYMBOL_map_list = 119,                 /* map_list  */
  YYSYMBOL_variant_list = 120,             /* variant_list  */
  YYSYMBOL_component_list = 121,           /* component_list  */
  YYSYMBOL_constnode = 122,                /* constnode  */
  YYSYMBOL_constnode_list = 123,           /* constnode_list  */
  YYSYMBOL_optstring = 124                 /* optstring  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2232

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  162
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  425

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   346


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
      85,    86,    87,    88,    89,    90,    91
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    90,    90,   101,   103,   105,   107,   109,   113,   115,
     119,   121,   123,   125,   127,   129,   131,   133,   135,   137,
     139,   141,   143,   145,   147,   149,   151,   153,   155,   157,
     159,   161,   163,   165,   165,   167,   167,   169,   169,   174,
     176,   178,   180,   182,   184,   186,   188,   190,   192,   194,
     196,   198,   200,   202,   204,   206,   208,   210,   212,   214,
     218,   220,   222,   224,   226,   228,   230,   232,   234,   236,
     238,   240,   242,   244,   246,   248,   250,   252,   254,   256,
     258,   260,   262,   264,   266,   268,   270,   272,   274,   276,
     279,   282,   284,   286,   288,   291,   293,   298,   300,   302,
     304,   306,   308,   313,   315,   319,   323,   325,   327,   329,
     331,   333,   335,   337,   339,   341,   346,   348,   352,   356,
     358,   362,   364,   366,   368,   372,   374,   378,   380,   384,
     386,   390,   395,   397,   401,   404,   410,   412,   416,   420,
     422,   426,   428,   430,   434,   436,   440,   442,   446,   448,
     450,   452,   454,   456,   460,   462,   466,   468,   470,   474,
     476,   480,   482
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "tokALL0", "tokALL1",
  "tokALL2", "tokAND", "tokARROW", "tokASSERT", "tokBIIMPL", "tokCOLON",
  "tokCOMMA", "tokCONST", "tokDEFAULT1", "tokDEFAULT2", "tokDOT",
  "tokEMPTY", "tokEQUAL", "tokEX0", "tokEX1", "tokEX2", "tokFALSE",
  "tokGREATER", "tokGREATEREQ", "tokGUIDE", "tokIMPL", "tokIN", "tokINTER",
  "tokINTERVAL", "tokLBRACE", "tokLBRACKET", "tokLESS", "tokLESSEQ",
  "tokLET0", "tokLET1", "tokLET2", "tokLPAREN", "tokMACRO", "tokMAX",
  "tokMIN", "tokMINUS", "tokMODULO", "tokNOT", "tokNOTEQUAL", "tokNOTIN",
  "tokOR", "tokPLUS", "tokPRED", "tokRBRACE", "tokRESTRICT", "tokRBRACKET",
  "tokUNIVROOT", "tokRPAREN", "tokSEMICOLON", "tokSETMINUS", "tokSLASH",
  "tokSTAR", "tokVERIFY", "tokSUB", "tokTREE", "tokTRUE", "tokUNION",
  "tokUNIVERSE", "tokUP", "tokVAR0", "tokVAR1", "tokVAR2", "tokWHERE",
  "tokINCLUDE", "tokIMPORT", "tokEXPORT", "tokPREFIX", "tokM2LSTR",
  "tokM2LTREE", "tokLASTPOS", "tokINSTATESPACE", "tokEXECUTE", "tokTYPE",
  "tokSOMETYPE", "tokVARIANT", "tokSUCC", "tokWS1S", "tokWS2S",
  "tokTREEROOT", "tokCONSTTREE", "tokALLPOS", "tokNAME", "tokReal",
  "tokBool", "tokSTRING", "tokINT", "LOW", "$accept", "start", "header",
  "declarations", "declaration", "$@1", "$@2", "$@3", "exp", "arith_exp",
  "dotExp", "par_list", "defs", "def", "set_body", "non_empty_set_body",
  "exp_list", "non_empty_exp_list", "universe", "name", "name_list",
  "name_where_list", "func_list", "func", "univs", "univ", "where",
  "map_list", "variant_list", "component_list", "constnode",
  "constnode_list", "optstring", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-327)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     131,   -30,   -28,    -3,    -2,    35,   610,  -327,  -327,  -327,
    -327,  -327,   -34,    31,    31,   698,   -34,    37,    42,    47,
     -34,    31,    31,  -327,   -34,   461,   -34,   -34,   -34,   698,
     -34,   698,   698,   698,   -34,    51,    52,     1,     4,  -327,
     -34,   -34,    31,    31,    11,    59,    61,    67,   -34,    68,
     698,   -23,    71,    72,    75,    78,    82,   -34,  -327,  -327,
    -327,  -327,  -327,   610,   542,  -327,     6,    54,   109,   -34,
     -34,   -34,    89,    92,   774,   118,   -34,   -34,   698,   126,
     -34,   -34,   132,    87,   140,   142,   825,   111,  -327,   136,
     152,   147,   139,   145,   867,    39,   191,   191,  2127,    60,
     698,   698,  -327,   698,   698,   -34,   163,   125,   168,   133,
     -34,   -34,   146,    95,    96,   698,   161,   698,   909,   698,
     172,   698,   698,   698,   698,   698,   164,   -34,   -34,   -34,
    -327,   698,   698,   698,   698,   698,   698,   698,   698,   698,
     698,   -16,   -16,   698,   698,   698,   -16,  -327,   698,   -16,
     -16,   698,   698,  -327,   -34,   698,   698,   182,   698,   187,
     173,   212,   214,  -327,   -16,   175,   177,   951,   698,   215,
     220,   197,  -327,   -34,   461,   461,  -327,   698,   -34,   698,
     698,   698,  -327,   698,    58,   698,    81,   993,  1035,    -6,
    1077,  1119,   181,   -43,  -327,   -34,  -327,   186,   195,  -327,
     224,   233,  1161,  -327,  1203,  -327,  1245,   -34,  1287,  1329,
    1371,  1413,  1455,  -327,   198,   200,   202,  2127,  1959,   165,
     165,   165,  2001,  2169,   248,   165,   165,   -16,   -16,  -327,
     -18,  -327,   235,  -327,   165,  2169,  2085,   -18,   272,  -327,
    -327,  2169,   114,  -327,  1497,   204,  -327,  1959,   -34,  1959,
     -34,  -327,   698,   698,   154,   240,   241,  -327,  1959,   698,
     698,   -34,  -327,  -327,  -327,  1959,  -327,  2043,  1959,  1959,
    1539,   242,   -34,   -34,   -34,   -34,   213,    54,  1581,   247,
     216,  -327,    31,  -327,  -327,  -327,  -327,  -327,  -327,  -327,
    -327,  -327,   -34,   218,   698,  -327,   -34,   -34,     8,   230,
    -327,   698,   -34,  -327,   -34,  -327,  -327,  -327,   226,   -18,
     -16,   -16,   -16,   -16,   698,  -327,  -327,  -327,  1959,  1959,
    -327,   698,   698,  1959,  1959,   256,  -327,   698,   266,   268,
      54,    54,   269,   276,  -327,   698,   274,   243,   286,  -327,
    1623,   245,   254,   -34,   -26,  -327,  1665,   296,   298,  -327,
     -18,   -18,  -327,  -327,  -327,  1707,  1749,   -34,  1791,    20,
      20,   299,   303,   698,    20,  1833,   698,  -327,   -34,  -327,
    -327,  -327,  -327,   304,   306,   257,   -34,   -34,   -34,  -327,
    -327,   265,  -327,  -327,  -327,    20,    20,  1875,  -327,  -327,
    1917,   224,   -34,   -34,   309,   313,   314,   293,   278,  -327,
    -327,  -327,  -327,  -327,  -327,  -327,   315,   -34,   -34,   -34,
     -19,  -327,   -34,  -327,   281,   282,  -327,   325,   285,  -327,
    -327,  -327,   -34,  -327,  -327
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     0,     0,     0,     0,     0,     5,     6,     3,
       4,     1,     0,   130,   130,     0,     0,     0,     0,    80,
       0,   130,   130,    72,     0,   120,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    59,   162,   130,    71,
       0,     0,   130,   130,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   131,    35,
      37,    33,     2,     9,     0,    57,    39,   145,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   137,   124,   123,     0,   119,     0,
     117,     0,     0,     0,     0,     0,    45,    44,    56,     0,
       0,     0,   161,     0,     0,     0,   143,     0,   140,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
       0,     0,     0,    60,     0,   126,     0,   135,     0,   133,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,    11,     0,     0,     0,    81,     0,     0,     0,
       0,     0,    40,     0,     0,     0,     0,     0,     0,    39,
       0,     0,     0,     0,    12,     0,    16,     0,     0,    29,
     147,     0,     0,    30,     0,    28,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,    54,    53,    50,
      49,    48,    52,    42,    83,    46,    47,     0,     0,   102,
      76,   103,     0,    79,    51,    43,    55,    75,    84,    78,
      77,    41,    82,   105,   128,     0,   125,   144,     0,    64,
       0,   129,     0,     0,     0,     0,     0,    74,    61,     0,
       0,     0,   136,   122,   121,    67,   116,   118,    68,    69,
       0,     0,     0,     0,     0,     0,     0,   145,     0,     0,
       0,    96,   130,    58,    27,    91,    19,   141,   142,   139,
      17,    18,     0,     0,     0,    87,     0,     0,   153,     0,
      93,     0,     0,    95,     0,    36,    38,    34,     0,   101,
       0,     0,     0,     0,     0,    70,   134,   132,    65,    66,
      15,     0,     0,    62,    63,     0,    24,     0,   114,   111,
     145,   145,     0,   115,    21,     0,     0,     0,     0,    85,
       0,     0,     0,     0,     0,    32,     0,     0,     0,   104,
      98,    97,   100,    99,   127,     0,     0,     0,     0,     0,
       0,   112,   113,     0,     0,     0,     0,    73,     0,    86,
      88,    92,   150,   152,     0,     0,     0,     0,     0,    13,
      14,     0,    25,   109,   106,     0,     0,     0,   110,    22,
       0,   147,     0,     0,   151,     0,     0,   158,     0,   138,
     107,   108,    23,    20,   146,   149,   155,     0,     0,     0,
       0,    94,     0,   148,     0,     0,   157,   160,     0,   154,
      89,    90,     0,   156,   159
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -327,  -327,  -327,   275,  -327,  -327,  -327,  -327,   290,   -37,
     -70,  -184,   -22,  -327,  -327,  -126,  -327,    25,   -11,   -12,
    -243,    21,   169,  -327,   148,  -327,  -276,   -50,  -326,   -68,
     -32,   -73,  -327
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,    62,    63,   129,   127,   128,    86,   230,
      65,   276,    89,    90,    87,    88,   245,   246,    70,    66,
     160,    68,    83,    84,   107,   108,   157,   293,   299,   375,
     417,   418,   103
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      67,   333,   280,    71,    75,    92,    93,   317,    67,   154,
      80,    81,    82,   119,    91,    91,    91,   372,    95,   343,
     227,   154,    99,     7,   228,     8,   373,   105,   106,    67,
     155,   110,   111,   416,    69,    11,   116,   312,   313,   120,
     104,    79,   155,    58,   344,   126,   283,   287,   263,   264,
       9,    10,    58,   341,   361,   362,   183,   159,    67,    67,
      58,    69,   109,    58,   165,   166,   405,    58,    67,    67,
      58,   231,   231,    76,   229,   184,   231,   185,    77,   231,
     231,   413,   272,    78,   273,   274,   275,   100,   101,   189,
     102,   161,   162,    67,   231,   113,   186,   114,    67,    67,
     112,   169,   170,   115,   117,   233,    58,   121,   122,   237,
     271,   123,   239,   240,   124,    67,    67,    67,   125,   158,
     272,   156,   273,   274,   275,   104,   192,   254,   119,   232,
     232,   197,   198,   279,   232,   164,   168,   232,   232,   171,
     172,   138,   243,   272,    58,   273,   274,   275,   214,   215,
     216,   173,   232,   174,   141,   142,   266,   231,   231,   176,
     146,    82,   177,   178,   179,   180,    91,    58,   148,   149,
     150,   181,   277,   193,   277,   383,   384,   153,   194,   195,
     388,   288,    -1,   106,   200,   201,   196,    -1,    -1,   207,
     308,   309,   138,   248,   310,   298,    -1,    -1,   250,   199,
     311,   400,   401,     1,     2,   141,   142,   320,    -1,   312,
     313,   146,     3,     4,   203,   232,   232,   213,   138,   148,
     149,   150,   252,   251,   253,   259,   152,   255,   153,   256,
     260,   141,   142,   261,   286,   292,    67,   146,   159,   290,
     231,   231,   231,   231,   294,   148,   149,   150,   291,   325,
     154,   305,   152,   306,   153,   307,   315,   321,   322,   327,
     328,   329,   330,   331,   335,   332,   310,   357,   336,   316,
     339,   337,   311,   350,   351,   352,   353,   359,   349,   360,
     338,   312,   313,   345,   159,   342,   363,   364,   141,   142,
     347,   366,   348,   368,   146,   367,    64,   370,   232,   232,
     232,   232,   148,   149,   150,    74,   371,   377,   378,   394,
     385,   153,   141,   142,   386,   392,   393,   399,   146,    94,
     407,    96,    97,    98,   408,   409,   412,   149,   150,   410,
     411,   298,   374,   420,   421,   153,   422,   423,   130,   354,
     118,   404,   262,   289,   419,   381,   398,   277,   277,   424,
       0,     0,   277,    64,     0,     0,   391,     0,     0,     0,
       0,     0,     0,     0,   395,   396,   397,     0,   167,     0,
       0,     0,     0,   277,   277,     0,     0,     0,     0,     0,
     298,   406,     0,     0,     0,     0,     0,     0,     0,     0,
     187,   188,     0,   190,   191,   298,   414,   415,   397,     0,
     374,     0,     0,     0,     0,   202,     0,   204,     0,   206,
     397,   208,   209,   210,   211,   212,     0,     0,     0,     0,
       0,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,     0,     0,   234,   235,   236,     0,     0,   238,     0,
       0,   241,   242,     0,     0,   244,   247,     0,   249,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   258,     0,
       0,     0,     0,     0,    12,    13,    14,   265,     0,   267,
     268,   269,     0,   270,     0,   278,     0,    19,     0,    20,
      21,    22,    23,     0,     0,     0,     0,     0,     0,    85,
      25,     0,     0,     0,    26,    27,    28,    29,     0,    31,
      32,     0,     0,    33,     0,     0,     0,     0,     0,     0,
      35,     0,    36,     0,     0,     0,     0,     0,     0,     0,
      72,    39,     0,     0,     0,     0,     0,     0,     0,     0,
      45,    46,    47,     0,     0,     0,    49,     0,    73,    52,
      53,    54,   318,   319,    55,    56,     0,    58,   131,   323,
     324,   132,     0,     0,     0,     0,     0,     0,     0,   133,
       0,     0,     0,     0,   134,   135,     0,   136,   137,   138,
       0,     0,     0,   139,   140,     0,     0,     0,     0,     0,
       0,     0,   141,   142,   340,   143,   144,   145,   146,     0,
       0,   346,     0,     0,     0,   147,   148,   149,   150,     0,
     151,     0,     0,   152,   244,   153,     0,     0,     0,     0,
       0,   355,   356,    12,    13,    14,     0,   358,    15,     0,
       0,     0,    16,    17,    18,   365,    19,     0,    20,    21,
      22,    23,     0,     0,    24,     0,     0,     0,     0,    25,
       0,     0,     0,    26,    27,    28,    29,    30,    31,    32,
       0,     0,    33,   387,     0,     0,   390,    34,     0,    35,
       0,    36,     0,     0,     0,     0,     0,    37,     0,    38,
      39,     0,    40,     0,    41,    42,    43,     0,    44,    45,
      46,    47,     0,     0,    48,    49,    50,    51,    52,    53,
      54,     0,     0,    55,    56,    57,    58,    59,    60,     0,
      61,    12,    13,    14,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,    20,    21,    22,    23,
       0,     0,     0,     0,     0,     0,     0,    25,     0,     0,
       0,    26,    27,    28,    29,     0,    31,    32,     0,     0,
      33,     0,     0,     0,     0,     0,     0,    35,     0,    36,
       0,     0,     0,     0,     0,     0,     0,    72,    39,     0,
       0,     0,     0,     0,     0,     0,     0,    45,    46,    47,
       0,     0,     0,    49,     0,    73,    52,    53,    54,     0,
     131,    55,    56,   132,    58,     0,     0,     0,     0,     0,
       0,   133,     0,     0,     0,     0,   134,   135,     0,   136,
     137,   138,     0,     0,     0,   139,   140,     0,     0,     0,
       0,     0,     0,     0,   141,   142,     0,   143,   144,   145,
     146,     0,     0,     0,     0,     0,     0,   163,   148,   149,
     150,   131,   151,     0,   132,   152,   175,   153,     0,     0,
       0,     0,   133,     0,     0,     0,     0,   134,   135,     0,
     136,   137,   138,     0,     0,     0,   139,   140,     0,     0,
       0,     0,     0,     0,     0,   141,   142,     0,   143,   144,
     145,   146,     0,   131,     0,     0,   132,     0,     0,   148,
     149,   150,     0,   151,   133,     0,   152,     0,   153,   134,
     135,     0,   136,   137,   138,     0,     0,     0,   139,   140,
       0,     0,     0,     0,     0,     0,     0,   141,   142,     0,
     143,   144,   145,   146,     0,   131,     0,     0,   132,   182,
       0,   148,   149,   150,     0,   151,   133,     0,   152,     0,
     153,   134,   135,     0,   136,   137,   138,     0,     0,     0,
     139,   140,     0,     0,     0,     0,     0,     0,     0,   141,
     142,     0,   143,   144,   145,   146,     0,   131,     0,     0,
     132,     0,   205,   148,   149,   150,     0,   151,   133,     0,
     152,     0,   153,   134,   135,     0,   136,   137,   138,     0,
       0,     0,   139,   140,     0,     0,     0,     0,     0,     0,
       0,   141,   142,     0,   143,   144,   145,   146,     0,   131,
       0,     0,   132,   257,     0,   148,   149,   150,     0,   151,
     133,     0,   152,     0,   153,   134,   135,     0,   136,   137,
     138,     0,     0,     0,   139,   140,     0,     0,     0,     0,
       0,     0,     0,   141,   142,     0,   143,   144,   145,   146,
       0,   131,     0,     0,   132,   281,   282,   148,   149,   150,
       0,   151,   133,     0,   152,     0,   153,   134,   135,     0,
     136,   137,   138,     0,     0,     0,   139,   140,     0,     0,
       0,     0,     0,     0,     0,   141,   142,     0,   143,   144,
     145,   146,     0,   131,     0,     0,   132,     0,     0,   148,
     149,   150,     0,   151,   133,     0,   152,     0,   153,   134,
     135,     0,   136,   137,   138,     0,     0,     0,   139,   140,
       0,     0,     0,     0,     0,     0,     0,   141,   142,     0,
     143,   144,   145,   146,     0,   131,     0,     0,   132,     0,
     284,   148,   149,   150,     0,   151,   133,     0,   152,     0,
     153,   134,   135,     0,   136,   137,   138,     0,     0,     0,
     139,   140,     0,     0,     0,     0,     0,     0,     0,   141,
     142,     0,   143,   144,   145,   146,     0,   131,     0,     0,
     132,   285,     0,   148,   149,   150,     0,   151,   133,     0,
     152,     0,   153,   134,   135,     0,   136,   137,   138,     0,
       0,     0,   139,   140,     0,     0,     0,     0,     0,     0,
       0,   141,   142,     0,   143,   144,   145,   146,     0,   131,
       0,     0,   132,   295,   296,   148,   149,   150,     0,   151,
     133,     0,   152,     0,   153,   134,   135,     0,   136,   137,
     138,     0,     0,     0,   139,   140,     0,     0,     0,     0,
       0,     0,     0,   141,   142,     0,   143,   144,   145,   146,
       0,   131,     0,     0,   132,     0,   297,   148,   149,   150,
       0,   151,   133,     0,   152,     0,   153,   134,   135,     0,
     136,   137,   138,     0,     0,     0,   139,   140,     0,     0,
       0,     0,     0,     0,     0,   141,   142,     0,   143,   144,
     145,   146,     0,   131,     0,     0,   132,     0,     0,   148,
     149,   150,     0,   151,   133,     0,   152,     0,   153,   134,
     135,     0,   136,   137,   138,     0,     0,     0,   139,   140,
       0,     0,     0,     0,     0,     0,     0,   141,   142,     0,
     143,   144,   145,   146,     0,   131,     0,     0,   132,   300,
     301,   148,   149,   150,     0,   151,   133,     0,   152,     0,
     153,   134,   135,     0,   136,   137,   138,     0,     0,     0,
     139,   140,     0,     0,     0,     0,     0,     0,     0,   141,
     142,     0,   143,   144,   145,   146,     0,   131,     0,     0,
     132,     0,   302,   148,   149,   150,     0,   151,   133,     0,
     152,     0,   153,   134,   135,     0,   136,   137,   138,     0,
       0,     0,   139,   140,     0,     0,     0,     0,     0,     0,
       0,   141,   142,     0,   143,   144,   145,   146,     0,   131,
       0,     0,   132,     0,     0,   148,   149,   150,     0,   151,
     133,     0,   152,     0,   153,   134,   135,     0,   136,   137,
     138,     0,     0,     0,   139,   140,     0,     0,     0,     0,
       0,     0,     0,   141,   142,     0,   143,   144,   145,   146,
       0,   131,     0,     0,   132,   303,   304,   148,   149,   150,
       0,   151,   133,     0,   152,     0,   153,   134,   135,     0,
     136,   137,   138,     0,     0,     0,   139,   140,     0,     0,
       0,     0,     0,     0,     0,   141,   142,     0,   143,   144,
     145,   146,     0,   131,     0,     0,   132,     0,   314,   148,
     149,   150,     0,   151,   133,     0,   152,     0,   153,   134,
     135,     0,   136,   137,   138,     0,     0,     0,   139,   140,
       0,     0,     0,     0,     0,     0,     0,   141,   142,     0,
     143,   144,   145,   146,     0,   131,     0,     0,   132,     0,
       0,   148,   149,   150,     0,   151,   133,     0,   152,     0,
     153,   134,   135,     0,   136,   137,   138,     0,     0,     0,
     139,   140,     0,     0,     0,     0,     0,     0,     0,   141,
     142,     0,   143,   144,   145,   146,     0,   131,     0,     0,
     132,     0,   326,   148,   149,   150,     0,   151,   133,     0,
     152,     0,   153,   134,   135,     0,   136,   137,   138,     0,
       0,     0,   139,   140,     0,     0,     0,     0,     0,     0,
       0,   141,   142,     0,   143,   144,   145,   146,     0,   131,
       0,     0,   132,     0,   334,   148,   149,   150,     0,   151,
     133,     0,   152,     0,   153,   134,   135,     0,   136,   137,
     138,     0,     0,     0,   139,   140,     0,     0,     0,     0,
       0,     0,     0,   141,   142,     0,   143,   144,   145,   146,
       0,   131,     0,     0,   132,   369,   376,   148,   149,   150,
       0,   151,   133,     0,   152,     0,   153,   134,   135,     0,
     136,   137,   138,     0,     0,     0,   139,   140,     0,     0,
       0,     0,     0,     0,     0,   141,   142,     0,   143,   144,
     145,   146,     0,   131,     0,     0,   132,     0,     0,   148,
     149,   150,     0,   151,   133,     0,   152,     0,   153,   134,
     135,     0,   136,   137,   138,     0,     0,     0,   139,   140,
       0,     0,     0,     0,     0,     0,     0,   141,   142,     0,
     143,   144,   145,   146,     0,   131,     0,     0,   132,     0,
     379,   148,   149,   150,     0,   151,   133,     0,   152,     0,
     153,   134,   135,     0,   136,   137,   138,     0,     0,     0,
     139,   140,     0,     0,     0,     0,     0,     0,     0,   141,
     142,     0,   143,   144,   145,   146,     0,   131,     0,     0,
     132,     0,   380,   148,   149,   150,     0,   151,   133,     0,
     152,     0,   153,   134,   135,     0,   136,   137,   138,     0,
       0,     0,   139,   140,     0,     0,     0,     0,     0,     0,
       0,   141,   142,     0,   143,   144,   145,   146,     0,   131,
       0,     0,   132,     0,   382,   148,   149,   150,     0,   151,
     133,     0,   152,     0,   153,   134,   135,     0,   136,   137,
     138,     0,     0,     0,   139,   140,     0,     0,     0,     0,
       0,     0,     0,   141,   142,     0,   143,   144,   145,   146,
       0,   131,     0,     0,   132,     0,   389,   148,   149,   150,
       0,   151,   133,     0,   152,     0,   153,   134,   135,     0,
     136,   137,   138,     0,     0,     0,   139,   140,     0,     0,
       0,     0,     0,     0,     0,   141,   142,     0,   143,   144,
     145,   146,     0,   131,     0,     0,   132,     0,   402,   148,
     149,   150,     0,   151,   133,     0,   152,     0,   153,   134,
     135,     0,   136,   137,   138,     0,     0,     0,   139,   140,
       0,     0,     0,     0,     0,     0,     0,   141,   142,     0,
     143,   144,   145,   146,     0,   131,     0,     0,   132,     0,
     403,   148,   149,   150,     0,   151,   133,     0,   152,     0,
     153,   134,   135,     0,   136,   137,   138,     0,     0,     0,
     139,   140,     0,     0,     0,     0,     0,     0,     0,   141,
     142,     0,   143,   144,   145,   146,     0,   131,     0,     0,
       0,     0,     0,   148,   149,   150,     0,   151,   133,     0,
     152,     0,   153,   134,   135,     0,   136,   137,   138,     0,
       0,     0,   139,   140,     0,     0,     0,     0,     0,     0,
       0,   141,   142,     0,   143,   144,   145,   146,     0,   131,
       0,     0,   132,     0,     0,   148,   149,   150,     0,   151,
     133,     0,   152,     0,   153,   134,   135,     0,   136,     0,
     138,     0,     0,     0,   139,   140,     0,     0,     0,     0,
       0,     0,     0,   141,   142,     0,   143,   144,   145,   146,
       0,   131,     0,     0,     0,     0,     0,   148,   149,   150,
       0,   151,   133,     0,   152,     0,   153,   134,   135,     0,
       0,   137,   138,     0,     0,     0,   139,   140,     0,     0,
       0,     0,     0,     0,     0,   141,   142,     0,   143,   144,
       0,   146,     0,     0,     0,     0,     0,     0,     0,   148,
     149,   150,     0,   151,   133,     0,   152,     0,   153,   134,
     135,     0,     0,   137,   138,     0,     0,     0,   139,   140,
       0,     0,     0,     0,     0,     0,     0,   141,   142,     0,
     143,   144,     0,   146,     0,     0,     0,     0,     0,     0,
       0,   148,   149,   150,     0,   151,   133,     0,   152,     0,
     153,   134,   135,     0,     0,    -1,   138,     0,     0,     0,
     139,   140,     0,     0,     0,     0,     0,     0,     0,   141,
     142,     0,   143,    -1,     0,   146,     0,     0,     0,     0,
       0,     0,     0,   148,   149,   150,     0,    -1,     0,     0,
     152,     0,   153
};

static const yytype_int16 yycheck[] =
{
      12,   277,   186,    14,    16,    27,    28,   250,    20,    15,
      21,    22,    24,    36,    26,    27,    28,   343,    30,    11,
      36,    15,    34,    53,    40,    53,    52,    38,    40,    41,
      36,    42,    43,    52,    30,     0,    48,    55,    56,    51,
      36,    20,    36,    86,    36,    57,    52,    90,   174,   175,
      53,    53,    86,   296,   330,   331,    17,    69,    70,    71,
      86,    30,    41,    86,    76,    77,   392,    86,    80,    81,
      86,   141,   142,    36,    90,    36,   146,    17,    36,   149,
     150,   407,    62,    36,    64,    65,    66,    36,    36,   101,
      89,    70,    71,   105,   164,    36,    36,    36,   110,   111,
      89,    80,    81,    36,    36,   142,    86,    36,    36,   146,
      52,    36,   149,   150,    36,   127,   128,   129,    36,    10,
      62,    67,    64,    65,    66,    36,   105,   164,    36,   141,
     142,   110,   111,    52,   146,    17,    10,   149,   150,     7,
      53,    27,   154,    62,    86,    64,    65,    66,   127,   128,
     129,    11,   164,    11,    40,    41,   178,   227,   228,    48,
      46,   173,    26,    11,    17,    26,   178,    86,    54,    55,
      56,    26,   184,    10,   186,   359,   360,    63,    53,    11,
     364,   193,    17,   195,    89,    89,    53,    22,    23,    17,
     227,   228,    27,    11,    40,   207,    31,    32,    11,    53,
      46,   385,   386,    72,    73,    40,    41,    53,    43,    55,
      56,    46,    81,    82,    53,   227,   228,    53,    27,    54,
      55,    56,    10,    50,    10,    10,    61,    52,    63,    52,
      10,    40,    41,    36,    53,    11,   248,    46,   250,    53,
     310,   311,   312,   313,    11,    54,    55,    56,    53,   261,
      15,    53,    61,    53,    63,    53,    52,    17,    17,    17,
     272,   273,   274,   275,    17,    52,    40,    11,    52,   248,
      52,   282,    46,   310,   311,   312,   313,    11,    52,    11,
     292,    55,    56,    53,   296,   297,    17,    11,    40,    41,
     302,    17,   304,     7,    46,    52,     6,    52,   310,   311,
     312,   313,    54,    55,    56,    15,    52,    11,    10,    52,
      11,    63,    40,    41,    11,    11,    10,    52,    46,    29,
      11,    31,    32,    33,    11,    11,    11,    55,    56,    36,
      52,   343,   344,    52,    52,    63,    11,    52,    63,   314,
      50,   391,   173,   195,   412,   357,   378,   359,   360,   422,
      -1,    -1,   364,    63,    -1,    -1,   368,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   376,   377,   378,    -1,    78,    -1,
      -1,    -1,    -1,   385,   386,    -1,    -1,    -1,    -1,    -1,
     392,   393,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,   101,    -1,   103,   104,   407,   408,   409,   410,    -1,
     412,    -1,    -1,    -1,    -1,   115,    -1,   117,    -1,   119,
     422,   121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,
      -1,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,    -1,    -1,   143,   144,   145,    -1,    -1,   148,    -1,
      -1,   151,   152,    -1,    -1,   155,   156,    -1,   158,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,   177,    -1,   179,
     180,   181,    -1,   183,    -1,   185,    -1,    16,    -1,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    -1,    -1,    -1,    33,    34,    35,    36,    -1,    38,
      39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    -1,    -1,    -1,    75,    -1,    77,    78,
      79,    80,   252,   253,    83,    84,    -1,    86,     6,   259,
     260,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,   294,    43,    44,    45,    46,    -1,
      -1,   301,    -1,    -1,    -1,    53,    54,    55,    56,    -1,
      58,    -1,    -1,    61,   314,    63,    -1,    -1,    -1,    -1,
      -1,   321,   322,     3,     4,     5,    -1,   327,     8,    -1,
      -1,    -1,    12,    13,    14,   335,    16,    -1,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    37,    38,    39,
      -1,    -1,    42,   363,    -1,    -1,   366,    47,    -1,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,    59,
      60,    -1,    62,    -1,    64,    65,    66,    -1,    68,    69,
      70,    71,    -1,    -1,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    83,    84,    85,    86,    87,    88,    -1,
      90,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      -1,    -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,
       6,    83,    84,     9,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,     6,    58,    -1,     9,    61,    11,    63,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    -1,    -1,    22,    23,    -1,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,
      45,    46,    -1,     6,    -1,    -1,     9,    -1,    -1,    54,
      55,    56,    -1,    58,    17,    -1,    61,    -1,    63,    22,
      23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      43,    44,    45,    46,    -1,     6,    -1,    -1,     9,    52,
      -1,    54,    55,    56,    -1,    58,    17,    -1,    61,    -1,
      63,    22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,
       9,    -1,    53,    54,    55,    56,    -1,    58,    17,    -1,
      61,    -1,    63,    22,    23,    -1,    25,    26,    27,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    43,    44,    45,    46,    -1,     6,
      -1,    -1,     9,    52,    -1,    54,    55,    56,    -1,    58,
      17,    -1,    61,    -1,    63,    22,    23,    -1,    25,    26,
      27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,    46,
      -1,     6,    -1,    -1,     9,    52,    11,    54,    55,    56,
      -1,    58,    17,    -1,    61,    -1,    63,    22,    23,    -1,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,
      45,    46,    -1,     6,    -1,    -1,     9,    -1,    -1,    54,
      55,    56,    -1,    58,    17,    -1,    61,    -1,    63,    22,
      23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      43,    44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,
      53,    54,    55,    56,    -1,    58,    17,    -1,    61,    -1,
      63,    22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,
       9,    52,    -1,    54,    55,    56,    -1,    58,    17,    -1,
      61,    -1,    63,    22,    23,    -1,    25,    26,    27,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    43,    44,    45,    46,    -1,     6,
      -1,    -1,     9,    52,    11,    54,    55,    56,    -1,    58,
      17,    -1,    61,    -1,    63,    22,    23,    -1,    25,    26,
      27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,    46,
      -1,     6,    -1,    -1,     9,    -1,    11,    54,    55,    56,
      -1,    58,    17,    -1,    61,    -1,    63,    22,    23,    -1,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,
      45,    46,    -1,     6,    -1,    -1,     9,    -1,    -1,    54,
      55,    56,    -1,    58,    17,    -1,    61,    -1,    63,    22,
      23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      43,    44,    45,    46,    -1,     6,    -1,    -1,     9,    52,
      11,    54,    55,    56,    -1,    58,    17,    -1,    61,    -1,
      63,    22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,
       9,    -1,    11,    54,    55,    56,    -1,    58,    17,    -1,
      61,    -1,    63,    22,    23,    -1,    25,    26,    27,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    43,    44,    45,    46,    -1,     6,
      -1,    -1,     9,    -1,    -1,    54,    55,    56,    -1,    58,
      17,    -1,    61,    -1,    63,    22,    23,    -1,    25,    26,
      27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,    46,
      -1,     6,    -1,    -1,     9,    52,    11,    54,    55,    56,
      -1,    58,    17,    -1,    61,    -1,    63,    22,    23,    -1,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,
      45,    46,    -1,     6,    -1,    -1,     9,    -1,    11,    54,
      55,    56,    -1,    58,    17,    -1,    61,    -1,    63,    22,
      23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      43,    44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,
      -1,    54,    55,    56,    -1,    58,    17,    -1,    61,    -1,
      63,    22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,
       9,    -1,    53,    54,    55,    56,    -1,    58,    17,    -1,
      61,    -1,    63,    22,    23,    -1,    25,    26,    27,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    43,    44,    45,    46,    -1,     6,
      -1,    -1,     9,    -1,    53,    54,    55,    56,    -1,    58,
      17,    -1,    61,    -1,    63,    22,    23,    -1,    25,    26,
      27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,    46,
      -1,     6,    -1,    -1,     9,    52,    11,    54,    55,    56,
      -1,    58,    17,    -1,    61,    -1,    63,    22,    23,    -1,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,
      45,    46,    -1,     6,    -1,    -1,     9,    -1,    -1,    54,
      55,    56,    -1,    58,    17,    -1,    61,    -1,    63,    22,
      23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      43,    44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,
      53,    54,    55,    56,    -1,    58,    17,    -1,    61,    -1,
      63,    22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,
       9,    -1,    53,    54,    55,    56,    -1,    58,    17,    -1,
      61,    -1,    63,    22,    23,    -1,    25,    26,    27,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    43,    44,    45,    46,    -1,     6,
      -1,    -1,     9,    -1,    53,    54,    55,    56,    -1,    58,
      17,    -1,    61,    -1,    63,    22,    23,    -1,    25,    26,
      27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,    46,
      -1,     6,    -1,    -1,     9,    -1,    53,    54,    55,    56,
      -1,    58,    17,    -1,    61,    -1,    63,    22,    23,    -1,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,
      45,    46,    -1,     6,    -1,    -1,     9,    -1,    53,    54,
      55,    56,    -1,    58,    17,    -1,    61,    -1,    63,    22,
      23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      43,    44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,
      53,    54,    55,    56,    -1,    58,    17,    -1,    61,    -1,
      63,    22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,    -1,    58,    17,    -1,
      61,    -1,    63,    22,    23,    -1,    25,    26,    27,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    43,    44,    45,    46,    -1,     6,
      -1,    -1,     9,    -1,    -1,    54,    55,    56,    -1,    58,
      17,    -1,    61,    -1,    63,    22,    23,    -1,    25,    -1,
      27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,    46,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      -1,    58,    17,    -1,    61,    -1,    63,    22,    23,    -1,
      -1,    26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    -1,    58,    17,    -1,    61,    -1,    63,    22,
      23,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    -1,    58,    17,    -1,    61,    -1,
      63,    22,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,    -1,    58,    -1,    -1,
      61,    -1,    63
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    72,    73,    81,    82,    93,    94,    53,    53,    53,
      53,     0,     3,     4,     5,     8,    12,    13,    14,    16,
      18,    19,    20,    21,    24,    29,    33,    34,    35,    36,
      37,    38,    39,    42,    47,    49,    51,    57,    59,    60,
      62,    64,    65,    66,    68,    69,    70,    71,    74,    75,
      76,    77,    78,    79,    80,    83,    84,    85,    86,    87,
      88,    90,    95,    96,   100,   102,   111,   111,   113,    30,
     110,   110,    59,    77,   100,   111,    36,    36,    36,   113,
     110,   110,   111,   114,   115,    28,   100,   106,   107,   104,
     105,   111,   104,   104,   100,   111,   100,   100,   100,   111,
      36,    36,    89,   124,    36,   110,   111,   116,   117,   113,
     110,   110,    89,    36,    36,    36,   111,    36,   100,    36,
     111,    36,    36,    36,    36,    36,   111,    98,    99,    97,
      95,     6,     9,    17,    22,    23,    25,    26,    27,    31,
      32,    40,    41,    43,    44,    45,    46,    53,    54,    55,
      56,    58,    61,    63,    15,    36,    67,   118,    10,   111,
     112,   113,   113,    53,    17,   111,   111,   100,    10,   113,
     113,     7,    53,    11,    11,    11,    48,    26,    11,    17,
      26,    26,    52,    17,    36,    17,    36,   100,   100,   111,
     100,   100,   113,    10,    53,    11,    53,   113,   113,    53,
      89,    89,   100,    53,   100,    53,   100,    17,   100,   100,
     100,   100,   100,    53,   113,   113,   113,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,    36,    40,    90,
     101,   102,   111,   101,   100,   100,   100,   101,   100,   101,
     101,   100,   100,   111,   100,   108,   109,   100,    11,   100,
      11,    50,    10,    10,   101,    52,    52,    52,   100,    10,
      10,    36,   114,   107,   107,   100,   104,   100,   100,   100,
     100,    52,    62,    64,    65,    66,   103,   111,   100,    52,
     103,    52,    11,    52,    53,    52,    53,    90,   111,   116,
      53,    53,    11,   119,    11,    52,    11,    11,   111,   120,
      52,    11,    11,    52,    11,    53,    53,    53,   101,   101,
      40,    46,    55,    56,    11,    52,   113,   112,   100,   100,
      53,    17,    17,   100,   100,   111,    53,    17,   111,   111,
     111,   111,    52,   118,    53,    17,    52,   110,   111,    52,
     100,   112,   111,    11,    36,    53,   100,   111,   111,    52,
     101,   101,   101,   101,   109,   100,   100,    11,   100,    11,
      11,   118,   118,    17,    11,   100,    17,    52,     7,    52,
      52,    52,   120,    52,   111,   121,    11,    11,    10,    53,
      53,   111,    53,   103,   103,    11,    11,   100,   103,    53,
     100,   111,    11,    10,    52,   111,   111,   111,   122,    52,
     103,   103,    53,    53,   119,   120,   111,    11,    11,    11,
      36,    52,    11,   120,   111,   111,    52,   122,   123,   121,
      52,    52,    11,    52,   123
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    92,    93,    94,    94,    94,    94,    94,    95,    95,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    97,    96,    98,    96,    99,    96,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   101,   101,   101,
     101,   101,   101,   101,   101,   102,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   104,   104,   105,   106,
     106,   107,   107,   107,   107,   108,   108,   109,   109,   110,
     110,   111,   112,   112,   113,   113,   114,   114,   115,   116,
     116,   117,   117,   117,   118,   118,   119,   119,   120,   120,
     120,   120,   120,   120,   121,   121,   122,   122,   122,   123,
     123,   124,   124
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     0,     2,     1,
       3,     3,     3,     7,     7,     5,     3,     4,     4,     4,
       8,     5,     7,     8,     5,     7,     2,     4,     3,     3,
       3,     3,     5,     0,     4,     0,     4,     0,     4,     1,
       3,     3,     3,     3,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     1,     4,     1,
       2,     4,     5,     5,     4,     5,     5,     4,     4,     4,
       4,     1,     1,     6,     4,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     5,     6,     4,     6,    10,
      10,     4,     6,     4,     8,     4,     4,     3,     3,     3,
       3,     2,     1,     1,     3,     3,     4,     5,     5,     4,
       4,     2,     3,     3,     2,     2,     3,     1,     3,     1,
       0,     3,     3,     1,     1,     1,     0,     3,     1,     3,
       0,     1,     3,     1,     4,     2,     3,     1,     7,     3,
       1,     3,     3,     1,     2,     0,     5,     0,     6,     5,
       3,     4,     3,     1,     5,     3,     4,     3,     1,     3,
       1,     1,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* start: header declarations  */
#line 90 "parser.y"
                             {
		
		//HandleFiles handleFile{};
		//handleFile.writeOnMonaFile(ex);
		//handleFile.writeOnSMTLIBFile(smtLib);
		 MonaUntypedAST* untypedAST=new MonaUntypedAST((yyvsp[0].declList));
		 untypedAST->typeCheckDeclarations();
		
		}
#line 1854 "parser.cc"
    break;

  case 4: /* header: tokWS2S tokSEMICOLON  */
#line 103 "parser.y"
                               {ex+="ws2s;\n";}
#line 1860 "parser.cc"
    break;

  case 5: /* header: tokM2LSTR tokSEMICOLON  */
#line 105 "parser.y"
                                 {}
#line 1866 "parser.cc"
    break;

  case 6: /* header: tokM2LTREE tokSEMICOLON  */
#line 107 "parser.y"
                                 {}
#line 1872 "parser.cc"
    break;

  case 7: /* header: %empty  */
#line 109 "parser.y"
                     {}
#line 1878 "parser.cc"
    break;

  case 8: /* declarations: declaration declarations  */
#line 113 "parser.y"
                                       {if ((yyvsp[-1].declaration)) (yyvsp[0].declList)->push_front((yyvsp[-1].declaration)); (yyval.declList) = (yyvsp[0].declList);}
#line 1884 "parser.cc"
    break;

  case 9: /* declarations: declaration  */
#line 115 "parser.y"
                      {(yyval.declList) = new DeclarationList(); 
	         	if ((yyvsp[0].declaration)) (yyval.declList)->push_front((yyvsp[0].declaration));}
#line 1891 "parser.cc"
    break;

  case 10: /* declaration: tokASSERT exp tokSEMICOLON  */
#line 119 "parser.y"
                                        {}
#line 1897 "parser.cc"
    break;

  case 11: /* declaration: tokGUIDE func_list tokSEMICOLON  */
#line 121 "parser.y"
                                         {}
#line 1903 "parser.cc"
    break;

  case 12: /* declaration: tokUNIVERSE univs tokSEMICOLON  */
#line 123 "parser.y"
                                        {}
#line 1909 "parser.cc"
    break;

  case 13: /* declaration: tokDEFAULT1 tokLPAREN name tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 125 "parser.y"
                                                                         {}
#line 1915 "parser.cc"
    break;

  case 14: /* declaration: tokDEFAULT2 tokLPAREN name tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 127 "parser.y"
                                                                         {}
#line 1921 "parser.cc"
    break;

  case 15: /* declaration: tokCONST name tokEQUAL arith_exp tokSEMICOLON  */
#line 129 "parser.y"
                                                        {}
#line 1927 "parser.cc"
    break;

  case 16: /* declaration: tokVAR0 name_where_list tokSEMICOLON  */
#line 131 "parser.y"
                                              {}
#line 1933 "parser.cc"
    break;

  case 17: /* declaration: tokVAR1 universe name_where_list tokSEMICOLON  */
#line 133 "parser.y"
                                                       {(yyval.declaration) = new Variable_Declaration(Varname1,(yyvsp[-1].varDeclList));}
#line 1939 "parser.cc"
    break;

  case 18: /* declaration: tokVAR2 universe name_where_list tokSEMICOLON  */
#line 135 "parser.y"
                                                        {/*$$=new Declaration{Varname2,$3};*/}
#line 1945 "parser.cc"
    break;

  case 19: /* declaration: tokTREE universe name_where_list tokSEMICOLON  */
#line 137 "parser.y"
                                                        {}
#line 1951 "parser.cc"
    break;

  case 20: /* declaration: tokPRED name tokLPAREN par_list tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 139 "parser.y"
                                                                              {}
#line 1957 "parser.cc"
    break;

  case 21: /* declaration: tokPRED name tokEQUAL exp tokSEMICOLON  */
#line 141 "parser.y"
                                                  {}
#line 1963 "parser.cc"
    break;

  case 22: /* declaration: tokPRED name tokLPAREN tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 143 "parser.y"
                                                                     {}
#line 1969 "parser.cc"
    break;

  case 23: /* declaration: tokMACRO name tokLPAREN par_list tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 145 "parser.y"
                                                                                {}
#line 1975 "parser.cc"
    break;

  case 24: /* declaration: tokMACRO name tokEQUAL exp tokSEMICOLON  */
#line 147 "parser.y"
                                                   {}
#line 1981 "parser.cc"
    break;

  case 25: /* declaration: tokMACRO name tokLPAREN tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 149 "parser.y"
                                                                       {}
#line 1987 "parser.cc"
    break;

  case 26: /* declaration: exp tokSEMICOLON  */
#line 151 "parser.y"
                           {(yyval.declaration) = new Expression_Declaration((yyvsp[-1].untypedExp));}
#line 1993 "parser.cc"
    break;

  case 27: /* declaration: tokVERIFY optstring exp tokSEMICOLON  */
#line 153 "parser.y"
                                               {}
#line 1999 "parser.cc"
    break;

  case 28: /* declaration: tokEXECUTE exp tokSEMICOLON  */
#line 155 "parser.y"
                                      {}
#line 2005 "parser.cc"
    break;

  case 29: /* declaration: tokINCLUDE tokSTRING tokSEMICOLON  */
#line 157 "parser.y"
                                            {}
#line 2011 "parser.cc"
    break;

  case 30: /* declaration: tokLASTPOS name tokSEMICOLON  */
#line 159 "parser.y"
                                               {}
#line 2017 "parser.cc"
    break;

  case 31: /* declaration: tokALLPOS name tokSEMICOLON  */
#line 161 "parser.y"
                                              {}
#line 2023 "parser.cc"
    break;

  case 32: /* declaration: tokTYPE name tokEQUAL variant_list tokSEMICOLON  */
#line 163 "parser.y"
                                                                {}
#line 2029 "parser.cc"
    break;

  case 33: /* $@1: %empty  */
#line 165 "parser.y"
                         {}
#line 2035 "parser.cc"
    break;

  case 34: /* declaration: tokINT $@1 name_where_list tokSEMICOLON  */
#line 165 "parser.y"
                                                          {ex+="\n";}
#line 2041 "parser.cc"
    break;

  case 35: /* $@2: %empty  */
#line 167 "parser.y"
                          {}
#line 2047 "parser.cc"
    break;

  case 36: /* declaration: tokReal $@2 name_where_list tokSEMICOLON  */
#line 167 "parser.y"
                                                          {ex+="\n";}
#line 2053 "parser.cc"
    break;

  case 37: /* $@3: %empty  */
#line 169 "parser.y"
                          {}
#line 2059 "parser.cc"
    break;

  case 38: /* declaration: tokBool $@3 name_where_list tokSEMICOLON  */
#line 169 "parser.y"
                                                         {ex+="\n";}
#line 2065 "parser.cc"
    break;

  case 39: /* exp: name  */
#line 174 "parser.y"
               {(yyval.untypedExp) = new UntypedExp_Name((yyvsp[0].name));}
#line 2071 "parser.cc"
    break;

  case 40: /* exp: tokLPAREN exp tokRPAREN  */
#line 176 "parser.y"
                                  {}
#line 2077 "parser.cc"
    break;

  case 41: /* exp: exp tokSUB exp  */
#line 178 "parser.y"
                        {}
#line 2083 "parser.cc"
    break;

  case 42: /* exp: exp tokIN exp  */
#line 180 "parser.y"
                        {}
#line 2089 "parser.cc"
    break;

  case 43: /* exp: exp tokNOTIN exp  */
#line 182 "parser.y"
                          {}
#line 2095 "parser.cc"
    break;

  case 44: /* exp: tokMIN exp  */
#line 184 "parser.y"
                    {}
#line 2101 "parser.cc"
    break;

  case 45: /* exp: tokMAX exp  */
#line 186 "parser.y"
                    {}
#line 2107 "parser.cc"
    break;

  case 46: /* exp: exp tokLESS exp  */
#line 188 "parser.y"
                           {(yyval.untypedExp) = new UntypedExp_Less((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2113 "parser.cc"
    break;

  case 47: /* exp: exp tokLESSEQ exp  */
#line 190 "parser.y"
                            {}
#line 2119 "parser.cc"
    break;

  case 48: /* exp: exp tokGREATEREQ exp  */
#line 192 "parser.y"
                              {}
#line 2125 "parser.cc"
    break;

  case 49: /* exp: exp tokGREATER exp  */
#line 194 "parser.y"
                             {}
#line 2131 "parser.cc"
    break;

  case 50: /* exp: exp tokEQUAL exp  */
#line 196 "parser.y"
                          {}
#line 2137 "parser.cc"
    break;

  case 51: /* exp: exp tokNOTEQUAL exp  */
#line 198 "parser.y"
                              {}
#line 2143 "parser.cc"
    break;

  case 52: /* exp: exp tokIMPL exp  */
#line 200 "parser.y"
                         {}
#line 2149 "parser.cc"
    break;

  case 53: /* exp: exp tokBIIMPL exp  */
#line 202 "parser.y"
                            {}
#line 2155 "parser.cc"
    break;

  case 54: /* exp: exp tokAND exp  */
#line 204 "parser.y"
                         {(yyval.untypedExp) = new UntypedExp_And((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2161 "parser.cc"
    break;

  case 55: /* exp: exp tokOR exp  */
#line 206 "parser.y"
                        {}
#line 2167 "parser.cc"
    break;

  case 56: /* exp: tokNOT exp  */
#line 208 "parser.y"
                     {}
#line 2173 "parser.cc"
    break;

  case 57: /* exp: dotExp  */
#line 210 "parser.y"
                 {/*$$=new UntypedEp_DotName($1);*/}
#line 2179 "parser.cc"
    break;

  case 58: /* exp: tokUNIVROOT tokLPAREN name tokRPAREN  */
#line 212 "parser.y"
                                               {}
#line 2185 "parser.cc"
    break;

  case 59: /* exp: tokUNIVROOT  */
#line 214 "parser.y"
                      {}
#line 2191 "parser.cc"
    break;

  case 60: /* exp: exp tokUP  */
#line 218 "parser.y"
                    {}
#line 2197 "parser.cc"
    break;

  case 61: /* exp: tokEX0 name_where_list tokCOLON exp  */
#line 220 "parser.y"
                                              {}
#line 2203 "parser.cc"
    break;

  case 62: /* exp: tokEX1 universe name_where_list tokCOLON exp  */
#line 222 "parser.y"
                                                       {(yyval.untypedExp) = new UntypedExp_Ex1((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2209 "parser.cc"
    break;

  case 63: /* exp: tokEX2 universe name_where_list tokCOLON exp  */
#line 224 "parser.y"
                                                       {}
#line 2215 "parser.cc"
    break;

  case 64: /* exp: tokALL0 name_where_list tokCOLON exp  */
#line 226 "parser.y"
                                               {}
#line 2221 "parser.cc"
    break;

  case 65: /* exp: tokALL1 universe name_where_list tokCOLON exp  */
#line 228 "parser.y"
                                                        {}
#line 2227 "parser.cc"
    break;

  case 66: /* exp: tokALL2 universe name_where_list tokCOLON exp  */
#line 230 "parser.y"
                                                        {}
#line 2233 "parser.cc"
    break;

  case 67: /* exp: tokLET0 defs tokIN exp  */
#line 232 "parser.y"
                                             {}
#line 2239 "parser.cc"
    break;

  case 68: /* exp: tokLET1 defs tokIN exp  */
#line 234 "parser.y"
                                            {}
#line 2245 "parser.cc"
    break;

  case 69: /* exp: tokLET2 defs tokIN exp  */
#line 236 "parser.y"
                                             {}
#line 2251 "parser.cc"
    break;

  case 70: /* exp: name tokLPAREN exp_list tokRPAREN  */
#line 238 "parser.y"
                                            {}
#line 2257 "parser.cc"
    break;

  case 71: /* exp: tokTRUE  */
#line 240 "parser.y"
                  {}
#line 2263 "parser.cc"
    break;

  case 72: /* exp: tokFALSE  */
#line 242 "parser.y"
                   {}
#line 2269 "parser.cc"
    break;

  case 73: /* exp: tokUNIVROOT tokLPAREN exp tokCOMMA universe tokRPAREN  */
#line 244 "parser.y"
                                                                {}
#line 2275 "parser.cc"
    break;

  case 74: /* exp: tokEMPTY tokLPAREN exp tokRPAREN  */
#line 246 "parser.y"
                                           {}
#line 2281 "parser.cc"
    break;

  case 75: /* exp: exp tokPLUS arith_exp  */
#line 248 "parser.y"
                                {/*$$ = new UntypedExp_Plus($1, $3);*/}
#line 2287 "parser.cc"
    break;

  case 76: /* exp: exp tokMINUS arith_exp  */
#line 250 "parser.y"
                                 {}
#line 2293 "parser.cc"
    break;

  case 77: /* exp: exp tokSTAR arith_exp  */
#line 252 "parser.y"
                                {}
#line 2299 "parser.cc"
    break;

  case 78: /* exp: exp tokSLASH arith_exp  */
#line 254 "parser.y"
                                 {}
#line 2305 "parser.cc"
    break;

  case 79: /* exp: exp tokMODULO arith_exp  */
#line 256 "parser.y"
                                   {}
#line 2311 "parser.cc"
    break;

  case 80: /* exp: tokEMPTY  */
#line 258 "parser.y"
                  {}
#line 2317 "parser.cc"
    break;

  case 81: /* exp: tokLBRACE set_body tokRBRACE  */
#line 260 "parser.y"
                                      {}
#line 2323 "parser.cc"
    break;

  case 82: /* exp: exp tokUNION exp  */
#line 262 "parser.y"
                           {}
#line 2329 "parser.cc"
    break;

  case 83: /* exp: exp tokINTER exp  */
#line 264 "parser.y"
                           {}
#line 2335 "parser.cc"
    break;

  case 84: /* exp: exp tokSETMINUS exp  */
#line 266 "parser.y"
                              {}
#line 2341 "parser.cc"
    break;

  case 85: /* exp: tokIMPORT tokLPAREN tokSTRING map_list tokRPAREN  */
#line 268 "parser.y"
                                                           {}
#line 2347 "parser.cc"
    break;

  case 86: /* exp: tokEXPORT tokLPAREN tokSTRING tokCOMMA exp tokRPAREN  */
#line 270 "parser.y"
                                                              {}
#line 2353 "parser.cc"
    break;

  case 87: /* exp: tokPREFIX tokLPAREN exp tokRPAREN  */
#line 272 "parser.y"
                                           {}
#line 2359 "parser.cc"
    break;

  case 88: /* exp: tokINSTATESPACE tokLPAREN exp tokCOMMA name_list tokRPAREN  */
#line 274 "parser.y"
                                                                    {}
#line 2365 "parser.cc"
    break;

  case 89: /* exp: tokVARIANT tokLPAREN exp tokCOMMA exp tokCOMMA name tokCOMMA name tokRPAREN  */
#line 277 "parser.y"
                                 {}
#line 2371 "parser.cc"
    break;

  case 90: /* exp: tokSUCC tokLPAREN exp tokCOMMA name tokCOMMA name tokCOMMA name tokRPAREN  */
#line 280 "parser.y"
                        {}
#line 2377 "parser.cc"
    break;

  case 91: /* exp: tokTREE tokLPAREN exp tokRPAREN  */
#line 282 "parser.y"
                                         {}
#line 2383 "parser.cc"
    break;

  case 92: /* exp: tokTYPE tokLPAREN exp tokCOMMA name tokRPAREN  */
#line 284 "parser.y"
                                                       {}
#line 2389 "parser.cc"
    break;

  case 93: /* exp: tokSOMETYPE tokLPAREN exp tokRPAREN  */
#line 286 "parser.y"
                                             {}
#line 2395 "parser.cc"
    break;

  case 94: /* exp: tokCONSTTREE tokLPAREN exp tokCOMMA name tokCOLON constnode tokRPAREN  */
#line 289 "parser.y"
                             {}
#line 2401 "parser.cc"
    break;

  case 95: /* exp: tokTREEROOT tokLPAREN exp tokRPAREN  */
#line 291 "parser.y"
                                             {}
#line 2407 "parser.cc"
    break;

  case 96: /* exp: tokRESTRICT tokLPAREN exp tokRPAREN  */
#line 293 "parser.y"
                                             {}
#line 2413 "parser.cc"
    break;

  case 97: /* arith_exp: arith_exp tokPLUS arith_exp  */
#line 298 "parser.y"
                                       {/*$$ = new ArithExp_Add($1, $3);*/}
#line 2419 "parser.cc"
    break;

  case 98: /* arith_exp: arith_exp tokMINUS arith_exp  */
#line 300 "parser.y"
                                       {}
#line 2425 "parser.cc"
    break;

  case 99: /* arith_exp: arith_exp tokSTAR arith_exp  */
#line 302 "parser.y"
                                      {}
#line 2431 "parser.cc"
    break;

  case 100: /* arith_exp: arith_exp tokSLASH arith_exp  */
#line 304 "parser.y"
                                       {}
#line 2437 "parser.cc"
    break;

  case 101: /* arith_exp: tokMINUS arith_exp  */
#line 306 "parser.y"
                             {}
#line 2443 "parser.cc"
    break;

  case 102: /* arith_exp: tokINT  */
#line 309 "parser.y"
        {
		//$$ = new ArithExp_Integer(atoi($1));
	}
#line 2451 "parser.cc"
    break;

  case 103: /* arith_exp: dotExp  */
#line 313 "parser.y"
                 {/*$$=new ArithExp_Const($1->dotName);*/}
#line 2457 "parser.cc"
    break;

  case 104: /* arith_exp: tokLPAREN arith_exp tokRPAREN  */
#line 315 "parser.y"
                                        {}
#line 2463 "parser.cc"
    break;

  case 105: /* dotExp: name tokDOT name  */
#line 319 "parser.y"
                                 {/*$$=new UntypedExp_DotName{$1,$2};*/}
#line 2469 "parser.cc"
    break;

  case 106: /* par_list: tokVAR0 name tokCOMMA par_list  */
#line 323 "parser.y"
                                         {}
#line 2475 "parser.cc"
    break;

  case 107: /* par_list: tokVAR1 name where tokCOMMA par_list  */
#line 325 "parser.y"
                                              {}
#line 2481 "parser.cc"
    break;

  case 108: /* par_list: tokVAR2 name where tokCOMMA par_list  */
#line 327 "parser.y"
                                              {}
#line 2487 "parser.cc"
    break;

  case 109: /* par_list: tokUNIVERSE name tokCOMMA par_list  */
#line 329 "parser.y"
                                             {}
#line 2493 "parser.cc"
    break;

  case 110: /* par_list: name where tokCOMMA par_list  */
#line 331 "parser.y"
                                       {}
#line 2499 "parser.cc"
    break;

  case 111: /* par_list: tokVAR0 name  */
#line 333 "parser.y"
                       {}
#line 2505 "parser.cc"
    break;

  case 112: /* par_list: tokVAR1 name where  */
#line 335 "parser.y"
                             {}
#line 2511 "parser.cc"
    break;

  case 113: /* par_list: tokVAR2 name where  */
#line 337 "parser.y"
                            {}
#line 2517 "parser.cc"
    break;

  case 114: /* par_list: tokUNIVERSE name  */
#line 339 "parser.y"
                           {}
#line 2523 "parser.cc"
    break;

  case 115: /* par_list: name where  */
#line 341 "parser.y"
                    {}
#line 2529 "parser.cc"
    break;

  case 116: /* defs: def tokCOMMA defs  */
#line 346 "parser.y"
                           {}
#line 2535 "parser.cc"
    break;

  case 117: /* defs: def  */
#line 348 "parser.y"
              {}
#line 2541 "parser.cc"
    break;

  case 118: /* def: name tokEQUAL exp  */
#line 352 "parser.y"
                           {}
#line 2547 "parser.cc"
    break;

  case 119: /* set_body: non_empty_set_body  */
#line 356 "parser.y"
                            {}
#line 2553 "parser.cc"
    break;

  case 120: /* set_body: %empty  */
#line 358 "parser.y"
                     {}
#line 2559 "parser.cc"
    break;

  case 121: /* non_empty_set_body: exp tokCOMMA non_empty_set_body  */
#line 362 "parser.y"
                                                   {}
#line 2565 "parser.cc"
    break;

  case 122: /* non_empty_set_body: tokINTERVAL tokCOMMA non_empty_set_body  */
#line 364 "parser.y"
                                                 {}
#line 2571 "parser.cc"
    break;

  case 123: /* non_empty_set_body: exp  */
#line 366 "parser.y"
             {}
#line 2577 "parser.cc"
    break;

  case 124: /* non_empty_set_body: tokINTERVAL  */
#line 368 "parser.y"
                     {}
#line 2583 "parser.cc"
    break;

  case 125: /* exp_list: non_empty_exp_list  */
#line 372 "parser.y"
                            {}
#line 2589 "parser.cc"
    break;

  case 126: /* exp_list: %empty  */
#line 374 "parser.y"
                     {}
#line 2595 "parser.cc"
    break;

  case 127: /* non_empty_exp_list: exp tokCOMMA non_empty_exp_list  */
#line 378 "parser.y"
                                                   {}
#line 2601 "parser.cc"
    break;

  case 128: /* non_empty_exp_list: exp  */
#line 380 "parser.y"
              {}
#line 2607 "parser.cc"
    break;

  case 129: /* universe: tokLBRACKET name_list tokRBRACKET  */
#line 384 "parser.y"
                                           {}
#line 2613 "parser.cc"
    break;

  case 130: /* universe: %empty  */
#line 386 "parser.y"
                     {}
#line 2619 "parser.cc"
    break;

  case 131: /* name: tokNAME  */
#line 391 "parser.y"
                {(yyval.name) = new Name((yyvsp[0].st));}
#line 2625 "parser.cc"
    break;

  case 132: /* name_list: name tokCOMMA name_list  */
#line 395 "parser.y"
                                  {}
#line 2631 "parser.cc"
    break;

  case 133: /* name_list: name  */
#line 397 "parser.y"
              {}
#line 2637 "parser.cc"
    break;

  case 134: /* name_where_list: name where tokCOMMA name_where_list  */
#line 402 "parser.y"
                {(yyvsp[0].varDeclList)->push_front(new VarDecl((yyvsp[-3].name),nullptr)); 
		 (yyval.varDeclList) = (yyvsp[0].varDeclList);}
#line 2644 "parser.cc"
    break;

  case 135: /* name_where_list: name where  */
#line 405 "parser.y"
                {(yyval.varDeclList) = new VarDeclList(); 
		 (yyval.varDeclList)->push_front(new VarDecl((yyvsp[-1].name),nullptr));}
#line 2651 "parser.cc"
    break;

  case 136: /* func_list: func tokCOMMA func_list  */
#line 410 "parser.y"
                                  {}
#line 2657 "parser.cc"
    break;

  case 137: /* func_list: func  */
#line 412 "parser.y"
              {}
#line 2663 "parser.cc"
    break;

  case 138: /* func: name tokARROW tokLPAREN name tokCOMMA name tokRPAREN  */
#line 416 "parser.y"
                                                              {}
#line 2669 "parser.cc"
    break;

  case 139: /* univs: univ tokCOMMA univs  */
#line 420 "parser.y"
                             {}
#line 2675 "parser.cc"
    break;

  case 140: /* univs: univ  */
#line 422 "parser.y"
              {}
#line 2681 "parser.cc"
    break;

  case 141: /* univ: name tokCOLON tokINT  */
#line 426 "parser.y"
                              {}
#line 2687 "parser.cc"
    break;

  case 142: /* univ: name tokCOLON name  */
#line 428 "parser.y"
                            {}
#line 2693 "parser.cc"
    break;

  case 143: /* univ: name  */
#line 430 "parser.y"
              {}
#line 2699 "parser.cc"
    break;

  case 144: /* where: tokWHERE exp  */
#line 434 "parser.y"
                      {}
#line 2705 "parser.cc"
    break;

  case 145: /* where: %empty  */
#line 436 "parser.y"
                     {}
#line 2711 "parser.cc"
    break;

  case 146: /* map_list: tokCOMMA name tokARROW name map_list  */
#line 440 "parser.y"
                                              {}
#line 2717 "parser.cc"
    break;

  case 147: /* map_list: %empty  */
#line 442 "parser.y"
                     {}
#line 2723 "parser.cc"
    break;

  case 148: /* variant_list: name tokLPAREN component_list tokRPAREN tokCOMMA variant_list  */
#line 446 "parser.y"
                                                                           {}
#line 2729 "parser.cc"
    break;

  case 149: /* variant_list: name tokLPAREN tokRPAREN tokCOMMA variant_list  */
#line 448 "parser.y"
                                                        {}
#line 2735 "parser.cc"
    break;

  case 150: /* variant_list: name tokCOMMA variant_list  */
#line 450 "parser.y"
                                    {}
#line 2741 "parser.cc"
    break;

  case 151: /* variant_list: name tokLPAREN component_list tokRPAREN  */
#line 452 "parser.y"
                                                 {}
#line 2747 "parser.cc"
    break;

  case 152: /* variant_list: name tokLPAREN tokRPAREN  */
#line 454 "parser.y"
                                  {}
#line 2753 "parser.cc"
    break;

  case 153: /* variant_list: name  */
#line 456 "parser.y"
              {}
#line 2759 "parser.cc"
    break;

  case 154: /* component_list: name tokCOLON name tokCOMMA component_list  */
#line 460 "parser.y"
                                                          {}
#line 2765 "parser.cc"
    break;

  case 155: /* component_list: name tokCOLON name  */
#line 462 "parser.y"
                            {}
#line 2771 "parser.cc"
    break;

  case 156: /* constnode: name tokLPAREN constnode_list tokRPAREN  */
#line 466 "parser.y"
                                                  {}
#line 2777 "parser.cc"
    break;

  case 157: /* constnode: name tokLPAREN tokRPAREN  */
#line 468 "parser.y"
                                  {}
#line 2783 "parser.cc"
    break;

  case 158: /* constnode: name  */
#line 470 "parser.y"
              {}
#line 2789 "parser.cc"
    break;

  case 159: /* constnode_list: constnode tokCOMMA constnode_list  */
#line 474 "parser.y"
                                                 {}
#line 2795 "parser.cc"
    break;

  case 160: /* constnode_list: constnode  */
#line 476 "parser.y"
                   {}
#line 2801 "parser.cc"
    break;

  case 161: /* optstring: tokSTRING  */
#line 480 "parser.y"
                    {}
#line 2807 "parser.cc"
    break;

  case 162: /* optstring: %empty  */
#line 482 "parser.y"
                      {}
#line 2813 "parser.cc"
    break;


#line 2817 "parser.cc"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 487 "parser.y"


void returnMonaSmtLibFormat()
{
	if(!str.empty()){
		Expression monaExpression{str};
		ex+=monaExpression.returnMonaVersion();
		smtLib+=monaExpression.returnSMTLIBVersion()+"\n";
		str.clear();
	}
}

void addOperatorStringStr(std::string op)
{
		if(!str.empty())
        		str+=op;
        	else
        		addElementStringEx(op);
}

void addElementStringEx(std::string op)
{
	ex+=op;
}

int main(int argc, char **argv) {
   if (argc > 1) {
      yyin=fopen(argv[1],"r");;
      if (yyin == NULL){
         std::cout<<"syntax error";
      }//end if
   }//end if
	yyparse(); // Calls yylex() for tokens exp tokPLUS arith_exp {}.
//while(yylex()!=0);

   return 0;
}

void yyerror(const char *msg) {
	std::cout<<"syntax error";
}
