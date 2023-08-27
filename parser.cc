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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2272

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  161
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  424

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
       0,    84,    84,    96,    98,   100,   102,   104,   108,   110,
     114,   116,   118,   120,   122,   124,   126,   128,   130,   132,
     134,   136,   138,   140,   142,   144,   146,   148,   150,   152,
     154,   156,   158,   160,   162,   164,   164,   169,   171,   173,
     175,   177,   179,   181,   183,   185,   187,   189,   191,   193,
     195,   197,   199,   201,   203,   205,   207,   209,   213,   215,
     217,   219,   221,   223,   225,   227,   229,   231,   233,   235,
     237,   239,   241,   243,   245,   247,   249,   251,   253,   255,
     257,   259,   261,   263,   265,   267,   269,   271,   274,   277,
     279,   281,   283,   286,   288,   293,   295,   297,   299,   301,
     303,   308,   310,   312,   316,   320,   322,   324,   326,   328,
     330,   332,   334,   336,   338,   343,   345,   349,   353,   355,
     359,   361,   363,   365,   369,   371,   375,   377,   381,   383,
     387,   392,   394,   398,   401,   407,   409,   413,   417,   419,
     423,   425,   427,   431,   433,   437,   439,   443,   445,   447,
     449,   451,   453,   457,   459,   463,   465,   467,   471,   473,
     477,   479
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

#define YYPACT_NINF (-341)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,   -30,   -28,   -18,   -10,    30,   608,  -341,  -341,  -341,
    -341,  -341,   -38,    31,    31,   696,   -38,    43,    50,    54,
     -38,    31,    31,  -341,   -38,   476,   -38,   -38,   -38,   696,
     -38,   696,   696,   696,   -38,    60,    75,    23,     4,  -341,
     -38,   -38,    31,    31,    26,    82,    86,    87,   -38,    88,
     696,   -23,    89,    91,    97,   100,   107,   -38,  -341,   -38,
    -341,   -38,  -341,   608,   772,  -341,     6,    68,   140,   -38,
     -38,   -38,   117,   127,   814,   147,   -38,   -38,   696,   155,
     -38,   -38,   160,   115,   158,   162,   865,   131,  -341,   149,
     176,   171,   170,   174,   907,    20,   192,   192,  2167,    64,
     696,   696,  -341,   696,   696,   -38,   187,   148,   191,   152,
     -38,   -38,   153,   120,   122,   696,   159,   696,   949,   696,
     197,   696,   696,   696,   696,   696,   164,   165,   -38,   178,
    -341,   696,   696,   696,   696,   696,   696,   696,   696,   696,
     696,   -16,   -16,   696,   696,   696,   -16,  -341,   696,   -16,
     -16,   696,   696,  -341,   -38,   696,   696,   209,   696,   213,
     177,   219,   224,  -341,   -16,   183,   184,   991,   696,   230,
     231,   206,  -341,   -38,   476,   476,  -341,   696,   -38,   696,
     696,   696,  -341,   696,    55,   696,    94,  1033,  1075,     2,
    1117,  1159,   198,   -40,  -341,   -38,  -341,   199,   201,  -341,
     234,   245,  1201,  -341,  1243,  -341,  1285,   -38,  1327,  1369,
    1411,  1453,  1495,  -341,  -341,   207,  -341,  2167,  1999,   167,
     167,   167,  2041,  2209,   203,   167,   167,   -16,   -16,  -341,
    -341,    28,  -341,   250,  -341,   167,  2209,  2125,    28,   130,
    -341,  -341,  2209,   286,  -341,  1537,   215,  -341,  1999,   -38,
    1999,   -38,  -341,   696,   696,    32,   251,   252,  -341,  1999,
     696,   696,   -38,  -341,  -341,  -341,  1999,  -341,  2083,  1999,
    1999,  1579,   254,   -38,   -38,   -38,   -38,   225,    68,  1621,
     261,   227,  -341,    31,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,   -38,   228,   696,  -341,   -38,   -38,     8,
     229,  -341,   696,   -38,  -341,   -38,  -341,    99,    28,   -16,
     -16,   -16,   -16,   696,  -341,  -341,  -341,  1999,  1999,  -341,
     696,   696,  1999,  1999,   272,  -341,   696,   273,   276,    68,
      68,   271,   278,  -341,   696,   275,   238,   287,  -341,  1663,
     244,   249,   -38,   -26,  -341,  1705,   291,   293,  -341,    28,
      28,  -341,  -341,  -341,  1747,  1789,   -38,  1831,    11,    11,
     294,   295,   696,    11,  1873,   696,  -341,   -38,  -341,  -341,
    -341,  -341,   300,   302,   262,   -38,   -38,   -38,  -341,  -341,
     263,  -341,  -341,  -341,    11,    11,  1915,  -341,  -341,  1957,
     234,   -38,   -38,   305,   306,   308,   288,   277,  -341,  -341,
    -341,  -341,  -341,  -341,  -341,   312,   -38,   -38,   -38,   -19,
    -341,   -38,  -341,   281,   282,  -341,   314,   283,  -341,  -341,
    -341,   -38,  -341,  -341
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     0,     0,     0,     0,     0,     5,     6,     3,
       4,     1,     0,   129,   129,     0,     0,     0,     0,    78,
       0,   129,   129,    70,     0,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,   161,   129,    69,
       0,     0,   129,   129,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   130,     0,
      35,     0,     2,     9,     0,    55,    37,   144,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   136,   123,   122,     0,   118,     0,
     116,     0,     0,     0,     0,     0,    43,    42,    54,     0,
       0,     0,   160,     0,     0,     0,   142,     0,   139,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
       0,     0,     0,    58,     0,   125,     0,   134,     0,   132,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,    11,     0,     0,     0,    79,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,    12,     0,    16,     0,     0,    29,
     146,     0,     0,    30,     0,    28,     0,     0,     0,     0,
       0,     0,     0,    31,    34,     0,    33,    52,    51,    48,
      47,    46,    50,    40,    81,    44,    45,     0,     0,   101,
     100,    74,   102,     0,    77,    49,    41,    53,    73,    82,
      76,    75,    39,    80,   104,   127,     0,   124,   143,     0,
      62,     0,   128,     0,     0,     0,     0,     0,    72,    59,
       0,     0,     0,   135,   121,   120,    65,   115,   117,    66,
      67,     0,     0,     0,     0,     0,     0,     0,   144,     0,
       0,     0,    94,   129,    56,    27,    89,    19,   140,   141,
     138,    17,    18,     0,     0,     0,    85,     0,     0,   152,
       0,    91,     0,     0,    93,     0,    36,     0,    99,     0,
       0,     0,     0,     0,    68,   133,   131,    63,    64,    15,
       0,     0,    60,    61,     0,    24,     0,   113,   110,   144,
     144,     0,   114,    21,     0,     0,     0,     0,    83,     0,
       0,     0,     0,     0,    32,     0,     0,     0,   103,    96,
      95,    98,    97,   126,     0,     0,     0,     0,     0,     0,
     111,   112,     0,     0,     0,     0,    71,     0,    84,    86,
      90,   149,   151,     0,     0,     0,     0,     0,    13,    14,
       0,    25,   108,   105,     0,     0,     0,   109,    22,     0,
     146,     0,     0,   150,     0,     0,   157,     0,   137,   106,
     107,    23,    20,   145,   148,   154,     0,     0,     0,     0,
      92,     0,   147,     0,     0,   156,   159,     0,   153,    87,
      88,     0,   155,   158
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -341,  -341,  -341,   265,  -341,  -341,   289,    -2,   -36,  -181,
     -21,  -341,  -341,   -66,  -341,    24,   -11,   -12,  -242,    21,
     163,  -341,   143,  -341,  -277,   -47,  -340,   -63,   -32,   -71,
    -341
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,    62,    63,   128,    86,   231,    65,   277,
      89,    90,    87,    88,   246,   247,    70,    66,   160,    68,
      83,    84,   107,   108,   157,   294,   300,   374,   416,   417,
     103
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      67,   332,   371,    71,    75,   281,    92,    93,    67,   316,
      80,    81,    82,   119,    91,    91,    91,   154,    95,   342,
     227,   154,    99,     7,   228,     8,   372,   105,   106,    67,
      11,   110,   111,   415,    69,     9,   116,   183,   155,   120,
     104,    79,   155,    10,   343,   126,    58,    67,    58,    67,
     288,   404,   360,   361,   284,   340,   184,   159,    67,    67,
      58,    69,   109,    58,   165,   166,   412,    58,    67,    67,
      58,   229,   309,   273,   230,   274,   275,   276,   310,    76,
     127,   185,   129,   311,   312,   319,    77,   311,   312,   189,
      78,   161,   162,    67,     1,     2,   100,    58,    67,    67,
     186,   169,   170,     3,     4,   232,   232,   272,   264,   265,
     232,   101,   102,   232,   232,   112,    67,   273,   113,   274,
     275,   276,   114,   115,   117,   121,   192,   122,   232,   233,
     233,   197,   198,   123,   233,   156,   124,   233,   233,   309,
     234,    58,   244,   125,   238,   310,   280,   240,   241,   215,
     158,   348,   233,   104,   311,   312,   273,   267,   274,   275,
     276,    82,   255,   119,   164,   168,    91,   171,   172,   173,
     141,   142,   278,   174,   278,   177,   146,   382,   383,   176,
      58,   289,   387,   106,    -1,   149,   150,   178,   179,    -1,
      -1,   232,   232,   153,   138,   299,   180,   193,    -1,    -1,
     181,   194,   195,   399,   400,   196,   199,   141,   142,   200,
      -1,   201,   203,   146,   207,   233,   233,   213,   214,   138,
     249,   148,   149,   150,   251,   307,   308,   252,   152,   253,
     153,   216,   141,   142,   254,   256,   257,    67,   146,   159,
     260,   261,   262,   141,   142,   293,   148,   149,   150,   146,
     324,   287,   291,   152,   292,   153,   295,   148,   149,   150,
     306,   327,   328,   329,   330,   154,   153,   314,   320,   321,
     315,   326,   336,   232,   232,   232,   232,   331,   334,   335,
     338,   337,   344,   356,   358,   159,   341,   359,   362,   363,
     366,   346,   365,   347,   367,    64,   369,   233,   233,   233,
     233,   370,   376,   377,    74,   384,   385,   349,   350,   351,
     352,   391,   392,   138,   393,   398,   406,   407,    94,   408,
      96,    97,    98,   411,   409,   421,   141,   142,   130,   410,
     299,   373,   146,   419,   420,   422,   263,   353,   290,   118,
     148,   149,   150,   403,   380,   397,   278,   278,   418,   153,
     423,   278,    64,     0,     0,   390,     0,     0,     0,     0,
       0,     0,     0,   394,   395,   396,     0,   167,     0,     0,
       0,     0,   278,   278,     0,     0,     0,     0,     0,   299,
     405,     0,     0,     0,     0,     0,     0,     0,     0,   187,
     188,     0,   190,   191,   299,   413,   414,   396,     0,   373,
       0,     0,     0,     0,   202,     0,   204,     0,   206,   396,
     208,   209,   210,   211,   212,     0,     0,     0,     0,     0,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
       0,     0,   235,   236,   237,     0,     0,   239,     0,     0,
     242,   243,     0,     0,   245,   248,     0,   250,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,     0,     0,
       0,     0,     0,     0,     0,     0,   266,     0,   268,   269,
     270,     0,   271,     0,   279,     0,     0,     0,     0,    12,
      13,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,    85,    25,     0,     0,     0,    26,
      27,    28,    29,     0,    31,    32,     0,     0,    33,     0,
       0,     0,     0,     0,     0,    35,     0,    36,     0,     0,
       0,     0,     0,     0,     0,    72,    39,     0,     0,     0,
       0,     0,   317,   318,     0,    45,    46,    47,     0,   322,
     323,    49,     0,    73,    52,    53,    54,     0,     0,    55,
      56,     0,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   339,     0,     0,     0,     0,     0,
       0,   345,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   245,     0,     0,     0,     0,     0,     0,   354,
     355,    12,    13,    14,     0,   357,    15,     0,     0,     0,
      16,    17,    18,   364,    19,     0,    20,    21,    22,    23,
       0,     0,    24,     0,     0,     0,     0,    25,     0,     0,
       0,    26,    27,    28,    29,    30,    31,    32,     0,     0,
      33,   386,     0,     0,   389,    34,     0,    35,     0,    36,
       0,     0,     0,     0,     0,    37,     0,    38,    39,     0,
      40,     0,    41,    42,    43,     0,    44,    45,    46,    47,
       0,     0,    48,    49,    50,    51,    52,    53,    54,     0,
       0,    55,    56,    57,    58,    59,    60,     0,    61,    12,
      13,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,     0,    25,     0,     0,     0,    26,
      27,    28,    29,     0,    31,    32,     0,     0,    33,     0,
       0,     0,     0,     0,     0,    35,     0,    36,     0,     0,
       0,     0,     0,     0,     0,    72,    39,     0,     0,     0,
       0,     0,     0,     0,     0,    45,    46,    47,     0,     0,
       0,    49,     0,    73,    52,    53,    54,     0,   131,    55,
      56,   132,    58,     0,     0,     0,     0,     0,     0,   133,
       0,     0,     0,     0,   134,   135,     0,   136,   137,   138,
       0,     0,     0,   139,   140,     0,     0,     0,     0,     0,
       0,     0,   141,   142,     0,   143,   144,   145,   146,     0,
     131,     0,     0,   132,     0,   147,   148,   149,   150,     0,
     151,   133,     0,   152,     0,   153,   134,   135,     0,   136,
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
       0,     0,   132,   258,     0,   148,   149,   150,     0,   151,
     133,     0,   152,     0,   153,   134,   135,     0,   136,   137,
     138,     0,     0,     0,   139,   140,     0,     0,     0,     0,
       0,     0,     0,   141,   142,     0,   143,   144,   145,   146,
       0,   131,     0,     0,   132,   282,   283,   148,   149,   150,
       0,   151,   133,     0,   152,     0,   153,   134,   135,     0,
     136,   137,   138,     0,     0,     0,   139,   140,     0,     0,
       0,     0,     0,     0,     0,   141,   142,     0,   143,   144,
     145,   146,     0,   131,     0,     0,   132,     0,     0,   148,
     149,   150,     0,   151,   133,     0,   152,     0,   153,   134,
     135,     0,   136,   137,   138,     0,     0,     0,   139,   140,
       0,     0,     0,     0,     0,     0,     0,   141,   142,     0,
     143,   144,   145,   146,     0,   131,     0,     0,   132,     0,
     285,   148,   149,   150,     0,   151,   133,     0,   152,     0,
     153,   134,   135,     0,   136,   137,   138,     0,     0,     0,
     139,   140,     0,     0,     0,     0,     0,     0,     0,   141,
     142,     0,   143,   144,   145,   146,     0,   131,     0,     0,
     132,   286,     0,   148,   149,   150,     0,   151,   133,     0,
     152,     0,   153,   134,   135,     0,   136,   137,   138,     0,
       0,     0,   139,   140,     0,     0,     0,     0,     0,     0,
       0,   141,   142,     0,   143,   144,   145,   146,     0,   131,
       0,     0,   132,   296,   297,   148,   149,   150,     0,   151,
     133,     0,   152,     0,   153,   134,   135,     0,   136,   137,
     138,     0,     0,     0,   139,   140,     0,     0,     0,     0,
       0,     0,     0,   141,   142,     0,   143,   144,   145,   146,
       0,   131,     0,     0,   132,     0,   298,   148,   149,   150,
       0,   151,   133,     0,   152,     0,   153,   134,   135,     0,
     136,   137,   138,     0,     0,     0,   139,   140,     0,     0,
       0,     0,     0,     0,     0,   141,   142,     0,   143,   144,
     145,   146,     0,   131,     0,     0,   132,     0,     0,   148,
     149,   150,     0,   151,   133,     0,   152,     0,   153,   134,
     135,     0,   136,   137,   138,     0,     0,     0,   139,   140,
       0,     0,     0,     0,     0,     0,     0,   141,   142,     0,
     143,   144,   145,   146,     0,   131,     0,     0,   132,   301,
     302,   148,   149,   150,     0,   151,   133,     0,   152,     0,
     153,   134,   135,     0,   136,   137,   138,     0,     0,     0,
     139,   140,     0,     0,     0,     0,     0,     0,     0,   141,
     142,     0,   143,   144,   145,   146,     0,   131,     0,     0,
     132,     0,   303,   148,   149,   150,     0,   151,   133,     0,
     152,     0,   153,   134,   135,     0,   136,   137,   138,     0,
       0,     0,   139,   140,     0,     0,     0,     0,     0,     0,
       0,   141,   142,     0,   143,   144,   145,   146,     0,   131,
       0,     0,   132,     0,     0,   148,   149,   150,     0,   151,
     133,     0,   152,     0,   153,   134,   135,     0,   136,   137,
     138,     0,     0,     0,   139,   140,     0,     0,     0,     0,
       0,     0,     0,   141,   142,     0,   143,   144,   145,   146,
       0,   131,     0,     0,   132,   304,   305,   148,   149,   150,
       0,   151,   133,     0,   152,     0,   153,   134,   135,     0,
     136,   137,   138,     0,     0,     0,   139,   140,     0,     0,
       0,     0,     0,     0,     0,   141,   142,     0,   143,   144,
     145,   146,     0,   131,     0,     0,   132,     0,   313,   148,
     149,   150,     0,   151,   133,     0,   152,     0,   153,   134,
     135,     0,   136,   137,   138,     0,     0,     0,   139,   140,
       0,     0,     0,     0,     0,     0,     0,   141,   142,     0,
     143,   144,   145,   146,     0,   131,     0,     0,   132,     0,
       0,   148,   149,   150,     0,   151,   133,     0,   152,     0,
     153,   134,   135,     0,   136,   137,   138,     0,     0,     0,
     139,   140,     0,     0,     0,     0,     0,     0,     0,   141,
     142,     0,   143,   144,   145,   146,     0,   131,     0,     0,
     132,     0,   325,   148,   149,   150,     0,   151,   133,     0,
     152,     0,   153,   134,   135,     0,   136,   137,   138,     0,
       0,     0,   139,   140,     0,     0,     0,     0,     0,     0,
       0,   141,   142,     0,   143,   144,   145,   146,     0,   131,
       0,     0,   132,     0,   333,   148,   149,   150,     0,   151,
     133,     0,   152,     0,   153,   134,   135,     0,   136,   137,
     138,     0,     0,     0,   139,   140,     0,     0,     0,     0,
       0,     0,     0,   141,   142,     0,   143,   144,   145,   146,
       0,   131,     0,     0,   132,   368,   375,   148,   149,   150,
       0,   151,   133,     0,   152,     0,   153,   134,   135,     0,
     136,   137,   138,     0,     0,     0,   139,   140,     0,     0,
       0,     0,     0,     0,     0,   141,   142,     0,   143,   144,
     145,   146,     0,   131,     0,     0,   132,     0,     0,   148,
     149,   150,     0,   151,   133,     0,   152,     0,   153,   134,
     135,     0,   136,   137,   138,     0,     0,     0,   139,   140,
       0,     0,     0,     0,     0,     0,     0,   141,   142,     0,
     143,   144,   145,   146,     0,   131,     0,     0,   132,     0,
     378,   148,   149,   150,     0,   151,   133,     0,   152,     0,
     153,   134,   135,     0,   136,   137,   138,     0,     0,     0,
     139,   140,     0,     0,     0,     0,     0,     0,     0,   141,
     142,     0,   143,   144,   145,   146,     0,   131,     0,     0,
     132,     0,   379,   148,   149,   150,     0,   151,   133,     0,
     152,     0,   153,   134,   135,     0,   136,   137,   138,     0,
       0,     0,   139,   140,     0,     0,     0,     0,     0,     0,
       0,   141,   142,     0,   143,   144,   145,   146,     0,   131,
       0,     0,   132,     0,   381,   148,   149,   150,     0,   151,
     133,     0,   152,     0,   153,   134,   135,     0,   136,   137,
     138,     0,     0,     0,   139,   140,     0,     0,     0,     0,
       0,     0,     0,   141,   142,     0,   143,   144,   145,   146,
       0,   131,     0,     0,   132,     0,   388,   148,   149,   150,
       0,   151,   133,     0,   152,     0,   153,   134,   135,     0,
     136,   137,   138,     0,     0,     0,   139,   140,     0,     0,
       0,     0,     0,     0,     0,   141,   142,     0,   143,   144,
     145,   146,     0,   131,     0,     0,   132,     0,   401,   148,
     149,   150,     0,   151,   133,     0,   152,     0,   153,   134,
     135,     0,   136,   137,   138,     0,     0,     0,   139,   140,
       0,     0,     0,     0,     0,     0,     0,   141,   142,     0,
     143,   144,   145,   146,     0,   131,     0,     0,   132,     0,
     402,   148,   149,   150,     0,   151,   133,     0,   152,     0,
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
      12,   278,   342,    14,    16,   186,    27,    28,    20,   251,
      21,    22,    24,    36,    26,    27,    28,    15,    30,    11,
      36,    15,    34,    53,    40,    53,    52,    38,    40,    41,
       0,    42,    43,    52,    30,    53,    48,    17,    36,    51,
      36,    20,    36,    53,    36,    57,    86,    59,    86,    61,
      90,   391,   329,   330,    52,   297,    36,    69,    70,    71,
      86,    30,    41,    86,    76,    77,   406,    86,    80,    81,
      86,    87,    40,    62,    90,    64,    65,    66,    46,    36,
      59,    17,    61,    55,    56,    53,    36,    55,    56,   101,
      36,    70,    71,   105,    72,    73,    36,    86,   110,   111,
      36,    80,    81,    81,    82,   141,   142,    52,   174,   175,
     146,    36,    89,   149,   150,    89,   128,    62,    36,    64,
      65,    66,    36,    36,    36,    36,   105,    36,   164,   141,
     142,   110,   111,    36,   146,    67,    36,   149,   150,    40,
     142,    86,   154,    36,   146,    46,    52,   149,   150,   128,
      10,    52,   164,    36,    55,    56,    62,   178,    64,    65,
      66,   173,   164,    36,    17,    10,   178,     7,    53,    11,
      40,    41,   184,    11,   186,    26,    46,   358,   359,    48,
      86,   193,   363,   195,    17,    55,    56,    11,    17,    22,
      23,   227,   228,    63,    27,   207,    26,    10,    31,    32,
      26,    53,    11,   384,   385,    53,    53,    40,    41,    89,
      43,    89,    53,    46,    17,   227,   228,    53,    53,    27,
      11,    54,    55,    56,    11,   227,   228,    50,    61,    10,
      63,    53,    40,    41,    10,    52,    52,   249,    46,   251,
      10,    10,    36,    40,    41,    11,    54,    55,    56,    46,
     262,    53,    53,    61,    53,    63,    11,    54,    55,    56,
      53,   273,   274,   275,   276,    15,    63,    52,    17,    17,
     249,    17,   283,   309,   310,   311,   312,    52,    17,    52,
      52,   293,    53,    11,    11,   297,   298,    11,    17,    11,
      52,   303,    17,   305,     7,     6,    52,   309,   310,   311,
     312,    52,    11,    10,    15,    11,    11,   309,   310,   311,
     312,    11,    10,    27,    52,    52,    11,    11,    29,    11,
      31,    32,    33,    11,    36,    11,    40,    41,    63,    52,
     342,   343,    46,    52,    52,    52,   173,   313,   195,    50,
      54,    55,    56,   390,   356,   377,   358,   359,   411,    63,
     421,   363,    63,    -1,    -1,   367,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   375,   376,   377,    -1,    78,    -1,    -1,
      -1,    -1,   384,   385,    -1,    -1,    -1,    -1,    -1,   391,
     392,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
     101,    -1,   103,   104,   406,   407,   408,   409,    -1,   411,
      -1,    -1,    -1,    -1,   115,    -1,   117,    -1,   119,   421,
     121,   122,   123,   124,   125,    -1,    -1,    -1,    -1,    -1,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
      -1,    -1,   143,   144,   145,    -1,    -1,   148,    -1,    -1,
     151,   152,    -1,    -1,   155,   156,    -1,   158,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   177,    -1,   179,   180,
     181,    -1,   183,    -1,   185,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,   253,   254,    -1,    69,    70,    71,    -1,   260,
     261,    75,    -1,    77,    78,    79,    80,    -1,    -1,    83,
      84,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   295,    -1,    -1,    -1,    -1,    -1,
      -1,   302,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   313,    -1,    -1,    -1,    -1,    -1,    -1,   320,
     321,     3,     4,     5,    -1,   326,     8,    -1,    -1,    -1,
      12,    13,    14,   334,    16,    -1,    18,    19,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    -1,    -1,
      42,   362,    -1,    -1,   365,    47,    -1,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    59,    60,    -1,
      62,    -1,    64,    65,    66,    -1,    68,    69,    70,    71,
      -1,    -1,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    83,    84,    85,    86,    87,    88,    -1,    90,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    -1,    -1,
      -1,    75,    -1,    77,    78,    79,    80,    -1,     6,    83,
      84,     9,    86,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    -1,
       6,    -1,    -1,     9,    -1,    53,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    63,    22,    23,    -1,    25,
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
      88,    90,    95,    96,    98,   100,   109,   109,   111,    30,
     108,   108,    59,    77,    98,   109,    36,    36,    36,   111,
     108,   108,   109,   112,   113,    28,    98,   104,   105,   102,
     103,   109,   102,   102,    98,   109,    98,    98,    98,   109,
      36,    36,    89,   122,    36,   108,   109,   114,   115,   111,
     108,   108,    89,    36,    36,    36,   109,    36,    98,    36,
     109,    36,    36,    36,    36,    36,   109,   111,    97,   111,
      95,     6,     9,    17,    22,    23,    25,    26,    27,    31,
      32,    40,    41,    43,    44,    45,    46,    53,    54,    55,
      56,    58,    61,    63,    15,    36,    67,   116,    10,   109,
     110,   111,   111,    53,    17,   109,   109,    98,    10,   111,
     111,     7,    53,    11,    11,    11,    48,    26,    11,    17,
      26,    26,    52,    17,    36,    17,    36,    98,    98,   109,
      98,    98,   111,    10,    53,    11,    53,   111,   111,    53,
      89,    89,    98,    53,    98,    53,    98,    17,    98,    98,
      98,    98,    98,    53,    53,   111,    53,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    36,    40,    87,
      90,    99,   100,   109,    99,    98,    98,    98,    99,    98,
      99,    99,    98,    98,   109,    98,   106,   107,    98,    11,
      98,    11,    50,    10,    10,    99,    52,    52,    52,    98,
      10,    10,    36,   112,   105,   105,    98,   102,    98,    98,
      98,    98,    52,    62,    64,    65,    66,   101,   109,    98,
      52,   101,    52,    11,    52,    53,    52,    53,    90,   109,
     114,    53,    53,    11,   117,    11,    52,    11,    11,   109,
     118,    52,    11,    11,    52,    11,    53,    99,    99,    40,
      46,    55,    56,    11,    52,   111,   110,    98,    98,    53,
      17,    17,    98,    98,   109,    53,    17,   109,   109,   109,
     109,    52,   116,    53,    17,    52,   108,   109,    52,    98,
     110,   109,    11,    36,    53,    98,   109,   109,    52,    99,
      99,    99,    99,   107,    98,    98,    11,    98,    11,    11,
     116,   116,    17,    11,    98,    17,    52,     7,    52,    52,
      52,   118,    52,   109,   119,    11,    11,    10,    53,    53,
     109,    53,   101,   101,    11,    11,    98,   101,    53,    98,
     109,    11,    10,    52,   109,   109,   109,   120,    52,   101,
     101,    53,    53,   117,   118,   109,    11,    11,    11,    36,
      52,    11,   118,   109,   109,    52,   120,   121,   119,    52,
      52,    11,    52,   121
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    92,    93,    94,    94,    94,    94,    94,    95,    95,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    97,    96,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    99,    99,    99,    99,    99,
      99,    99,    99,    99,   100,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   102,   102,   103,   104,   104,
     105,   105,   105,   105,   106,   106,   107,   107,   108,   108,
     109,   110,   110,   111,   111,   112,   112,   113,   114,   114,
     115,   115,   115,   116,   116,   117,   117,   118,   118,   118,
     118,   118,   118,   119,   119,   120,   120,   120,   121,   121,
     122,   122
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     0,     2,     1,
       3,     3,     3,     7,     7,     5,     3,     4,     4,     4,
       8,     5,     7,     8,     5,     7,     2,     4,     3,     3,
       3,     3,     5,     3,     3,     0,     4,     1,     3,     3,
       3,     3,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     1,     4,     1,     2,     4,
       5,     5,     4,     5,     5,     4,     4,     4,     4,     1,
       1,     6,     4,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     5,     6,     4,     6,    10,    10,     4,
       6,     4,     8,     4,     4,     3,     3,     3,     3,     2,
       1,     1,     1,     3,     3,     4,     5,     5,     4,     4,
       2,     3,     3,     2,     2,     3,     1,     3,     1,     0,
       3,     3,     1,     1,     1,     0,     3,     1,     3,     0,
       1,     3,     1,     4,     2,     3,     1,     7,     3,     1,
       3,     3,     1,     2,     0,     5,     0,     6,     5,     3,
       4,     3,     1,     5,     3,     4,     3,     1,     3,     1,
       1,     0
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
#line 1855 "parser.cc"
    break;

  case 4: /* header: tokWS2S tokSEMICOLON  */
#line 98 "parser.y"
                               {}
#line 1861 "parser.cc"
    break;

  case 5: /* header: tokM2LSTR tokSEMICOLON  */
#line 100 "parser.y"
                                 {}
#line 1867 "parser.cc"
    break;

  case 6: /* header: tokM2LTREE tokSEMICOLON  */
#line 102 "parser.y"
                                 {}
#line 1873 "parser.cc"
    break;

  case 7: /* header: %empty  */
#line 104 "parser.y"
                     {}
#line 1879 "parser.cc"
    break;

  case 8: /* declarations: declaration declarations  */
#line 108 "parser.y"
                                       {if ((yyvsp[-1].declaration)) (yyvsp[0].declList)->push_front((yyvsp[-1].declaration)); (yyval.declList) = (yyvsp[0].declList);}
#line 1885 "parser.cc"
    break;

  case 9: /* declarations: declaration  */
#line 110 "parser.y"
                      {(yyval.declList) = new DeclarationList(); 
	         	if ((yyvsp[0].declaration)) (yyval.declList)->push_front((yyvsp[0].declaration));}
#line 1892 "parser.cc"
    break;

  case 10: /* declaration: tokASSERT exp tokSEMICOLON  */
#line 114 "parser.y"
                                        {}
#line 1898 "parser.cc"
    break;

  case 11: /* declaration: tokGUIDE func_list tokSEMICOLON  */
#line 116 "parser.y"
                                         {}
#line 1904 "parser.cc"
    break;

  case 12: /* declaration: tokUNIVERSE univs tokSEMICOLON  */
#line 118 "parser.y"
                                        {}
#line 1910 "parser.cc"
    break;

  case 13: /* declaration: tokDEFAULT1 tokLPAREN name tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 120 "parser.y"
                                                                         {}
#line 1916 "parser.cc"
    break;

  case 14: /* declaration: tokDEFAULT2 tokLPAREN name tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 122 "parser.y"
                                                                         {}
#line 1922 "parser.cc"
    break;

  case 15: /* declaration: tokCONST name tokEQUAL arith_exp tokSEMICOLON  */
#line 124 "parser.y"
                                                        {}
#line 1928 "parser.cc"
    break;

  case 16: /* declaration: tokVAR0 name_where_list tokSEMICOLON  */
#line 126 "parser.y"
                                              {}
#line 1934 "parser.cc"
    break;

  case 17: /* declaration: tokVAR1 universe name_where_list tokSEMICOLON  */
#line 128 "parser.y"
                                                       {(yyval.declaration) = new Variable_Declaration(Varname1,(yyvsp[-1].varDeclList));}
#line 1940 "parser.cc"
    break;

  case 18: /* declaration: tokVAR2 universe name_where_list tokSEMICOLON  */
#line 130 "parser.y"
                                                        {/*$$=new Declaration{Varname2,$3};*/}
#line 1946 "parser.cc"
    break;

  case 19: /* declaration: tokTREE universe name_where_list tokSEMICOLON  */
#line 132 "parser.y"
                                                        {}
#line 1952 "parser.cc"
    break;

  case 20: /* declaration: tokPRED name tokLPAREN par_list tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 134 "parser.y"
                                                                              {}
#line 1958 "parser.cc"
    break;

  case 21: /* declaration: tokPRED name tokEQUAL exp tokSEMICOLON  */
#line 136 "parser.y"
                                                  {}
#line 1964 "parser.cc"
    break;

  case 22: /* declaration: tokPRED name tokLPAREN tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 138 "parser.y"
                                                                     {}
#line 1970 "parser.cc"
    break;

  case 23: /* declaration: tokMACRO name tokLPAREN par_list tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 140 "parser.y"
                                                                                {}
#line 1976 "parser.cc"
    break;

  case 24: /* declaration: tokMACRO name tokEQUAL exp tokSEMICOLON  */
#line 142 "parser.y"
                                                   {}
#line 1982 "parser.cc"
    break;

  case 25: /* declaration: tokMACRO name tokLPAREN tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 144 "parser.y"
                                                                       {}
#line 1988 "parser.cc"
    break;

  case 26: /* declaration: exp tokSEMICOLON  */
#line 146 "parser.y"
                           {(yyval.declaration) = new Expression_Declaration((yyvsp[-1].untypedExp));}
#line 1994 "parser.cc"
    break;

  case 27: /* declaration: tokVERIFY optstring exp tokSEMICOLON  */
#line 148 "parser.y"
                                               {}
#line 2000 "parser.cc"
    break;

  case 28: /* declaration: tokEXECUTE exp tokSEMICOLON  */
#line 150 "parser.y"
                                      {}
#line 2006 "parser.cc"
    break;

  case 29: /* declaration: tokINCLUDE tokSTRING tokSEMICOLON  */
#line 152 "parser.y"
                                            {}
#line 2012 "parser.cc"
    break;

  case 30: /* declaration: tokLASTPOS name tokSEMICOLON  */
#line 154 "parser.y"
                                               {}
#line 2018 "parser.cc"
    break;

  case 31: /* declaration: tokALLPOS name tokSEMICOLON  */
#line 156 "parser.y"
                                              {}
#line 2024 "parser.cc"
    break;

  case 32: /* declaration: tokTYPE name tokEQUAL variant_list tokSEMICOLON  */
#line 158 "parser.y"
                                                                {}
#line 2030 "parser.cc"
    break;

  case 33: /* declaration: tokINT name_where_list tokSEMICOLON  */
#line 160 "parser.y"
                                                      {(yyval.declaration) = new Variable_Declaration(Integer,(yyvsp[-1].varDeclList));}
#line 2036 "parser.cc"
    break;

  case 34: /* declaration: tokReal name_where_list tokSEMICOLON  */
#line 162 "parser.y"
                                                       {(yyval.declaration) = new Variable_Declaration(Real,(yyvsp[-1].varDeclList));}
#line 2042 "parser.cc"
    break;

  case 35: /* $@1: %empty  */
#line 164 "parser.y"
                          {}
#line 2048 "parser.cc"
    break;

  case 36: /* declaration: tokBool $@1 name_where_list tokSEMICOLON  */
#line 164 "parser.y"
                                                         {}
#line 2054 "parser.cc"
    break;

  case 37: /* exp: name  */
#line 169 "parser.y"
               {(yyval.untypedExp) = new UntypedExp_Name((yyvsp[0].name));}
#line 2060 "parser.cc"
    break;

  case 38: /* exp: tokLPAREN exp tokRPAREN  */
#line 171 "parser.y"
                                  {}
#line 2066 "parser.cc"
    break;

  case 39: /* exp: exp tokSUB exp  */
#line 173 "parser.y"
                        {}
#line 2072 "parser.cc"
    break;

  case 40: /* exp: exp tokIN exp  */
#line 175 "parser.y"
                        {}
#line 2078 "parser.cc"
    break;

  case 41: /* exp: exp tokNOTIN exp  */
#line 177 "parser.y"
                          {}
#line 2084 "parser.cc"
    break;

  case 42: /* exp: tokMIN exp  */
#line 179 "parser.y"
                    {}
#line 2090 "parser.cc"
    break;

  case 43: /* exp: tokMAX exp  */
#line 181 "parser.y"
                    {}
#line 2096 "parser.cc"
    break;

  case 44: /* exp: exp tokLESS exp  */
#line 183 "parser.y"
                           {(yyval.untypedExp) = new UntypedExp_Less((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2102 "parser.cc"
    break;

  case 45: /* exp: exp tokLESSEQ exp  */
#line 185 "parser.y"
                            {}
#line 2108 "parser.cc"
    break;

  case 46: /* exp: exp tokGREATEREQ exp  */
#line 187 "parser.y"
                              {}
#line 2114 "parser.cc"
    break;

  case 47: /* exp: exp tokGREATER exp  */
#line 189 "parser.y"
                             {}
#line 2120 "parser.cc"
    break;

  case 48: /* exp: exp tokEQUAL exp  */
#line 191 "parser.y"
                          {}
#line 2126 "parser.cc"
    break;

  case 49: /* exp: exp tokNOTEQUAL exp  */
#line 193 "parser.y"
                              {}
#line 2132 "parser.cc"
    break;

  case 50: /* exp: exp tokIMPL exp  */
#line 195 "parser.y"
                         {}
#line 2138 "parser.cc"
    break;

  case 51: /* exp: exp tokBIIMPL exp  */
#line 197 "parser.y"
                            {}
#line 2144 "parser.cc"
    break;

  case 52: /* exp: exp tokAND exp  */
#line 199 "parser.y"
                         {(yyval.untypedExp) = new UntypedExp_And((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2150 "parser.cc"
    break;

  case 53: /* exp: exp tokOR exp  */
#line 201 "parser.y"
                        {}
#line 2156 "parser.cc"
    break;

  case 54: /* exp: tokNOT exp  */
#line 203 "parser.y"
                     {}
#line 2162 "parser.cc"
    break;

  case 55: /* exp: dotExp  */
#line 205 "parser.y"
                         {(yyval.untypedExp)=(yyvsp[0].UntypedExpDotName);}
#line 2168 "parser.cc"
    break;

  case 56: /* exp: tokUNIVROOT tokLPAREN name tokRPAREN  */
#line 207 "parser.y"
                                               {}
#line 2174 "parser.cc"
    break;

  case 57: /* exp: tokUNIVROOT  */
#line 209 "parser.y"
                      {}
#line 2180 "parser.cc"
    break;

  case 58: /* exp: exp tokUP  */
#line 213 "parser.y"
                    {}
#line 2186 "parser.cc"
    break;

  case 59: /* exp: tokEX0 name_where_list tokCOLON exp  */
#line 215 "parser.y"
                                              {}
#line 2192 "parser.cc"
    break;

  case 60: /* exp: tokEX1 universe name_where_list tokCOLON exp  */
#line 217 "parser.y"
                                                       {(yyval.untypedExp) = new UntypedExp_Ex1((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2198 "parser.cc"
    break;

  case 61: /* exp: tokEX2 universe name_where_list tokCOLON exp  */
#line 219 "parser.y"
                                                       {}
#line 2204 "parser.cc"
    break;

  case 62: /* exp: tokALL0 name_where_list tokCOLON exp  */
#line 221 "parser.y"
                                               {}
#line 2210 "parser.cc"
    break;

  case 63: /* exp: tokALL1 universe name_where_list tokCOLON exp  */
#line 223 "parser.y"
                                                        {}
#line 2216 "parser.cc"
    break;

  case 64: /* exp: tokALL2 universe name_where_list tokCOLON exp  */
#line 225 "parser.y"
                                                        {}
#line 2222 "parser.cc"
    break;

  case 65: /* exp: tokLET0 defs tokIN exp  */
#line 227 "parser.y"
                                             {}
#line 2228 "parser.cc"
    break;

  case 66: /* exp: tokLET1 defs tokIN exp  */
#line 229 "parser.y"
                                            {}
#line 2234 "parser.cc"
    break;

  case 67: /* exp: tokLET2 defs tokIN exp  */
#line 231 "parser.y"
                                             {}
#line 2240 "parser.cc"
    break;

  case 68: /* exp: name tokLPAREN exp_list tokRPAREN  */
#line 233 "parser.y"
                                            {}
#line 2246 "parser.cc"
    break;

  case 69: /* exp: tokTRUE  */
#line 235 "parser.y"
                  {}
#line 2252 "parser.cc"
    break;

  case 70: /* exp: tokFALSE  */
#line 237 "parser.y"
                   {}
#line 2258 "parser.cc"
    break;

  case 71: /* exp: tokUNIVROOT tokLPAREN exp tokCOMMA universe tokRPAREN  */
#line 239 "parser.y"
                                                                {}
#line 2264 "parser.cc"
    break;

  case 72: /* exp: tokEMPTY tokLPAREN exp tokRPAREN  */
#line 241 "parser.y"
                                           {}
#line 2270 "parser.cc"
    break;

  case 73: /* exp: exp tokPLUS arith_exp  */
#line 243 "parser.y"
                                {/*$$ = new UntypedExp_Plus($1, $3);*/}
#line 2276 "parser.cc"
    break;

  case 74: /* exp: exp tokMINUS arith_exp  */
#line 245 "parser.y"
                                 {}
#line 2282 "parser.cc"
    break;

  case 75: /* exp: exp tokSTAR arith_exp  */
#line 247 "parser.y"
                                {}
#line 2288 "parser.cc"
    break;

  case 76: /* exp: exp tokSLASH arith_exp  */
#line 249 "parser.y"
                                 {}
#line 2294 "parser.cc"
    break;

  case 77: /* exp: exp tokMODULO arith_exp  */
#line 251 "parser.y"
                                   {}
#line 2300 "parser.cc"
    break;

  case 78: /* exp: tokEMPTY  */
#line 253 "parser.y"
                  {}
#line 2306 "parser.cc"
    break;

  case 79: /* exp: tokLBRACE set_body tokRBRACE  */
#line 255 "parser.y"
                                      {}
#line 2312 "parser.cc"
    break;

  case 80: /* exp: exp tokUNION exp  */
#line 257 "parser.y"
                           {}
#line 2318 "parser.cc"
    break;

  case 81: /* exp: exp tokINTER exp  */
#line 259 "parser.y"
                           {}
#line 2324 "parser.cc"
    break;

  case 82: /* exp: exp tokSETMINUS exp  */
#line 261 "parser.y"
                              {}
#line 2330 "parser.cc"
    break;

  case 83: /* exp: tokIMPORT tokLPAREN tokSTRING map_list tokRPAREN  */
#line 263 "parser.y"
                                                           {}
#line 2336 "parser.cc"
    break;

  case 84: /* exp: tokEXPORT tokLPAREN tokSTRING tokCOMMA exp tokRPAREN  */
#line 265 "parser.y"
                                                              {}
#line 2342 "parser.cc"
    break;

  case 85: /* exp: tokPREFIX tokLPAREN exp tokRPAREN  */
#line 267 "parser.y"
                                           {}
#line 2348 "parser.cc"
    break;

  case 86: /* exp: tokINSTATESPACE tokLPAREN exp tokCOMMA name_list tokRPAREN  */
#line 269 "parser.y"
                                                                    {}
#line 2354 "parser.cc"
    break;

  case 87: /* exp: tokVARIANT tokLPAREN exp tokCOMMA exp tokCOMMA name tokCOMMA name tokRPAREN  */
#line 272 "parser.y"
                                 {}
#line 2360 "parser.cc"
    break;

  case 88: /* exp: tokSUCC tokLPAREN exp tokCOMMA name tokCOMMA name tokCOMMA name tokRPAREN  */
#line 275 "parser.y"
                        {}
#line 2366 "parser.cc"
    break;

  case 89: /* exp: tokTREE tokLPAREN exp tokRPAREN  */
#line 277 "parser.y"
                                         {}
#line 2372 "parser.cc"
    break;

  case 90: /* exp: tokTYPE tokLPAREN exp tokCOMMA name tokRPAREN  */
#line 279 "parser.y"
                                                       {}
#line 2378 "parser.cc"
    break;

  case 91: /* exp: tokSOMETYPE tokLPAREN exp tokRPAREN  */
#line 281 "parser.y"
                                             {}
#line 2384 "parser.cc"
    break;

  case 92: /* exp: tokCONSTTREE tokLPAREN exp tokCOMMA name tokCOLON constnode tokRPAREN  */
#line 284 "parser.y"
                             {}
#line 2390 "parser.cc"
    break;

  case 93: /* exp: tokTREEROOT tokLPAREN exp tokRPAREN  */
#line 286 "parser.y"
                                             {}
#line 2396 "parser.cc"
    break;

  case 94: /* exp: tokRESTRICT tokLPAREN exp tokRPAREN  */
#line 288 "parser.y"
                                             {}
#line 2402 "parser.cc"
    break;

  case 95: /* arith_exp: arith_exp tokPLUS arith_exp  */
#line 293 "parser.y"
                                       {(yyval.arithExp) = new ArithExp_Add((yyvsp[-2].arithExp), (yyvsp[0].arithExp));}
#line 2408 "parser.cc"
    break;

  case 96: /* arith_exp: arith_exp tokMINUS arith_exp  */
#line 295 "parser.y"
                                       {}
#line 2414 "parser.cc"
    break;

  case 97: /* arith_exp: arith_exp tokSTAR arith_exp  */
#line 297 "parser.y"
                                      {}
#line 2420 "parser.cc"
    break;

  case 98: /* arith_exp: arith_exp tokSLASH arith_exp  */
#line 299 "parser.y"
                                       {}
#line 2426 "parser.cc"
    break;

  case 99: /* arith_exp: tokMINUS arith_exp  */
#line 301 "parser.y"
                             {}
#line 2432 "parser.cc"
    break;

  case 100: /* arith_exp: tokINT  */
#line 304 "parser.y"
        {
		(yyval.arithExp) = new ArithExp_Integer();
	}
#line 2440 "parser.cc"
    break;

  case 101: /* arith_exp: tokReal  */
#line 308 "parser.y"
                 {(yyval.arithExp)=new ArithExp_Real{};}
#line 2446 "parser.cc"
    break;

  case 102: /* arith_exp: dotExp  */
#line 310 "parser.y"
                 {(yyval.arithExp)=new ArithExp_Const{(yyvsp[0].UntypedExpDotName)->dotName};}
#line 2452 "parser.cc"
    break;

  case 103: /* arith_exp: tokLPAREN arith_exp tokRPAREN  */
#line 312 "parser.y"
                                        {}
#line 2458 "parser.cc"
    break;

  case 104: /* dotExp: name tokDOT name  */
#line 316 "parser.y"
                                 {(yyval.UntypedExpDotName)=new UntypedExp_DotName{new DotName{(yyvsp[-2].name),(yyvsp[0].name)}};}
#line 2464 "parser.cc"
    break;

  case 105: /* par_list: tokVAR0 name tokCOMMA par_list  */
#line 320 "parser.y"
                                         {}
#line 2470 "parser.cc"
    break;

  case 106: /* par_list: tokVAR1 name where tokCOMMA par_list  */
#line 322 "parser.y"
                                              {}
#line 2476 "parser.cc"
    break;

  case 107: /* par_list: tokVAR2 name where tokCOMMA par_list  */
#line 324 "parser.y"
                                              {}
#line 2482 "parser.cc"
    break;

  case 108: /* par_list: tokUNIVERSE name tokCOMMA par_list  */
#line 326 "parser.y"
                                             {}
#line 2488 "parser.cc"
    break;

  case 109: /* par_list: name where tokCOMMA par_list  */
#line 328 "parser.y"
                                       {}
#line 2494 "parser.cc"
    break;

  case 110: /* par_list: tokVAR0 name  */
#line 330 "parser.y"
                       {}
#line 2500 "parser.cc"
    break;

  case 111: /* par_list: tokVAR1 name where  */
#line 332 "parser.y"
                             {}
#line 2506 "parser.cc"
    break;

  case 112: /* par_list: tokVAR2 name where  */
#line 334 "parser.y"
                            {}
#line 2512 "parser.cc"
    break;

  case 113: /* par_list: tokUNIVERSE name  */
#line 336 "parser.y"
                           {}
#line 2518 "parser.cc"
    break;

  case 114: /* par_list: name where  */
#line 338 "parser.y"
                    {}
#line 2524 "parser.cc"
    break;

  case 115: /* defs: def tokCOMMA defs  */
#line 343 "parser.y"
                           {}
#line 2530 "parser.cc"
    break;

  case 116: /* defs: def  */
#line 345 "parser.y"
              {}
#line 2536 "parser.cc"
    break;

  case 117: /* def: name tokEQUAL exp  */
#line 349 "parser.y"
                           {}
#line 2542 "parser.cc"
    break;

  case 118: /* set_body: non_empty_set_body  */
#line 353 "parser.y"
                            {}
#line 2548 "parser.cc"
    break;

  case 119: /* set_body: %empty  */
#line 355 "parser.y"
                     {}
#line 2554 "parser.cc"
    break;

  case 120: /* non_empty_set_body: exp tokCOMMA non_empty_set_body  */
#line 359 "parser.y"
                                                   {}
#line 2560 "parser.cc"
    break;

  case 121: /* non_empty_set_body: tokINTERVAL tokCOMMA non_empty_set_body  */
#line 361 "parser.y"
                                                 {}
#line 2566 "parser.cc"
    break;

  case 122: /* non_empty_set_body: exp  */
#line 363 "parser.y"
             {}
#line 2572 "parser.cc"
    break;

  case 123: /* non_empty_set_body: tokINTERVAL  */
#line 365 "parser.y"
                     {}
#line 2578 "parser.cc"
    break;

  case 124: /* exp_list: non_empty_exp_list  */
#line 369 "parser.y"
                            {}
#line 2584 "parser.cc"
    break;

  case 125: /* exp_list: %empty  */
#line 371 "parser.y"
                     {}
#line 2590 "parser.cc"
    break;

  case 126: /* non_empty_exp_list: exp tokCOMMA non_empty_exp_list  */
#line 375 "parser.y"
                                                   {}
#line 2596 "parser.cc"
    break;

  case 127: /* non_empty_exp_list: exp  */
#line 377 "parser.y"
              {}
#line 2602 "parser.cc"
    break;

  case 128: /* universe: tokLBRACKET name_list tokRBRACKET  */
#line 381 "parser.y"
                                           {}
#line 2608 "parser.cc"
    break;

  case 129: /* universe: %empty  */
#line 383 "parser.y"
                     {}
#line 2614 "parser.cc"
    break;

  case 130: /* name: tokNAME  */
#line 388 "parser.y"
                {(yyval.name) = new Name((yyvsp[0].st));}
#line 2620 "parser.cc"
    break;

  case 131: /* name_list: name tokCOMMA name_list  */
#line 392 "parser.y"
                                  {}
#line 2626 "parser.cc"
    break;

  case 132: /* name_list: name  */
#line 394 "parser.y"
              {}
#line 2632 "parser.cc"
    break;

  case 133: /* name_where_list: name where tokCOMMA name_where_list  */
#line 399 "parser.y"
                {(yyvsp[0].varDeclList)->push_front(new VarDecl((yyvsp[-3].name),nullptr)); 
		 (yyval.varDeclList) = (yyvsp[0].varDeclList);}
#line 2639 "parser.cc"
    break;

  case 134: /* name_where_list: name where  */
#line 402 "parser.y"
                {(yyval.varDeclList) = new VarDeclList(); 
		 (yyval.varDeclList)->push_front(new VarDecl((yyvsp[-1].name),nullptr));}
#line 2646 "parser.cc"
    break;

  case 135: /* func_list: func tokCOMMA func_list  */
#line 407 "parser.y"
                                  {}
#line 2652 "parser.cc"
    break;

  case 136: /* func_list: func  */
#line 409 "parser.y"
              {}
#line 2658 "parser.cc"
    break;

  case 137: /* func: name tokARROW tokLPAREN name tokCOMMA name tokRPAREN  */
#line 413 "parser.y"
                                                              {}
#line 2664 "parser.cc"
    break;

  case 138: /* univs: univ tokCOMMA univs  */
#line 417 "parser.y"
                             {}
#line 2670 "parser.cc"
    break;

  case 139: /* univs: univ  */
#line 419 "parser.y"
              {}
#line 2676 "parser.cc"
    break;

  case 140: /* univ: name tokCOLON tokINT  */
#line 423 "parser.y"
                              {}
#line 2682 "parser.cc"
    break;

  case 141: /* univ: name tokCOLON name  */
#line 425 "parser.y"
                            {}
#line 2688 "parser.cc"
    break;

  case 142: /* univ: name  */
#line 427 "parser.y"
              {}
#line 2694 "parser.cc"
    break;

  case 143: /* where: tokWHERE exp  */
#line 431 "parser.y"
                      {}
#line 2700 "parser.cc"
    break;

  case 144: /* where: %empty  */
#line 433 "parser.y"
                     {}
#line 2706 "parser.cc"
    break;

  case 145: /* map_list: tokCOMMA name tokARROW name map_list  */
#line 437 "parser.y"
                                              {}
#line 2712 "parser.cc"
    break;

  case 146: /* map_list: %empty  */
#line 439 "parser.y"
                     {}
#line 2718 "parser.cc"
    break;

  case 147: /* variant_list: name tokLPAREN component_list tokRPAREN tokCOMMA variant_list  */
#line 443 "parser.y"
                                                                           {}
#line 2724 "parser.cc"
    break;

  case 148: /* variant_list: name tokLPAREN tokRPAREN tokCOMMA variant_list  */
#line 445 "parser.y"
                                                        {}
#line 2730 "parser.cc"
    break;

  case 149: /* variant_list: name tokCOMMA variant_list  */
#line 447 "parser.y"
                                    {}
#line 2736 "parser.cc"
    break;

  case 150: /* variant_list: name tokLPAREN component_list tokRPAREN  */
#line 449 "parser.y"
                                                 {}
#line 2742 "parser.cc"
    break;

  case 151: /* variant_list: name tokLPAREN tokRPAREN  */
#line 451 "parser.y"
                                  {}
#line 2748 "parser.cc"
    break;

  case 152: /* variant_list: name  */
#line 453 "parser.y"
              {}
#line 2754 "parser.cc"
    break;

  case 153: /* component_list: name tokCOLON name tokCOMMA component_list  */
#line 457 "parser.y"
                                                          {}
#line 2760 "parser.cc"
    break;

  case 154: /* component_list: name tokCOLON name  */
#line 459 "parser.y"
                            {}
#line 2766 "parser.cc"
    break;

  case 155: /* constnode: name tokLPAREN constnode_list tokRPAREN  */
#line 463 "parser.y"
                                                  {}
#line 2772 "parser.cc"
    break;

  case 156: /* constnode: name tokLPAREN tokRPAREN  */
#line 465 "parser.y"
                                  {}
#line 2778 "parser.cc"
    break;

  case 157: /* constnode: name  */
#line 467 "parser.y"
              {}
#line 2784 "parser.cc"
    break;

  case 158: /* constnode_list: constnode tokCOMMA constnode_list  */
#line 471 "parser.y"
                                                 {}
#line 2790 "parser.cc"
    break;

  case 159: /* constnode_list: constnode  */
#line 473 "parser.y"
                   {}
#line 2796 "parser.cc"
    break;

  case 160: /* optstring: tokSTRING  */
#line 477 "parser.y"
                    {}
#line 2802 "parser.cc"
    break;

  case 161: /* optstring: %empty  */
#line 479 "parser.y"
                      {}
#line 2808 "parser.cc"
    break;


#line 2812 "parser.cc"

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

#line 484 "parser.y"

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
