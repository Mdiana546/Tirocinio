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
int counter=0;

#line 91 "parser.cc"

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
  YYSYMBOL_101_4 = 101,                    /* $@4  */
  YYSYMBOL_102_5 = 102,                    /* $@5  */
  YYSYMBOL_103_6 = 103,                    /* $@6  */
  YYSYMBOL_104_7 = 104,                    /* $@7  */
  YYSYMBOL_105_8 = 105,                    /* $@8  */
  YYSYMBOL_arith_exp = 106,                /* arith_exp  */
  YYSYMBOL_107_9 = 107,                    /* $@9  */
  YYSYMBOL_dotExp = 108,                   /* dotExp  */
  YYSYMBOL_par_list = 109,                 /* par_list  */
  YYSYMBOL_defs = 110,                     /* defs  */
  YYSYMBOL_def = 111,                      /* def  */
  YYSYMBOL_set_body = 112,                 /* set_body  */
  YYSYMBOL_non_empty_set_body = 113,       /* non_empty_set_body  */
  YYSYMBOL_exp_list = 114,                 /* exp_list  */
  YYSYMBOL_non_empty_exp_list = 115,       /* non_empty_exp_list  */
  YYSYMBOL_universe = 116,                 /* universe  */
  YYSYMBOL_name = 117,                     /* name  */
  YYSYMBOL_name_list = 118,                /* name_list  */
  YYSYMBOL_name_where_list = 119,          /* name_where_list  */
  YYSYMBOL_120_10 = 120,                   /* $@10  */
  YYSYMBOL_func_list = 121,                /* func_list  */
  YYSYMBOL_func = 122,                     /* func  */
  YYSYMBOL_univs = 123,                    /* univs  */
  YYSYMBOL_univ = 124,                     /* univ  */
  YYSYMBOL_where = 125,                    /* where  */
  YYSYMBOL_map_list = 126,                 /* map_list  */
  YYSYMBOL_variant_list = 127,             /* variant_list  */
  YYSYMBOL_component_list = 128,           /* component_list  */
  YYSYMBOL_constnode = 129,                /* constnode  */
  YYSYMBOL_constnode_list = 130,           /* constnode_list  */
  YYSYMBOL_optstring = 131                 /* optstring  */
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
#define YYLAST   2249

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  169
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  432

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
       0,    73,    73,    82,    84,    86,    88,    90,    94,    96,
      99,   101,   103,   105,   107,   109,   111,   113,   115,   117,
     119,   121,   123,   125,   127,   129,   131,   133,   135,   137,
     139,   141,   143,   145,   145,   147,   147,   149,   149,   154,
     156,   158,   160,   162,   164,   166,   169,   168,   178,   180,
     182,   184,   186,   188,   190,   193,   192,   201,   203,   205,
     207,   209,   213,   215,   217,   217,   217,   219,   221,   223,
     225,   227,   229,   231,   233,   235,   237,   239,   241,   243,
     243,   245,   247,   249,   251,   253,   255,   257,   259,   261,
     263,   265,   267,   269,   271,   274,   277,   279,   281,   283,
     286,   288,   293,   293,   295,   297,   299,   301,   303,   308,
     310,   314,   318,   320,   322,   324,   326,   328,   330,   332,
     334,   336,   341,   343,   347,   351,   353,   357,   359,   361,
     363,   367,   369,   373,   375,   379,   381,   385,   389,   391,
     395,   395,   397,   401,   403,   407,   411,   413,   417,   419,
     421,   425,   427,   431,   433,   437,   439,   441,   443,   445,
     447,   451,   453,   457,   459,   461,   465,   467,   471,   473
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
  "declarations", "declaration", "$@1", "$@2", "$@3", "exp", "$@4", "$@5",
  "$@6", "$@7", "$@8", "arith_exp", "$@9", "dotExp", "par_list", "defs",
  "def", "set_body", "non_empty_set_body", "exp_list",
  "non_empty_exp_list", "universe", "name", "name_list", "name_where_list",
  "$@10", "func_list", "func", "univs", "univ", "where", "map_list",
  "variant_list", "component_list", "constnode", "constnode_list",
  "optstring", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-337)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     158,   -40,   -26,    -2,    21,    61,   627,  -337,  -337,  -337,
    -337,  -337,    -9,    56,    56,   715,    -9,    52,    69,    75,
      -9,  -337,    56,  -337,    -9,   483,    -9,    -9,    -9,   715,
      -9,   715,   715,   715,    -9,    82,    91,     3,    13,  -337,
      -9,    -9,    56,    56,    43,   100,   105,   107,    -9,   110,
     715,   -16,   115,   119,   126,   127,   128,    -9,  -337,  -337,
    -337,  -337,  -337,   627,   564,  -337,     6,    73,    92,    -9,
      -9,    -9,   132,   133,   791,   153,    -9,    -9,   715,   161,
      56,    -9,   166,   125,   175,   182,   842,   150,  -337,   174,
     190,   185,   177,   178,   884,     8,   104,   104,  2144,    37,
     715,   715,  -337,   715,   715,    -9,   204,   164,   207,   169,
      -9,    -9,   170,   130,   135,   715,   173,   715,   926,   715,
     212,   715,   715,   715,   715,   715,   181,    -9,    -9,    -9,
    -337,  -337,   715,   715,   715,   715,   715,   715,   715,  -337,
     715,    -6,    -6,   715,   715,   715,  -337,  -337,   715,    -6,
      -6,   715,   715,  -337,    -9,   715,   715,   224,   715,   232,
     194,   235,   236,  -337,    -6,   195,   196,   968,   715,    -9,
     244,   219,  -337,    -9,   483,   483,  -337,   715,    -9,   715,
     715,   715,  -337,   715,    42,   715,   123,  1010,  1052,    35,
    1094,  1136,   205,   -14,  -337,    -9,  -337,   206,   214,  -337,
     246,   257,  1178,  -337,  1220,  -337,  1262,    -9,  1304,  1346,
    1388,  1430,  1472,  -337,   216,   217,   221,   715,  1976,   210,
     210,   210,  2018,  2186,   136,   715,   210,    -6,    -6,  -337,
      66,  -337,   260,  -337,   210,  2186,  2102,    -6,   165,  -337,
    -337,  2186,    93,  -337,  1514,   220,  -337,  1976,  -337,  1976,
      -9,  -337,   715,   715,   241,   259,   261,  -337,  1976,   269,
     715,    -9,  -337,  -337,  -337,  1976,  -337,  2060,  1976,  1976,
    1556,   265,    -9,    -9,    -9,    -9,   231,    73,  1598,   271,
     234,  -337,    56,  -337,  -337,  -337,  -337,  -337,  -337,  -337,
    -337,  -337,    -9,   237,   715,  -337,    -9,    -9,    24,   238,
    -337,   715,    -9,  -337,    -9,  -337,  -337,  -337,  2144,   210,
      45,    66,    -6,  -337,    -6,    -6,    66,   715,  -337,    -9,
    -337,  1976,  1976,  -337,   715,   715,  -337,  1976,   282,  -337,
     715,   284,   287,    73,    73,   288,   290,  -337,   715,   289,
     247,   301,  -337,  1640,   258,   262,    -9,   -45,  -337,  1682,
     298,   302,  -337,    66,    -6,  -337,  -337,  -337,  -337,  1724,
    1766,   715,    -9,  1808,    17,    17,   300,   304,   715,    17,
    1850,   715,  -337,    -9,  -337,  -337,  -337,  -337,   305,   303,
     267,    -9,    -9,    -9,    66,  -337,  -337,  1976,   268,  -337,
    -337,  -337,    17,    17,  1892,  -337,  -337,  1934,   246,    -9,
      -9,   306,   310,   311,   292,   272,  -337,  -337,  -337,  -337,
    -337,  -337,  -337,   314,    -9,    -9,    -9,   -33,  -337,    -9,
    -337,   274,   277,  -337,   319,   279,  -337,  -337,  -337,    -9,
    -337,  -337
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     0,     0,     0,     0,     0,     5,     6,     3,
       4,     1,     0,   136,   136,     0,     0,     0,     0,    85,
       0,    64,   136,    76,     0,   126,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    61,   169,   136,    75,
       0,     0,   136,   136,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   137,    35,
      37,    33,     2,     9,     0,    59,    39,   152,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     136,     0,     0,     0,   144,   130,   129,     0,   125,     0,
     123,     0,     0,     0,     0,     0,    45,    44,    58,     0,
       0,     0,   168,     0,     0,     0,   150,     0,   147,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,    55,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,     0,     0,     0,     0,    79,    26,     0,     0,
       0,     0,     0,    62,     0,   132,     0,   142,     0,   139,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,    11,     0,     0,     0,    86,     0,     0,     0,
       0,     0,    40,     0,     0,     0,     0,     0,     0,    39,
       0,     0,     0,     0,    12,     0,    16,     0,     0,    29,
     154,     0,     0,    30,     0,    28,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,     0,    54,    51,
      50,    49,    53,    42,    88,     0,    48,     0,     0,   108,
      81,   109,     0,    84,    52,    43,    57,     0,    89,    83,
      82,    41,    87,   111,   134,     0,   131,   151,   140,    68,
       0,   135,     0,     0,     0,     0,     0,    78,    63,     0,
       0,     0,   143,   128,   127,    71,   122,   124,    72,    73,
       0,     0,     0,     0,     0,     0,     0,   152,     0,     0,
       0,   101,   136,    60,    27,    96,    19,   148,   149,   146,
      17,    18,     0,     0,     0,    92,     0,     0,   160,     0,
      98,     0,     0,   100,     0,    36,    38,    34,    56,    47,
       0,   107,     0,   102,     0,     0,    80,     0,    74,     0,
     138,    69,    70,    15,     0,     0,    65,    67,     0,    24,
       0,   120,   117,   152,   152,     0,   121,    21,     0,     0,
       0,     0,    90,     0,     0,     0,     0,     0,    32,     0,
       0,     0,   110,   104,     0,   106,   105,   133,   141,     0,
       0,     0,     0,     0,     0,     0,   118,   119,     0,     0,
       0,     0,    77,     0,    91,    93,    97,   157,   159,     0,
       0,     0,     0,     0,   103,    13,    14,    66,     0,    25,
     115,   112,     0,     0,     0,   116,    22,     0,   154,     0,
       0,   158,     0,     0,   165,     0,   145,   113,   114,    23,
      20,   153,   156,   162,     0,     0,     0,     0,    99,     0,
     155,     0,     0,   164,   167,     0,   161,    94,    95,     0,
     163,   166
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -337,  -337,  -337,   270,  -337,  -337,  -337,  -337,   312,  -337,
    -337,  -337,  -337,  -337,  -102,  -337,  -118,  -185,   -25,  -337,
    -337,   -51,  -337,    15,    -5,   -12,  -244,   -15,  -337,   163,
    -337,   142,  -337,  -266,   -75,  -336,   -81,   -44,   -89,  -337
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,    62,    63,   129,   127,   128,    86,   225,
     217,    80,   361,   237,   230,   354,    65,   276,    89,    90,
      87,    88,   245,   246,    70,    66,   160,    68,   319,    83,
      84,   107,   108,   157,   293,   299,   380,   424,   425,   103
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      67,   280,    92,    93,    75,    79,   320,   378,    67,    71,
     377,   336,    82,     7,    91,    91,    91,    81,    95,   423,
     119,   154,    99,   231,   231,   183,   109,     8,   106,    67,
     227,   231,   231,   105,   228,   346,   116,   110,   111,   120,
     233,    58,   155,    69,   184,   126,   231,   239,   240,   104,
     154,     9,   344,    58,   185,   161,   162,   159,    67,    67,
     347,    11,   254,   412,   165,   166,   170,   366,   367,    67,
      58,   155,    58,   186,    10,   169,   287,    58,   420,   272,
      58,   273,   274,   275,   229,   312,    69,   283,    76,   189,
     192,   313,   102,    67,   271,   197,   198,   352,    67,    67,
     314,   315,   158,    58,   272,    77,   273,   274,   275,   231,
     231,    78,   214,   215,   216,    67,    67,    67,   100,   231,
     138,   314,   315,   263,   264,   310,   311,   101,    58,   232,
     232,   138,   112,   141,   142,   316,   113,   232,   232,   146,
     156,   114,   243,   115,   141,   142,   117,   148,   149,   150,
     146,   121,   232,   266,   259,   122,   153,    67,   148,   149,
     150,    82,   123,   124,   125,   152,    91,   153,   104,   119,
     164,   168,   277,   171,   277,   279,   141,   142,   172,   390,
     391,   288,   146,   106,   395,   272,   173,   273,   274,   275,
     148,   149,   150,   174,   231,   298,   231,   231,   176,   153,
     177,   178,   179,   180,   181,   141,   142,   407,   408,    58,
     353,   146,   355,   356,   193,   232,   232,   194,   195,   200,
     149,   150,   196,   199,   201,   232,   203,    -1,   153,   207,
       1,     2,    -1,    -1,   213,   248,   231,   138,   159,     3,
       4,    -1,    -1,   250,   251,   252,   253,   255,   256,   328,
     141,   142,   384,    -1,   260,   261,   146,   292,   286,   290,
     331,   332,   333,   334,   148,   149,   150,   291,   294,   305,
     306,   152,   318,   153,   307,   154,   324,   340,   325,   326,
     341,   312,   330,   335,   159,   345,   339,   313,   338,   342,
     350,   348,   351,   362,   323,   364,   314,   315,   365,   372,
     232,   369,   232,   232,   358,   368,   371,    67,   373,   382,
     375,   392,   383,   400,   376,   393,   399,   414,    64,   401,
     406,   415,   416,   411,   418,   419,   427,    74,   417,   428,
     429,   430,   357,   130,   298,   379,   262,   289,   426,   405,
     431,    94,   232,    96,    97,    98,     0,     0,     0,     0,
     388,     0,   277,   277,     0,     0,     0,   277,     0,     0,
       0,   398,   118,     0,     0,     0,     0,     0,     0,   402,
     403,   404,     0,     0,     0,    64,     0,     0,     0,     0,
     277,   277,     0,     0,     0,     0,     0,   298,   413,     0,
     167,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   298,   421,   422,   404,     0,   379,     0,     0,
       0,     0,   187,   188,     0,   190,   191,   404,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   202,     0,   204,
       0,   206,     0,   208,   209,   210,   211,   212,     0,     0,
       0,     0,     0,     0,   218,   219,   220,   221,   222,   223,
     224,     0,   226,     0,     0,   234,   235,   236,     0,     0,
     238,     0,     0,   241,   242,     0,     0,   244,   247,     0,
     249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     258,     0,     0,     0,     0,     0,    12,    13,    14,   265,
       0,   267,   268,   269,     0,   270,     0,   278,     0,    19,
       0,    20,    21,    22,    23,     0,     0,     0,     0,     0,
       0,    85,    25,     0,     0,     0,    26,    27,    28,    29,
       0,    31,    32,     0,     0,    33,     0,     0,     0,   308,
       0,     0,    35,     0,    36,     0,     0,   309,     0,     0,
       0,     0,    72,    39,     0,     0,     0,     0,     0,     0,
       0,     0,    45,    46,    47,     0,     0,     0,    49,     0,
      73,    52,    53,    54,   321,   322,    55,    56,     0,    58,
     131,     0,   327,   132,     0,     0,     0,     0,     0,     0,
       0,   133,     0,     0,     0,     0,   134,   135,     0,   136,
     137,   138,     0,     0,     0,   139,   140,     0,     0,     0,
       0,     0,     0,     0,   141,   142,   343,   143,   144,   145,
     146,     0,     0,   349,     0,     0,     0,   147,   148,   149,
     150,     0,   151,     0,     0,   152,     0,   153,     0,   244,
      12,    13,    14,     0,     0,    15,   359,   360,     0,    16,
      17,    18,   363,    19,     0,    20,    21,    22,    23,     0,
     370,    24,     0,     0,     0,     0,    25,     0,     0,     0,
      26,    27,    28,    29,    30,    31,    32,     0,     0,    33,
       0,     0,     0,   387,    34,     0,    35,     0,    36,     0,
     394,     0,     0,   397,    37,     0,    38,    39,     0,    40,
       0,    41,    42,    43,     0,    44,    45,    46,    47,     0,
       0,    48,    49,    50,    51,    52,    53,    54,     0,     0,
      55,    56,    57,    58,    59,    60,     0,    61,    12,    13,
      14,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    19,     0,    20,    21,    22,    23,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,     0,    26,    27,
      28,    29,     0,    31,    32,     0,     0,    33,     0,     0,
       0,     0,     0,     0,    35,     0,    36,     0,     0,     0,
       0,     0,     0,     0,    72,    39,     0,     0,     0,     0,
       0,     0,     0,     0,    45,    46,    47,     0,     0,     0,
      49,     0,    73,    52,    53,    54,     0,   131,    55,    56,
     132,    58,     0,     0,     0,     0,     0,     0,   133,     0,
       0,     0,     0,   134,   135,     0,   136,   137,   138,     0,
       0,     0,   139,   140,     0,     0,     0,     0,     0,     0,
       0,   141,   142,     0,   143,   144,   145,   146,     0,     0,
       0,     0,     0,     0,   163,   148,   149,   150,   131,   151,
       0,   132,   152,   175,   153,     0,     0,     0,     0,   133,
       0,     0,     0,     0,   134,   135,     0,   136,   137,   138,
       0,     0,     0,   139,   140,     0,     0,     0,     0,     0,
       0,     0,   141,   142,     0,   143,   144,   145,   146,     0,
     131,     0,     0,   132,     0,     0,   148,   149,   150,     0,
     151,   133,     0,   152,     0,   153,   134,   135,     0,   136,
     137,   138,     0,     0,     0,   139,   140,     0,     0,     0,
       0,     0,     0,     0,   141,   142,     0,   143,   144,   145,
     146,     0,   131,     0,     0,   132,   182,     0,   148,   149,
     150,     0,   151,   133,     0,   152,     0,   153,   134,   135,
       0,   136,   137,   138,     0,     0,     0,   139,   140,     0,
       0,     0,     0,     0,     0,     0,   141,   142,     0,   143,
     144,   145,   146,     0,   131,     0,     0,   132,     0,   205,
     148,   149,   150,     0,   151,   133,     0,   152,     0,   153,
     134,   135,     0,   136,   137,   138,     0,     0,     0,   139,
     140,     0,     0,     0,     0,     0,     0,     0,   141,   142,
       0,   143,   144,   145,   146,     0,   131,     0,     0,   132,
     257,     0,   148,   149,   150,     0,   151,   133,     0,   152,
       0,   153,   134,   135,     0,   136,   137,   138,     0,     0,
       0,   139,   140,     0,     0,     0,     0,     0,     0,     0,
     141,   142,     0,   143,   144,   145,   146,     0,   131,     0,
       0,   132,   281,   282,   148,   149,   150,     0,   151,   133,
       0,   152,     0,   153,   134,   135,     0,   136,   137,   138,
       0,     0,     0,   139,   140,     0,     0,     0,     0,     0,
       0,     0,   141,   142,     0,   143,   144,   145,   146,     0,
     131,     0,     0,   132,     0,     0,   148,   149,   150,     0,
     151,   133,     0,   152,     0,   153,   134,   135,     0,   136,
     137,   138,     0,     0,     0,   139,   140,     0,     0,     0,
       0,     0,     0,     0,   141,   142,     0,   143,   144,   145,
     146,     0,   131,     0,     0,   132,     0,   284,   148,   149,
     150,     0,   151,   133,     0,   152,     0,   153,   134,   135,
       0,   136,   137,   138,     0,     0,     0,   139,   140,     0,
       0,     0,     0,     0,     0,     0,   141,   142,     0,   143,
     144,   145,   146,     0,   131,     0,     0,   132,   285,     0,
     148,   149,   150,     0,   151,   133,     0,   152,     0,   153,
     134,   135,     0,   136,   137,   138,     0,     0,     0,   139,
     140,     0,     0,     0,     0,     0,     0,     0,   141,   142,
       0,   143,   144,   145,   146,     0,   131,     0,     0,   132,
     295,   296,   148,   149,   150,     0,   151,   133,     0,   152,
       0,   153,   134,   135,     0,   136,   137,   138,     0,     0,
       0,   139,   140,     0,     0,     0,     0,     0,     0,     0,
     141,   142,     0,   143,   144,   145,   146,     0,   131,     0,
       0,   132,     0,   297,   148,   149,   150,     0,   151,   133,
       0,   152,     0,   153,   134,   135,     0,   136,   137,   138,
       0,     0,     0,   139,   140,     0,     0,     0,     0,     0,
       0,     0,   141,   142,     0,   143,   144,   145,   146,     0,
     131,     0,     0,   132,     0,     0,   148,   149,   150,     0,
     151,   133,     0,   152,     0,   153,   134,   135,     0,   136,
     137,   138,     0,     0,     0,   139,   140,     0,     0,     0,
       0,     0,     0,     0,   141,   142,     0,   143,   144,   145,
     146,     0,   131,     0,     0,   132,   300,   301,   148,   149,
     150,     0,   151,   133,     0,   152,     0,   153,   134,   135,
       0,   136,   137,   138,     0,     0,     0,   139,   140,     0,
       0,     0,     0,     0,     0,     0,   141,   142,     0,   143,
     144,   145,   146,     0,   131,     0,     0,   132,     0,   302,
     148,   149,   150,     0,   151,   133,     0,   152,     0,   153,
     134,   135,     0,   136,   137,   138,     0,     0,     0,   139,
     140,     0,     0,     0,     0,     0,     0,     0,   141,   142,
       0,   143,   144,   145,   146,     0,   131,     0,     0,   132,
       0,     0,   148,   149,   150,     0,   151,   133,     0,   152,
       0,   153,   134,   135,     0,   136,   137,   138,     0,     0,
       0,   139,   140,     0,     0,     0,     0,     0,     0,     0,
     141,   142,     0,   143,   144,   145,   146,     0,   131,     0,
       0,   132,   303,   304,   148,   149,   150,     0,   151,   133,
       0,   152,     0,   153,   134,   135,     0,   136,   137,   138,
       0,     0,     0,   139,   140,     0,     0,     0,     0,     0,
       0,     0,   141,   142,     0,   143,   144,   145,   146,     0,
     131,     0,     0,   132,     0,   317,   148,   149,   150,     0,
     151,   133,     0,   152,     0,   153,   134,   135,     0,   136,
     137,   138,     0,     0,     0,   139,   140,     0,     0,     0,
       0,     0,     0,     0,   141,   142,     0,   143,   144,   145,
     146,     0,   131,     0,     0,   132,     0,     0,   148,   149,
     150,     0,   151,   133,     0,   152,     0,   153,   134,   135,
       0,   136,   137,   138,     0,     0,     0,   139,   140,     0,
       0,     0,     0,     0,     0,     0,   141,   142,     0,   143,
     144,   145,   146,     0,   131,     0,     0,   132,     0,   329,
     148,   149,   150,     0,   151,   133,     0,   152,     0,   153,
     134,   135,     0,   136,   137,   138,     0,     0,     0,   139,
     140,     0,     0,     0,     0,     0,     0,     0,   141,   142,
       0,   143,   144,   145,   146,     0,   131,     0,     0,   132,
       0,   337,   148,   149,   150,     0,   151,   133,     0,   152,
       0,   153,   134,   135,     0,   136,   137,   138,     0,     0,
       0,   139,   140,     0,     0,     0,     0,     0,     0,     0,
     141,   142,     0,   143,   144,   145,   146,     0,   131,     0,
       0,   132,   374,   381,   148,   149,   150,     0,   151,   133,
       0,   152,     0,   153,   134,   135,     0,   136,   137,   138,
       0,     0,     0,   139,   140,     0,     0,     0,     0,     0,
       0,     0,   141,   142,     0,   143,   144,   145,   146,     0,
     131,     0,     0,   132,     0,     0,   148,   149,   150,     0,
     151,   133,     0,   152,     0,   153,   134,   135,     0,   136,
     137,   138,     0,     0,     0,   139,   140,     0,     0,     0,
       0,     0,     0,     0,   141,   142,     0,   143,   144,   145,
     146,     0,   131,     0,     0,   132,     0,   385,   148,   149,
     150,     0,   151,   133,     0,   152,     0,   153,   134,   135,
       0,   136,   137,   138,     0,     0,     0,   139,   140,     0,
       0,     0,     0,     0,     0,     0,   141,   142,     0,   143,
     144,   145,   146,     0,   131,     0,     0,   132,     0,   386,
     148,   149,   150,     0,   151,   133,     0,   152,     0,   153,
     134,   135,     0,   136,   137,   138,     0,     0,     0,   139,
     140,     0,     0,     0,     0,     0,     0,     0,   141,   142,
       0,   143,   144,   145,   146,     0,   131,     0,     0,   132,
       0,   389,   148,   149,   150,     0,   151,   133,     0,   152,
       0,   153,   134,   135,     0,   136,   137,   138,     0,     0,
       0,   139,   140,     0,     0,     0,     0,     0,     0,     0,
     141,   142,     0,   143,   144,   145,   146,     0,   131,     0,
       0,   132,     0,   396,   148,   149,   150,     0,   151,   133,
       0,   152,     0,   153,   134,   135,     0,   136,   137,   138,
       0,     0,     0,   139,   140,     0,     0,     0,     0,     0,
       0,     0,   141,   142,     0,   143,   144,   145,   146,     0,
     131,     0,     0,   132,     0,   409,   148,   149,   150,     0,
     151,   133,     0,   152,     0,   153,   134,   135,     0,   136,
     137,   138,     0,     0,     0,   139,   140,     0,     0,     0,
       0,     0,     0,     0,   141,   142,     0,   143,   144,   145,
     146,     0,   131,     0,     0,   132,     0,   410,   148,   149,
     150,     0,   151,   133,     0,   152,     0,   153,   134,   135,
       0,   136,   137,   138,     0,     0,     0,   139,   140,     0,
       0,     0,     0,     0,     0,     0,   141,   142,     0,   143,
     144,   145,   146,     0,   131,     0,     0,     0,     0,     0,
     148,   149,   150,     0,   151,   133,     0,   152,     0,   153,
     134,   135,     0,   136,   137,   138,     0,     0,     0,   139,
     140,     0,     0,     0,     0,     0,     0,     0,   141,   142,
       0,   143,   144,   145,   146,     0,   131,     0,     0,   132,
       0,     0,   148,   149,   150,     0,   151,   133,     0,   152,
       0,   153,   134,   135,     0,   136,     0,   138,     0,     0,
       0,   139,   140,     0,     0,     0,     0,     0,     0,     0,
     141,   142,     0,   143,   144,   145,   146,     0,   131,     0,
       0,     0,     0,     0,   148,   149,   150,     0,   151,   133,
       0,   152,     0,   153,   134,   135,     0,     0,   137,   138,
       0,     0,     0,   139,   140,     0,     0,     0,     0,     0,
       0,     0,   141,   142,     0,   143,   144,     0,   146,     0,
       0,     0,     0,     0,     0,     0,   148,   149,   150,     0,
     151,   133,     0,   152,     0,   153,   134,   135,     0,     0,
     137,   138,     0,     0,     0,   139,   140,     0,     0,     0,
       0,     0,     0,     0,   141,   142,     0,   143,   144,     0,
     146,     0,     0,     0,     0,     0,     0,     0,   148,   149,
     150,     0,   151,   133,     0,   152,     0,   153,   134,   135,
       0,     0,    -1,   138,     0,     0,     0,   139,   140,     0,
       0,     0,     0,     0,     0,     0,   141,   142,     0,   143,
      -1,     0,   146,     0,     0,     0,     0,     0,     0,     0,
     148,   149,   150,     0,    -1,     0,     0,   152,     0,   153
};

static const yytype_int16 yycheck[] =
{
      12,   186,    27,    28,    16,    20,   250,    52,    20,    14,
     346,   277,    24,    53,    26,    27,    28,    22,    30,    52,
      36,    15,    34,   141,   142,    17,    41,    53,    40,    41,
      36,   149,   150,    38,    40,    11,    48,    42,    43,    51,
     142,    86,    36,    30,    36,    57,   164,   149,   150,    36,
      15,    53,   296,    86,    17,    70,    71,    69,    70,    71,
      36,     0,   164,   399,    76,    77,    81,   333,   334,    81,
      86,    36,    86,    36,    53,    80,    90,    86,   414,    62,
      86,    64,    65,    66,    90,    40,    30,    52,    36,   101,
     105,    46,    89,   105,    52,   110,   111,    52,   110,   111,
      55,    56,    10,    86,    62,    36,    64,    65,    66,   227,
     228,    36,   127,   128,   129,   127,   128,   129,    36,   237,
      27,    55,    56,   174,   175,   227,   228,    36,    86,   141,
     142,    27,    89,    40,    41,   237,    36,   149,   150,    46,
      67,    36,   154,    36,    40,    41,    36,    54,    55,    56,
      46,    36,   164,   178,   169,    36,    63,   169,    54,    55,
      56,   173,    36,    36,    36,    61,   178,    63,    36,    36,
      17,    10,   184,     7,   186,    52,    40,    41,    53,   364,
     365,   193,    46,   195,   369,    62,    11,    64,    65,    66,
      54,    55,    56,    11,   312,   207,   314,   315,    48,    63,
      26,    11,    17,    26,    26,    40,    41,   392,   393,    86,
     312,    46,   314,   315,    10,   227,   228,    53,    11,    89,
      55,    56,    53,    53,    89,   237,    53,    17,    63,    17,
      72,    73,    22,    23,    53,    11,   354,    27,   250,    81,
      82,    31,    32,    11,    50,    10,    10,    52,    52,   261,
      40,    41,   354,    43,    10,    36,    46,    11,    53,    53,
     272,   273,   274,   275,    54,    55,    56,    53,    11,    53,
      53,    61,    52,    63,    53,    15,    17,   282,    17,    10,
     292,    40,    17,    52,   296,   297,    52,    46,    17,    52,
     302,    53,   304,    11,    53,    11,    55,    56,    11,    52,
     312,    11,   314,   315,   319,    17,    17,   319,     7,    11,
      52,    11,    10,    10,    52,    11,    11,    11,     6,    52,
      52,    11,    11,   398,    52,    11,    52,    15,    36,    52,
      11,    52,   317,    63,   346,   347,   173,   195,   419,   383,
     429,    29,   354,    31,    32,    33,    -1,    -1,    -1,    -1,
     362,    -1,   364,   365,    -1,    -1,    -1,   369,    -1,    -1,
      -1,   373,    50,    -1,    -1,    -1,    -1,    -1,    -1,   381,
     382,   383,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
     392,   393,    -1,    -1,    -1,    -1,    -1,   399,   400,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   414,   415,   416,   417,    -1,   419,    -1,    -1,
      -1,    -1,   100,   101,    -1,   103,   104,   429,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,   117,
      -1,   119,    -1,   121,   122,   123,   124,   125,    -1,    -1,
      -1,    -1,    -1,    -1,   132,   133,   134,   135,   136,   137,
     138,    -1,   140,    -1,    -1,   143,   144,   145,    -1,    -1,
     148,    -1,    -1,   151,   152,    -1,    -1,   155,   156,    -1,
     158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     168,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,   177,
      -1,   179,   180,   181,    -1,   183,    -1,   185,    -1,    16,
      -1,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      -1,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,   217,
      -1,    -1,    49,    -1,    51,    -1,    -1,   225,    -1,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    -1,    -1,    -1,    75,    -1,
      77,    78,    79,    80,   252,   253,    83,    84,    -1,    86,
       6,    -1,   260,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,   294,    43,    44,    45,
      46,    -1,    -1,   301,    -1,    -1,    -1,    53,    54,    55,
      56,    -1,    58,    -1,    -1,    61,    -1,    63,    -1,   317,
       3,     4,     5,    -1,    -1,     8,   324,   325,    -1,    12,
      13,    14,   330,    16,    -1,    18,    19,    20,    21,    -1,
     338,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      -1,    -1,    -1,   361,    47,    -1,    49,    -1,    51,    -1,
     368,    -1,    -1,   371,    57,    -1,    59,    60,    -1,    62,
      -1,    64,    65,    66,    -1,    68,    69,    70,    71,    -1,
      -1,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      83,    84,    85,    86,    87,    88,    -1,    90,     3,     4,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,
      35,    36,    -1,    38,    39,    -1,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    -1,    -1,    -1,
      75,    -1,    77,    78,    79,    80,    -1,     6,    83,    84,
       9,    86,    -1,    -1,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    -1,    -1,    22,    23,    -1,    25,    26,    27,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    43,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    56,     6,    58,
      -1,     9,    61,    11,    63,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    -1,
       6,    -1,    -1,     9,    -1,    -1,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    63,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,     9,    52,    -1,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    63,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,    53,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    63,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,     9,
      52,    -1,    54,    55,    56,    -1,    58,    17,    -1,    61,
      -1,    63,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    45,    46,    -1,     6,    -1,
      -1,     9,    52,    11,    54,    55,    56,    -1,    58,    17,
      -1,    61,    -1,    63,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    -1,
       6,    -1,    -1,     9,    -1,    -1,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    63,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,     9,    -1,    53,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    63,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,     9,    52,    -1,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    63,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,     9,
      52,    11,    54,    55,    56,    -1,    58,    17,    -1,    61,
      -1,    63,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    45,    46,    -1,     6,    -1,
      -1,     9,    -1,    11,    54,    55,    56,    -1,    58,    17,
      -1,    61,    -1,    63,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    -1,
       6,    -1,    -1,     9,    -1,    -1,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    63,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,     9,    52,    11,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    63,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,    11,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    63,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,     9,
      -1,    -1,    54,    55,    56,    -1,    58,    17,    -1,    61,
      -1,    63,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    45,    46,    -1,     6,    -1,
      -1,     9,    52,    11,    54,    55,    56,    -1,    58,    17,
      -1,    61,    -1,    63,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    -1,
       6,    -1,    -1,     9,    -1,    11,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    63,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,     9,    -1,    -1,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    63,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,    53,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    63,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,     9,
      -1,    53,    54,    55,    56,    -1,    58,    17,    -1,    61,
      -1,    63,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    45,    46,    -1,     6,    -1,
      -1,     9,    52,    11,    54,    55,    56,    -1,    58,    17,
      -1,    61,    -1,    63,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    -1,
       6,    -1,    -1,     9,    -1,    -1,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    63,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,     9,    -1,    53,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    63,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,    53,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    63,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,     9,
      -1,    53,    54,    55,    56,    -1,    58,    17,    -1,    61,
      -1,    63,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    45,    46,    -1,     6,    -1,
      -1,     9,    -1,    53,    54,    55,    56,    -1,    58,    17,
      -1,    61,    -1,    63,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    -1,
       6,    -1,    -1,     9,    -1,    53,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    63,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,     9,    -1,    53,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    63,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    63,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,     9,
      -1,    -1,    54,    55,    56,    -1,    58,    17,    -1,    61,
      -1,    63,    22,    23,    -1,    25,    -1,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    45,    46,    -1,     6,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    -1,    58,    17,
      -1,    61,    -1,    63,    22,    23,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    63,    22,    23,    -1,    -1,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    63,    22,    23,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    -1,    58,    -1,    -1,    61,    -1,    63
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    72,    73,    81,    82,    93,    94,    53,    53,    53,
      53,     0,     3,     4,     5,     8,    12,    13,    14,    16,
      18,    19,    20,    21,    24,    29,    33,    34,    35,    36,
      37,    38,    39,    42,    47,    49,    51,    57,    59,    60,
      62,    64,    65,    66,    68,    69,    70,    71,    74,    75,
      76,    77,    78,    79,    80,    83,    84,    85,    86,    87,
      88,    90,    95,    96,   100,   108,   117,   117,   119,    30,
     116,   116,    59,    77,   100,   117,    36,    36,    36,   119,
     103,   116,   117,   121,   122,    28,   100,   112,   113,   110,
     111,   117,   110,   110,   100,   117,   100,   100,   100,   117,
      36,    36,    89,   131,    36,   116,   117,   123,   124,   119,
     116,   116,    89,    36,    36,    36,   117,    36,   100,    36,
     117,    36,    36,    36,    36,    36,   117,    98,    99,    97,
      95,     6,     9,    17,    22,    23,    25,    26,    27,    31,
      32,    40,    41,    43,    44,    45,    46,    53,    54,    55,
      56,    58,    61,    63,    15,    36,    67,   125,    10,   117,
     118,   119,   119,    53,    17,   117,   117,   100,    10,   116,
     119,     7,    53,    11,    11,    11,    48,    26,    11,    17,
      26,    26,    52,    17,    36,    17,    36,   100,   100,   117,
     100,   100,   119,    10,    53,    11,    53,   119,   119,    53,
      89,    89,   100,    53,   100,    53,   100,    17,   100,   100,
     100,   100,   100,    53,   119,   119,   119,   102,   100,   100,
     100,   100,   100,   100,   100,   101,   100,    36,    40,    90,
     106,   108,   117,   106,   100,   100,   100,   105,   100,   106,
     106,   100,   100,   117,   100,   114,   115,   100,    11,   100,
      11,    50,    10,    10,   106,    52,    52,    52,   100,   119,
      10,    36,   121,   113,   113,   100,   110,   100,   100,   100,
     100,    52,    62,    64,    65,    66,   109,   117,   100,    52,
     109,    52,    11,    52,    53,    52,    53,    90,   117,   123,
      53,    53,    11,   126,    11,    52,    11,    11,   117,   127,
      52,    11,    11,    52,    11,    53,    53,    53,   100,   100,
     106,   106,    40,    46,    55,    56,   106,    11,    52,   120,
     118,   100,   100,    53,    17,    17,    10,   100,   117,    53,
      17,   117,   117,   117,   117,    52,   125,    53,    17,    52,
     116,   117,    52,   100,   118,   117,    11,    36,    53,   100,
     117,   117,    52,   106,   107,   106,   106,   115,   119,   100,
     100,   104,    11,   100,    11,    11,   125,   125,    17,    11,
     100,    17,    52,     7,    52,    52,    52,   127,    52,   117,
     128,    11,    11,    10,   106,    53,    53,   100,   117,    53,
     109,   109,    11,    11,   100,   109,    53,   100,   117,    11,
      10,    52,   117,   117,   117,   129,    52,   109,   109,    53,
      53,   126,   127,   117,    11,    11,    11,    36,    52,    11,
     127,   117,   117,    52,   129,   130,   128,    52,    52,    11,
      52,   130
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    94,    94,    94,    94,    94,    95,    95,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    97,    96,    98,    96,    99,    96,   100,
     100,   100,   100,   100,   100,   100,   101,   100,   100,   100,
     100,   100,   100,   100,   100,   102,   100,   100,   100,   100,
     100,   100,   100,   100,   103,   104,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   105,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   107,   106,   106,   106,   106,   106,   106,   106,
     106,   108,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   110,   110,   111,   112,   112,   113,   113,   113,
     113,   114,   114,   115,   115,   116,   116,   117,   118,   118,
     120,   119,   119,   121,   121,   122,   123,   123,   124,   124,
     124,   125,   125,   126,   126,   127,   127,   127,   127,   127,
     127,   128,   128,   129,   129,   129,   130,   130,   131,   131
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     0,     2,     1,
       3,     3,     3,     7,     7,     5,     3,     4,     4,     4,
       8,     5,     7,     8,     5,     7,     2,     4,     3,     3,
       3,     3,     5,     0,     4,     0,     4,     0,     4,     1,
       3,     3,     3,     3,     2,     2,     0,     4,     3,     3,
       3,     3,     3,     3,     3,     0,     4,     3,     2,     1,
       4,     1,     2,     4,     0,     0,     7,     5,     4,     5,
       5,     4,     4,     4,     4,     1,     1,     6,     4,     0,
       4,     3,     3,     3,     3,     1,     3,     3,     3,     3,
       5,     6,     4,     6,    10,    10,     4,     6,     4,     8,
       4,     4,     0,     4,     3,     3,     3,     2,     1,     1,
       3,     3,     4,     5,     5,     4,     4,     2,     3,     3,
       2,     2,     3,     1,     3,     1,     0,     3,     3,     1,
       1,     1,     0,     3,     1,     3,     0,     1,     3,     1,
       0,     5,     2,     3,     1,     7,     3,     1,     3,     3,
       1,     2,     0,     5,     0,     6,     5,     3,     4,     3,
       1,     5,     3,     4,     3,     1,     3,     1,     1,     0
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
#line 73 "parser.y"
                             {
		
		HandleFiles handleFile{};
		handleFile.writeOnMonaFile(ex);
		handleFile.writeOnSMTLIBFile(smtLib);

		}
#line 1863 "parser.cc"
    break;

  case 4: /* header: tokWS2S tokSEMICOLON  */
#line 84 "parser.y"
                               {ex+="ws2s;\n";}
#line 1869 "parser.cc"
    break;

  case 7: /* header: %empty  */
#line 90 "parser.y"
                     {}
#line 1875 "parser.cc"
    break;

  case 8: /* declarations: declaration declarations  */
#line 94 "parser.y"
                                       {}
#line 1881 "parser.cc"
    break;

  case 9: /* declarations: declaration  */
#line 96 "parser.y"
                      {}
#line 1887 "parser.cc"
    break;

  case 10: /* declaration: tokASSERT exp tokSEMICOLON  */
#line 99 "parser.y"
                                        {}
#line 1893 "parser.cc"
    break;

  case 11: /* declaration: tokGUIDE func_list tokSEMICOLON  */
#line 101 "parser.y"
                                         {}
#line 1899 "parser.cc"
    break;

  case 12: /* declaration: tokUNIVERSE univs tokSEMICOLON  */
#line 103 "parser.y"
                                        {}
#line 1905 "parser.cc"
    break;

  case 13: /* declaration: tokDEFAULT1 tokLPAREN name tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 105 "parser.y"
                                                                         {}
#line 1911 "parser.cc"
    break;

  case 14: /* declaration: tokDEFAULT2 tokLPAREN name tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 107 "parser.y"
                                                                         {}
#line 1917 "parser.cc"
    break;

  case 15: /* declaration: tokCONST name tokEQUAL arith_exp tokSEMICOLON  */
#line 109 "parser.y"
                                                        {}
#line 1923 "parser.cc"
    break;

  case 16: /* declaration: tokVAR0 name_where_list tokSEMICOLON  */
#line 111 "parser.y"
                                              {}
#line 1929 "parser.cc"
    break;

  case 17: /* declaration: tokVAR1 universe name_where_list tokSEMICOLON  */
#line 113 "parser.y"
                                                       {}
#line 1935 "parser.cc"
    break;

  case 18: /* declaration: tokVAR2 universe name_where_list tokSEMICOLON  */
#line 115 "parser.y"
                                                        {}
#line 1941 "parser.cc"
    break;

  case 19: /* declaration: tokTREE universe name_where_list tokSEMICOLON  */
#line 117 "parser.y"
                                                        {}
#line 1947 "parser.cc"
    break;

  case 20: /* declaration: tokPRED name tokLPAREN par_list tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 119 "parser.y"
                                                                              {}
#line 1953 "parser.cc"
    break;

  case 21: /* declaration: tokPRED name tokEQUAL exp tokSEMICOLON  */
#line 121 "parser.y"
                                                  {}
#line 1959 "parser.cc"
    break;

  case 22: /* declaration: tokPRED name tokLPAREN tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 123 "parser.y"
                                                                     {}
#line 1965 "parser.cc"
    break;

  case 23: /* declaration: tokMACRO name tokLPAREN par_list tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 125 "parser.y"
                                                                                {}
#line 1971 "parser.cc"
    break;

  case 24: /* declaration: tokMACRO name tokEQUAL exp tokSEMICOLON  */
#line 127 "parser.y"
                                                   {}
#line 1977 "parser.cc"
    break;

  case 25: /* declaration: tokMACRO name tokLPAREN tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 129 "parser.y"
                                                                       {}
#line 1983 "parser.cc"
    break;

  case 26: /* declaration: exp tokSEMICOLON  */
#line 131 "parser.y"
                           {}
#line 1989 "parser.cc"
    break;

  case 27: /* declaration: tokVERIFY optstring exp tokSEMICOLON  */
#line 133 "parser.y"
                                               {}
#line 1995 "parser.cc"
    break;

  case 28: /* declaration: tokEXECUTE exp tokSEMICOLON  */
#line 135 "parser.y"
                                      {}
#line 2001 "parser.cc"
    break;

  case 29: /* declaration: tokINCLUDE tokSTRING tokSEMICOLON  */
#line 137 "parser.y"
                                            {}
#line 2007 "parser.cc"
    break;

  case 30: /* declaration: tokLASTPOS name tokSEMICOLON  */
#line 139 "parser.y"
                                       {}
#line 2013 "parser.cc"
    break;

  case 31: /* declaration: tokALLPOS name tokSEMICOLON  */
#line 141 "parser.y"
                                      {}
#line 2019 "parser.cc"
    break;

  case 32: /* declaration: tokTYPE name tokEQUAL variant_list tokSEMICOLON  */
#line 143 "parser.y"
                                                         {}
#line 2025 "parser.cc"
    break;

  case 33: /* $@1: %empty  */
#line 145 "parser.y"
                 {}
#line 2031 "parser.cc"
    break;

  case 34: /* declaration: tokINT $@1 name_where_list tokSEMICOLON  */
#line 145 "parser.y"
                                                  {ex+="\n";}
#line 2037 "parser.cc"
    break;

  case 35: /* $@2: %empty  */
#line 147 "parser.y"
                  {}
#line 2043 "parser.cc"
    break;

  case 36: /* declaration: tokReal $@2 name_where_list tokSEMICOLON  */
#line 147 "parser.y"
                                                  {ex+="\n";}
#line 2049 "parser.cc"
    break;

  case 37: /* $@3: %empty  */
#line 149 "parser.y"
                  {}
#line 2055 "parser.cc"
    break;

  case 38: /* declaration: tokBool $@3 name_where_list tokSEMICOLON  */
#line 149 "parser.y"
                                                 {ex+="\n";}
#line 2061 "parser.cc"
    break;

  case 40: /* exp: tokLPAREN exp tokRPAREN  */
#line 156 "parser.y"
                                  {}
#line 2067 "parser.cc"
    break;

  case 41: /* exp: exp tokSUB exp  */
#line 158 "parser.y"
                        {}
#line 2073 "parser.cc"
    break;

  case 42: /* exp: exp tokIN exp  */
#line 160 "parser.y"
                        {}
#line 2079 "parser.cc"
    break;

  case 43: /* exp: exp tokNOTIN exp  */
#line 162 "parser.y"
                          {}
#line 2085 "parser.cc"
    break;

  case 44: /* exp: tokMIN exp  */
#line 164 "parser.y"
                    {}
#line 2091 "parser.cc"
    break;

  case 45: /* exp: tokMAX exp  */
#line 166 "parser.y"
                    {}
#line 2097 "parser.cc"
    break;

  case 46: /* $@4: %empty  */
#line 169 "parser.y"
        {
        	addOperatorStringStr("<");
        }
#line 2105 "parser.cc"
    break;

  case 47: /* exp: exp tokLESS $@4 exp  */
#line 173 "parser.y"
        {
        	returnMonaSmtLibFormat();
        	
        }
#line 2114 "parser.cc"
    break;

  case 48: /* exp: exp tokLESSEQ exp  */
#line 178 "parser.y"
                            {}
#line 2120 "parser.cc"
    break;

  case 49: /* exp: exp tokGREATEREQ exp  */
#line 180 "parser.y"
                              {}
#line 2126 "parser.cc"
    break;

  case 50: /* exp: exp tokGREATER exp  */
#line 182 "parser.y"
                             {}
#line 2132 "parser.cc"
    break;

  case 51: /* exp: exp tokEQUAL exp  */
#line 184 "parser.y"
                          {}
#line 2138 "parser.cc"
    break;

  case 52: /* exp: exp tokNOTEQUAL exp  */
#line 186 "parser.y"
                              {}
#line 2144 "parser.cc"
    break;

  case 53: /* exp: exp tokIMPL exp  */
#line 188 "parser.y"
                         {}
#line 2150 "parser.cc"
    break;

  case 54: /* exp: exp tokBIIMPL exp  */
#line 190 "parser.y"
                            {}
#line 2156 "parser.cc"
    break;

  case 55: /* $@5: %empty  */
#line 193 "parser.y"
        {
        	returnMonaSmtLibFormat();
        	addElementStringEx("&");
        }
#line 2165 "parser.cc"
    break;

  case 56: /* exp: exp tokAND $@5 exp  */
#line 197 "parser.y"
        {
        	returnMonaSmtLibFormat();	
        }
#line 2173 "parser.cc"
    break;

  case 57: /* exp: exp tokOR exp  */
#line 201 "parser.y"
                        {}
#line 2179 "parser.cc"
    break;

  case 58: /* exp: tokNOT exp  */
#line 203 "parser.y"
                     {}
#line 2185 "parser.cc"
    break;

  case 59: /* exp: dotExp  */
#line 205 "parser.y"
                 {}
#line 2191 "parser.cc"
    break;

  case 60: /* exp: tokUNIVROOT tokLPAREN name tokRPAREN  */
#line 207 "parser.y"
                                               {}
#line 2197 "parser.cc"
    break;

  case 61: /* exp: tokUNIVROOT  */
#line 209 "parser.y"
                      {}
#line 2203 "parser.cc"
    break;

  case 62: /* exp: exp tokUP  */
#line 213 "parser.y"
                    {}
#line 2209 "parser.cc"
    break;

  case 63: /* exp: tokEX0 name_where_list tokCOLON exp  */
#line 215 "parser.y"
                                              {}
#line 2215 "parser.cc"
    break;

  case 64: /* $@6: %empty  */
#line 217 "parser.y"
                 {}
#line 2221 "parser.cc"
    break;

  case 65: /* $@7: %empty  */
#line 217 "parser.y"
                                                      {ex+=":\n";}
#line 2227 "parser.cc"
    break;

  case 66: /* exp: tokEX1 $@6 universe name_where_list tokCOLON $@7 exp  */
#line 217 "parser.y"
                                                                       {}
#line 2233 "parser.cc"
    break;

  case 67: /* exp: tokEX2 universe name_where_list tokCOLON exp  */
#line 219 "parser.y"
                                                       {}
#line 2239 "parser.cc"
    break;

  case 68: /* exp: tokALL0 name_where_list tokCOLON exp  */
#line 221 "parser.y"
                                               {}
#line 2245 "parser.cc"
    break;

  case 69: /* exp: tokALL1 universe name_where_list tokCOLON exp  */
#line 223 "parser.y"
                                                        {}
#line 2251 "parser.cc"
    break;

  case 70: /* exp: tokALL2 universe name_where_list tokCOLON exp  */
#line 225 "parser.y"
                                                        {}
#line 2257 "parser.cc"
    break;

  case 71: /* exp: tokLET0 defs tokIN exp  */
#line 227 "parser.y"
                                             {}
#line 2263 "parser.cc"
    break;

  case 72: /* exp: tokLET1 defs tokIN exp  */
#line 229 "parser.y"
                                            {}
#line 2269 "parser.cc"
    break;

  case 73: /* exp: tokLET2 defs tokIN exp  */
#line 231 "parser.y"
                                             {}
#line 2275 "parser.cc"
    break;

  case 74: /* exp: name tokLPAREN exp_list tokRPAREN  */
#line 233 "parser.y"
                                            {}
#line 2281 "parser.cc"
    break;

  case 75: /* exp: tokTRUE  */
#line 235 "parser.y"
                  {}
#line 2287 "parser.cc"
    break;

  case 76: /* exp: tokFALSE  */
#line 237 "parser.y"
                   {}
#line 2293 "parser.cc"
    break;

  case 77: /* exp: tokUNIVROOT tokLPAREN exp tokCOMMA universe tokRPAREN  */
#line 239 "parser.y"
                                                                {}
#line 2299 "parser.cc"
    break;

  case 78: /* exp: tokEMPTY tokLPAREN exp tokRPAREN  */
#line 241 "parser.y"
                                           {}
#line 2305 "parser.cc"
    break;

  case 79: /* $@8: %empty  */
#line 243 "parser.y"
                     {str+="+"; }
#line 2311 "parser.cc"
    break;

  case 80: /* exp: exp tokPLUS $@8 arith_exp  */
#line 243 "parser.y"
                                            {}
#line 2317 "parser.cc"
    break;

  case 81: /* exp: exp tokMINUS arith_exp  */
#line 245 "parser.y"
                                 {}
#line 2323 "parser.cc"
    break;

  case 82: /* exp: exp tokSTAR arith_exp  */
#line 247 "parser.y"
                                {}
#line 2329 "parser.cc"
    break;

  case 83: /* exp: exp tokSLASH arith_exp  */
#line 249 "parser.y"
                                 {}
#line 2335 "parser.cc"
    break;

  case 84: /* exp: exp tokMODULO arith_exp  */
#line 251 "parser.y"
                                   {}
#line 2341 "parser.cc"
    break;

  case 85: /* exp: tokEMPTY  */
#line 253 "parser.y"
                  {}
#line 2347 "parser.cc"
    break;

  case 86: /* exp: tokLBRACE set_body tokRBRACE  */
#line 255 "parser.y"
                                      {}
#line 2353 "parser.cc"
    break;

  case 87: /* exp: exp tokUNION exp  */
#line 257 "parser.y"
                           {}
#line 2359 "parser.cc"
    break;

  case 88: /* exp: exp tokINTER exp  */
#line 259 "parser.y"
                           {}
#line 2365 "parser.cc"
    break;

  case 89: /* exp: exp tokSETMINUS exp  */
#line 261 "parser.y"
                              {}
#line 2371 "parser.cc"
    break;

  case 90: /* exp: tokIMPORT tokLPAREN tokSTRING map_list tokRPAREN  */
#line 263 "parser.y"
                                                           {}
#line 2377 "parser.cc"
    break;

  case 91: /* exp: tokEXPORT tokLPAREN tokSTRING tokCOMMA exp tokRPAREN  */
#line 265 "parser.y"
                                                              {}
#line 2383 "parser.cc"
    break;

  case 92: /* exp: tokPREFIX tokLPAREN exp tokRPAREN  */
#line 267 "parser.y"
                                           {}
#line 2389 "parser.cc"
    break;

  case 93: /* exp: tokINSTATESPACE tokLPAREN exp tokCOMMA name_list tokRPAREN  */
#line 269 "parser.y"
                                                                    {}
#line 2395 "parser.cc"
    break;

  case 94: /* exp: tokVARIANT tokLPAREN exp tokCOMMA exp tokCOMMA name tokCOMMA name tokRPAREN  */
#line 272 "parser.y"
                                 {}
#line 2401 "parser.cc"
    break;

  case 95: /* exp: tokSUCC tokLPAREN exp tokCOMMA name tokCOMMA name tokCOMMA name tokRPAREN  */
#line 275 "parser.y"
                        {}
#line 2407 "parser.cc"
    break;

  case 96: /* exp: tokTREE tokLPAREN exp tokRPAREN  */
#line 277 "parser.y"
                                         {}
#line 2413 "parser.cc"
    break;

  case 97: /* exp: tokTYPE tokLPAREN exp tokCOMMA name tokRPAREN  */
#line 279 "parser.y"
                                                       {}
#line 2419 "parser.cc"
    break;

  case 98: /* exp: tokSOMETYPE tokLPAREN exp tokRPAREN  */
#line 281 "parser.y"
                                             {}
#line 2425 "parser.cc"
    break;

  case 99: /* exp: tokCONSTTREE tokLPAREN exp tokCOMMA name tokCOLON constnode tokRPAREN  */
#line 284 "parser.y"
                             {}
#line 2431 "parser.cc"
    break;

  case 100: /* exp: tokTREEROOT tokLPAREN exp tokRPAREN  */
#line 286 "parser.y"
                                             {}
#line 2437 "parser.cc"
    break;

  case 101: /* exp: tokRESTRICT tokLPAREN exp tokRPAREN  */
#line 288 "parser.y"
                                             {}
#line 2443 "parser.cc"
    break;

  case 102: /* $@9: %empty  */
#line 293 "parser.y"
                             {str+="+";}
#line 2449 "parser.cc"
    break;

  case 103: /* arith_exp: arith_exp tokPLUS $@9 arith_exp  */
#line 293 "parser.y"
                                                   {}
#line 2455 "parser.cc"
    break;

  case 104: /* arith_exp: arith_exp tokMINUS arith_exp  */
#line 295 "parser.y"
                                       {}
#line 2461 "parser.cc"
    break;

  case 105: /* arith_exp: arith_exp tokSTAR arith_exp  */
#line 297 "parser.y"
                                      {}
#line 2467 "parser.cc"
    break;

  case 106: /* arith_exp: arith_exp tokSLASH arith_exp  */
#line 299 "parser.y"
                                       {}
#line 2473 "parser.cc"
    break;

  case 107: /* arith_exp: tokMINUS arith_exp  */
#line 301 "parser.y"
                             {}
#line 2479 "parser.cc"
    break;

  case 108: /* arith_exp: tokINT  */
#line 304 "parser.y"
        {
		str+=std::to_string((yyvsp[0].intval));
	}
#line 2487 "parser.cc"
    break;

  case 109: /* arith_exp: dotExp  */
#line 308 "parser.y"
                {}
#line 2493 "parser.cc"
    break;

  case 110: /* arith_exp: tokLPAREN arith_exp tokRPAREN  */
#line 310 "parser.y"
                                        {}
#line 2499 "parser.cc"
    break;

  case 111: /* dotExp: name tokDOT name  */
#line 314 "parser.y"
                                 {str+=*(yyvsp[-2].st)+"."+*(yyvsp[0].st);}
#line 2505 "parser.cc"
    break;

  case 112: /* par_list: tokVAR0 name tokCOMMA par_list  */
#line 318 "parser.y"
                                         {}
#line 2511 "parser.cc"
    break;

  case 113: /* par_list: tokVAR1 name where tokCOMMA par_list  */
#line 320 "parser.y"
                                              {}
#line 2517 "parser.cc"
    break;

  case 114: /* par_list: tokVAR2 name where tokCOMMA par_list  */
#line 322 "parser.y"
                                              {}
#line 2523 "parser.cc"
    break;

  case 115: /* par_list: tokUNIVERSE name tokCOMMA par_list  */
#line 324 "parser.y"
                                             {}
#line 2529 "parser.cc"
    break;

  case 116: /* par_list: name where tokCOMMA par_list  */
#line 326 "parser.y"
                                       {}
#line 2535 "parser.cc"
    break;

  case 117: /* par_list: tokVAR0 name  */
#line 328 "parser.y"
                       {}
#line 2541 "parser.cc"
    break;

  case 118: /* par_list: tokVAR1 name where  */
#line 330 "parser.y"
                             {}
#line 2547 "parser.cc"
    break;

  case 119: /* par_list: tokVAR2 name where  */
#line 332 "parser.y"
                            {}
#line 2553 "parser.cc"
    break;

  case 120: /* par_list: tokUNIVERSE name  */
#line 334 "parser.y"
                           {}
#line 2559 "parser.cc"
    break;

  case 121: /* par_list: name where  */
#line 336 "parser.y"
                    {}
#line 2565 "parser.cc"
    break;

  case 122: /* defs: def tokCOMMA defs  */
#line 341 "parser.y"
                           {}
#line 2571 "parser.cc"
    break;

  case 123: /* defs: def  */
#line 343 "parser.y"
              {}
#line 2577 "parser.cc"
    break;

  case 124: /* def: name tokEQUAL exp  */
#line 347 "parser.y"
                           {}
#line 2583 "parser.cc"
    break;

  case 125: /* set_body: non_empty_set_body  */
#line 351 "parser.y"
                            {}
#line 2589 "parser.cc"
    break;

  case 126: /* set_body: %empty  */
#line 353 "parser.y"
                     {}
#line 2595 "parser.cc"
    break;

  case 127: /* non_empty_set_body: exp tokCOMMA non_empty_set_body  */
#line 357 "parser.y"
                                                   {}
#line 2601 "parser.cc"
    break;

  case 128: /* non_empty_set_body: tokINTERVAL tokCOMMA non_empty_set_body  */
#line 359 "parser.y"
                                                 {}
#line 2607 "parser.cc"
    break;

  case 129: /* non_empty_set_body: exp  */
#line 361 "parser.y"
             {}
#line 2613 "parser.cc"
    break;

  case 130: /* non_empty_set_body: tokINTERVAL  */
#line 363 "parser.y"
                     {}
#line 2619 "parser.cc"
    break;

  case 131: /* exp_list: non_empty_exp_list  */
#line 367 "parser.y"
                            {}
#line 2625 "parser.cc"
    break;

  case 132: /* exp_list: %empty  */
#line 369 "parser.y"
                     {}
#line 2631 "parser.cc"
    break;

  case 133: /* non_empty_exp_list: exp tokCOMMA non_empty_exp_list  */
#line 373 "parser.y"
                                                   {}
#line 2637 "parser.cc"
    break;

  case 134: /* non_empty_exp_list: exp  */
#line 375 "parser.y"
              {}
#line 2643 "parser.cc"
    break;

  case 135: /* universe: tokLBRACKET name_list tokRBRACKET  */
#line 379 "parser.y"
                                           {}
#line 2649 "parser.cc"
    break;

  case 136: /* universe: %empty  */
#line 381 "parser.y"
                     {}
#line 2655 "parser.cc"
    break;

  case 137: /* name: tokNAME  */
#line 385 "parser.y"
                 {(yyval.st)=(yyvsp[0].st);}
#line 2661 "parser.cc"
    break;

  case 138: /* name_list: name tokCOMMA name_list  */
#line 389 "parser.y"
                                  {}
#line 2667 "parser.cc"
    break;

  case 139: /* name_list: name  */
#line 391 "parser.y"
              {}
#line 2673 "parser.cc"
    break;

  case 140: /* $@10: %empty  */
#line 395 "parser.y"
                                    {ex+=*(yyvsp[-2].st)+",";}
#line 2679 "parser.cc"
    break;

  case 141: /* name_where_list: name where tokCOMMA $@10 name_where_list  */
#line 395 "parser.y"
                                                                  {}
#line 2685 "parser.cc"
    break;

  case 142: /* name_where_list: name where  */
#line 397 "parser.y"
                    {ex+=*(yyvsp[-1].st);}
#line 2691 "parser.cc"
    break;

  case 143: /* func_list: func tokCOMMA func_list  */
#line 401 "parser.y"
                                  {}
#line 2697 "parser.cc"
    break;

  case 144: /* func_list: func  */
#line 403 "parser.y"
              {}
#line 2703 "parser.cc"
    break;

  case 145: /* func: name tokARROW tokLPAREN name tokCOMMA name tokRPAREN  */
#line 407 "parser.y"
                                                              {}
#line 2709 "parser.cc"
    break;

  case 146: /* univs: univ tokCOMMA univs  */
#line 411 "parser.y"
                             {}
#line 2715 "parser.cc"
    break;

  case 147: /* univs: univ  */
#line 413 "parser.y"
              {}
#line 2721 "parser.cc"
    break;

  case 148: /* univ: name tokCOLON tokINT  */
#line 417 "parser.y"
                              {}
#line 2727 "parser.cc"
    break;

  case 149: /* univ: name tokCOLON name  */
#line 419 "parser.y"
                            {}
#line 2733 "parser.cc"
    break;

  case 150: /* univ: name  */
#line 421 "parser.y"
              {}
#line 2739 "parser.cc"
    break;

  case 151: /* where: tokWHERE exp  */
#line 425 "parser.y"
                      {}
#line 2745 "parser.cc"
    break;

  case 152: /* where: %empty  */
#line 427 "parser.y"
                     {}
#line 2751 "parser.cc"
    break;

  case 153: /* map_list: tokCOMMA name tokARROW name map_list  */
#line 431 "parser.y"
                                              {}
#line 2757 "parser.cc"
    break;

  case 154: /* map_list: %empty  */
#line 433 "parser.y"
                     {}
#line 2763 "parser.cc"
    break;

  case 155: /* variant_list: name tokLPAREN component_list tokRPAREN tokCOMMA variant_list  */
#line 437 "parser.y"
                                                                           {}
#line 2769 "parser.cc"
    break;

  case 156: /* variant_list: name tokLPAREN tokRPAREN tokCOMMA variant_list  */
#line 439 "parser.y"
                                                        {}
#line 2775 "parser.cc"
    break;

  case 157: /* variant_list: name tokCOMMA variant_list  */
#line 441 "parser.y"
                                    {}
#line 2781 "parser.cc"
    break;

  case 158: /* variant_list: name tokLPAREN component_list tokRPAREN  */
#line 443 "parser.y"
                                                 {}
#line 2787 "parser.cc"
    break;

  case 159: /* variant_list: name tokLPAREN tokRPAREN  */
#line 445 "parser.y"
                                  {}
#line 2793 "parser.cc"
    break;

  case 160: /* variant_list: name  */
#line 447 "parser.y"
              {}
#line 2799 "parser.cc"
    break;

  case 161: /* component_list: name tokCOLON name tokCOMMA component_list  */
#line 451 "parser.y"
                                                          {}
#line 2805 "parser.cc"
    break;

  case 162: /* component_list: name tokCOLON name  */
#line 453 "parser.y"
                            {}
#line 2811 "parser.cc"
    break;

  case 163: /* constnode: name tokLPAREN constnode_list tokRPAREN  */
#line 457 "parser.y"
                                                  {}
#line 2817 "parser.cc"
    break;

  case 164: /* constnode: name tokLPAREN tokRPAREN  */
#line 459 "parser.y"
                                  {}
#line 2823 "parser.cc"
    break;

  case 165: /* constnode: name  */
#line 461 "parser.y"
              {}
#line 2829 "parser.cc"
    break;

  case 166: /* constnode_list: constnode tokCOMMA constnode_list  */
#line 465 "parser.y"
                                                 {}
#line 2835 "parser.cc"
    break;

  case 167: /* constnode_list: constnode  */
#line 467 "parser.y"
                   {}
#line 2841 "parser.cc"
    break;

  case 168: /* optstring: tokSTRING  */
#line 471 "parser.y"
                    {}
#line 2847 "parser.cc"
    break;

  case 169: /* optstring: %empty  */
#line 473 "parser.y"
                      {}
#line 2853 "parser.cc"
    break;


#line 2857 "parser.cc"

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

#line 478 "parser.y"


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
