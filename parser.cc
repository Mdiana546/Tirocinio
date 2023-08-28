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
#include "HandleFiles.hh"

void yyerror(const char *msg);
extern string MFormat;
extern string smT;
extern int count; 

#line 87 "parser.cc"

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
  YYSYMBOL_exp = 98,                       /* exp  */
  YYSYMBOL_arith_exp = 99,                 /* arith_exp  */
  YYSYMBOL_dotExp = 100,                   /* dotExp  */
  YYSYMBOL_par_list = 101,                 /* par_list  */
  YYSYMBOL_defs = 102,                     /* defs  */
  YYSYMBOL_def = 103,                      /* def  */
  YYSYMBOL_set_body = 104,                 /* set_body  */
  YYSYMBOL_non_empty_set_body = 105,       /* non_empty_set_body  */
  YYSYMBOL_exp_list = 106,                 /* exp_list  */
  YYSYMBOL_non_empty_exp_list = 107,       /* non_empty_exp_list  */
  YYSYMBOL_universe = 108,                 /* universe  */
  YYSYMBOL_name = 109,                     /* name  */
  YYSYMBOL_name_list = 110,                /* name_list  */
  YYSYMBOL_name_where_list = 111,          /* name_where_list  */
  YYSYMBOL_func_list = 112,                /* func_list  */
  YYSYMBOL_func = 113,                     /* func  */
  YYSYMBOL_univs = 114,                    /* univs  */
  YYSYMBOL_univ = 115,                     /* univ  */
  YYSYMBOL_where = 116,                    /* where  */
  YYSYMBOL_map_list = 117,                 /* map_list  */
  YYSYMBOL_variant_list = 118,             /* variant_list  */
  YYSYMBOL_component_list = 119,           /* component_list  */
  YYSYMBOL_constnode = 120,                /* constnode  */
  YYSYMBOL_constnode_list = 121,           /* constnode_list  */
  YYSYMBOL_optstring = 122                 /* optstring  */
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2328

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  157
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  418

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
       0,    84,    84,    96,    99,   101,   105,   107,   109,   111,
     113,   115,   117,   119,   121,   123,   125,   127,   129,   131,
     133,   135,   137,   139,   141,   143,   145,   147,   149,   151,
     153,   155,   155,   160,   162,   164,   166,   168,   170,   172,
     174,   176,   178,   180,   182,   184,   186,   188,   190,   192,
     194,   196,   198,   200,   204,   206,   208,   210,   212,   214,
     216,   218,   220,   222,   224,   226,   228,   230,   232,   234,
     236,   238,   240,   242,   244,   246,   248,   250,   252,   254,
     256,   258,   260,   262,   265,   268,   270,   272,   274,   277,
     279,   284,   286,   288,   290,   292,   294,   299,   301,   303,
     307,   311,   313,   315,   317,   319,   321,   323,   325,   327,
     329,   334,   336,   340,   344,   346,   350,   352,   354,   356,
     360,   362,   366,   368,   372,   374,   378,   383,   385,   389,
     392,   398,   400,   404,   408,   410,   414,   416,   418,   422,
     424,   428,   430,   434,   436,   438,   440,   442,   444,   448,
     450,   454,   456,   458,   462,   464,   468,   470
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
  "declarations", "declaration", "$@1", "exp", "arith_exp", "dotExp",
  "par_list", "defs", "def", "set_body", "non_empty_set_body", "exp_list",
  "non_empty_exp_list", "universe", "name", "name_list", "name_where_list",
  "func_list", "func", "univs", "univ", "where", "map_list",
  "variant_list", "component_list", "constnode", "constnode_list",
  "optstring", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-335)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -59,   -28,    30,   622,  -335,  -335,   -51,    13,    13,   710,
     -51,    12,    25,    36,   -51,    13,    13,  -335,   -51,   490,
     -51,   -51,   -51,   710,   -51,   710,   710,   710,   -51,    40,
      43,    -8,     4,  -335,   -51,   -51,    13,    13,    -1,    48,
      54,    61,   -51,    64,   710,   -23,    67,    68,    72,    73,
      76,   -51,  -335,   -51,  -335,   -51,  -335,   622,   786,  -335,
       6,    55,   110,   -51,   -51,   -51,    91,    97,   828,   129,
     -51,   -51,   710,   137,   -51,   -51,   148,   103,   149,   151,
     879,   115,  -335,   147,   164,   169,   162,   163,   921,    20,
     144,   144,  2181,    58,   710,   710,  -335,   710,   710,   -51,
     183,   141,   186,   157,   -51,   -51,   160,   112,   120,   710,
     161,   710,   963,   710,   200,   710,   710,   710,   710,   710,
     165,   170,   -51,   171,  -335,   710,   710,   710,   710,   710,
     710,   710,   710,   710,   710,   -16,   -16,   710,   710,   710,
     -16,  -335,   710,   -16,   -16,   710,   710,  -335,   -51,   710,
     710,   215,   710,   216,   178,   219,   220,  -335,   -16,   180,
     184,  1005,   710,   221,   228,   204,  -335,   -51,   490,   490,
    -335,   710,   -51,   710,   710,   710,  -335,   710,    21,   710,
      59,  1047,  1089,     2,  1131,  1173,   188,   -40,  -335,   -51,
    -335,   190,   191,  -335,   234,   235,  1215,  -335,  1257,  -335,
    1299,   -51,  1341,  1383,  1425,  1467,  1509,  -335,  -335,   194,
    -335,  2181,  2013,  2265,  2265,  2265,  2055,  2223,   113,  2265,
    2265,   -16,   -16,  -335,  -335,    22,  -335,   233,  -335,  2265,
    2223,  2139,    22,   124,  -335,  -335,  2223,   179,  -335,  1551,
     197,  -335,  2013,   -51,  2013,   -51,  -335,   710,   710,    95,
     236,   237,  -335,  2013,   710,   710,   -51,  -335,  -335,  -335,
    2013,  -335,  2097,  2013,  2013,  1593,   238,   -51,   -51,   -51,
     -51,   199,    55,  1635,   239,   205,  -335,    13,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,  -335,   -51,   206,   710,
    -335,   -51,   -51,     8,   207,  -335,   710,   -51,  -335,   -51,
    -335,   156,    22,   -16,   -16,   -16,   -16,   710,  -335,  -335,
    -335,  2013,  2013,  -335,   710,   710,  2013,  2013,   241,  -335,
     710,   248,   254,    55,    55,   249,   256,  -335,   710,   251,
     217,   264,  -335,  1677,   225,   226,   -51,   -26,  -335,  1719,
     268,   270,  -335,    22,    22,  -335,  -335,  -335,  1761,  1803,
     -51,  1845,    53,    53,   271,   272,   710,    53,  1887,   710,
    -335,   -51,  -335,  -335,  -335,  -335,   273,   277,   240,   -51,
     -51,   -51,  -335,  -335,   242,  -335,  -335,  -335,    53,    53,
    1929,  -335,  -335,  1971,   234,   -51,   -51,   278,   279,   284,
     252,   244,  -335,  -335,  -335,  -335,  -335,  -335,  -335,   290,
     -51,   -51,   -51,   -19,  -335,   -51,  -335,   250,   255,  -335,
     297,   257,  -335,  -335,  -335,   -51,  -335,  -335
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     1,     0,   125,   125,     0,
       0,     0,     0,    74,     0,   125,   125,    66,     0,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,   157,   125,    65,     0,     0,   125,   125,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   126,     0,    31,     0,     2,     5,     0,    51,
      33,   140,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   132,   119,
     118,     0,   114,     0,   112,     0,     0,     0,     0,     0,
      39,    38,    50,     0,     0,     0,   156,     0,     0,     0,
     138,     0,   135,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,    54,     0,   121,
       0,   130,     0,   128,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
      75,     0,     0,     0,     0,     0,    34,     0,     0,     0,
       0,     0,     0,    33,     0,     0,     0,     0,     8,     0,
      12,     0,     0,    25,   142,     0,     0,    26,     0,    24,
       0,     0,     0,     0,     0,     0,     0,    27,    30,     0,
      29,    48,    47,    44,    43,    42,    46,    36,    77,    40,
      41,     0,     0,    97,    96,    70,    98,     0,    73,    45,
      37,    49,    69,    78,    72,    71,    35,    76,   100,   123,
       0,   120,   139,     0,    58,     0,   124,     0,     0,     0,
       0,     0,    68,    55,     0,     0,     0,   131,   117,   116,
      61,   111,   113,    62,    63,     0,     0,     0,     0,     0,
       0,     0,   140,     0,     0,     0,    90,   125,    52,    23,
      85,    15,   136,   137,   134,    13,    14,     0,     0,     0,
      81,     0,     0,   148,     0,    87,     0,     0,    89,     0,
      32,     0,    95,     0,     0,     0,     0,     0,    64,   129,
     127,    59,    60,    11,     0,     0,    56,    57,     0,    20,
       0,   109,   106,   140,   140,     0,   110,    17,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,    28,     0,
       0,     0,    99,    92,    91,    94,    93,   122,     0,     0,
       0,     0,     0,     0,   107,   108,     0,     0,     0,     0,
      67,     0,    80,    82,    86,   145,   147,     0,     0,     0,
       0,     0,     9,    10,     0,    21,   104,   101,     0,     0,
       0,   105,    18,     0,   142,     0,     0,   146,     0,     0,
     153,     0,   133,   102,   103,    19,    16,   141,   144,   150,
       0,     0,     0,     0,    88,     0,   143,     0,     0,   152,
     155,     0,   149,    83,    84,     0,   151,   154
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -335,  -335,  -335,   253,  -335,  -335,   309,     0,   -30,  -175,
     -15,  -335,  -335,   -73,  -335,     7,    -5,    -6,  -236,    27,
     146,  -335,   122,  -335,  -271,   -69,  -334,   -89,   -54,   -96,
    -335
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,    56,    57,   122,    80,   225,    59,   271,
      83,    84,    81,    82,   240,   241,    64,    60,   154,    62,
      77,    78,   101,   102,   151,   288,   294,   368,   410,   411,
      97
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,   326,   365,    65,    69,   275,    86,    87,    61,   310,
      74,    75,    76,   113,    85,    85,    85,   148,    89,   336,
     221,   148,    93,     1,   222,     4,   366,    99,   100,    61,
       5,   104,   105,   409,    63,    52,   110,   177,   149,   114,
      98,    73,   149,    63,   337,   120,    52,    61,    70,    61,
     282,   398,   354,   355,   278,   334,   178,   153,    61,    61,
      52,    71,   103,    52,   159,   160,   406,    52,    61,    61,
      52,   223,    72,   266,   224,   179,    94,   305,   306,    95,
     121,    96,   123,   267,   107,   268,   269,   270,   106,   183,
     108,   155,   156,    61,   180,   258,   259,   109,    61,    61,
     111,   163,   164,   115,   116,   226,   226,    52,   117,   118,
     226,   274,   119,   226,   226,   267,    61,   268,   269,   270,
     152,   267,   150,   268,   269,   270,   186,    98,   226,   227,
     227,   191,   192,   113,   227,   303,   228,   227,   227,    52,
     232,   304,   238,   234,   235,    52,   158,   162,   313,   209,
     305,   306,   227,   135,   136,   165,   166,   261,   249,   140,
     167,    76,   168,   170,   135,   136,    85,   142,   143,   144,
     140,   132,   272,   171,   272,   172,   147,   376,   377,   143,
     144,   283,   381,   100,   135,   136,   173,   147,   174,   175,
     140,   226,   226,   187,   188,   293,   303,   189,   142,   143,
     144,   194,   304,   393,   394,   146,   132,   147,   342,   195,
     190,   305,   306,   193,   197,   227,   227,   201,   207,   135,
     136,   301,   302,   208,   210,   140,   243,   245,   246,   247,
     248,   254,   250,   142,   143,   144,   251,    61,   255,   153,
     256,   281,   147,   285,   286,   287,   289,   300,   148,   308,
     318,   325,   350,   314,   315,   320,   328,   329,   332,   352,
     338,   321,   322,   323,   324,   353,   356,   357,   359,   360,
     309,   361,   330,   226,   226,   226,   226,   363,   364,   370,
     371,   331,   378,   379,   385,   153,   335,   386,   403,   400,
     401,   340,   387,   341,   392,   402,   404,   227,   227,   227,
     227,   405,   413,   343,   344,   345,   346,   414,   415,   416,
     124,   284,    58,   257,   347,   397,   412,   391,    68,   417,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     293,   367,    88,     0,    90,    91,    92,     0,     0,     0,
       0,     0,     0,     0,   374,     0,   272,   272,     0,     0,
       0,   272,     0,   112,     0,   384,     0,     0,     0,     0,
       0,     0,     0,   388,   389,   390,    58,     0,     0,     0,
       0,     0,   272,   272,     0,     0,     0,     0,     0,   293,
     399,   161,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   293,   407,   408,   390,     0,   367,
       0,     0,     0,   181,   182,     0,   184,   185,     0,   390,
       0,     0,     0,     0,     0,     0,     0,     0,   196,     0,
     198,     0,   200,     0,   202,   203,   204,   205,   206,     0,
       0,     0,     0,     0,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,     0,     0,   229,   230,   231,     0,
       0,   233,     0,     0,   236,   237,     0,     0,   239,   242,
       0,   244,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   253,     0,     0,     0,     0,     0,     0,     0,     0,
     260,     0,   262,   263,   264,     0,   265,     0,   273,     0,
       0,     0,     0,     6,     7,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,     0,     0,     0,     0,     0,     0,    79,    19,
       0,     0,     0,    20,    21,    22,    23,     0,    25,    26,
       0,     0,    27,     0,     0,     0,     0,     0,     0,    29,
       0,    30,     0,     0,     0,     0,     0,     0,     0,    66,
      33,     0,     0,     0,     0,     0,   311,   312,     0,    39,
      40,    41,     0,   316,   317,    43,     0,    67,    46,    47,
      48,     0,     0,    49,    50,     0,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   333,     0,
       0,     0,     0,     0,     0,   339,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   239,     0,     0,     0,
       0,     0,     0,   348,   349,     6,     7,     8,     0,   351,
       9,     0,     0,     0,    10,    11,    12,   358,    13,     0,
      14,    15,    16,    17,     0,     0,    18,     0,     0,     0,
       0,    19,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    27,   380,     0,     0,   383,    28,
       0,    29,     0,    30,     0,     0,     0,     0,     0,    31,
       0,    32,    33,     0,    34,     0,    35,    36,    37,     0,
      38,    39,    40,    41,     0,     0,    42,    43,    44,    45,
      46,    47,    48,     0,     0,    49,    50,    51,    52,    53,
      54,     0,    55,     6,     7,     8,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,     0,     0,     0,     0,     0,     0,     0,    19,
       0,     0,     0,    20,    21,    22,    23,     0,    25,    26,
       0,     0,    27,     0,     0,     0,     0,     0,     0,    29,
       0,    30,     0,     0,     0,     0,     0,     0,     0,    66,
      33,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      40,    41,     0,     0,     0,    43,     0,    67,    46,    47,
      48,     0,   125,    49,    50,   126,    52,     0,     0,     0,
       0,     0,     0,   127,     0,     0,     0,     0,   128,   129,
       0,   130,   131,   132,     0,     0,     0,   133,   134,     0,
       0,     0,     0,     0,     0,     0,   135,   136,     0,   137,
     138,   139,   140,     0,   125,     0,     0,   126,     0,   141,
     142,   143,   144,     0,   145,   127,     0,   146,     0,   147,
     128,   129,     0,   130,   131,   132,     0,     0,     0,   133,
     134,     0,     0,     0,     0,     0,     0,     0,   135,   136,
       0,   137,   138,   139,   140,     0,     0,     0,     0,     0,
       0,   157,   142,   143,   144,   125,   145,     0,   126,   146,
     169,   147,     0,     0,     0,     0,   127,     0,     0,     0,
       0,   128,   129,     0,   130,   131,   132,     0,     0,     0,
     133,   134,     0,     0,     0,     0,     0,     0,     0,   135,
     136,     0,   137,   138,   139,   140,     0,   125,     0,     0,
     126,     0,     0,   142,   143,   144,     0,   145,   127,     0,
     146,     0,   147,   128,   129,     0,   130,   131,   132,     0,
       0,     0,   133,   134,     0,     0,     0,     0,     0,     0,
       0,   135,   136,     0,   137,   138,   139,   140,     0,   125,
       0,     0,   126,   176,     0,   142,   143,   144,     0,   145,
     127,     0,   146,     0,   147,   128,   129,     0,   130,   131,
     132,     0,     0,     0,   133,   134,     0,     0,     0,     0,
       0,     0,     0,   135,   136,     0,   137,   138,   139,   140,
       0,   125,     0,     0,   126,     0,   199,   142,   143,   144,
       0,   145,   127,     0,   146,     0,   147,   128,   129,     0,
     130,   131,   132,     0,     0,     0,   133,   134,     0,     0,
       0,     0,     0,     0,     0,   135,   136,     0,   137,   138,
     139,   140,     0,   125,     0,     0,   126,   252,     0,   142,
     143,   144,     0,   145,   127,     0,   146,     0,   147,   128,
     129,     0,   130,   131,   132,     0,     0,     0,   133,   134,
       0,     0,     0,     0,     0,     0,     0,   135,   136,     0,
     137,   138,   139,   140,     0,   125,     0,     0,   126,   276,
     277,   142,   143,   144,     0,   145,   127,     0,   146,     0,
     147,   128,   129,     0,   130,   131,   132,     0,     0,     0,
     133,   134,     0,     0,     0,     0,     0,     0,     0,   135,
     136,     0,   137,   138,   139,   140,     0,   125,     0,     0,
     126,     0,     0,   142,   143,   144,     0,   145,   127,     0,
     146,     0,   147,   128,   129,     0,   130,   131,   132,     0,
       0,     0,   133,   134,     0,     0,     0,     0,     0,     0,
       0,   135,   136,     0,   137,   138,   139,   140,     0,   125,
       0,     0,   126,     0,   279,   142,   143,   144,     0,   145,
     127,     0,   146,     0,   147,   128,   129,     0,   130,   131,
     132,     0,     0,     0,   133,   134,     0,     0,     0,     0,
       0,     0,     0,   135,   136,     0,   137,   138,   139,   140,
       0,   125,     0,     0,   126,   280,     0,   142,   143,   144,
       0,   145,   127,     0,   146,     0,   147,   128,   129,     0,
     130,   131,   132,     0,     0,     0,   133,   134,     0,     0,
       0,     0,     0,     0,     0,   135,   136,     0,   137,   138,
     139,   140,     0,   125,     0,     0,   126,   290,   291,   142,
     143,   144,     0,   145,   127,     0,   146,     0,   147,   128,
     129,     0,   130,   131,   132,     0,     0,     0,   133,   134,
       0,     0,     0,     0,     0,     0,     0,   135,   136,     0,
     137,   138,   139,   140,     0,   125,     0,     0,   126,     0,
     292,   142,   143,   144,     0,   145,   127,     0,   146,     0,
     147,   128,   129,     0,   130,   131,   132,     0,     0,     0,
     133,   134,     0,     0,     0,     0,     0,     0,     0,   135,
     136,     0,   137,   138,   139,   140,     0,   125,     0,     0,
     126,     0,     0,   142,   143,   144,     0,   145,   127,     0,
     146,     0,   147,   128,   129,     0,   130,   131,   132,     0,
       0,     0,   133,   134,     0,     0,     0,     0,     0,     0,
       0,   135,   136,     0,   137,   138,   139,   140,     0,   125,
       0,     0,   126,   295,   296,   142,   143,   144,     0,   145,
     127,     0,   146,     0,   147,   128,   129,     0,   130,   131,
     132,     0,     0,     0,   133,   134,     0,     0,     0,     0,
       0,     0,     0,   135,   136,     0,   137,   138,   139,   140,
       0,   125,     0,     0,   126,     0,   297,   142,   143,   144,
       0,   145,   127,     0,   146,     0,   147,   128,   129,     0,
     130,   131,   132,     0,     0,     0,   133,   134,     0,     0,
       0,     0,     0,     0,     0,   135,   136,     0,   137,   138,
     139,   140,     0,   125,     0,     0,   126,     0,     0,   142,
     143,   144,     0,   145,   127,     0,   146,     0,   147,   128,
     129,     0,   130,   131,   132,     0,     0,     0,   133,   134,
       0,     0,     0,     0,     0,     0,     0,   135,   136,     0,
     137,   138,   139,   140,     0,   125,     0,     0,   126,   298,
     299,   142,   143,   144,     0,   145,   127,     0,   146,     0,
     147,   128,   129,     0,   130,   131,   132,     0,     0,     0,
     133,   134,     0,     0,     0,     0,     0,     0,     0,   135,
     136,     0,   137,   138,   139,   140,     0,   125,     0,     0,
     126,     0,   307,   142,   143,   144,     0,   145,   127,     0,
     146,     0,   147,   128,   129,     0,   130,   131,   132,     0,
       0,     0,   133,   134,     0,     0,     0,     0,     0,     0,
       0,   135,   136,     0,   137,   138,   139,   140,     0,   125,
       0,     0,   126,     0,     0,   142,   143,   144,     0,   145,
     127,     0,   146,     0,   147,   128,   129,     0,   130,   131,
     132,     0,     0,     0,   133,   134,     0,     0,     0,     0,
       0,     0,     0,   135,   136,     0,   137,   138,   139,   140,
       0,   125,     0,     0,   126,     0,   319,   142,   143,   144,
       0,   145,   127,     0,   146,     0,   147,   128,   129,     0,
     130,   131,   132,     0,     0,     0,   133,   134,     0,     0,
       0,     0,     0,     0,     0,   135,   136,     0,   137,   138,
     139,   140,     0,   125,     0,     0,   126,     0,   327,   142,
     143,   144,     0,   145,   127,     0,   146,     0,   147,   128,
     129,     0,   130,   131,   132,     0,     0,     0,   133,   134,
       0,     0,     0,     0,     0,     0,     0,   135,   136,     0,
     137,   138,   139,   140,     0,   125,     0,     0,   126,   362,
     369,   142,   143,   144,     0,   145,   127,     0,   146,     0,
     147,   128,   129,     0,   130,   131,   132,     0,     0,     0,
     133,   134,     0,     0,     0,     0,     0,     0,     0,   135,
     136,     0,   137,   138,   139,   140,     0,   125,     0,     0,
     126,     0,     0,   142,   143,   144,     0,   145,   127,     0,
     146,     0,   147,   128,   129,     0,   130,   131,   132,     0,
       0,     0,   133,   134,     0,     0,     0,     0,     0,     0,
       0,   135,   136,     0,   137,   138,   139,   140,     0,   125,
       0,     0,   126,     0,   372,   142,   143,   144,     0,   145,
     127,     0,   146,     0,   147,   128,   129,     0,   130,   131,
     132,     0,     0,     0,   133,   134,     0,     0,     0,     0,
       0,     0,     0,   135,   136,     0,   137,   138,   139,   140,
       0,   125,     0,     0,   126,     0,   373,   142,   143,   144,
       0,   145,   127,     0,   146,     0,   147,   128,   129,     0,
     130,   131,   132,     0,     0,     0,   133,   134,     0,     0,
       0,     0,     0,     0,     0,   135,   136,     0,   137,   138,
     139,   140,     0,   125,     0,     0,   126,     0,   375,   142,
     143,   144,     0,   145,   127,     0,   146,     0,   147,   128,
     129,     0,   130,   131,   132,     0,     0,     0,   133,   134,
       0,     0,     0,     0,     0,     0,     0,   135,   136,     0,
     137,   138,   139,   140,     0,   125,     0,     0,   126,     0,
     382,   142,   143,   144,     0,   145,   127,     0,   146,     0,
     147,   128,   129,     0,   130,   131,   132,     0,     0,     0,
     133,   134,     0,     0,     0,     0,     0,     0,     0,   135,
     136,     0,   137,   138,   139,   140,     0,   125,     0,     0,
     126,     0,   395,   142,   143,   144,     0,   145,   127,     0,
     146,     0,   147,   128,   129,     0,   130,   131,   132,     0,
       0,     0,   133,   134,     0,     0,     0,     0,     0,     0,
       0,   135,   136,     0,   137,   138,   139,   140,     0,   125,
       0,     0,   126,     0,   396,   142,   143,   144,     0,   145,
     127,     0,   146,     0,   147,   128,   129,     0,   130,   131,
     132,     0,     0,     0,   133,   134,     0,     0,     0,     0,
       0,     0,     0,   135,   136,     0,   137,   138,   139,   140,
       0,   125,     0,     0,     0,     0,     0,   142,   143,   144,
       0,   145,   127,     0,   146,     0,   147,   128,   129,     0,
     130,   131,   132,     0,     0,     0,   133,   134,     0,     0,
       0,     0,     0,     0,     0,   135,   136,     0,   137,   138,
     139,   140,     0,   125,     0,     0,   126,     0,     0,   142,
     143,   144,     0,   145,   127,     0,   146,     0,   147,   128,
     129,     0,   130,     0,   132,     0,     0,     0,   133,   134,
       0,     0,     0,     0,     0,     0,     0,   135,   136,     0,
     137,   138,   139,   140,     0,   125,     0,     0,     0,     0,
       0,   142,   143,   144,     0,   145,   127,     0,   146,     0,
     147,   128,   129,     0,     0,   131,   132,     0,     0,     0,
     133,   134,     0,     0,     0,     0,     0,     0,     0,   135,
     136,     0,   137,   138,     0,   140,     0,     0,     0,     0,
       0,     0,     0,   142,   143,   144,     0,   145,   127,     0,
     146,     0,   147,   128,   129,     0,     0,   131,   132,     0,
       0,     0,   133,   134,     0,     0,     0,     0,     0,     0,
       0,   135,   136,     0,   137,   138,     0,   140,     0,     0,
       0,     0,     0,     0,     0,   142,   143,   144,     0,   145,
     127,     0,   146,     0,   147,   128,   129,     0,     0,    -1,
     132,     0,     0,     0,   133,   134,     0,     0,     0,     0,
       0,     0,     0,   135,   136,     0,   137,    -1,     0,   140,
       0,     0,     0,     0,     0,     0,     0,   142,   143,   144,
       0,    -1,    -1,     0,   146,     0,   147,    -1,    -1,     0,
       0,     0,   132,     0,     0,     0,    -1,    -1,     0,     0,
       0,     0,     0,     0,     0,   135,   136,     0,    -1,     0,
       0,   140,     0,     0,     0,     0,     0,     0,     0,   142,
     143,   144,     0,     0,     0,     0,   146,     0,   147
};

static const yytype_int16 yycheck[] =
{
       6,   272,   336,     8,    10,   180,    21,    22,    14,   245,
      15,    16,    18,    36,    20,    21,    22,    15,    24,    11,
      36,    15,    28,    82,    40,    53,    52,    32,    34,    35,
       0,    36,    37,    52,    30,    86,    42,    17,    36,    45,
      36,    14,    36,    30,    36,    51,    86,    53,    36,    55,
      90,   385,   323,   324,    52,   291,    36,    63,    64,    65,
      86,    36,    35,    86,    70,    71,   400,    86,    74,    75,
      86,    87,    36,    52,    90,    17,    36,    55,    56,    36,
      53,    89,    55,    62,    36,    64,    65,    66,    89,    95,
      36,    64,    65,    99,    36,   168,   169,    36,   104,   105,
      36,    74,    75,    36,    36,   135,   136,    86,    36,    36,
     140,    52,    36,   143,   144,    62,   122,    64,    65,    66,
      10,    62,    67,    64,    65,    66,    99,    36,   158,   135,
     136,   104,   105,    36,   140,    40,   136,   143,   144,    86,
     140,    46,   148,   143,   144,    86,    17,    10,    53,   122,
      55,    56,   158,    40,    41,     7,    53,   172,   158,    46,
      11,   167,    11,    48,    40,    41,   172,    54,    55,    56,
      46,    27,   178,    26,   180,    11,    63,   352,   353,    55,
      56,   187,   357,   189,    40,    41,    17,    63,    26,    26,
      46,   221,   222,    10,    53,   201,    40,    11,    54,    55,
      56,    89,    46,   378,   379,    61,    27,    63,    52,    89,
      53,    55,    56,    53,    53,   221,   222,    17,    53,    40,
      41,   221,   222,    53,    53,    46,    11,    11,    50,    10,
      10,    10,    52,    54,    55,    56,    52,   243,    10,   245,
      36,    53,    63,    53,    53,    11,    11,    53,    15,    52,
     256,    52,    11,    17,    17,    17,    17,    52,    52,    11,
      53,   267,   268,   269,   270,    11,    17,    11,    17,    52,
     243,     7,   277,   303,   304,   305,   306,    52,    52,    11,
      10,   287,    11,    11,    11,   291,   292,    10,    36,    11,
      11,   297,    52,   299,    52,    11,    52,   303,   304,   305,
     306,    11,    52,   303,   304,   305,   306,    52,    11,    52,
      57,   189,     3,   167,   307,   384,   405,   371,     9,   415,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     336,   337,    23,    -1,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   350,    -1,   352,   353,    -1,    -1,
      -1,   357,    -1,    44,    -1,   361,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   369,   370,   371,    57,    -1,    -1,    -1,
      -1,    -1,   378,   379,    -1,    -1,    -1,    -1,    -1,   385,
     386,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   400,   401,   402,   403,    -1,   405,
      -1,    -1,    -1,    94,    95,    -1,    97,    98,    -1,   415,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
     111,    -1,   113,    -1,   115,   116,   117,   118,   119,    -1,
      -1,    -1,    -1,    -1,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,    -1,    -1,   137,   138,   139,    -1,
      -1,   142,    -1,    -1,   145,   146,    -1,    -1,   149,   150,
      -1,   152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     171,    -1,   173,   174,   175,    -1,   177,    -1,   179,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    -1,   247,   248,    -1,    69,
      70,    71,    -1,   254,   255,    75,    -1,    77,    78,    79,
      80,    -1,    -1,    83,    84,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   289,    -1,
      -1,    -1,    -1,    -1,    -1,   296,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    -1,
      -1,    -1,    -1,   314,   315,     3,     4,     5,    -1,   320,
       8,    -1,    -1,    -1,    12,    13,    14,   328,    16,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    42,   356,    -1,    -1,   359,    47,
      -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    59,    60,    -1,    62,    -1,    64,    65,    66,    -1,
      68,    69,    70,    71,    -1,    -1,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    84,    85,    86,    87,
      88,    -1,    90,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    -1,    33,    34,    35,    36,    -1,    38,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    -1,    -1,    -1,    75,    -1,    77,    78,    79,
      80,    -1,     6,    83,    84,     9,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,    53,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    63,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,     6,    58,    -1,     9,    61,
      11,    63,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      -1,    22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,
       9,    -1,    -1,    54,    55,    56,    -1,    58,    17,    -1,
      61,    -1,    63,    22,    23,    -1,    25,    26,    27,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    43,    44,    45,    46,    -1,     6,
      -1,    -1,     9,    52,    -1,    54,    55,    56,    -1,    58,
      17,    -1,    61,    -1,    63,    22,    23,    -1,    25,    26,
      27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,    46,
      -1,     6,    -1,    -1,     9,    -1,    53,    54,    55,    56,
      -1,    58,    17,    -1,    61,    -1,    63,    22,    23,    -1,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,
      45,    46,    -1,     6,    -1,    -1,     9,    52,    -1,    54,
      55,    56,    -1,    58,    17,    -1,    61,    -1,    63,    22,
      23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      43,    44,    45,    46,    -1,     6,    -1,    -1,     9,    52,
      11,    54,    55,    56,    -1,    58,    17,    -1,    61,    -1,
      63,    22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,
       9,    -1,    -1,    54,    55,    56,    -1,    58,    17,    -1,
      61,    -1,    63,    22,    23,    -1,    25,    26,    27,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    43,    44,    45,    46,    -1,     6,
      -1,    -1,     9,    -1,    53,    54,    55,    56,    -1,    58,
      17,    -1,    61,    -1,    63,    22,    23,    -1,    25,    26,
      27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,    46,
      -1,     6,    -1,    -1,     9,    52,    -1,    54,    55,    56,
      -1,    58,    17,    -1,    61,    -1,    63,    22,    23,    -1,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,
      45,    46,    -1,     6,    -1,    -1,     9,    52,    11,    54,
      55,    56,    -1,    58,    17,    -1,    61,    -1,    63,    22,
      23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      43,    44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,
      11,    54,    55,    56,    -1,    58,    17,    -1,    61,    -1,
      63,    22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,
       9,    -1,    -1,    54,    55,    56,    -1,    58,    17,    -1,
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
      -1,     6,    -1,    -1,     9,    -1,    53,    54,    55,    56,
      -1,    58,    17,    -1,    61,    -1,    63,    22,    23,    -1,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,
      45,    46,    -1,     6,    -1,    -1,     9,    -1,    53,    54,
      55,    56,    -1,    58,    17,    -1,    61,    -1,    63,    22,
      23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      43,    44,    45,    46,    -1,     6,    -1,    -1,     9,    52,
      11,    54,    55,    56,    -1,    58,    17,    -1,    61,    -1,
      63,    22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,
       9,    -1,    -1,    54,    55,    56,    -1,    58,    17,    -1,
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
       9,    -1,    53,    54,    55,    56,    -1,    58,    17,    -1,
      61,    -1,    63,    22,    23,    -1,    25,    26,    27,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    43,    44,    45,    46,    -1,     6,
      -1,    -1,     9,    -1,    53,    54,    55,    56,    -1,    58,
      17,    -1,    61,    -1,    63,    22,    23,    -1,    25,    26,
      27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,    46,
      -1,     6,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      -1,    58,    17,    -1,    61,    -1,    63,    22,    23,    -1,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,
      45,    46,    -1,     6,    -1,    -1,     9,    -1,    -1,    54,
      55,    56,    -1,    58,    17,    -1,    61,    -1,    63,    22,
      23,    -1,    25,    -1,    27,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      43,    44,    45,    46,    -1,     6,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    -1,    58,    17,    -1,    61,    -1,
      63,    22,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,    -1,    58,    17,    -1,
      61,    -1,    63,    22,    23,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    43,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    56,    -1,    58,
      17,    -1,    61,    -1,    63,    22,    23,    -1,    -1,    26,
      27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    43,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      -1,    58,    17,    -1,    61,    -1,    63,    22,    23,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    -1,    -1,    -1,    -1,    61,    -1,    63
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    82,    93,    94,    53,     0,     3,     4,     5,     8,
      12,    13,    14,    16,    18,    19,    20,    21,    24,    29,
      33,    34,    35,    36,    37,    38,    39,    42,    47,    49,
      51,    57,    59,    60,    62,    64,    65,    66,    68,    69,
      70,    71,    74,    75,    76,    77,    78,    79,    80,    83,
      84,    85,    86,    87,    88,    90,    95,    96,    98,   100,
     109,   109,   111,    30,   108,   108,    59,    77,    98,   109,
      36,    36,    36,   111,   108,   108,   109,   112,   113,    28,
      98,   104,   105,   102,   103,   109,   102,   102,    98,   109,
      98,    98,    98,   109,    36,    36,    89,   122,    36,   108,
     109,   114,   115,   111,   108,   108,    89,    36,    36,    36,
     109,    36,    98,    36,   109,    36,    36,    36,    36,    36,
     109,   111,    97,   111,    95,     6,     9,    17,    22,    23,
      25,    26,    27,    31,    32,    40,    41,    43,    44,    45,
      46,    53,    54,    55,    56,    58,    61,    63,    15,    36,
      67,   116,    10,   109,   110,   111,   111,    53,    17,   109,
     109,    98,    10,   111,   111,     7,    53,    11,    11,    11,
      48,    26,    11,    17,    26,    26,    52,    17,    36,    17,
      36,    98,    98,   109,    98,    98,   111,    10,    53,    11,
      53,   111,   111,    53,    89,    89,    98,    53,    98,    53,
      98,    17,    98,    98,    98,    98,    98,    53,    53,   111,
      53,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    36,    40,    87,    90,    99,   100,   109,    99,    98,
      98,    98,    99,    98,    99,    99,    98,    98,   109,    98,
     106,   107,    98,    11,    98,    11,    50,    10,    10,    99,
      52,    52,    52,    98,    10,    10,    36,   112,   105,   105,
      98,   102,    98,    98,    98,    98,    52,    62,    64,    65,
      66,   101,   109,    98,    52,   101,    52,    11,    52,    53,
      52,    53,    90,   109,   114,    53,    53,    11,   117,    11,
      52,    11,    11,   109,   118,    52,    11,    11,    52,    11,
      53,    99,    99,    40,    46,    55,    56,    11,    52,   111,
     110,    98,    98,    53,    17,    17,    98,    98,   109,    53,
      17,   109,   109,   109,   109,    52,   116,    53,    17,    52,
     108,   109,    52,    98,   110,   109,    11,    36,    53,    98,
     109,   109,    52,    99,    99,    99,    99,   107,    98,    98,
      11,    98,    11,    11,   116,   116,    17,    11,    98,    17,
      52,     7,    52,    52,    52,   118,    52,   109,   119,    11,
      11,    10,    53,    53,   109,    53,   101,   101,    11,    11,
      98,   101,    53,    98,   109,    11,    10,    52,   109,   109,
     109,   120,    52,   101,   101,    53,    53,   117,   118,   109,
      11,    11,    11,    36,    52,    11,   118,   109,   109,    52,
     120,   121,   119,    52,    52,    11,    52,   121
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    92,    93,    94,    95,    95,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    97,    96,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    99,    99,    99,    99,    99,    99,    99,    99,    99,
     100,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   102,   102,   103,   104,   104,   105,   105,   105,   105,
     106,   106,   107,   107,   108,   108,   109,   110,   110,   111,
     111,   112,   112,   113,   114,   114,   115,   115,   115,   116,
     116,   117,   117,   118,   118,   118,   118,   118,   118,   119,
     119,   120,   120,   120,   121,   121,   122,   122
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     3,     3,     3,     7,
       7,     5,     3,     4,     4,     4,     8,     5,     7,     8,
       5,     7,     2,     4,     3,     3,     3,     3,     5,     3,
       3,     0,     4,     1,     3,     3,     3,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     1,     4,     1,     2,     4,     5,     5,     4,     5,
       5,     4,     4,     4,     4,     1,     1,     6,     4,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     5,
       6,     4,     6,    10,    10,     4,     6,     4,     8,     4,
       4,     3,     3,     3,     3,     2,     1,     1,     1,     3,
       3,     4,     5,     5,     4,     4,     2,     3,     3,     2,
       2,     3,     1,     3,     1,     0,     3,     3,     1,     1,
       1,     0,     3,     1,     3,     0,     1,     3,     1,     4,
       2,     3,     1,     7,     3,     1,     3,     3,     1,     2,
       0,     5,     0,     6,     5,     3,     4,     3,     1,     5,
       3,     4,     3,     1,     3,     1,     1,     0
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
#line 84 "parser.y"
                             {
		
		 MonaUntypedAST* untypedAST=new MonaUntypedAST((yyvsp[0].declList));
		 untypedAST->typeCheckDeclarations();
		 untypedAST->createStrings();
		 HandleFiles handleFile{};
		handleFile.writeOnMonaFile(MFormat);
		handleFile.writeOnSMTLIBFile(smT);
		
		}
#line 1859 "parser.cc"
    break;

  case 3: /* header: tokWS2S tokSEMICOLON  */
#line 96 "parser.y"
                               {}
#line 1865 "parser.cc"
    break;

  case 4: /* declarations: declaration declarations  */
#line 99 "parser.y"
                                       {if ((yyvsp[-1].declaration)) (yyvsp[0].declList)->push_front((yyvsp[-1].declaration)); (yyval.declList) = (yyvsp[0].declList);}
#line 1871 "parser.cc"
    break;

  case 5: /* declarations: declaration  */
#line 101 "parser.y"
                      {(yyval.declList) = new DeclarationList(); 
	         	if ((yyvsp[0].declaration)) (yyval.declList)->push_front((yyvsp[0].declaration));}
#line 1878 "parser.cc"
    break;

  case 6: /* declaration: tokASSERT exp tokSEMICOLON  */
#line 105 "parser.y"
                                        {}
#line 1884 "parser.cc"
    break;

  case 7: /* declaration: tokGUIDE func_list tokSEMICOLON  */
#line 107 "parser.y"
                                         {}
#line 1890 "parser.cc"
    break;

  case 8: /* declaration: tokUNIVERSE univs tokSEMICOLON  */
#line 109 "parser.y"
                                        {}
#line 1896 "parser.cc"
    break;

  case 9: /* declaration: tokDEFAULT1 tokLPAREN name tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 111 "parser.y"
                                                                         {}
#line 1902 "parser.cc"
    break;

  case 10: /* declaration: tokDEFAULT2 tokLPAREN name tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 113 "parser.y"
                                                                         {}
#line 1908 "parser.cc"
    break;

  case 11: /* declaration: tokCONST name tokEQUAL arith_exp tokSEMICOLON  */
#line 115 "parser.y"
                                                        {}
#line 1914 "parser.cc"
    break;

  case 12: /* declaration: tokVAR0 name_where_list tokSEMICOLON  */
#line 117 "parser.y"
                                              {}
#line 1920 "parser.cc"
    break;

  case 13: /* declaration: tokVAR1 universe name_where_list tokSEMICOLON  */
#line 119 "parser.y"
                                                       {(yyval.declaration) = new Variable_Declaration(Varname1,(yyvsp[-1].varDeclList));}
#line 1926 "parser.cc"
    break;

  case 14: /* declaration: tokVAR2 universe name_where_list tokSEMICOLON  */
#line 121 "parser.y"
                                                        {/*$$=new Declaration{Varname2,$3};*/}
#line 1932 "parser.cc"
    break;

  case 15: /* declaration: tokTREE universe name_where_list tokSEMICOLON  */
#line 123 "parser.y"
                                                        {}
#line 1938 "parser.cc"
    break;

  case 16: /* declaration: tokPRED name tokLPAREN par_list tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 125 "parser.y"
                                                                              {}
#line 1944 "parser.cc"
    break;

  case 17: /* declaration: tokPRED name tokEQUAL exp tokSEMICOLON  */
#line 127 "parser.y"
                                                  {}
#line 1950 "parser.cc"
    break;

  case 18: /* declaration: tokPRED name tokLPAREN tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 129 "parser.y"
                                                                     {}
#line 1956 "parser.cc"
    break;

  case 19: /* declaration: tokMACRO name tokLPAREN par_list tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 131 "parser.y"
                                                                                {}
#line 1962 "parser.cc"
    break;

  case 20: /* declaration: tokMACRO name tokEQUAL exp tokSEMICOLON  */
#line 133 "parser.y"
                                                   {}
#line 1968 "parser.cc"
    break;

  case 21: /* declaration: tokMACRO name tokLPAREN tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 135 "parser.y"
                                                                       {}
#line 1974 "parser.cc"
    break;

  case 22: /* declaration: exp tokSEMICOLON  */
#line 137 "parser.y"
                           {(yyval.declaration) = new Expression_Declaration((yyvsp[-1].untypedExp));}
#line 1980 "parser.cc"
    break;

  case 23: /* declaration: tokVERIFY optstring exp tokSEMICOLON  */
#line 139 "parser.y"
                                               {}
#line 1986 "parser.cc"
    break;

  case 24: /* declaration: tokEXECUTE exp tokSEMICOLON  */
#line 141 "parser.y"
                                      {}
#line 1992 "parser.cc"
    break;

  case 25: /* declaration: tokINCLUDE tokSTRING tokSEMICOLON  */
#line 143 "parser.y"
                                            {}
#line 1998 "parser.cc"
    break;

  case 26: /* declaration: tokLASTPOS name tokSEMICOLON  */
#line 145 "parser.y"
                                               {}
#line 2004 "parser.cc"
    break;

  case 27: /* declaration: tokALLPOS name tokSEMICOLON  */
#line 147 "parser.y"
                                              {}
#line 2010 "parser.cc"
    break;

  case 28: /* declaration: tokTYPE name tokEQUAL variant_list tokSEMICOLON  */
#line 149 "parser.y"
                                                                {}
#line 2016 "parser.cc"
    break;

  case 29: /* declaration: tokINT name_where_list tokSEMICOLON  */
#line 151 "parser.y"
                                                      {(yyval.declaration) = new Variable_Declaration(Integer,(yyvsp[-1].varDeclList));}
#line 2022 "parser.cc"
    break;

  case 30: /* declaration: tokReal name_where_list tokSEMICOLON  */
#line 153 "parser.y"
                                                       {(yyval.declaration) = new Variable_Declaration(Real,(yyvsp[-1].varDeclList));}
#line 2028 "parser.cc"
    break;

  case 31: /* $@1: %empty  */
#line 155 "parser.y"
                          {}
#line 2034 "parser.cc"
    break;

  case 32: /* declaration: tokBool $@1 name_where_list tokSEMICOLON  */
#line 155 "parser.y"
                                                         {}
#line 2040 "parser.cc"
    break;

  case 33: /* exp: name  */
#line 160 "parser.y"
               {(yyval.untypedExp) = new UntypedExp_Name((yyvsp[0].name));}
#line 2046 "parser.cc"
    break;

  case 34: /* exp: tokLPAREN exp tokRPAREN  */
#line 162 "parser.y"
                                  {}
#line 2052 "parser.cc"
    break;

  case 35: /* exp: exp tokSUB exp  */
#line 164 "parser.y"
                        {}
#line 2058 "parser.cc"
    break;

  case 36: /* exp: exp tokIN exp  */
#line 166 "parser.y"
                        {}
#line 2064 "parser.cc"
    break;

  case 37: /* exp: exp tokNOTIN exp  */
#line 168 "parser.y"
                          {}
#line 2070 "parser.cc"
    break;

  case 38: /* exp: tokMIN exp  */
#line 170 "parser.y"
                    {}
#line 2076 "parser.cc"
    break;

  case 39: /* exp: tokMAX exp  */
#line 172 "parser.y"
                    {}
#line 2082 "parser.cc"
    break;

  case 40: /* exp: exp tokLESS exp  */
#line 174 "parser.y"
                           {(yyval.untypedExp) = new UntypedExp_Less((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2088 "parser.cc"
    break;

  case 41: /* exp: exp tokLESSEQ exp  */
#line 176 "parser.y"
                            {}
#line 2094 "parser.cc"
    break;

  case 42: /* exp: exp tokGREATEREQ exp  */
#line 178 "parser.y"
                              {}
#line 2100 "parser.cc"
    break;

  case 43: /* exp: exp tokGREATER exp  */
#line 180 "parser.y"
                             {}
#line 2106 "parser.cc"
    break;

  case 44: /* exp: exp tokEQUAL exp  */
#line 182 "parser.y"
                          {}
#line 2112 "parser.cc"
    break;

  case 45: /* exp: exp tokNOTEQUAL exp  */
#line 184 "parser.y"
                              {}
#line 2118 "parser.cc"
    break;

  case 46: /* exp: exp tokIMPL exp  */
#line 186 "parser.y"
                         {}
#line 2124 "parser.cc"
    break;

  case 47: /* exp: exp tokBIIMPL exp  */
#line 188 "parser.y"
                            {}
#line 2130 "parser.cc"
    break;

  case 48: /* exp: exp tokAND exp  */
#line 190 "parser.y"
                         {(yyval.untypedExp) = new UntypedExp_And((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2136 "parser.cc"
    break;

  case 49: /* exp: exp tokOR exp  */
#line 192 "parser.y"
                        {}
#line 2142 "parser.cc"
    break;

  case 50: /* exp: tokNOT exp  */
#line 194 "parser.y"
                     {}
#line 2148 "parser.cc"
    break;

  case 51: /* exp: dotExp  */
#line 196 "parser.y"
                         {(yyval.untypedExp)=(yyvsp[0].UntypedExpDotName);}
#line 2154 "parser.cc"
    break;

  case 52: /* exp: tokUNIVROOT tokLPAREN name tokRPAREN  */
#line 198 "parser.y"
                                               {}
#line 2160 "parser.cc"
    break;

  case 53: /* exp: tokUNIVROOT  */
#line 200 "parser.y"
                      {}
#line 2166 "parser.cc"
    break;

  case 54: /* exp: exp tokUP  */
#line 204 "parser.y"
                    {}
#line 2172 "parser.cc"
    break;

  case 55: /* exp: tokEX0 name_where_list tokCOLON exp  */
#line 206 "parser.y"
                                              {}
#line 2178 "parser.cc"
    break;

  case 56: /* exp: tokEX1 universe name_where_list tokCOLON exp  */
#line 208 "parser.y"
                                                       {(yyval.untypedExp) = new UntypedExp_Ex1((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2184 "parser.cc"
    break;

  case 57: /* exp: tokEX2 universe name_where_list tokCOLON exp  */
#line 210 "parser.y"
                                                       {}
#line 2190 "parser.cc"
    break;

  case 58: /* exp: tokALL0 name_where_list tokCOLON exp  */
#line 212 "parser.y"
                                               {}
#line 2196 "parser.cc"
    break;

  case 59: /* exp: tokALL1 universe name_where_list tokCOLON exp  */
#line 214 "parser.y"
                                                        {}
#line 2202 "parser.cc"
    break;

  case 60: /* exp: tokALL2 universe name_where_list tokCOLON exp  */
#line 216 "parser.y"
                                                        {}
#line 2208 "parser.cc"
    break;

  case 61: /* exp: tokLET0 defs tokIN exp  */
#line 218 "parser.y"
                                             {}
#line 2214 "parser.cc"
    break;

  case 62: /* exp: tokLET1 defs tokIN exp  */
#line 220 "parser.y"
                                            {}
#line 2220 "parser.cc"
    break;

  case 63: /* exp: tokLET2 defs tokIN exp  */
#line 222 "parser.y"
                                             {}
#line 2226 "parser.cc"
    break;

  case 64: /* exp: name tokLPAREN exp_list tokRPAREN  */
#line 224 "parser.y"
                                            {}
#line 2232 "parser.cc"
    break;

  case 65: /* exp: tokTRUE  */
#line 226 "parser.y"
                  {}
#line 2238 "parser.cc"
    break;

  case 66: /* exp: tokFALSE  */
#line 228 "parser.y"
                   {}
#line 2244 "parser.cc"
    break;

  case 67: /* exp: tokUNIVROOT tokLPAREN exp tokCOMMA universe tokRPAREN  */
#line 230 "parser.y"
                                                                {}
#line 2250 "parser.cc"
    break;

  case 68: /* exp: tokEMPTY tokLPAREN exp tokRPAREN  */
#line 232 "parser.y"
                                           {}
#line 2256 "parser.cc"
    break;

  case 69: /* exp: exp tokPLUS arith_exp  */
#line 234 "parser.y"
                                {(yyval.untypedExp) = new UntypedExp_Plus((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2262 "parser.cc"
    break;

  case 70: /* exp: exp tokMINUS arith_exp  */
#line 236 "parser.y"
                                 {}
#line 2268 "parser.cc"
    break;

  case 71: /* exp: exp tokSTAR arith_exp  */
#line 238 "parser.y"
                                {}
#line 2274 "parser.cc"
    break;

  case 72: /* exp: exp tokSLASH arith_exp  */
#line 240 "parser.y"
                                 {}
#line 2280 "parser.cc"
    break;

  case 73: /* exp: exp tokMODULO arith_exp  */
#line 242 "parser.y"
                                   {}
#line 2286 "parser.cc"
    break;

  case 74: /* exp: tokEMPTY  */
#line 244 "parser.y"
                  {}
#line 2292 "parser.cc"
    break;

  case 75: /* exp: tokLBRACE set_body tokRBRACE  */
#line 246 "parser.y"
                                      {}
#line 2298 "parser.cc"
    break;

  case 76: /* exp: exp tokUNION exp  */
#line 248 "parser.y"
                           {}
#line 2304 "parser.cc"
    break;

  case 77: /* exp: exp tokINTER exp  */
#line 250 "parser.y"
                           {}
#line 2310 "parser.cc"
    break;

  case 78: /* exp: exp tokSETMINUS exp  */
#line 252 "parser.y"
                              {}
#line 2316 "parser.cc"
    break;

  case 79: /* exp: tokIMPORT tokLPAREN tokSTRING map_list tokRPAREN  */
#line 254 "parser.y"
                                                           {}
#line 2322 "parser.cc"
    break;

  case 80: /* exp: tokEXPORT tokLPAREN tokSTRING tokCOMMA exp tokRPAREN  */
#line 256 "parser.y"
                                                              {}
#line 2328 "parser.cc"
    break;

  case 81: /* exp: tokPREFIX tokLPAREN exp tokRPAREN  */
#line 258 "parser.y"
                                           {}
#line 2334 "parser.cc"
    break;

  case 82: /* exp: tokINSTATESPACE tokLPAREN exp tokCOMMA name_list tokRPAREN  */
#line 260 "parser.y"
                                                                    {}
#line 2340 "parser.cc"
    break;

  case 83: /* exp: tokVARIANT tokLPAREN exp tokCOMMA exp tokCOMMA name tokCOMMA name tokRPAREN  */
#line 263 "parser.y"
                                 {}
#line 2346 "parser.cc"
    break;

  case 84: /* exp: tokSUCC tokLPAREN exp tokCOMMA name tokCOMMA name tokCOMMA name tokRPAREN  */
#line 266 "parser.y"
                        {}
#line 2352 "parser.cc"
    break;

  case 85: /* exp: tokTREE tokLPAREN exp tokRPAREN  */
#line 268 "parser.y"
                                         {}
#line 2358 "parser.cc"
    break;

  case 86: /* exp: tokTYPE tokLPAREN exp tokCOMMA name tokRPAREN  */
#line 270 "parser.y"
                                                       {}
#line 2364 "parser.cc"
    break;

  case 87: /* exp: tokSOMETYPE tokLPAREN exp tokRPAREN  */
#line 272 "parser.y"
                                             {}
#line 2370 "parser.cc"
    break;

  case 88: /* exp: tokCONSTTREE tokLPAREN exp tokCOMMA name tokCOLON constnode tokRPAREN  */
#line 275 "parser.y"
                             {}
#line 2376 "parser.cc"
    break;

  case 89: /* exp: tokTREEROOT tokLPAREN exp tokRPAREN  */
#line 277 "parser.y"
                                             {}
#line 2382 "parser.cc"
    break;

  case 90: /* exp: tokRESTRICT tokLPAREN exp tokRPAREN  */
#line 279 "parser.y"
                                             {}
#line 2388 "parser.cc"
    break;

  case 91: /* arith_exp: arith_exp tokPLUS arith_exp  */
#line 284 "parser.y"
                                       {(yyval.arithExp) = new ArithExp_Add((yyvsp[-2].arithExp), (yyvsp[0].arithExp));}
#line 2394 "parser.cc"
    break;

  case 92: /* arith_exp: arith_exp tokMINUS arith_exp  */
#line 286 "parser.y"
                                       {}
#line 2400 "parser.cc"
    break;

  case 93: /* arith_exp: arith_exp tokSTAR arith_exp  */
#line 288 "parser.y"
                                      {}
#line 2406 "parser.cc"
    break;

  case 94: /* arith_exp: arith_exp tokSLASH arith_exp  */
#line 290 "parser.y"
                                       {}
#line 2412 "parser.cc"
    break;

  case 95: /* arith_exp: tokMINUS arith_exp  */
#line 292 "parser.y"
                             {}
#line 2418 "parser.cc"
    break;

  case 96: /* arith_exp: tokINT  */
#line 295 "parser.y"
        {
		(yyval.arithExp) = new ArithExp_Integer((yyvsp[0].intval));
	}
#line 2426 "parser.cc"
    break;

  case 97: /* arith_exp: tokReal  */
#line 299 "parser.y"
                 {(yyval.arithExp)=new ArithExp_Real{(yyvsp[0].doubleVal)};}
#line 2432 "parser.cc"
    break;

  case 98: /* arith_exp: dotExp  */
#line 301 "parser.y"
                 {(yyval.arithExp)=new ArithExp_Const{(yyvsp[0].UntypedExpDotName)->dotName};}
#line 2438 "parser.cc"
    break;

  case 99: /* arith_exp: tokLPAREN arith_exp tokRPAREN  */
#line 303 "parser.y"
                                        {}
#line 2444 "parser.cc"
    break;

  case 100: /* dotExp: name tokDOT name  */
#line 307 "parser.y"
                                 {(yyval.UntypedExpDotName)=new UntypedExp_DotName{new DotName{(yyvsp[-2].name),(yyvsp[0].name)}};}
#line 2450 "parser.cc"
    break;

  case 101: /* par_list: tokVAR0 name tokCOMMA par_list  */
#line 311 "parser.y"
                                         {}
#line 2456 "parser.cc"
    break;

  case 102: /* par_list: tokVAR1 name where tokCOMMA par_list  */
#line 313 "parser.y"
                                              {}
#line 2462 "parser.cc"
    break;

  case 103: /* par_list: tokVAR2 name where tokCOMMA par_list  */
#line 315 "parser.y"
                                              {}
#line 2468 "parser.cc"
    break;

  case 104: /* par_list: tokUNIVERSE name tokCOMMA par_list  */
#line 317 "parser.y"
                                             {}
#line 2474 "parser.cc"
    break;

  case 105: /* par_list: name where tokCOMMA par_list  */
#line 319 "parser.y"
                                       {}
#line 2480 "parser.cc"
    break;

  case 106: /* par_list: tokVAR0 name  */
#line 321 "parser.y"
                       {}
#line 2486 "parser.cc"
    break;

  case 107: /* par_list: tokVAR1 name where  */
#line 323 "parser.y"
                             {}
#line 2492 "parser.cc"
    break;

  case 108: /* par_list: tokVAR2 name where  */
#line 325 "parser.y"
                            {}
#line 2498 "parser.cc"
    break;

  case 109: /* par_list: tokUNIVERSE name  */
#line 327 "parser.y"
                           {}
#line 2504 "parser.cc"
    break;

  case 110: /* par_list: name where  */
#line 329 "parser.y"
                    {}
#line 2510 "parser.cc"
    break;

  case 111: /* defs: def tokCOMMA defs  */
#line 334 "parser.y"
                           {}
#line 2516 "parser.cc"
    break;

  case 112: /* defs: def  */
#line 336 "parser.y"
              {}
#line 2522 "parser.cc"
    break;

  case 113: /* def: name tokEQUAL exp  */
#line 340 "parser.y"
                           {}
#line 2528 "parser.cc"
    break;

  case 114: /* set_body: non_empty_set_body  */
#line 344 "parser.y"
                            {}
#line 2534 "parser.cc"
    break;

  case 115: /* set_body: %empty  */
#line 346 "parser.y"
                     {}
#line 2540 "parser.cc"
    break;

  case 116: /* non_empty_set_body: exp tokCOMMA non_empty_set_body  */
#line 350 "parser.y"
                                                   {}
#line 2546 "parser.cc"
    break;

  case 117: /* non_empty_set_body: tokINTERVAL tokCOMMA non_empty_set_body  */
#line 352 "parser.y"
                                                 {}
#line 2552 "parser.cc"
    break;

  case 118: /* non_empty_set_body: exp  */
#line 354 "parser.y"
             {}
#line 2558 "parser.cc"
    break;

  case 119: /* non_empty_set_body: tokINTERVAL  */
#line 356 "parser.y"
                     {}
#line 2564 "parser.cc"
    break;

  case 120: /* exp_list: non_empty_exp_list  */
#line 360 "parser.y"
                            {}
#line 2570 "parser.cc"
    break;

  case 121: /* exp_list: %empty  */
#line 362 "parser.y"
                     {}
#line 2576 "parser.cc"
    break;

  case 122: /* non_empty_exp_list: exp tokCOMMA non_empty_exp_list  */
#line 366 "parser.y"
                                                   {}
#line 2582 "parser.cc"
    break;

  case 123: /* non_empty_exp_list: exp  */
#line 368 "parser.y"
              {}
#line 2588 "parser.cc"
    break;

  case 124: /* universe: tokLBRACKET name_list tokRBRACKET  */
#line 372 "parser.y"
                                           {}
#line 2594 "parser.cc"
    break;

  case 125: /* universe: %empty  */
#line 374 "parser.y"
                     {}
#line 2600 "parser.cc"
    break;

  case 126: /* name: tokNAME  */
#line 379 "parser.y"
                {(yyval.name) = new Name((yyvsp[0].st));}
#line 2606 "parser.cc"
    break;

  case 127: /* name_list: name tokCOMMA name_list  */
#line 383 "parser.y"
                                  {}
#line 2612 "parser.cc"
    break;

  case 128: /* name_list: name  */
#line 385 "parser.y"
              {}
#line 2618 "parser.cc"
    break;

  case 129: /* name_where_list: name where tokCOMMA name_where_list  */
#line 390 "parser.y"
                {(yyvsp[0].varDeclList)->push_front(new VarDecl((yyvsp[-3].name),nullptr)); 
		 (yyval.varDeclList) = (yyvsp[0].varDeclList);}
#line 2625 "parser.cc"
    break;

  case 130: /* name_where_list: name where  */
#line 393 "parser.y"
                {(yyval.varDeclList) = new VarDeclList(); 
		 (yyval.varDeclList)->push_front(new VarDecl((yyvsp[-1].name),nullptr));}
#line 2632 "parser.cc"
    break;

  case 131: /* func_list: func tokCOMMA func_list  */
#line 398 "parser.y"
                                  {}
#line 2638 "parser.cc"
    break;

  case 132: /* func_list: func  */
#line 400 "parser.y"
              {}
#line 2644 "parser.cc"
    break;

  case 133: /* func: name tokARROW tokLPAREN name tokCOMMA name tokRPAREN  */
#line 404 "parser.y"
                                                              {}
#line 2650 "parser.cc"
    break;

  case 134: /* univs: univ tokCOMMA univs  */
#line 408 "parser.y"
                             {}
#line 2656 "parser.cc"
    break;

  case 135: /* univs: univ  */
#line 410 "parser.y"
              {}
#line 2662 "parser.cc"
    break;

  case 136: /* univ: name tokCOLON tokINT  */
#line 414 "parser.y"
                              {}
#line 2668 "parser.cc"
    break;

  case 137: /* univ: name tokCOLON name  */
#line 416 "parser.y"
                            {}
#line 2674 "parser.cc"
    break;

  case 138: /* univ: name  */
#line 418 "parser.y"
              {}
#line 2680 "parser.cc"
    break;

  case 139: /* where: tokWHERE exp  */
#line 422 "parser.y"
                      {}
#line 2686 "parser.cc"
    break;

  case 140: /* where: %empty  */
#line 424 "parser.y"
                     {}
#line 2692 "parser.cc"
    break;

  case 141: /* map_list: tokCOMMA name tokARROW name map_list  */
#line 428 "parser.y"
                                              {}
#line 2698 "parser.cc"
    break;

  case 142: /* map_list: %empty  */
#line 430 "parser.y"
                     {}
#line 2704 "parser.cc"
    break;

  case 143: /* variant_list: name tokLPAREN component_list tokRPAREN tokCOMMA variant_list  */
#line 434 "parser.y"
                                                                           {}
#line 2710 "parser.cc"
    break;

  case 144: /* variant_list: name tokLPAREN tokRPAREN tokCOMMA variant_list  */
#line 436 "parser.y"
                                                        {}
#line 2716 "parser.cc"
    break;

  case 145: /* variant_list: name tokCOMMA variant_list  */
#line 438 "parser.y"
                                    {}
#line 2722 "parser.cc"
    break;

  case 146: /* variant_list: name tokLPAREN component_list tokRPAREN  */
#line 440 "parser.y"
                                                 {}
#line 2728 "parser.cc"
    break;

  case 147: /* variant_list: name tokLPAREN tokRPAREN  */
#line 442 "parser.y"
                                  {}
#line 2734 "parser.cc"
    break;

  case 148: /* variant_list: name  */
#line 444 "parser.y"
              {}
#line 2740 "parser.cc"
    break;

  case 149: /* component_list: name tokCOLON name tokCOMMA component_list  */
#line 448 "parser.y"
                                                          {}
#line 2746 "parser.cc"
    break;

  case 150: /* component_list: name tokCOLON name  */
#line 450 "parser.y"
                            {}
#line 2752 "parser.cc"
    break;

  case 151: /* constnode: name tokLPAREN constnode_list tokRPAREN  */
#line 454 "parser.y"
                                                  {}
#line 2758 "parser.cc"
    break;

  case 152: /* constnode: name tokLPAREN tokRPAREN  */
#line 456 "parser.y"
                                  {}
#line 2764 "parser.cc"
    break;

  case 153: /* constnode: name  */
#line 458 "parser.y"
              {}
#line 2770 "parser.cc"
    break;

  case 154: /* constnode_list: constnode tokCOMMA constnode_list  */
#line 462 "parser.y"
                                                 {}
#line 2776 "parser.cc"
    break;

  case 155: /* constnode_list: constnode  */
#line 464 "parser.y"
                   {}
#line 2782 "parser.cc"
    break;

  case 156: /* optstring: tokSTRING  */
#line 468 "parser.y"
                    {}
#line 2788 "parser.cc"
    break;

  case 157: /* optstring: %empty  */
#line 470 "parser.y"
                      {}
#line 2794 "parser.cc"
    break;


#line 2798 "parser.cc"

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

#line 475 "parser.y"

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
