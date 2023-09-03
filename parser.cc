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
 MonaUntypedAST* untypedAST; 


void check_bits(string s)
{
  int i;
  for (i = 0; s[i] != '\0'; i++)
    if (s[i] != '0' && s[i] != '1'){
		yyerror("branch indication error");
		}
}

void checkNameIntName(string s)
	{
		if((s.length()!=1) || (s!="0" && s!="1"))
		{
					yyerror("branch indication error");
		}
	}

#line 106 "parser.cc"

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
  YYSYMBOL_exp = 97,                       /* exp  */
  YYSYMBOL_arith_exp = 98,                 /* arith_exp  */
  YYSYMBOL_dotExp = 99,                    /* dotExp  */
  YYSYMBOL_par_list = 100,                 /* par_list  */
  YYSYMBOL_defs = 101,                     /* defs  */
  YYSYMBOL_def = 102,                      /* def  */
  YYSYMBOL_set_body = 103,                 /* set_body  */
  YYSYMBOL_non_empty_set_body = 104,       /* non_empty_set_body  */
  YYSYMBOL_exp_list = 105,                 /* exp_list  */
  YYSYMBOL_non_empty_exp_list = 106,       /* non_empty_exp_list  */
  YYSYMBOL_universe = 107,                 /* universe  */
  YYSYMBOL_name = 108,                     /* name  */
  YYSYMBOL_name_list = 109,                /* name_list  */
  YYSYMBOL_name_where_list = 110,          /* name_where_list  */
  YYSYMBOL_func_list = 111,                /* func_list  */
  YYSYMBOL_func = 112,                     /* func  */
  YYSYMBOL_univs = 113,                    /* univs  */
  YYSYMBOL_univ = 114,                     /* univ  */
  YYSYMBOL_where = 115,                    /* where  */
  YYSYMBOL_map_list = 116,                 /* map_list  */
  YYSYMBOL_variant_list = 117,             /* variant_list  */
  YYSYMBOL_component_list = 118,           /* component_list  */
  YYSYMBOL_constnode = 119,                /* constnode  */
  YYSYMBOL_constnode_list = 120,           /* constnode_list  */
  YYSYMBOL_optstring = 121                 /* optstring  */
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
#define YYLAST   2039

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  159
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  426

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
       0,   103,   103,   120,   123,   125,   129,   131,   133,   135,
     137,   139,   141,   143,   145,   147,   149,   151,   153,   155,
     157,   159,   161,   163,   165,   167,   169,   171,   173,   175,
     177,   179,   184,   186,   188,   190,   192,   194,   196,   198,
     200,   202,   204,   206,   208,   210,   212,   214,   216,   218,
     220,   222,   224,   226,   228,   230,   232,   234,   236,   238,
     240,   242,   244,   246,   248,   250,   252,   254,   256,   258,
     260,   262,   264,   266,   268,   270,   272,   274,   276,   278,
     280,   282,   284,   286,   288,   290,   293,   296,   298,   300,
     302,   305,   307,   312,   314,   316,   318,   320,   322,   324,
     329,   331,   340,   344,   346,   348,   352,   354,   356,   358,
     360,   362,   364,   366,   368,   370,   375,   377,   381,   385,
     389,   391,   395,   397,   401,   403,   407,   409,   413,   418,
     420,   424,   427,   433,   435,   439,   443,   445,   449,   451,
     453,   457,   459,   463,   465,   469,   471,   473,   475,   477,
     479,   483,   485,   489,   491,   493,   497,   499,   503,   505
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
  "declarations", "declaration", "exp", "arith_exp", "dotExp", "par_list",
  "defs", "def", "set_body", "non_empty_set_body", "exp_list",
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

#define YYPACT_NINF (-333)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -59,   -29,    35,   474,  -333,  -333,   -49,    47,    47,   562,
     -49,     8,    10,    42,   -49,    47,    47,  -333,   -49,   -49,
     -49,   -49,   -49,   562,   -49,   562,   562,   562,   -49,    44,
      87,    -2,    43,  -333,   -49,   -49,    47,    47,    36,    90,
      92,    93,   -49,    96,   562,   -30,   100,   104,   105,   107,
     109,   -49,  -333,   -49,   -49,   -49,  -333,   474,    66,  -333,
       2,    83,   139,   -49,   -49,   -49,   115,   120,  -333,  -333,
     638,   142,   -49,   -49,   562,   150,   -49,   -49,   154,   110,
     156,   117,  -333,   159,   158,   171,   163,   170,   174,   680,
      16,   278,   278,   398,    24,   562,   562,  -333,   562,   562,
     -49,   191,   160,   192,   161,   -49,   -49,   164,   118,   122,
     562,   165,   562,   722,   562,   202,   562,   562,   562,   562,
     562,   167,   168,   173,   176,  -333,   562,   562,   562,   562,
     562,   562,   562,   562,   562,   562,    15,    15,   562,   562,
     562,    15,  -333,   562,    15,    15,   562,   562,   -56,   562,
     194,   562,   216,   562,   220,   185,   230,   232,  -333,    15,
     195,   196,   764,   562,   236,   241,   217,  -333,   -49,  -333,
     -49,   562,   -49,   562,   562,   562,  -333,   562,    82,   562,
     265,   806,   848,   -10,   890,   932,   203,    18,  -333,   -49,
    -333,   204,   205,  -333,   248,   249,   974,  -333,  1016,  -333,
    1058,   -49,  1100,  1142,  1184,  1226,  1268,  -333,  -333,  -333,
    -333,   398,  1772,  1978,  1978,  1978,  1814,  1938,   354,  1978,
    1978,    15,    15,  -333,  -333,    40,  -333,     6,  -333,  1978,
    1938,  1898,    40,   228,  -333,  -333,  1938,   321,   246,  -333,
    1310,   218,  -333,   -49,  1772,   -49,  1772,   -49,  -333,   562,
     562,   531,   254,   255,  -333,  1772,   562,   562,   -49,  -333,
    -333,  1772,  -333,  1856,  1772,  1772,  1352,   258,   -49,   -49,
     -49,   -49,   224,    83,  1394,   260,   226,  -333,    47,  -333,
    -333,  -333,  -333,  -333,  -333,  -333,  -333,  -333,   -49,   227,
     562,  -333,   -49,   -49,    14,   238,  -333,   562,   -49,  -333,
     -49,   533,    40,    15,    15,    15,    15,    15,    28,   194,
     -49,   562,  -333,  -333,  -333,  -333,  1772,  1772,  -333,   562,
     562,  1772,  1772,   282,  -333,   562,   296,   300,    83,    83,
     295,   309,  -333,   562,   304,   270,   316,  -333,  1436,   273,
     274,   -49,   -32,  -333,  1478,   326,   328,  -333,    40,  -333,
      40,  -333,  -333,   246,  -333,  -333,  1520,  1562,   -49,  1604,
      51,    51,   329,   330,   562,    51,  1646,   562,  -333,   -49,
    -333,  -333,  -333,  -333,   331,   333,   292,   -49,   -49,   -49,
    -333,  -333,   293,  -333,  -333,  -333,    51,    51,  1688,  -333,
    -333,  1730,   248,   -49,   -49,   335,   336,   339,   317,   305,
    -333,  -333,  -333,  -333,  -333,  -333,  -333,   347,   -49,   -49,
     -49,   -12,  -333,   -49,  -333,   308,   312,  -333,   357,   322,
    -333,  -333,  -333,   -49,  -333,  -333
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     1,     0,   127,   127,     0,
       0,     0,     0,    74,     0,   127,   127,    66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,   159,   127,    65,     0,     0,   127,   127,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,    76,     0,    75,     2,     5,     0,    51,
      32,   142,     0,     0,     0,     0,     0,     0,    76,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     134,     0,   119,   121,     0,   117,     0,     0,     0,     0,
       0,    39,    38,    50,     0,     0,     0,   158,     0,     0,
       0,   140,     0,   137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     0,     0,     0,     0,     0,   123,
      54,     0,   132,     0,   130,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     0,    77,
       0,     0,     0,     0,     0,     0,    34,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,     0,     8,     0,
      12,     0,     0,    25,   144,     0,     0,    26,     0,    24,
       0,     0,     0,     0,     0,     0,     0,    27,    30,    31,
      29,    48,    47,    44,    43,    42,    46,    36,    79,    40,
      41,     0,     0,   100,    99,    70,   101,     0,    73,    45,
      37,    49,    69,    80,    72,    71,    35,    78,    33,   103,
     125,     0,   122,     0,   141,     0,    58,     0,   126,     0,
       0,     0,     0,     0,    68,    55,     0,     0,     0,   133,
     120,    61,   116,   118,    62,    63,     0,     0,     0,     0,
       0,     0,     0,   142,     0,     0,     0,    92,   127,    52,
      23,    87,    15,   138,   139,   136,    13,    14,     0,     0,
       0,    83,     0,     0,   150,     0,    89,     0,     0,    91,
       0,     0,    98,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    64,   105,   131,   129,    59,    60,    11,     0,
       0,    56,    57,     0,    20,     0,   114,   111,   142,   142,
       0,   115,    17,     0,     0,     0,     0,    81,     0,     0,
       0,     0,     0,    28,     0,     0,     0,   102,    94,    97,
      93,    96,    95,     0,   104,   124,     0,     0,     0,     0,
       0,     0,   112,   113,     0,     0,     0,     0,    67,     0,
      82,    84,    88,   147,   149,     0,     0,     0,     0,     0,
       9,    10,     0,    21,   109,   106,     0,     0,     0,   110,
      18,     0,   144,     0,     0,   148,     0,     0,   155,     0,
     135,   107,   108,    19,    16,   143,   146,   152,     0,     0,
       0,     0,    90,     0,   145,     0,     0,   154,   157,     0,
     151,    85,    86,     0,   153,   156
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -333,  -333,  -333,   325,  -333,    59,   169,   144,  -137,   -20,
    -333,  -333,   199,  -333,    72,    -5,    -6,  -228,   190,   221,
    -333,   197,  -333,  -266,    -7,  -332,   -17,    19,   -26,  -333
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,    56,    57,    58,   225,    59,   272,    84,
      85,    81,    82,   241,   242,    64,    60,   155,    62,    79,
      80,   102,   103,   152,   289,   295,   376,   418,   419,    98
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,    87,    88,    65,    71,   148,   114,   331,    61,   373,
      76,    77,    78,    83,    86,    86,    86,   148,    90,   315,
     374,   308,    94,     1,     4,   341,   149,   100,   101,    61,
      52,   105,   106,   177,   238,     5,   111,    52,   149,   115,
     417,   179,   279,   276,    72,   121,    73,    61,    61,    61,
     342,   221,   178,   150,    52,   222,    52,   154,    61,    61,
     180,   406,   362,   363,   339,   150,   160,   161,    70,   309,
      61,    61,   126,    63,    52,   127,   414,    63,    74,    99,
      95,   304,    89,   128,    91,    92,    93,    97,   129,   130,
     183,   131,   132,   133,    61,   306,   307,   134,   135,    61,
      61,    52,   223,   113,    52,   224,   136,   137,   283,   138,
     139,   140,   141,   268,    52,   269,   270,   271,   353,   142,
     143,   144,   145,    96,   146,   107,   108,   147,   109,   110,
     227,   227,   112,   162,   267,   227,   116,    52,   227,   227,
     117,   118,   239,   119,   268,   120,   269,   270,   271,   153,
     151,    99,   262,   227,   181,   182,   114,   184,   185,   159,
     163,   166,    78,   167,    83,   169,    86,   168,    52,   196,
     170,   198,   273,   200,   273,   202,   203,   204,   205,   206,
     173,   284,   172,   101,   171,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   294,   174,   229,   230,   231,
     175,   187,   233,   189,    75,   236,   237,   194,   240,   243,
     244,   195,   246,   188,   190,   227,   227,   193,   197,   201,
     207,   208,   255,   384,   385,   104,   209,   245,   389,   210,
     261,   247,   263,   264,   265,   248,   266,   313,   274,    61,
     249,   154,   250,   122,   123,   124,   256,   252,   253,   401,
     402,   257,   323,   258,   156,   157,   282,   286,   287,   288,
     290,   310,   326,   327,   328,   329,   164,   165,   136,   137,
     312,   319,   320,   335,   141,   325,   330,   333,   334,   337,
     226,   226,   336,   144,   145,   226,   154,   340,   226,   226,
     186,   343,   345,   358,   346,   191,   192,   227,   227,   227,
     227,   227,   239,   226,   354,   133,   228,   360,   316,   317,
     232,   361,   364,   234,   235,   321,   322,   275,   136,   137,
     365,   367,   368,   369,   141,   371,   372,   268,   251,   269,
     270,   271,   143,   144,   145,   294,   375,   378,   379,   147,
     386,   387,   393,   394,   395,   400,   408,   409,   133,   338,
     410,    52,   382,   411,   273,   273,   344,   412,   413,   273,
     421,   136,   137,   392,   422,   226,   226,   141,   423,   260,
     240,   396,   397,   398,   424,   143,   144,   145,   356,   357,
     273,   273,   125,   355,   359,   405,   285,   294,   407,   259,
     301,   302,   366,     0,   136,   137,   420,   425,   399,     0,
     141,     0,   294,   415,   416,   398,     0,   375,   143,   144,
     145,     0,     0,     0,     0,   128,     0,   398,     0,     0,
     129,   130,     0,   388,   132,   133,   391,     0,     0,   134,
     135,     0,     0,     0,     0,   314,     0,     0,   136,   137,
       0,   138,   139,     0,   141,     0,     0,   226,   226,   226,
     226,   226,   143,   144,   145,     0,   146,     0,     0,   147,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   348,   349,   350,   351,   352,     6,     7,     8,
       0,     0,     9,     0,     0,     0,    10,    11,    12,     0,
      13,     0,    14,    15,    16,    17,     0,     0,    18,     0,
       0,     0,     0,    19,     0,     0,     0,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,     0,     0,     0,
       0,    28,     0,    29,     0,    30,     0,     0,     0,     0,
       0,    31,     0,    32,    33,     0,    34,     0,    35,    36,
      37,     0,    38,    39,    40,    41,     0,     0,    42,    43,
      44,    45,    46,    47,    48,     0,     0,    49,    50,    51,
      52,    53,    54,     0,    55,     6,     7,     8,     0,     0,
       0,   303,   304,   303,   304,     0,     0,   305,    13,   305,
      14,    15,    16,    17,   318,   347,   306,   307,   306,   307,
       0,    19,     0,     0,     0,    20,    21,    22,    23,     0,
      25,    26,     0,     0,    27,     0,     0,     0,     0,     0,
       0,    29,     0,    30,     0,     0,     0,     0,     0,     0,
       0,    66,    33,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    40,    41,     0,     0,     0,    43,     0,    67,
      46,    47,    48,     0,   126,    49,    50,   127,    52,    68,
       0,     0,    69,     0,     0,   128,     0,     0,     0,     0,
     129,   130,     0,   131,   132,   133,     0,     0,     0,   134,
     135,     0,     0,     0,     0,     0,     0,     0,   136,   137,
       0,   138,   139,   140,   141,     0,   126,     0,     0,   127,
       0,   158,   143,   144,   145,     0,   146,   128,     0,   147,
       0,     0,   129,   130,     0,   131,   132,   133,     0,     0,
       0,   134,   135,     0,     0,     0,     0,     0,     0,     0,
     136,   137,     0,   138,   139,   140,   141,     0,   126,     0,
       0,   127,   176,     0,   143,   144,   145,     0,   146,   128,
       0,   147,     0,     0,   129,   130,     0,   131,   132,   133,
       0,     0,     0,   134,   135,     0,     0,     0,     0,     0,
       0,     0,   136,   137,     0,   138,   139,   140,   141,     0,
     126,     0,     0,   127,     0,   199,   143,   144,   145,     0,
     146,   128,     0,   147,     0,     0,   129,   130,     0,   131,
     132,   133,     0,     0,     0,   134,   135,     0,     0,     0,
       0,     0,     0,     0,   136,   137,     0,   138,   139,   140,
     141,     0,   126,     0,     0,   127,   254,     0,   143,   144,
     145,     0,   146,   128,     0,   147,     0,     0,   129,   130,
       0,   131,   132,   133,     0,     0,     0,   134,   135,     0,
       0,     0,     0,     0,     0,     0,   136,   137,     0,   138,
     139,   140,   141,     0,   126,     0,     0,   127,   277,   278,
     143,   144,   145,     0,   146,   128,     0,   147,     0,     0,
     129,   130,     0,   131,   132,   133,     0,     0,     0,   134,
     135,     0,     0,     0,     0,     0,     0,     0,   136,   137,
       0,   138,   139,   140,   141,     0,   126,     0,     0,   127,
       0,     0,   143,   144,   145,     0,   146,   128,     0,   147,
       0,     0,   129,   130,     0,   131,   132,   133,     0,     0,
       0,   134,   135,     0,     0,     0,     0,     0,     0,     0,
     136,   137,     0,   138,   139,   140,   141,     0,   126,     0,
       0,   127,     0,   280,   143,   144,   145,     0,   146,   128,
       0,   147,     0,     0,   129,   130,     0,   131,   132,   133,
       0,     0,     0,   134,   135,     0,     0,     0,     0,     0,
       0,     0,   136,   137,     0,   138,   139,   140,   141,     0,
     126,     0,     0,   127,   281,     0,   143,   144,   145,     0,
     146,   128,     0,   147,     0,     0,   129,   130,     0,   131,
     132,   133,     0,     0,     0,   134,   135,     0,     0,     0,
       0,     0,     0,     0,   136,   137,     0,   138,   139,   140,
     141,     0,   126,     0,     0,   127,   291,   292,   143,   144,
     145,     0,   146,   128,     0,   147,     0,     0,   129,   130,
       0,   131,   132,   133,     0,     0,     0,   134,   135,     0,
       0,     0,     0,     0,     0,     0,   136,   137,     0,   138,
     139,   140,   141,     0,   126,     0,     0,   127,     0,   293,
     143,   144,   145,     0,   146,   128,     0,   147,     0,     0,
     129,   130,     0,   131,   132,   133,     0,     0,     0,   134,
     135,     0,     0,     0,     0,     0,     0,     0,   136,   137,
       0,   138,   139,   140,   141,     0,   126,     0,     0,   127,
       0,     0,   143,   144,   145,     0,   146,   128,     0,   147,
       0,     0,   129,   130,     0,   131,   132,   133,     0,     0,
       0,   134,   135,     0,     0,     0,     0,     0,     0,     0,
     136,   137,     0,   138,   139,   140,   141,     0,   126,     0,
       0,   127,   296,   297,   143,   144,   145,     0,   146,   128,
       0,   147,     0,     0,   129,   130,     0,   131,   132,   133,
       0,     0,     0,   134,   135,     0,     0,     0,     0,     0,
       0,     0,   136,   137,     0,   138,   139,   140,   141,     0,
     126,     0,     0,   127,     0,   298,   143,   144,   145,     0,
     146,   128,     0,   147,     0,     0,   129,   130,     0,   131,
     132,   133,     0,     0,     0,   134,   135,     0,     0,     0,
       0,     0,     0,     0,   136,   137,     0,   138,   139,   140,
     141,     0,   126,     0,     0,   127,     0,     0,   143,   144,
     145,     0,   146,   128,     0,   147,     0,     0,   129,   130,
       0,   131,   132,   133,     0,     0,     0,   134,   135,     0,
       0,     0,     0,     0,     0,     0,   136,   137,     0,   138,
     139,   140,   141,     0,   126,     0,     0,   127,   299,   300,
     143,   144,   145,     0,   146,   128,     0,   147,     0,     0,
     129,   130,     0,   131,   132,   133,     0,     0,     0,   134,
     135,     0,     0,     0,     0,     0,     0,     0,   136,   137,
       0,   138,   139,   140,   141,     0,   126,     0,     0,   127,
       0,   311,   143,   144,   145,     0,   146,   128,     0,   147,
       0,     0,   129,   130,     0,   131,   132,   133,     0,     0,
       0,   134,   135,     0,     0,     0,     0,     0,     0,     0,
     136,   137,     0,   138,   139,   140,   141,     0,   126,     0,
       0,   127,     0,     0,   143,   144,   145,     0,   146,   128,
       0,   147,     0,     0,   129,   130,     0,   131,   132,   133,
       0,     0,     0,   134,   135,     0,     0,     0,     0,     0,
       0,     0,   136,   137,     0,   138,   139,   140,   141,     0,
     126,     0,     0,   127,     0,   324,   143,   144,   145,     0,
     146,   128,     0,   147,     0,     0,   129,   130,     0,   131,
     132,   133,     0,     0,     0,   134,   135,     0,     0,     0,
       0,     0,     0,     0,   136,   137,     0,   138,   139,   140,
     141,     0,   126,     0,     0,   127,     0,   332,   143,   144,
     145,     0,   146,   128,     0,   147,     0,     0,   129,   130,
       0,   131,   132,   133,     0,     0,     0,   134,   135,     0,
       0,     0,     0,     0,     0,     0,   136,   137,     0,   138,
     139,   140,   141,     0,   126,     0,     0,   127,   370,   377,
     143,   144,   145,     0,   146,   128,     0,   147,     0,     0,
     129,   130,     0,   131,   132,   133,     0,     0,     0,   134,
     135,     0,     0,     0,     0,     0,     0,     0,   136,   137,
       0,   138,   139,   140,   141,     0,   126,     0,     0,   127,
       0,     0,   143,   144,   145,     0,   146,   128,     0,   147,
       0,     0,   129,   130,     0,   131,   132,   133,     0,     0,
       0,   134,   135,     0,     0,     0,     0,     0,     0,     0,
     136,   137,     0,   138,   139,   140,   141,     0,   126,     0,
       0,   127,     0,   380,   143,   144,   145,     0,   146,   128,
       0,   147,     0,     0,   129,   130,     0,   131,   132,   133,
       0,     0,     0,   134,   135,     0,     0,     0,     0,     0,
       0,     0,   136,   137,     0,   138,   139,   140,   141,     0,
     126,     0,     0,   127,     0,   381,   143,   144,   145,     0,
     146,   128,     0,   147,     0,     0,   129,   130,     0,   131,
     132,   133,     0,     0,     0,   134,   135,     0,     0,     0,
       0,     0,     0,     0,   136,   137,     0,   138,   139,   140,
     141,     0,   126,     0,     0,   127,     0,   383,   143,   144,
     145,     0,   146,   128,     0,   147,     0,     0,   129,   130,
       0,   131,   132,   133,     0,     0,     0,   134,   135,     0,
       0,     0,     0,     0,     0,     0,   136,   137,     0,   138,
     139,   140,   141,     0,   126,     0,     0,   127,     0,   390,
     143,   144,   145,     0,   146,   128,     0,   147,     0,     0,
     129,   130,     0,   131,   132,   133,     0,     0,     0,   134,
     135,     0,     0,     0,     0,     0,     0,     0,   136,   137,
       0,   138,   139,   140,   141,     0,   126,     0,     0,   127,
       0,   403,   143,   144,   145,     0,   146,   128,     0,   147,
       0,     0,   129,   130,     0,   131,   132,   133,     0,     0,
       0,   134,   135,     0,     0,     0,     0,     0,     0,     0,
     136,   137,     0,   138,   139,   140,   141,     0,   126,     0,
       0,   127,     0,   404,   143,   144,   145,     0,   146,   128,
       0,   147,     0,     0,   129,   130,     0,   131,   132,   133,
       0,     0,     0,   134,   135,     0,     0,     0,     0,     0,
       0,     0,   136,   137,     0,   138,   139,   140,   141,     0,
     126,     0,     0,     0,     0,     0,   143,   144,   145,     0,
     146,   128,     0,   147,     0,     0,   129,   130,     0,   131,
     132,   133,     0,     0,     0,   134,   135,     0,     0,     0,
       0,     0,     0,     0,   136,   137,     0,   138,   139,   140,
     141,     0,   126,     0,     0,   127,     0,     0,   143,   144,
     145,     0,   146,   128,     0,   147,     0,     0,   129,   130,
       0,   131,     0,   133,     0,     0,     0,   134,   135,     0,
       0,     0,     0,     0,     0,     0,   136,   137,     0,   138,
     139,   140,   141,     0,   126,     0,     0,     0,     0,     0,
     143,   144,   145,     0,   146,   128,     0,   147,     0,     0,
     129,   130,     0,     0,   132,   133,     0,     0,     0,   134,
     135,     0,     0,     0,     0,     0,     0,     0,   136,   137,
       0,   138,   139,     0,   141,     0,     0,     0,     0,     0,
       0,     0,   143,   144,   145,   128,   146,     0,     0,   147,
     129,   130,     0,     0,    -1,   133,     0,     0,     0,   134,
     135,     0,     0,     0,     0,     0,     0,     0,   136,   137,
       0,   138,    -1,     0,   141,     0,     0,     0,     0,     0,
       0,     0,   143,   144,   145,    -1,    -1,     0,     0,   147,
      -1,    -1,     0,     0,     0,   133,     0,     0,     0,    -1,
      -1,     0,     0,     0,     0,     0,     0,     0,   136,   137,
       0,    -1,     0,     0,   141,     0,     0,     0,     0,     0,
       0,     0,   143,   144,   145,     0,     0,     0,     0,   147
};

static const yytype_int16 yycheck[] =
{
       6,    21,    22,     8,    10,    15,    36,   273,    14,   341,
      15,    16,    18,    19,    20,    21,    22,    15,    24,   247,
      52,    15,    28,    82,    53,    11,    36,    32,    34,    35,
      86,    36,    37,    17,    90,     0,    42,    86,    36,    45,
      52,    17,    52,   180,    36,    51,    36,    53,    54,    55,
      36,    36,    36,    63,    86,    40,    86,    63,    64,    65,
      36,   393,   328,   329,   292,    63,    72,    73,     9,    63,
      76,    77,     6,    30,    86,     9,   408,    30,    36,    36,
      36,    41,    23,    17,    25,    26,    27,    89,    22,    23,
      96,    25,    26,    27,   100,    55,    56,    31,    32,   105,
     106,    86,    87,    44,    86,    90,    40,    41,    90,    43,
      44,    45,    46,    62,    86,    64,    65,    66,    90,    53,
      54,    55,    56,    36,    58,    89,    36,    61,    36,    36,
     136,   137,    36,    74,    52,   141,    36,    86,   144,   145,
      36,    36,   148,    36,    62,    36,    64,    65,    66,    10,
      67,    36,   172,   159,    95,    96,    36,    98,    99,    17,
      10,     7,   168,    53,   170,    48,   172,    11,    86,   110,
      11,   112,   178,   114,   180,   116,   117,   118,   119,   120,
      17,   187,    11,   189,    26,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   201,    26,   138,   139,   140,
      26,    10,   143,    11,    14,   146,   147,    89,   149,    15,
     151,    89,   153,    53,    53,   221,   222,    53,    53,    17,
      53,    53,   163,   360,   361,    35,    53,    11,   365,    53,
     171,    11,   173,   174,   175,    50,   177,   243,   179,   245,
      10,   247,    10,    53,    54,    55,    10,    52,    52,   386,
     387,    10,   258,    36,    64,    65,    53,    53,    53,    11,
      11,    15,   268,   269,   270,   271,    76,    77,    40,    41,
      52,    17,    17,   278,    46,    17,    52,    17,    52,    52,
     136,   137,   288,    55,    56,   141,   292,   293,   144,   145,
     100,    53,   298,    11,   300,   105,   106,   303,   304,   305,
     306,   307,   308,   159,   310,    27,   137,    11,   249,   250,
     141,    11,    17,   144,   145,   256,   257,    52,    40,    41,
      11,    17,    52,     7,    46,    52,    52,    62,   159,    64,
      65,    66,    54,    55,    56,   341,   342,    11,    10,    61,
      11,    11,    11,    10,    52,    52,    11,    11,    27,   290,
      11,    86,   358,    36,   360,   361,   297,    52,    11,   365,
      52,    40,    41,   369,    52,   221,   222,    46,    11,   170,
     311,   377,   378,   379,    52,    54,    55,    56,   319,   320,
     386,   387,    57,   311,   325,   392,   189,   393,   394,   168,
     221,   222,   333,    -1,    40,    41,   413,   423,   379,    -1,
      46,    -1,   408,   409,   410,   411,    -1,   413,    54,    55,
      56,    -1,    -1,    -1,    -1,    17,    -1,   423,    -1,    -1,
      22,    23,    -1,   364,    26,    27,   367,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,   245,    -1,    -1,    40,    41,
      -1,    43,    44,    -1,    46,    -1,    -1,   303,   304,   305,
     306,   307,    54,    55,    56,    -1,    58,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   303,   304,   305,   306,   307,     3,     4,     5,
      -1,    -1,     8,    -1,    -1,    -1,    12,    13,    14,    -1,
      16,    -1,    18,    19,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,
      36,    37,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    47,    -1,    49,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    59,    60,    -1,    62,    -1,    64,    65,
      66,    -1,    68,    69,    70,    71,    -1,    -1,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    83,    84,    85,
      86,    87,    88,    -1,    90,     3,     4,     5,    -1,    -1,
      -1,    40,    41,    40,    41,    -1,    -1,    46,    16,    46,
      18,    19,    20,    21,    53,    52,    55,    56,    55,    56,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    -1,
      38,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    -1,    -1,    -1,    75,    -1,    77,
      78,    79,    80,    -1,     6,    83,    84,     9,    86,    87,
      -1,    -1,    90,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,     9,
      -1,    53,    54,    55,    56,    -1,    58,    17,    -1,    61,
      -1,    -1,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    45,    46,    -1,     6,    -1,
      -1,     9,    52,    -1,    54,    55,    56,    -1,    58,    17,
      -1,    61,    -1,    -1,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    -1,
       6,    -1,    -1,     9,    -1,    53,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    -1,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,     9,    52,    -1,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    -1,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,     9,    52,    11,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    -1,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,     9,
      -1,    -1,    54,    55,    56,    -1,    58,    17,    -1,    61,
      -1,    -1,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    45,    46,    -1,     6,    -1,
      -1,     9,    -1,    53,    54,    55,    56,    -1,    58,    17,
      -1,    61,    -1,    -1,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    -1,
       6,    -1,    -1,     9,    52,    -1,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    -1,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,     9,    52,    11,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    -1,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,    11,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    -1,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,     9,
      -1,    -1,    54,    55,    56,    -1,    58,    17,    -1,    61,
      -1,    -1,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    45,    46,    -1,     6,    -1,
      -1,     9,    52,    11,    54,    55,    56,    -1,    58,    17,
      -1,    61,    -1,    -1,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    -1,
       6,    -1,    -1,     9,    -1,    11,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    -1,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,     9,    -1,    -1,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    -1,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,     9,    52,    11,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    -1,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,     9,
      -1,    11,    54,    55,    56,    -1,    58,    17,    -1,    61,
      -1,    -1,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    45,    46,    -1,     6,    -1,
      -1,     9,    -1,    -1,    54,    55,    56,    -1,    58,    17,
      -1,    61,    -1,    -1,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    -1,
       6,    -1,    -1,     9,    -1,    53,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    -1,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,     9,    -1,    53,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    -1,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,     9,    52,    11,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    -1,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,     9,
      -1,    -1,    54,    55,    56,    -1,    58,    17,    -1,    61,
      -1,    -1,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    45,    46,    -1,     6,    -1,
      -1,     9,    -1,    53,    54,    55,    56,    -1,    58,    17,
      -1,    61,    -1,    -1,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    -1,
       6,    -1,    -1,     9,    -1,    53,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    -1,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,     9,    -1,    53,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    -1,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,    53,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    -1,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,     9,
      -1,    53,    54,    55,    56,    -1,    58,    17,    -1,    61,
      -1,    -1,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    45,    46,    -1,     6,    -1,
      -1,     9,    -1,    53,    54,    55,    56,    -1,    58,    17,
      -1,    61,    -1,    -1,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    -1,
       6,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    -1,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,     9,    -1,    -1,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    -1,    22,    23,
      -1,    25,    -1,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    -1,
      22,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    17,    58,    -1,    -1,    61,
      22,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    17,    58,    -1,    -1,    61,
      22,    23,    -1,    -1,    -1,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    -1,    -1,    -1,    -1,    61
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
      84,    85,    86,    87,    88,    90,    95,    96,    97,    99,
     108,   108,   110,    30,   107,   107,    59,    77,    87,    90,
      97,   108,    36,    36,    36,   110,   107,   107,   108,   111,
     112,   103,   104,   108,   101,   102,   108,   101,   101,    97,
     108,    97,    97,    97,   108,    36,    36,    89,   121,    36,
     107,   108,   113,   114,   110,   107,   107,    89,    36,    36,
      36,   108,    36,    97,    36,   108,    36,    36,    36,    36,
      36,   108,   110,   110,   110,    95,     6,     9,    17,    22,
      23,    25,    26,    27,    31,    32,    40,    41,    43,    44,
      45,    46,    53,    54,    55,    56,    58,    61,    15,    36,
      63,    67,   115,    10,   108,   109,   110,   110,    53,    17,
     108,   108,    97,    10,   110,   110,     7,    53,    11,    48,
      11,    26,    11,    17,    26,    26,    52,    17,    36,    17,
      36,    97,    97,   108,    97,    97,   110,    10,    53,    11,
      53,   110,   110,    53,    89,    89,    97,    53,    97,    53,
      97,    17,    97,    97,    97,    97,    97,    53,    53,    53,
      53,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    36,    40,    87,    90,    98,    99,   108,    98,    97,
      97,    97,    98,    97,    98,    98,    97,    97,    90,   108,
      97,   105,   106,    15,    97,    11,    97,    11,    50,    10,
      10,    98,    52,    52,    52,    97,    10,    10,    36,   111,
     104,    97,   101,    97,    97,    97,    97,    52,    62,    64,
      65,    66,   100,   108,    97,    52,   100,    52,    11,    52,
      53,    52,    53,    90,   108,   113,    53,    53,    11,   116,
      11,    52,    11,    11,   108,   117,    52,    11,    11,    52,
      11,    98,    98,    40,    41,    46,    55,    56,    15,    63,
      15,    11,    52,   108,   110,   109,    97,    97,    53,    17,
      17,    97,    97,   108,    53,    17,   108,   108,   108,   108,
      52,   115,    53,    17,    52,   107,   108,    52,    97,   109,
     108,    11,    36,    53,    97,   108,   108,    52,    98,    98,
      98,    98,    98,    90,   108,   106,    97,    97,    11,    97,
      11,    11,   115,   115,    17,    11,    97,    17,    52,     7,
      52,    52,    52,   117,    52,   108,   118,    11,    11,    10,
      53,    53,   108,    53,   100,   100,    11,    11,    97,   100,
      53,    97,   108,    11,    10,    52,   108,   108,   108,   119,
      52,   100,   100,    53,    53,   116,   117,   108,    11,    11,
      11,    36,    52,    11,   117,   108,   108,    52,   119,   120,
     118,    52,    52,    11,    52,   120
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    92,    93,    94,    95,    95,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    99,    99,    99,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   101,   101,   102,   103,
     104,   104,   105,   105,   106,   106,   107,   107,   108,   109,
     109,   110,   110,   111,   111,   112,   113,   113,   114,   114,
     114,   115,   115,   116,   116,   117,   117,   117,   117,   117,
     117,   118,   118,   119,   119,   119,   120,   120,   121,   121
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     3,     3,     3,     7,
       7,     5,     3,     4,     4,     4,     8,     5,     7,     8,
       5,     7,     2,     4,     3,     3,     3,     3,     5,     3,
       3,     3,     1,     3,     3,     3,     3,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     1,     4,     1,     2,     4,     5,     5,     4,     5,
       5,     4,     4,     4,     4,     1,     1,     6,     4,     3,
       3,     3,     3,     3,     1,     1,     1,     3,     3,     3,
       3,     5,     6,     4,     6,    10,    10,     4,     6,     4,
       8,     4,     4,     3,     3,     3,     3,     3,     2,     1,
       1,     1,     3,     3,     5,     4,     4,     5,     5,     4,
       4,     2,     3,     3,     2,     2,     3,     1,     3,     1,
       3,     1,     1,     0,     3,     1,     3,     0,     1,     3,
       1,     4,     2,     3,     1,     7,     3,     1,     3,     3,
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
#line 103 "parser.y"
                             {
		
		 untypedAST=new MonaUntypedAST((yyvsp[0].declList));
		 try{
		 untypedAST->typeCheckDeclarations();
		 }catch(runtime_error e)
		 {
			yyerror(e.what());
		 }
		 untypedAST->createStrings();
		 HandleFiles handleFile{};
		handleFile.writeOnMonaFile(MFormat);
		handleFile.writeOnSMTLIBFile(smT); 
		
		}
#line 1825 "parser.cc"
    break;

  case 3: /* header: tokWS2S tokSEMICOLON  */
#line 120 "parser.y"
                               {}
#line 1831 "parser.cc"
    break;

  case 4: /* declarations: declaration declarations  */
#line 123 "parser.y"
                                       {if ((yyvsp[-1].declaration)) (yyvsp[0].declList)->push_front((yyvsp[-1].declaration)); (yyval.declList) = (yyvsp[0].declList);}
#line 1837 "parser.cc"
    break;

  case 5: /* declarations: declaration  */
#line 125 "parser.y"
                      {(yyval.declList) = new DeclarationList(); 
	         	if ((yyvsp[0].declaration)) (yyval.declList)->push_front((yyvsp[0].declaration));}
#line 1844 "parser.cc"
    break;

  case 6: /* declaration: tokASSERT exp tokSEMICOLON  */
#line 129 "parser.y"
                                        {}
#line 1850 "parser.cc"
    break;

  case 7: /* declaration: tokGUIDE func_list tokSEMICOLON  */
#line 131 "parser.y"
                                         {}
#line 1856 "parser.cc"
    break;

  case 8: /* declaration: tokUNIVERSE univs tokSEMICOLON  */
#line 133 "parser.y"
                                        {}
#line 1862 "parser.cc"
    break;

  case 9: /* declaration: tokDEFAULT1 tokLPAREN name tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 135 "parser.y"
                                                                         {}
#line 1868 "parser.cc"
    break;

  case 10: /* declaration: tokDEFAULT2 tokLPAREN name tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 137 "parser.y"
                                                                         {}
#line 1874 "parser.cc"
    break;

  case 11: /* declaration: tokCONST name tokEQUAL arith_exp tokSEMICOLON  */
#line 139 "parser.y"
                                                        {}
#line 1880 "parser.cc"
    break;

  case 12: /* declaration: tokVAR0 name_where_list tokSEMICOLON  */
#line 141 "parser.y"
                                              {(yyval.declaration)=new Variable_Declaration{Varname0,(yyvsp[-1].varDeclList)};}
#line 1886 "parser.cc"
    break;

  case 13: /* declaration: tokVAR1 universe name_where_list tokSEMICOLON  */
#line 143 "parser.y"
                                                       {(yyval.declaration) = new Variable_Declaration(Varname1,(yyvsp[-1].varDeclList));}
#line 1892 "parser.cc"
    break;

  case 14: /* declaration: tokVAR2 universe name_where_list tokSEMICOLON  */
#line 145 "parser.y"
                                                        {(yyval.declaration)=new Variable_Declaration{Varname2,(yyvsp[-1].varDeclList)};}
#line 1898 "parser.cc"
    break;

  case 15: /* declaration: tokTREE universe name_where_list tokSEMICOLON  */
#line 147 "parser.y"
                                                        {}
#line 1904 "parser.cc"
    break;

  case 16: /* declaration: tokPRED name tokLPAREN par_list tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 149 "parser.y"
                                                                              {}
#line 1910 "parser.cc"
    break;

  case 17: /* declaration: tokPRED name tokEQUAL exp tokSEMICOLON  */
#line 151 "parser.y"
                                                  {}
#line 1916 "parser.cc"
    break;

  case 18: /* declaration: tokPRED name tokLPAREN tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 153 "parser.y"
                                                                     {}
#line 1922 "parser.cc"
    break;

  case 19: /* declaration: tokMACRO name tokLPAREN par_list tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 155 "parser.y"
                                                                                {}
#line 1928 "parser.cc"
    break;

  case 20: /* declaration: tokMACRO name tokEQUAL exp tokSEMICOLON  */
#line 157 "parser.y"
                                                   {}
#line 1934 "parser.cc"
    break;

  case 21: /* declaration: tokMACRO name tokLPAREN tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 159 "parser.y"
                                                                       {}
#line 1940 "parser.cc"
    break;

  case 22: /* declaration: exp tokSEMICOLON  */
#line 161 "parser.y"
                           {(yyval.declaration) = new Expression_Declaration((yyvsp[-1].untypedExp));}
#line 1946 "parser.cc"
    break;

  case 23: /* declaration: tokVERIFY optstring exp tokSEMICOLON  */
#line 163 "parser.y"
                                               {}
#line 1952 "parser.cc"
    break;

  case 24: /* declaration: tokEXECUTE exp tokSEMICOLON  */
#line 165 "parser.y"
                                      {}
#line 1958 "parser.cc"
    break;

  case 25: /* declaration: tokINCLUDE tokSTRING tokSEMICOLON  */
#line 167 "parser.y"
                                            {}
#line 1964 "parser.cc"
    break;

  case 26: /* declaration: tokLASTPOS name tokSEMICOLON  */
#line 169 "parser.y"
                                               {}
#line 1970 "parser.cc"
    break;

  case 27: /* declaration: tokALLPOS name tokSEMICOLON  */
#line 171 "parser.y"
                                              {}
#line 1976 "parser.cc"
    break;

  case 28: /* declaration: tokTYPE name tokEQUAL variant_list tokSEMICOLON  */
#line 173 "parser.y"
                                                                {}
#line 1982 "parser.cc"
    break;

  case 29: /* declaration: tokINT name_where_list tokSEMICOLON  */
#line 175 "parser.y"
                                                      {(yyval.declaration) = new Variable_Declaration(Integer,(yyvsp[-1].varDeclList));}
#line 1988 "parser.cc"
    break;

  case 30: /* declaration: tokReal name_where_list tokSEMICOLON  */
#line 177 "parser.y"
                                                       {(yyval.declaration) = new Variable_Declaration(Real,(yyvsp[-1].varDeclList));}
#line 1994 "parser.cc"
    break;

  case 31: /* declaration: tokBool name_where_list tokSEMICOLON  */
#line 179 "parser.y"
                                                       {(yyval.declaration) = new Variable_Declaration(Boolean,(yyvsp[-1].varDeclList));}
#line 2000 "parser.cc"
    break;

  case 32: /* exp: name  */
#line 184 "parser.y"
               {(yyval.untypedExp) = new UntypedExp_Name(uName,(yyvsp[0].name));}
#line 2006 "parser.cc"
    break;

  case 33: /* exp: name tokDOT tokINT  */
#line 186 "parser.y"
                                     {check_bits(*(yyvsp[0].st));(yyval.untypedExp)=new UntypedExp_PathName{uPathName,(yyvsp[-2].name),(yyvsp[0].st)};}
#line 2012 "parser.cc"
    break;

  case 34: /* exp: tokLPAREN exp tokRPAREN  */
#line 188 "parser.y"
                                  {(yyval.untypedExp)=new UntypedExp_Paren{(yyvsp[-1].untypedExp)};}
#line 2018 "parser.cc"
    break;

  case 35: /* exp: exp tokSUB exp  */
#line 190 "parser.y"
                        {}
#line 2024 "parser.cc"
    break;

  case 36: /* exp: exp tokIN exp  */
#line 192 "parser.y"
                        {(yyval.untypedExp) = new UntypedExp_In((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2030 "parser.cc"
    break;

  case 37: /* exp: exp tokNOTIN exp  */
#line 194 "parser.y"
                          {(yyval.untypedExp) = new UntypedExp_NotIn((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2036 "parser.cc"
    break;

  case 38: /* exp: tokMIN exp  */
#line 196 "parser.y"
                    {}
#line 2042 "parser.cc"
    break;

  case 39: /* exp: tokMAX exp  */
#line 198 "parser.y"
                    {}
#line 2048 "parser.cc"
    break;

  case 40: /* exp: exp tokLESS exp  */
#line 200 "parser.y"
                           {(yyval.untypedExp) = new UntypedExp_Less((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2054 "parser.cc"
    break;

  case 41: /* exp: exp tokLESSEQ exp  */
#line 202 "parser.y"
                            {(yyval.untypedExp) = new UntypedExp_LessEq((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2060 "parser.cc"
    break;

  case 42: /* exp: exp tokGREATEREQ exp  */
#line 204 "parser.y"
                              {(yyval.untypedExp) = new UntypedExp_GreaterEq((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2066 "parser.cc"
    break;

  case 43: /* exp: exp tokGREATER exp  */
#line 206 "parser.y"
                             {(yyval.untypedExp) = new UntypedExp_Greater((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2072 "parser.cc"
    break;

  case 44: /* exp: exp tokEQUAL exp  */
#line 208 "parser.y"
                          {(yyval.untypedExp) = new UntypedExp_Equal((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2078 "parser.cc"
    break;

  case 45: /* exp: exp tokNOTEQUAL exp  */
#line 210 "parser.y"
                              {(yyval.untypedExp)=new UntypedExp_NotEqual((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2084 "parser.cc"
    break;

  case 46: /* exp: exp tokIMPL exp  */
#line 212 "parser.y"
                         {(yyval.untypedExp) = new UntypedExp_Impl((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2090 "parser.cc"
    break;

  case 47: /* exp: exp tokBIIMPL exp  */
#line 214 "parser.y"
                            {(yyval.untypedExp) = new UntypedExp_Biimpl((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2096 "parser.cc"
    break;

  case 48: /* exp: exp tokAND exp  */
#line 216 "parser.y"
                         {(yyval.untypedExp) = new UntypedExp_And((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2102 "parser.cc"
    break;

  case 49: /* exp: exp tokOR exp  */
#line 218 "parser.y"
                        {(yyval.untypedExp) = new UntypedExp_Or((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2108 "parser.cc"
    break;

  case 50: /* exp: tokNOT exp  */
#line 220 "parser.y"
                     {(yyval.untypedExp)=new UntypedExp_Not{(yyvsp[0].untypedExp)};}
#line 2114 "parser.cc"
    break;

  case 51: /* exp: dotExp  */
#line 222 "parser.y"
                         {(yyval.untypedExp)=(yyvsp[0].UntypedExpDotName);}
#line 2120 "parser.cc"
    break;

  case 52: /* exp: tokUNIVROOT tokLPAREN name tokRPAREN  */
#line 224 "parser.y"
                                               {}
#line 2126 "parser.cc"
    break;

  case 53: /* exp: tokUNIVROOT  */
#line 226 "parser.y"
                      {}
#line 2132 "parser.cc"
    break;

  case 54: /* exp: name tokUP  */
#line 228 "parser.y"
                     {(yyval.untypedExp) = new UntypedExp_NameUp((yyvsp[-1].name));}
#line 2138 "parser.cc"
    break;

  case 55: /* exp: tokEX0 name_where_list tokCOLON exp  */
#line 230 "parser.y"
                                              {(yyval.untypedExp) = new UntypedExp_Ex0((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2144 "parser.cc"
    break;

  case 56: /* exp: tokEX1 universe name_where_list tokCOLON exp  */
#line 232 "parser.y"
                                                       {(yyval.untypedExp) = new UntypedExp_Ex1((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2150 "parser.cc"
    break;

  case 57: /* exp: tokEX2 universe name_where_list tokCOLON exp  */
#line 234 "parser.y"
                                                       {(yyval.untypedExp) = new UntypedExp_Ex2((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2156 "parser.cc"
    break;

  case 58: /* exp: tokALL0 name_where_list tokCOLON exp  */
#line 236 "parser.y"
                                               {(yyval.untypedExp) = new UntypedExp_All0((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2162 "parser.cc"
    break;

  case 59: /* exp: tokALL1 universe name_where_list tokCOLON exp  */
#line 238 "parser.y"
                                                        {(yyval.untypedExp) = new UntypedExp_All1((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2168 "parser.cc"
    break;

  case 60: /* exp: tokALL2 universe name_where_list tokCOLON exp  */
#line 240 "parser.y"
                                                        {(yyval.untypedExp) = new UntypedExp_All2((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2174 "parser.cc"
    break;

  case 61: /* exp: tokLET0 defs tokIN exp  */
#line 242 "parser.y"
                                             {}
#line 2180 "parser.cc"
    break;

  case 62: /* exp: tokLET1 defs tokIN exp  */
#line 244 "parser.y"
                                            {}
#line 2186 "parser.cc"
    break;

  case 63: /* exp: tokLET2 defs tokIN exp  */
#line 246 "parser.y"
                                             {}
#line 2192 "parser.cc"
    break;

  case 64: /* exp: name tokLPAREN exp_list tokRPAREN  */
#line 248 "parser.y"
                                            {}
#line 2198 "parser.cc"
    break;

  case 65: /* exp: tokTRUE  */
#line 250 "parser.y"
                  {(yyval.untypedExp)=new UntypedExp_True();}
#line 2204 "parser.cc"
    break;

  case 66: /* exp: tokFALSE  */
#line 252 "parser.y"
                   {(yyval.untypedExp) = new UntypedExp_False();}
#line 2210 "parser.cc"
    break;

  case 67: /* exp: tokUNIVROOT tokLPAREN exp tokCOMMA universe tokRPAREN  */
#line 254 "parser.y"
                                                                {}
#line 2216 "parser.cc"
    break;

  case 68: /* exp: tokEMPTY tokLPAREN exp tokRPAREN  */
#line 256 "parser.y"
                                           {}
#line 2222 "parser.cc"
    break;

  case 69: /* exp: exp tokPLUS arith_exp  */
#line 258 "parser.y"
                                {(yyval.untypedExp) = new UntypedExp_Plus((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2228 "parser.cc"
    break;

  case 70: /* exp: exp tokMINUS arith_exp  */
#line 260 "parser.y"
                                 {(yyval.untypedExp) = new UntypedExp_Minus((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2234 "parser.cc"
    break;

  case 71: /* exp: exp tokSTAR arith_exp  */
#line 262 "parser.y"
                                {(yyval.untypedExp) = new UntypedExp_Mult((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2240 "parser.cc"
    break;

  case 72: /* exp: exp tokSLASH arith_exp  */
#line 264 "parser.y"
                                 {(yyval.untypedExp) = new UntypedExp_Div((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2246 "parser.cc"
    break;

  case 73: /* exp: exp tokMODULO arith_exp  */
#line 266 "parser.y"
                                   {(yyval.untypedExp) = new UntypedExp_Modul((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2252 "parser.cc"
    break;

  case 74: /* exp: tokEMPTY  */
#line 268 "parser.y"
                  {}
#line 2258 "parser.cc"
    break;

  case 75: /* exp: tokINT  */
#line 270 "parser.y"
                         {(yyval.untypedExp) = new UntypedExp_Int(stoi(*(yyvsp[0].st)));}
#line 2264 "parser.cc"
    break;

  case 76: /* exp: tokReal  */
#line 272 "parser.y"
                         {(yyval.untypedExp)=new UntypedExp_Real{(yyvsp[0].doubleVal)};}
#line 2270 "parser.cc"
    break;

  case 77: /* exp: tokLBRACE set_body tokRBRACE  */
#line 274 "parser.y"
                                      {(yyval.untypedExp) = new UntypedExp_Set((yyvsp[-1].varDeclList));}
#line 2276 "parser.cc"
    break;

  case 78: /* exp: exp tokUNION exp  */
#line 276 "parser.y"
                           {}
#line 2282 "parser.cc"
    break;

  case 79: /* exp: exp tokINTER exp  */
#line 278 "parser.y"
                           {}
#line 2288 "parser.cc"
    break;

  case 80: /* exp: exp tokSETMINUS exp  */
#line 280 "parser.y"
                              {}
#line 2294 "parser.cc"
    break;

  case 81: /* exp: tokIMPORT tokLPAREN tokSTRING map_list tokRPAREN  */
#line 282 "parser.y"
                                                           {}
#line 2300 "parser.cc"
    break;

  case 82: /* exp: tokEXPORT tokLPAREN tokSTRING tokCOMMA exp tokRPAREN  */
#line 284 "parser.y"
                                                              {}
#line 2306 "parser.cc"
    break;

  case 83: /* exp: tokPREFIX tokLPAREN exp tokRPAREN  */
#line 286 "parser.y"
                                           {}
#line 2312 "parser.cc"
    break;

  case 84: /* exp: tokINSTATESPACE tokLPAREN exp tokCOMMA name_list tokRPAREN  */
#line 288 "parser.y"
                                                                    {}
#line 2318 "parser.cc"
    break;

  case 85: /* exp: tokVARIANT tokLPAREN exp tokCOMMA exp tokCOMMA name tokCOMMA name tokRPAREN  */
#line 291 "parser.y"
                                 {}
#line 2324 "parser.cc"
    break;

  case 86: /* exp: tokSUCC tokLPAREN exp tokCOMMA name tokCOMMA name tokCOMMA name tokRPAREN  */
#line 294 "parser.y"
                        {}
#line 2330 "parser.cc"
    break;

  case 87: /* exp: tokTREE tokLPAREN exp tokRPAREN  */
#line 296 "parser.y"
                                         {}
#line 2336 "parser.cc"
    break;

  case 88: /* exp: tokTYPE tokLPAREN exp tokCOMMA name tokRPAREN  */
#line 298 "parser.y"
                                                       {}
#line 2342 "parser.cc"
    break;

  case 89: /* exp: tokSOMETYPE tokLPAREN exp tokRPAREN  */
#line 300 "parser.y"
                                             {}
#line 2348 "parser.cc"
    break;

  case 90: /* exp: tokCONSTTREE tokLPAREN exp tokCOMMA name tokCOLON constnode tokRPAREN  */
#line 303 "parser.y"
                             {}
#line 2354 "parser.cc"
    break;

  case 91: /* exp: tokTREEROOT tokLPAREN exp tokRPAREN  */
#line 305 "parser.y"
                                             {}
#line 2360 "parser.cc"
    break;

  case 92: /* exp: tokRESTRICT tokLPAREN exp tokRPAREN  */
#line 307 "parser.y"
                                             {}
#line 2366 "parser.cc"
    break;

  case 93: /* arith_exp: arith_exp tokPLUS arith_exp  */
#line 312 "parser.y"
                                       {(yyval.arithExp) = new ArithExp_Add((yyvsp[-2].arithExp), (yyvsp[0].arithExp));}
#line 2372 "parser.cc"
    break;

  case 94: /* arith_exp: arith_exp tokMINUS arith_exp  */
#line 314 "parser.y"
                                       {(yyval.arithExp) = new ArithExp_Subtr((yyvsp[-2].arithExp), (yyvsp[0].arithExp));}
#line 2378 "parser.cc"
    break;

  case 95: /* arith_exp: arith_exp tokSTAR arith_exp  */
#line 316 "parser.y"
                                      {(yyval.arithExp) = new ArithExp_Mult((yyvsp[-2].arithExp), (yyvsp[0].arithExp));}
#line 2384 "parser.cc"
    break;

  case 96: /* arith_exp: arith_exp tokSLASH arith_exp  */
#line 318 "parser.y"
                                       {(yyval.arithExp) = new ArithExp_Div((yyvsp[-2].arithExp), (yyvsp[0].arithExp));}
#line 2390 "parser.cc"
    break;

  case 97: /* arith_exp: arith_exp tokMODULO arith_exp  */
#line 320 "parser.y"
                                       {(yyval.arithExp)=new ArithExp_Modul((yyvsp[-2].arithExp),(yyvsp[0].arithExp));}
#line 2396 "parser.cc"
    break;

  case 98: /* arith_exp: tokMINUS arith_exp  */
#line 322 "parser.y"
                             {}
#line 2402 "parser.cc"
    break;

  case 99: /* arith_exp: tokINT  */
#line 325 "parser.y"
        {
		(yyval.arithExp) = new ArithExp_Integer(stoi(*(yyvsp[0].st)));
	}
#line 2410 "parser.cc"
    break;

  case 100: /* arith_exp: tokReal  */
#line 329 "parser.y"
                 {(yyval.arithExp)=new ArithExp_Real{(yyvsp[0].doubleVal)};}
#line 2416 "parser.cc"
    break;

  case 101: /* arith_exp: dotExp  */
#line 331 "parser.y"
                 {
					if((yyvsp[0].UntypedExpDotName)->kind==uDotName)
						(yyval.arithExp)=new AritExp_ConstDotName{(yyvsp[0].UntypedExpDotName)->dotName};
					else{
						UntypedExp_DotNameNumber* dotwithPath=static_cast<UntypedExp_DotNameNumber*>((yyvsp[0].UntypedExpDotName));
						(yyval.arithExp)=new ArithExp_ConstPathDotName{dotwithPath->dotName,dotwithPath->path};
					}
		}
#line 2429 "parser.cc"
    break;

  case 102: /* arith_exp: tokLPAREN arith_exp tokRPAREN  */
#line 340 "parser.y"
                                        {}
#line 2435 "parser.cc"
    break;

  case 103: /* dotExp: name tokDOT name  */
#line 344 "parser.y"
                                 {(yyval.UntypedExpDotName)=new UntypedExp_DotName{new DotName{(yyvsp[-2].name),(yyvsp[0].name)}};}
#line 2441 "parser.cc"
    break;

  case 104: /* dotExp: name tokDOT tokINT tokDOT name  */
#line 346 "parser.y"
                                                        {checkNameIntName(*(yyvsp[-2].st));(yyval.UntypedExpDotName)=new UntypedExp_DotNameNumber{new DotName{(yyvsp[-4].name),(yyvsp[0].name)},(yyvsp[-2].st)};}
#line 2447 "parser.cc"
    break;

  case 105: /* dotExp: name tokUP tokDOT name  */
#line 348 "parser.y"
                                                 {(yyval.UntypedExpDotName)=new UntypedExp_DotNameUp{new DotName{(yyvsp[-3].name),(yyvsp[0].name)}};}
#line 2453 "parser.cc"
    break;

  case 106: /* par_list: tokVAR0 name tokCOMMA par_list  */
#line 352 "parser.y"
                                         {}
#line 2459 "parser.cc"
    break;

  case 107: /* par_list: tokVAR1 name where tokCOMMA par_list  */
#line 354 "parser.y"
                                              {}
#line 2465 "parser.cc"
    break;

  case 108: /* par_list: tokVAR2 name where tokCOMMA par_list  */
#line 356 "parser.y"
                                              {}
#line 2471 "parser.cc"
    break;

  case 109: /* par_list: tokUNIVERSE name tokCOMMA par_list  */
#line 358 "parser.y"
                                             {}
#line 2477 "parser.cc"
    break;

  case 110: /* par_list: name where tokCOMMA par_list  */
#line 360 "parser.y"
                                       {}
#line 2483 "parser.cc"
    break;

  case 111: /* par_list: tokVAR0 name  */
#line 362 "parser.y"
                       {}
#line 2489 "parser.cc"
    break;

  case 112: /* par_list: tokVAR1 name where  */
#line 364 "parser.y"
                             {}
#line 2495 "parser.cc"
    break;

  case 113: /* par_list: tokVAR2 name where  */
#line 366 "parser.y"
                            {}
#line 2501 "parser.cc"
    break;

  case 114: /* par_list: tokUNIVERSE name  */
#line 368 "parser.y"
                           {}
#line 2507 "parser.cc"
    break;

  case 115: /* par_list: name where  */
#line 370 "parser.y"
                    {}
#line 2513 "parser.cc"
    break;

  case 116: /* defs: def tokCOMMA defs  */
#line 375 "parser.y"
                           {}
#line 2519 "parser.cc"
    break;

  case 117: /* defs: def  */
#line 377 "parser.y"
              {}
#line 2525 "parser.cc"
    break;

  case 118: /* def: name tokEQUAL exp  */
#line 381 "parser.y"
                           {}
#line 2531 "parser.cc"
    break;

  case 119: /* set_body: non_empty_set_body  */
#line 385 "parser.y"
                            {}
#line 2537 "parser.cc"
    break;

  case 120: /* non_empty_set_body: name tokCOMMA non_empty_set_body  */
#line 389 "parser.y"
                                                    {(yyvsp[0].varDeclList)->push_back(new VarDecl{(yyvsp[-2].name),nullptr});(yyval.varDeclList)=(yyvsp[0].varDeclList);}
#line 2543 "parser.cc"
    break;

  case 121: /* non_empty_set_body: name  */
#line 391 "parser.y"
              {(yyval.varDeclList)=new VarDeclList{}; (yyval.varDeclList)->push_back(new VarDecl{(yyvsp[0].name),nullptr});}
#line 2549 "parser.cc"
    break;

  case 122: /* exp_list: non_empty_exp_list  */
#line 395 "parser.y"
                            {}
#line 2555 "parser.cc"
    break;

  case 123: /* exp_list: %empty  */
#line 397 "parser.y"
                     {}
#line 2561 "parser.cc"
    break;

  case 124: /* non_empty_exp_list: exp tokCOMMA non_empty_exp_list  */
#line 401 "parser.y"
                                                   {}
#line 2567 "parser.cc"
    break;

  case 125: /* non_empty_exp_list: exp  */
#line 403 "parser.y"
              {}
#line 2573 "parser.cc"
    break;

  case 126: /* universe: tokLBRACKET name_list tokRBRACKET  */
#line 407 "parser.y"
                                           {}
#line 2579 "parser.cc"
    break;

  case 127: /* universe: %empty  */
#line 409 "parser.y"
                     {}
#line 2585 "parser.cc"
    break;

  case 128: /* name: tokNAME  */
#line 414 "parser.y"
                {(yyval.name) = new Name((yyvsp[0].st));}
#line 2591 "parser.cc"
    break;

  case 129: /* name_list: name tokCOMMA name_list  */
#line 418 "parser.y"
                                  {}
#line 2597 "parser.cc"
    break;

  case 130: /* name_list: name  */
#line 420 "parser.y"
              {}
#line 2603 "parser.cc"
    break;

  case 131: /* name_where_list: name where tokCOMMA name_where_list  */
#line 425 "parser.y"
                {(yyvsp[0].varDeclList)->push_front(new VarDecl((yyvsp[-3].name),nullptr)); 
		 (yyval.varDeclList) = (yyvsp[0].varDeclList);}
#line 2610 "parser.cc"
    break;

  case 132: /* name_where_list: name where  */
#line 428 "parser.y"
                {(yyval.varDeclList) = new VarDeclList(); 
		 (yyval.varDeclList)->push_front(new VarDecl((yyvsp[-1].name),nullptr));}
#line 2617 "parser.cc"
    break;

  case 133: /* func_list: func tokCOMMA func_list  */
#line 433 "parser.y"
                                  {}
#line 2623 "parser.cc"
    break;

  case 134: /* func_list: func  */
#line 435 "parser.y"
              {}
#line 2629 "parser.cc"
    break;

  case 135: /* func: name tokARROW tokLPAREN name tokCOMMA name tokRPAREN  */
#line 439 "parser.y"
                                                              {}
#line 2635 "parser.cc"
    break;

  case 136: /* univs: univ tokCOMMA univs  */
#line 443 "parser.y"
                             {}
#line 2641 "parser.cc"
    break;

  case 137: /* univs: univ  */
#line 445 "parser.y"
              {}
#line 2647 "parser.cc"
    break;

  case 138: /* univ: name tokCOLON tokINT  */
#line 449 "parser.y"
                              {}
#line 2653 "parser.cc"
    break;

  case 139: /* univ: name tokCOLON name  */
#line 451 "parser.y"
                            {}
#line 2659 "parser.cc"
    break;

  case 140: /* univ: name  */
#line 453 "parser.y"
              {}
#line 2665 "parser.cc"
    break;

  case 141: /* where: tokWHERE exp  */
#line 457 "parser.y"
                      {}
#line 2671 "parser.cc"
    break;

  case 142: /* where: %empty  */
#line 459 "parser.y"
                     {}
#line 2677 "parser.cc"
    break;

  case 143: /* map_list: tokCOMMA name tokARROW name map_list  */
#line 463 "parser.y"
                                              {}
#line 2683 "parser.cc"
    break;

  case 144: /* map_list: %empty  */
#line 465 "parser.y"
                     {}
#line 2689 "parser.cc"
    break;

  case 145: /* variant_list: name tokLPAREN component_list tokRPAREN tokCOMMA variant_list  */
#line 469 "parser.y"
                                                                           {}
#line 2695 "parser.cc"
    break;

  case 146: /* variant_list: name tokLPAREN tokRPAREN tokCOMMA variant_list  */
#line 471 "parser.y"
                                                        {}
#line 2701 "parser.cc"
    break;

  case 147: /* variant_list: name tokCOMMA variant_list  */
#line 473 "parser.y"
                                    {}
#line 2707 "parser.cc"
    break;

  case 148: /* variant_list: name tokLPAREN component_list tokRPAREN  */
#line 475 "parser.y"
                                                 {}
#line 2713 "parser.cc"
    break;

  case 149: /* variant_list: name tokLPAREN tokRPAREN  */
#line 477 "parser.y"
                                  {}
#line 2719 "parser.cc"
    break;

  case 150: /* variant_list: name  */
#line 479 "parser.y"
              {}
#line 2725 "parser.cc"
    break;

  case 151: /* component_list: name tokCOLON name tokCOMMA component_list  */
#line 483 "parser.y"
                                                          {}
#line 2731 "parser.cc"
    break;

  case 152: /* component_list: name tokCOLON name  */
#line 485 "parser.y"
                            {}
#line 2737 "parser.cc"
    break;

  case 153: /* constnode: name tokLPAREN constnode_list tokRPAREN  */
#line 489 "parser.y"
                                                  {}
#line 2743 "parser.cc"
    break;

  case 154: /* constnode: name tokLPAREN tokRPAREN  */
#line 491 "parser.y"
                                  {}
#line 2749 "parser.cc"
    break;

  case 155: /* constnode: name  */
#line 493 "parser.y"
              {}
#line 2755 "parser.cc"
    break;

  case 156: /* constnode_list: constnode tokCOMMA constnode_list  */
#line 497 "parser.y"
                                                 {}
#line 2761 "parser.cc"
    break;

  case 157: /* constnode_list: constnode  */
#line 499 "parser.y"
                   {}
#line 2767 "parser.cc"
    break;

  case 158: /* optstring: tokSTRING  */
#line 503 "parser.y"
                    {}
#line 2773 "parser.cc"
    break;

  case 159: /* optstring: %empty  */
#line 505 "parser.y"
                      {}
#line 2779 "parser.cc"
    break;


#line 2783 "parser.cc"

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

#line 510 "parser.y"

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
	std::cout<<"Error near line "+to_string(yylineno)+": "+string(msg);
	if(untypedAST!=nullptr)
		delete untypedAST->declarations;
	exit(-1);
}
