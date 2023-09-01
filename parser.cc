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
#define YYLAST   2101

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  156
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  421

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
     280,   282,   284,   286,   289,   292,   294,   296,   298,   301,
     303,   308,   310,   312,   314,   316,   318,   320,   325,   327,
     336,   340,   342,   346,   348,   350,   352,   354,   356,   358,
     360,   362,   364,   369,   371,   375,   379,   383,   385,   389,
     391,   395,   397,   401,   403,   407,   412,   414,   418,   421,
     427,   429,   433,   437,   439,   443,   445,   447,   451,   453,
     457,   459,   463,   465,   467,   469,   471,   473,   477,   479,
     483,   485,   487,   491,   493,   497,   499
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

#define YYPACT_NINF (-317)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -59,   -29,    26,   611,  -317,  -317,   -53,    20,    20,   473,
     -53,    34,    35,    47,   -53,    20,    20,  -317,   -53,   -53,
     -53,   -53,   -53,   473,   -53,   473,   473,   473,   -53,    66,
      67,   -34,    48,  -317,   -53,   -53,    20,    20,    24,    74,
      80,    82,   -53,    87,   473,   -19,    94,    95,    96,   104,
     107,   -53,  -317,   -53,   -53,   -53,  -317,   611,   694,  -317,
       6,    77,   136,   -53,   -53,   -53,   118,   119,   736,   139,
     -53,   -53,   473,   147,   -53,   -53,   152,   108,   154,   115,
    -317,   160,   148,   166,   161,   165,   168,   778,    37,   112,
     112,   189,    46,   473,   473,  -317,   473,   473,   -53,   170,
     149,   181,   150,   -53,   -53,   151,   111,   116,   473,   164,
     473,   820,   473,   184,   473,   473,   473,   473,   473,   169,
     171,   174,   175,  -317,   473,   473,   473,   473,   473,   473,
     473,   473,   473,   473,     4,     4,   473,   473,   473,     4,
    -317,   473,     4,     4,   473,   473,  -317,     3,   473,   473,
     196,   473,   207,   173,   209,   224,  -317,     4,   190,   194,
     862,   473,   227,   241,   217,  -317,   -53,  -317,   -53,   473,
     -53,   473,   473,   473,  -317,   473,    83,   473,   124,   904,
     946,    10,   988,  1030,   201,    19,  -317,   -53,  -317,   202,
     203,  -317,   246,   247,  1072,  -317,  1114,  -317,  1156,   -53,
    1198,  1240,  1282,  1324,  1366,  -317,  -317,  -317,  -317,   189,
    1870,  2038,  2038,  2038,  1912,   538,   185,  2038,  2038,     4,
       4,  -317,  -317,    65,  -317,   249,  -317,  2038,   538,  1996,
      65,    71,  -317,  -317,   538,   288,   256,  -317,  1408,   222,
    -317,  1870,   -53,  1870,   -53,  -317,   473,   473,   232,   258,
     259,  -317,  1870,   473,   473,   -53,  -317,  -317,  1870,  -317,
    1954,  1870,  1870,  1450,   260,   -53,   -53,   -53,   -53,   228,
      77,  1492,   264,   230,  -317,    20,  -317,  -317,  -317,  -317,
    -317,  -317,  -317,  -317,  -317,   -53,   234,   473,  -317,   -53,
     -53,    30,   237,  -317,   473,   -53,  -317,   -53,   271,    65,
       4,     4,     4,     4,     4,    52,   -53,   473,  -317,  -317,
    -317,  1870,  1870,  -317,   473,   473,  1870,  1870,   281,  -317,
     473,   282,   290,    77,    77,   286,   294,  -317,   473,   287,
     254,   300,  -317,  1534,   257,   261,   -53,   -43,  -317,  1576,
     297,   304,  -317,    65,  -317,    65,  -317,  -317,   256,  -317,
    -317,  1618,  1660,   -53,  1702,    15,    15,   299,   310,   473,
      15,  1744,   473,  -317,   -53,  -317,  -317,  -317,  -317,   311,
     314,   273,   -53,   -53,   -53,  -317,  -317,   280,  -317,  -317,
    -317,    15,    15,  1786,  -317,  -317,  1828,   246,   -53,   -53,
     322,   324,   325,   302,   289,  -317,  -317,  -317,  -317,  -317,
    -317,  -317,   328,   -53,   -53,   -53,   -33,  -317,   -53,  -317,
     296,   301,  -317,   329,   303,  -317,  -317,  -317,   -53,  -317,
    -317
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     1,     0,   124,   124,     0,
       0,     0,     0,    74,     0,   124,   124,    66,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,   156,   124,    65,     0,     0,   124,   124,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   125,     0,     0,     0,     2,     5,     0,    51,
      32,   139,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   131,     0,
     116,   118,     0,   114,     0,     0,     0,     0,     0,    39,
      38,    50,     0,     0,     0,   155,     0,     0,     0,   137,
       0,   134,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,    54,     0,   120,     0,
     129,     0,   127,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     7,     0,    75,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,     0,     8,     0,    12,     0,
       0,    25,   141,     0,     0,    26,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    27,    30,    31,    29,    48,
      47,    44,    43,    42,    46,    36,    77,    40,    41,     0,
       0,    98,    97,    70,    99,     0,    73,    45,    37,    49,
      69,    78,    72,    71,    35,    76,    33,   101,   122,     0,
     119,   138,     0,    58,     0,   123,     0,     0,     0,     0,
       0,    68,    55,     0,     0,     0,   130,   117,    61,   113,
     115,    62,    63,     0,     0,     0,     0,     0,     0,     0,
     139,     0,     0,     0,    90,   124,    52,    23,    85,    15,
     135,   136,   133,    13,    14,     0,     0,     0,    81,     0,
       0,   147,     0,    87,     0,     0,    89,     0,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     0,    64,   128,
     126,    59,    60,    11,     0,     0,    56,    57,     0,    20,
       0,   111,   108,   139,   139,     0,   112,    17,     0,     0,
       0,     0,    79,     0,     0,     0,     0,     0,    28,     0,
       0,     0,   100,    92,    95,    91,    94,    93,     0,   102,
     121,     0,     0,     0,     0,     0,     0,   109,   110,     0,
       0,     0,     0,    67,     0,    80,    82,    86,   144,   146,
       0,     0,     0,     0,     0,     9,    10,     0,    21,   106,
     103,     0,     0,     0,   107,    18,     0,   141,     0,     0,
     145,     0,     0,   152,     0,   132,   104,   105,    19,    16,
     140,   143,   149,     0,     0,     0,     0,    88,     0,   142,
       0,     0,   151,   154,     0,   148,    83,    84,     0,   150,
     153
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -317,  -317,  -317,   295,  -317,   293,  -105,   -35,  -173,   -20,
    -317,  -317,   177,  -317,    39,    -5,    -6,  -238,    21,   191,
    -317,   172,  -317,  -263,   -31,  -316,   -48,   -13,   -56,  -317
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,    56,    57,    58,   223,    59,   269,    82,
      83,    79,    80,   239,   240,    64,    60,   153,    62,    77,
      78,   100,   101,   150,   286,   292,   371,   413,   414,    96
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,    85,    86,    65,    69,   273,   310,   326,    61,   369,
      74,    75,    76,    81,    84,    84,    84,   112,    88,   412,
     368,   147,    92,     1,     4,   147,     5,    98,    99,    61,
     226,   103,   104,    52,   230,    73,   109,   232,   233,   113,
     219,   336,   148,    52,   220,   119,   148,    61,    61,    61,
      63,   334,   248,    52,   175,    95,   102,   152,    61,    61,
     357,   358,   276,   177,   158,   159,   337,    52,    61,    61,
      70,    71,   401,   176,   120,   121,   122,   265,    63,   266,
     267,   268,   178,    72,    97,   154,   155,   409,   181,    52,
      52,   221,    61,   236,   222,   162,   163,    61,    61,   224,
     224,    52,    93,    94,   224,    52,   301,   224,   224,   280,
     106,   134,   135,   105,   298,   299,   107,   139,   108,   184,
     303,   304,   224,   110,   189,   190,   142,   143,   225,   225,
     114,   115,   116,   225,   146,   264,   225,   225,    52,   131,
     117,   237,   348,   118,   149,   265,   151,   266,   267,   268,
     259,   225,   134,   135,    97,   112,   157,   161,   139,   164,
      76,   165,    81,   167,    84,   166,   141,   142,   143,    52,
     270,   168,   270,   145,   169,   146,   272,   170,   171,   281,
     185,    99,   379,   380,   224,   224,   265,   384,   266,   267,
     268,   172,   187,   291,   173,   343,   344,   345,   346,   347,
     192,   199,   186,   188,   191,   193,   126,   242,   396,   397,
      52,   127,   128,   225,   225,   130,   131,   195,   244,   246,
     132,   133,   205,   245,   206,   134,   135,   207,   208,   134,
     135,   139,   136,   137,   247,   139,    61,   253,   152,   141,
     142,   143,   249,   141,   142,   143,   250,   144,   146,   318,
     145,   254,   146,   255,   279,   283,   284,   285,   287,   321,
     322,   323,   324,   309,   305,   224,   224,   224,   224,   224,
     330,   306,   300,   301,   308,   314,   315,   320,   302,   331,
     325,   328,   329,   152,   335,   313,   332,   303,   304,   340,
     338,   341,   353,   355,   225,   225,   225,   225,   225,   237,
     349,   356,    68,   359,   362,   360,   363,   364,   373,   366,
     381,   300,   301,   367,   374,   131,    87,   302,    89,    90,
      91,   382,   388,   342,   389,   390,   303,   304,   134,   135,
     291,   370,   395,   403,   139,   404,   405,   111,   406,   408,
     418,   407,   141,   142,   143,   257,   350,   377,   416,   270,
     270,   146,   123,   417,   270,   419,   400,   256,   387,   282,
     415,   394,   420,     0,     0,   160,   391,   392,   393,     0,
       0,     0,     0,     0,     0,   270,   270,     0,     0,     0,
       0,     0,   291,   402,     0,     0,   179,   180,     0,   182,
     183,     0,     0,     0,     0,     0,     0,   291,   410,   411,
     393,   194,   370,   196,     0,   198,     0,   200,   201,   202,
     203,   204,   393,     0,     0,     0,     0,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,     0,     0,   227,
     228,   229,     0,     0,   231,     0,     0,   234,   235,     0,
       0,   238,   241,     0,   243,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   252,     0,     0,     0,     0,     0,
       0,     0,   258,     0,   260,   261,   262,     0,   263,     0,
     271,     0,     0,     0,     0,     0,     6,     7,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,    20,    21,    22,    23,
       0,    25,    26,     0,     0,    27,     0,     0,     0,     0,
       0,     0,    29,     0,    30,     0,     0,     0,     0,     0,
       0,     0,    66,    33,     0,     0,     0,     0,     0,   311,
     312,     0,    39,    40,    41,     0,   316,   317,    43,     0,
      67,    46,    47,    48,     0,   126,    49,    50,     0,    52,
     127,   128,     0,     0,    -1,   131,     0,     0,     0,   132,
     133,     0,     0,     0,     0,     0,     0,     0,   134,   135,
     333,   136,    -1,     0,   139,     0,     0,   339,     0,     0,
       0,     0,   141,   142,   143,     0,    -1,     0,     0,   145,
     238,   146,     0,     0,     0,     0,     0,   351,   352,     0,
       0,     0,     0,   354,     6,     7,     8,     0,     0,     9,
       0,   361,     0,    10,    11,    12,     0,    13,     0,    14,
      15,    16,    17,     0,     0,    18,     0,     0,     0,     0,
      19,     0,     0,     0,    20,    21,    22,    23,    24,    25,
      26,     0,   383,    27,     0,   386,     0,     0,    28,     0,
      29,     0,    30,     0,     0,     0,     0,     0,    31,     0,
      32,    33,     0,    34,     0,    35,    36,    37,     0,    38,
      39,    40,    41,     0,     0,    42,    43,    44,    45,    46,
      47,    48,     0,     0,    49,    50,    51,    52,    53,    54,
     124,    55,     0,   125,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,     0,   127,   128,     0,   129,
     130,   131,     0,     0,     0,   132,   133,     0,     0,     0,
       0,     0,     0,     0,   134,   135,     0,   136,   137,   138,
     139,     0,   124,     0,     0,   125,     0,   140,   141,   142,
     143,     0,   144,   126,     0,   145,     0,   146,   127,   128,
       0,   129,   130,   131,     0,     0,     0,   132,   133,     0,
       0,     0,     0,     0,     0,     0,   134,   135,     0,   136,
     137,   138,   139,     0,   124,     0,     0,   125,     0,   156,
     141,   142,   143,     0,   144,   126,     0,   145,     0,   146,
     127,   128,     0,   129,   130,   131,     0,     0,     0,   132,
     133,     0,     0,     0,     0,     0,     0,     0,   134,   135,
       0,   136,   137,   138,   139,     0,   124,     0,     0,   125,
     174,     0,   141,   142,   143,     0,   144,   126,     0,   145,
       0,   146,   127,   128,     0,   129,   130,   131,     0,     0,
       0,   132,   133,     0,     0,     0,     0,     0,     0,     0,
     134,   135,     0,   136,   137,   138,   139,     0,   124,     0,
       0,   125,     0,   197,   141,   142,   143,     0,   144,   126,
       0,   145,     0,   146,   127,   128,     0,   129,   130,   131,
       0,     0,     0,   132,   133,     0,     0,     0,     0,     0,
       0,     0,   134,   135,     0,   136,   137,   138,   139,     0,
     124,     0,     0,   125,   251,     0,   141,   142,   143,     0,
     144,   126,     0,   145,     0,   146,   127,   128,     0,   129,
     130,   131,     0,     0,     0,   132,   133,     0,     0,     0,
       0,     0,     0,     0,   134,   135,     0,   136,   137,   138,
     139,     0,   124,     0,     0,   125,   274,   275,   141,   142,
     143,     0,   144,   126,     0,   145,     0,   146,   127,   128,
       0,   129,   130,   131,     0,     0,     0,   132,   133,     0,
       0,     0,     0,     0,     0,     0,   134,   135,     0,   136,
     137,   138,   139,     0,   124,     0,     0,   125,     0,     0,
     141,   142,   143,     0,   144,   126,     0,   145,     0,   146,
     127,   128,     0,   129,   130,   131,     0,     0,     0,   132,
     133,     0,     0,     0,     0,     0,     0,     0,   134,   135,
       0,   136,   137,   138,   139,     0,   124,     0,     0,   125,
       0,   277,   141,   142,   143,     0,   144,   126,     0,   145,
       0,   146,   127,   128,     0,   129,   130,   131,     0,     0,
       0,   132,   133,     0,     0,     0,     0,     0,     0,     0,
     134,   135,     0,   136,   137,   138,   139,     0,   124,     0,
       0,   125,   278,     0,   141,   142,   143,     0,   144,   126,
       0,   145,     0,   146,   127,   128,     0,   129,   130,   131,
       0,     0,     0,   132,   133,     0,     0,     0,     0,     0,
       0,     0,   134,   135,     0,   136,   137,   138,   139,     0,
     124,     0,     0,   125,   288,   289,   141,   142,   143,     0,
     144,   126,     0,   145,     0,   146,   127,   128,     0,   129,
     130,   131,     0,     0,     0,   132,   133,     0,     0,     0,
       0,     0,     0,     0,   134,   135,     0,   136,   137,   138,
     139,     0,   124,     0,     0,   125,     0,   290,   141,   142,
     143,     0,   144,   126,     0,   145,     0,   146,   127,   128,
       0,   129,   130,   131,     0,     0,     0,   132,   133,     0,
       0,     0,     0,     0,     0,     0,   134,   135,     0,   136,
     137,   138,   139,     0,   124,     0,     0,   125,     0,     0,
     141,   142,   143,     0,   144,   126,     0,   145,     0,   146,
     127,   128,     0,   129,   130,   131,     0,     0,     0,   132,
     133,     0,     0,     0,     0,     0,     0,     0,   134,   135,
       0,   136,   137,   138,   139,     0,   124,     0,     0,   125,
     293,   294,   141,   142,   143,     0,   144,   126,     0,   145,
       0,   146,   127,   128,     0,   129,   130,   131,     0,     0,
       0,   132,   133,     0,     0,     0,     0,     0,     0,     0,
     134,   135,     0,   136,   137,   138,   139,     0,   124,     0,
       0,   125,     0,   295,   141,   142,   143,     0,   144,   126,
       0,   145,     0,   146,   127,   128,     0,   129,   130,   131,
       0,     0,     0,   132,   133,     0,     0,     0,     0,     0,
       0,     0,   134,   135,     0,   136,   137,   138,   139,     0,
     124,     0,     0,   125,     0,     0,   141,   142,   143,     0,
     144,   126,     0,   145,     0,   146,   127,   128,     0,   129,
     130,   131,     0,     0,     0,   132,   133,     0,     0,     0,
       0,     0,     0,     0,   134,   135,     0,   136,   137,   138,
     139,     0,   124,     0,     0,   125,   296,   297,   141,   142,
     143,     0,   144,   126,     0,   145,     0,   146,   127,   128,
       0,   129,   130,   131,     0,     0,     0,   132,   133,     0,
       0,     0,     0,     0,     0,     0,   134,   135,     0,   136,
     137,   138,   139,     0,   124,     0,     0,   125,     0,   307,
     141,   142,   143,     0,   144,   126,     0,   145,     0,   146,
     127,   128,     0,   129,   130,   131,     0,     0,     0,   132,
     133,     0,     0,     0,     0,     0,     0,     0,   134,   135,
       0,   136,   137,   138,   139,     0,   124,     0,     0,   125,
       0,     0,   141,   142,   143,     0,   144,   126,     0,   145,
       0,   146,   127,   128,     0,   129,   130,   131,     0,     0,
       0,   132,   133,     0,     0,     0,     0,     0,     0,     0,
     134,   135,     0,   136,   137,   138,   139,     0,   124,     0,
       0,   125,     0,   319,   141,   142,   143,     0,   144,   126,
       0,   145,     0,   146,   127,   128,     0,   129,   130,   131,
       0,     0,     0,   132,   133,     0,     0,     0,     0,     0,
       0,     0,   134,   135,     0,   136,   137,   138,   139,     0,
     124,     0,     0,   125,     0,   327,   141,   142,   143,     0,
     144,   126,     0,   145,     0,   146,   127,   128,     0,   129,
     130,   131,     0,     0,     0,   132,   133,     0,     0,     0,
       0,     0,     0,     0,   134,   135,     0,   136,   137,   138,
     139,     0,   124,     0,     0,   125,   365,   372,   141,   142,
     143,     0,   144,   126,     0,   145,     0,   146,   127,   128,
       0,   129,   130,   131,     0,     0,     0,   132,   133,     0,
       0,     0,     0,     0,     0,     0,   134,   135,     0,   136,
     137,   138,   139,     0,   124,     0,     0,   125,     0,     0,
     141,   142,   143,     0,   144,   126,     0,   145,     0,   146,
     127,   128,     0,   129,   130,   131,     0,     0,     0,   132,
     133,     0,     0,     0,     0,     0,     0,     0,   134,   135,
       0,   136,   137,   138,   139,     0,   124,     0,     0,   125,
       0,   375,   141,   142,   143,     0,   144,   126,     0,   145,
       0,   146,   127,   128,     0,   129,   130,   131,     0,     0,
       0,   132,   133,     0,     0,     0,     0,     0,     0,     0,
     134,   135,     0,   136,   137,   138,   139,     0,   124,     0,
       0,   125,     0,   376,   141,   142,   143,     0,   144,   126,
       0,   145,     0,   146,   127,   128,     0,   129,   130,   131,
       0,     0,     0,   132,   133,     0,     0,     0,     0,     0,
       0,     0,   134,   135,     0,   136,   137,   138,   139,     0,
     124,     0,     0,   125,     0,   378,   141,   142,   143,     0,
     144,   126,     0,   145,     0,   146,   127,   128,     0,   129,
     130,   131,     0,     0,     0,   132,   133,     0,     0,     0,
       0,     0,     0,     0,   134,   135,     0,   136,   137,   138,
     139,     0,   124,     0,     0,   125,     0,   385,   141,   142,
     143,     0,   144,   126,     0,   145,     0,   146,   127,   128,
       0,   129,   130,   131,     0,     0,     0,   132,   133,     0,
       0,     0,     0,     0,     0,     0,   134,   135,     0,   136,
     137,   138,   139,     0,   124,     0,     0,   125,     0,   398,
     141,   142,   143,     0,   144,   126,     0,   145,     0,   146,
     127,   128,     0,   129,   130,   131,     0,     0,     0,   132,
     133,     0,     0,     0,     0,     0,     0,     0,   134,   135,
       0,   136,   137,   138,   139,     0,   124,     0,     0,   125,
       0,   399,   141,   142,   143,     0,   144,   126,     0,   145,
       0,   146,   127,   128,     0,   129,   130,   131,     0,     0,
       0,   132,   133,     0,     0,     0,     0,     0,     0,     0,
     134,   135,     0,   136,   137,   138,   139,     0,   124,     0,
       0,     0,     0,     0,   141,   142,   143,     0,   144,   126,
       0,   145,     0,   146,   127,   128,     0,   129,   130,   131,
       0,     0,     0,   132,   133,     0,     0,     0,     0,     0,
       0,     0,   134,   135,     0,   136,   137,   138,   139,     0,
     124,     0,     0,   125,     0,     0,   141,   142,   143,     0,
     144,   126,     0,   145,     0,   146,   127,   128,     0,   129,
       0,   131,     0,     0,     0,   132,   133,     0,     0,     0,
       0,     0,     0,     0,   134,   135,     0,   136,   137,   138,
     139,     0,   124,     0,     0,     0,     0,     0,   141,   142,
     143,     0,   144,   126,     0,   145,     0,   146,   127,   128,
       0,     0,   130,   131,     0,     0,     0,   132,   133,     0,
       0,     0,     0,     0,     0,     0,   134,   135,     0,   136,
     137,     0,   139,     0,     0,     0,     0,     0,     0,     0,
     141,   142,   143,     0,   144,    -1,     0,   145,     0,   146,
      -1,    -1,     0,     0,     0,   131,     0,     0,     0,    -1,
      -1,     0,     0,     0,     0,     0,     0,     0,   134,   135,
       0,    -1,     0,     0,   139,     0,     0,     0,     0,     0,
       0,     0,   141,   142,   143,     0,     0,     0,     0,   145,
       0,   146
};

static const yytype_int16 yycheck[] =
{
       6,    21,    22,     8,    10,   178,   244,   270,    14,    52,
      15,    16,    18,    19,    20,    21,    22,    36,    24,    52,
     336,    15,    28,    82,    53,    15,     0,    32,    34,    35,
     135,    36,    37,    86,   139,    14,    42,   142,   143,    45,
      36,    11,    36,    86,    40,    51,    36,    53,    54,    55,
      30,   289,   157,    86,    17,    89,    35,    63,    64,    65,
     323,   324,    52,    17,    70,    71,    36,    86,    74,    75,
      36,    36,   388,    36,    53,    54,    55,    62,    30,    64,
      65,    66,    36,    36,    36,    64,    65,   403,    94,    86,
      86,    87,    98,    90,    90,    74,    75,   103,   104,   134,
     135,    86,    36,    36,   139,    86,    41,   142,   143,    90,
      36,    40,    41,    89,   219,   220,    36,    46,    36,    98,
      55,    56,   157,    36,   103,   104,    55,    56,   134,   135,
      36,    36,    36,   139,    63,    52,   142,   143,    86,    27,
      36,   147,    90,    36,    67,    62,    10,    64,    65,    66,
     170,   157,    40,    41,    36,    36,    17,    10,    46,     7,
     166,    53,   168,    48,   170,    11,    54,    55,    56,    86,
     176,    11,   178,    61,    26,    63,    52,    11,    17,   185,
      10,   187,   355,   356,   219,   220,    62,   360,    64,    65,
      66,    26,    11,   199,    26,   300,   301,   302,   303,   304,
      89,    17,    53,    53,    53,    89,    17,    11,   381,   382,
      86,    22,    23,   219,   220,    26,    27,    53,    11,    10,
      31,    32,    53,    50,    53,    40,    41,    53,    53,    40,
      41,    46,    43,    44,    10,    46,   242,    10,   244,    54,
      55,    56,    52,    54,    55,    56,    52,    58,    63,   255,
      61,    10,    63,    36,    53,    53,    53,    11,    11,   265,
     266,   267,   268,   242,    15,   300,   301,   302,   303,   304,
     275,    15,    40,    41,    52,    17,    17,    17,    46,   285,
      52,    17,    52,   289,   290,    53,    52,    55,    56,   295,
      53,   297,    11,    11,   300,   301,   302,   303,   304,   305,
     306,    11,     9,    17,    17,    11,    52,     7,    11,    52,
      11,    40,    41,    52,    10,    27,    23,    46,    25,    26,
      27,    11,    11,    52,    10,    52,    55,    56,    40,    41,
     336,   337,    52,    11,    46,    11,    11,    44,    36,    11,
      11,    52,    54,    55,    56,   168,   307,   353,    52,   355,
     356,    63,    57,    52,   360,    52,   387,   166,   364,   187,
     408,   374,   418,    -1,    -1,    72,   372,   373,   374,    -1,
      -1,    -1,    -1,    -1,    -1,   381,   382,    -1,    -1,    -1,
      -1,    -1,   388,   389,    -1,    -1,    93,    94,    -1,    96,
      97,    -1,    -1,    -1,    -1,    -1,    -1,   403,   404,   405,
     406,   108,   408,   110,    -1,   112,    -1,   114,   115,   116,
     117,   118,   418,    -1,    -1,    -1,    -1,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,    -1,    -1,   136,
     137,   138,    -1,    -1,   141,    -1,    -1,   144,   145,    -1,
      -1,   148,   149,    -1,   151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   169,    -1,   171,   172,   173,    -1,   175,    -1,
     177,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      -1,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      -1,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,   246,
     247,    -1,    69,    70,    71,    -1,   253,   254,    75,    -1,
      77,    78,    79,    80,    -1,    17,    83,    84,    -1,    86,
      22,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
     287,    43,    44,    -1,    46,    -1,    -1,   294,    -1,    -1,
      -1,    -1,    54,    55,    56,    -1,    58,    -1,    -1,    61,
     307,    63,    -1,    -1,    -1,    -1,    -1,   314,   315,    -1,
      -1,    -1,    -1,   320,     3,     4,     5,    -1,    -1,     8,
      -1,   328,    -1,    12,    13,    14,    -1,    16,    -1,    18,
      19,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    -1,   359,    42,    -1,   362,    -1,    -1,    47,    -1,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      59,    60,    -1,    62,    -1,    64,    65,    66,    -1,    68,
      69,    70,    71,    -1,    -1,    74,    75,    76,    77,    78,
      79,    80,    -1,    -1,    83,    84,    85,    86,    87,    88,
       6,    90,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    22,    23,    -1,    25,
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
      52,    -1,    54,    55,    56,    -1,    58,    17,    -1,    61,
      -1,    63,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    45,    46,    -1,     6,    -1,
      -1,     9,    -1,    53,    54,    55,    56,    -1,    58,    17,
      -1,    61,    -1,    63,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    -1,
       6,    -1,    -1,     9,    52,    -1,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    63,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,     9,    52,    11,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    63,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,    -1,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    63,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,     9,
      -1,    53,    54,    55,    56,    -1,    58,    17,    -1,    61,
      -1,    63,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    45,    46,    -1,     6,    -1,
      -1,     9,    52,    -1,    54,    55,    56,    -1,    58,    17,
      -1,    61,    -1,    63,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    -1,
       6,    -1,    -1,     9,    52,    11,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    63,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,     9,    -1,    11,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    63,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,    -1,
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
      -1,     9,    -1,    53,    54,    55,    56,    -1,    58,    17,
      -1,    61,    -1,    63,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    -1,
       6,    -1,    -1,     9,    -1,    53,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    63,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,     9,    52,    11,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    63,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,    -1,
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
      44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,    53,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    63,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,     9,
      -1,    53,    54,    55,    56,    -1,    58,    17,    -1,    61,
      -1,    63,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    45,    46,    -1,     6,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    -1,    58,    17,
      -1,    61,    -1,    63,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    -1,
       6,    -1,    -1,     9,    -1,    -1,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    63,    22,    23,    -1,    25,
      -1,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    63,    22,    23,
      -1,    -1,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    63,
      22,    23,    -1,    -1,    -1,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    -1,    -1,    -1,    -1,    61,
      -1,    63
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
     108,   108,   110,    30,   107,   107,    59,    77,    97,   108,
      36,    36,    36,   110,   107,   107,   108,   111,   112,   103,
     104,   108,   101,   102,   108,   101,   101,    97,   108,    97,
      97,    97,   108,    36,    36,    89,   121,    36,   107,   108,
     113,   114,   110,   107,   107,    89,    36,    36,    36,   108,
      36,    97,    36,   108,    36,    36,    36,    36,    36,   108,
     110,   110,   110,    95,     6,     9,    17,    22,    23,    25,
      26,    27,    31,    32,    40,    41,    43,    44,    45,    46,
      53,    54,    55,    56,    58,    61,    63,    15,    36,    67,
     115,    10,   108,   109,   110,   110,    53,    17,   108,   108,
      97,    10,   110,   110,     7,    53,    11,    48,    11,    26,
      11,    17,    26,    26,    52,    17,    36,    17,    36,    97,
      97,   108,    97,    97,   110,    10,    53,    11,    53,   110,
     110,    53,    89,    89,    97,    53,    97,    53,    97,    17,
      97,    97,    97,    97,    97,    53,    53,    53,    53,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    36,
      40,    87,    90,    98,    99,   108,    98,    97,    97,    97,
      98,    97,    98,    98,    97,    97,    90,   108,    97,   105,
     106,    97,    11,    97,    11,    50,    10,    10,    98,    52,
      52,    52,    97,    10,    10,    36,   111,   104,    97,   101,
      97,    97,    97,    97,    52,    62,    64,    65,    66,   100,
     108,    97,    52,   100,    52,    11,    52,    53,    52,    53,
      90,   108,   113,    53,    53,    11,   116,    11,    52,    11,
      11,   108,   117,    52,    11,    11,    52,    11,    98,    98,
      40,    41,    46,    55,    56,    15,    15,    11,    52,   110,
     109,    97,    97,    53,    17,    17,    97,    97,   108,    53,
      17,   108,   108,   108,   108,    52,   115,    53,    17,    52,
     107,   108,    52,    97,   109,   108,    11,    36,    53,    97,
     108,   108,    52,    98,    98,    98,    98,    98,    90,   108,
     106,    97,    97,    11,    97,    11,    11,   115,   115,    17,
      11,    97,    17,    52,     7,    52,    52,    52,   117,    52,
     108,   118,    11,    11,    10,    53,    53,   108,    53,   100,
     100,    11,    11,    97,   100,    53,    97,   108,    11,    10,
      52,   108,   108,   108,   119,    52,   100,   100,    53,    53,
     116,   117,   108,    11,    11,    11,    36,    52,    11,   117,
     108,   108,    52,   119,   120,   118,    52,    52,    11,    52,
     120
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
      97,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    99,    99,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   101,   101,   102,   103,   104,   104,   105,
     105,   106,   106,   107,   107,   108,   109,   109,   110,   110,
     111,   111,   112,   113,   113,   114,   114,   114,   115,   115,
     116,   116,   117,   117,   117,   117,   117,   117,   118,   118,
     119,   119,   119,   120,   120,   121,   121
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
       3,     3,     3,     3,     1,     3,     3,     3,     3,     5,
       6,     4,     6,    10,    10,     4,     6,     4,     8,     4,
       4,     3,     3,     3,     3,     3,     2,     1,     1,     1,
       3,     3,     5,     4,     5,     5,     4,     4,     2,     3,
       3,     2,     2,     3,     1,     3,     1,     3,     1,     1,
       0,     3,     1,     3,     0,     1,     3,     1,     4,     2,
       3,     1,     7,     3,     1,     3,     3,     1,     2,     0,
       5,     0,     6,     5,     3,     4,     3,     1,     5,     3,
       4,     3,     1,     3,     1,     1,     0
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
#line 1839 "parser.cc"
    break;

  case 3: /* header: tokWS2S tokSEMICOLON  */
#line 120 "parser.y"
                               {}
#line 1845 "parser.cc"
    break;

  case 4: /* declarations: declaration declarations  */
#line 123 "parser.y"
                                       {if ((yyvsp[-1].declaration)) (yyvsp[0].declList)->push_front((yyvsp[-1].declaration)); (yyval.declList) = (yyvsp[0].declList);}
#line 1851 "parser.cc"
    break;

  case 5: /* declarations: declaration  */
#line 125 "parser.y"
                      {(yyval.declList) = new DeclarationList(); 
	         	if ((yyvsp[0].declaration)) (yyval.declList)->push_front((yyvsp[0].declaration));}
#line 1858 "parser.cc"
    break;

  case 6: /* declaration: tokASSERT exp tokSEMICOLON  */
#line 129 "parser.y"
                                        {}
#line 1864 "parser.cc"
    break;

  case 7: /* declaration: tokGUIDE func_list tokSEMICOLON  */
#line 131 "parser.y"
                                         {}
#line 1870 "parser.cc"
    break;

  case 8: /* declaration: tokUNIVERSE univs tokSEMICOLON  */
#line 133 "parser.y"
                                        {}
#line 1876 "parser.cc"
    break;

  case 9: /* declaration: tokDEFAULT1 tokLPAREN name tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 135 "parser.y"
                                                                         {}
#line 1882 "parser.cc"
    break;

  case 10: /* declaration: tokDEFAULT2 tokLPAREN name tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 137 "parser.y"
                                                                         {}
#line 1888 "parser.cc"
    break;

  case 11: /* declaration: tokCONST name tokEQUAL arith_exp tokSEMICOLON  */
#line 139 "parser.y"
                                                        {}
#line 1894 "parser.cc"
    break;

  case 12: /* declaration: tokVAR0 name_where_list tokSEMICOLON  */
#line 141 "parser.y"
                                              {(yyval.declaration)=new Variable_Declaration{Varname0,(yyvsp[-1].varDeclList)};}
#line 1900 "parser.cc"
    break;

  case 13: /* declaration: tokVAR1 universe name_where_list tokSEMICOLON  */
#line 143 "parser.y"
                                                       {(yyval.declaration) = new Variable_Declaration(Varname1,(yyvsp[-1].varDeclList));}
#line 1906 "parser.cc"
    break;

  case 14: /* declaration: tokVAR2 universe name_where_list tokSEMICOLON  */
#line 145 "parser.y"
                                                        {(yyval.declaration)=new Variable_Declaration{Varname2,(yyvsp[-1].varDeclList)};}
#line 1912 "parser.cc"
    break;

  case 15: /* declaration: tokTREE universe name_where_list tokSEMICOLON  */
#line 147 "parser.y"
                                                        {}
#line 1918 "parser.cc"
    break;

  case 16: /* declaration: tokPRED name tokLPAREN par_list tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 149 "parser.y"
                                                                              {}
#line 1924 "parser.cc"
    break;

  case 17: /* declaration: tokPRED name tokEQUAL exp tokSEMICOLON  */
#line 151 "parser.y"
                                                  {}
#line 1930 "parser.cc"
    break;

  case 18: /* declaration: tokPRED name tokLPAREN tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 153 "parser.y"
                                                                     {}
#line 1936 "parser.cc"
    break;

  case 19: /* declaration: tokMACRO name tokLPAREN par_list tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 155 "parser.y"
                                                                                {}
#line 1942 "parser.cc"
    break;

  case 20: /* declaration: tokMACRO name tokEQUAL exp tokSEMICOLON  */
#line 157 "parser.y"
                                                   {}
#line 1948 "parser.cc"
    break;

  case 21: /* declaration: tokMACRO name tokLPAREN tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 159 "parser.y"
                                                                       {}
#line 1954 "parser.cc"
    break;

  case 22: /* declaration: exp tokSEMICOLON  */
#line 161 "parser.y"
                           {(yyval.declaration) = new Expression_Declaration((yyvsp[-1].untypedExp));}
#line 1960 "parser.cc"
    break;

  case 23: /* declaration: tokVERIFY optstring exp tokSEMICOLON  */
#line 163 "parser.y"
                                               {}
#line 1966 "parser.cc"
    break;

  case 24: /* declaration: tokEXECUTE exp tokSEMICOLON  */
#line 165 "parser.y"
                                      {}
#line 1972 "parser.cc"
    break;

  case 25: /* declaration: tokINCLUDE tokSTRING tokSEMICOLON  */
#line 167 "parser.y"
                                            {}
#line 1978 "parser.cc"
    break;

  case 26: /* declaration: tokLASTPOS name tokSEMICOLON  */
#line 169 "parser.y"
                                               {}
#line 1984 "parser.cc"
    break;

  case 27: /* declaration: tokALLPOS name tokSEMICOLON  */
#line 171 "parser.y"
                                              {}
#line 1990 "parser.cc"
    break;

  case 28: /* declaration: tokTYPE name tokEQUAL variant_list tokSEMICOLON  */
#line 173 "parser.y"
                                                                {}
#line 1996 "parser.cc"
    break;

  case 29: /* declaration: tokINT name_where_list tokSEMICOLON  */
#line 175 "parser.y"
                                                      {(yyval.declaration) = new Variable_Declaration(Integer,(yyvsp[-1].varDeclList));}
#line 2002 "parser.cc"
    break;

  case 30: /* declaration: tokReal name_where_list tokSEMICOLON  */
#line 177 "parser.y"
                                                       {(yyval.declaration) = new Variable_Declaration(Real,(yyvsp[-1].varDeclList));}
#line 2008 "parser.cc"
    break;

  case 31: /* declaration: tokBool name_where_list tokSEMICOLON  */
#line 179 "parser.y"
                                                       {(yyval.declaration) = new Variable_Declaration(Boolean,(yyvsp[-1].varDeclList));}
#line 2014 "parser.cc"
    break;

  case 32: /* exp: name  */
#line 184 "parser.y"
               {(yyval.untypedExp) = new UntypedExp_Name(uName,(yyvsp[0].name));}
#line 2020 "parser.cc"
    break;

  case 33: /* exp: name tokDOT tokINT  */
#line 186 "parser.y"
                                     {check_bits(*(yyvsp[0].st));(yyval.untypedExp)=new UntypedExp_PathName{uPathName,(yyvsp[-2].name),(yyvsp[0].st)};}
#line 2026 "parser.cc"
    break;

  case 34: /* exp: tokLPAREN exp tokRPAREN  */
#line 188 "parser.y"
                                  {}
#line 2032 "parser.cc"
    break;

  case 35: /* exp: exp tokSUB exp  */
#line 190 "parser.y"
                        {}
#line 2038 "parser.cc"
    break;

  case 36: /* exp: exp tokIN exp  */
#line 192 "parser.y"
                        {}
#line 2044 "parser.cc"
    break;

  case 37: /* exp: exp tokNOTIN exp  */
#line 194 "parser.y"
                          {}
#line 2050 "parser.cc"
    break;

  case 38: /* exp: tokMIN exp  */
#line 196 "parser.y"
                    {}
#line 2056 "parser.cc"
    break;

  case 39: /* exp: tokMAX exp  */
#line 198 "parser.y"
                    {}
#line 2062 "parser.cc"
    break;

  case 40: /* exp: exp tokLESS exp  */
#line 200 "parser.y"
                           {(yyval.untypedExp) = new UntypedExp_Less((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2068 "parser.cc"
    break;

  case 41: /* exp: exp tokLESSEQ exp  */
#line 202 "parser.y"
                            {(yyval.untypedExp) = new UntypedExp_LessEq((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2074 "parser.cc"
    break;

  case 42: /* exp: exp tokGREATEREQ exp  */
#line 204 "parser.y"
                              {(yyval.untypedExp) = new UntypedExp_GreaterEq((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2080 "parser.cc"
    break;

  case 43: /* exp: exp tokGREATER exp  */
#line 206 "parser.y"
                             {(yyval.untypedExp) = new UntypedExp_Greater((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2086 "parser.cc"
    break;

  case 44: /* exp: exp tokEQUAL exp  */
#line 208 "parser.y"
                          {(yyval.untypedExp) = new UntypedExp_Equal((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2092 "parser.cc"
    break;

  case 45: /* exp: exp tokNOTEQUAL exp  */
#line 210 "parser.y"
                              {new UntypedExp_NotEqual((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2098 "parser.cc"
    break;

  case 46: /* exp: exp tokIMPL exp  */
#line 212 "parser.y"
                         {}
#line 2104 "parser.cc"
    break;

  case 47: /* exp: exp tokBIIMPL exp  */
#line 214 "parser.y"
                            {}
#line 2110 "parser.cc"
    break;

  case 48: /* exp: exp tokAND exp  */
#line 216 "parser.y"
                         {(yyval.untypedExp) = new UntypedExp_And((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2116 "parser.cc"
    break;

  case 49: /* exp: exp tokOR exp  */
#line 218 "parser.y"
                        {(yyval.untypedExp) = new UntypedExp_Or((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2122 "parser.cc"
    break;

  case 50: /* exp: tokNOT exp  */
#line 220 "parser.y"
                     {(yyval.untypedExp)=new UntypedExp_Not{(yyvsp[0].untypedExp)};}
#line 2128 "parser.cc"
    break;

  case 51: /* exp: dotExp  */
#line 222 "parser.y"
                         {(yyval.untypedExp)=(yyvsp[0].UntypedExpDotName);}
#line 2134 "parser.cc"
    break;

  case 52: /* exp: tokUNIVROOT tokLPAREN name tokRPAREN  */
#line 224 "parser.y"
                                               {}
#line 2140 "parser.cc"
    break;

  case 53: /* exp: tokUNIVROOT  */
#line 226 "parser.y"
                      {}
#line 2146 "parser.cc"
    break;

  case 54: /* exp: exp tokUP  */
#line 228 "parser.y"
                    {}
#line 2152 "parser.cc"
    break;

  case 55: /* exp: tokEX0 name_where_list tokCOLON exp  */
#line 230 "parser.y"
                                              {(yyval.untypedExp) = new UntypedExp_Ex0((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2158 "parser.cc"
    break;

  case 56: /* exp: tokEX1 universe name_where_list tokCOLON exp  */
#line 232 "parser.y"
                                                       {(yyval.untypedExp) = new UntypedExp_Ex1((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2164 "parser.cc"
    break;

  case 57: /* exp: tokEX2 universe name_where_list tokCOLON exp  */
#line 234 "parser.y"
                                                       {(yyval.untypedExp) = new UntypedExp_Ex2((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2170 "parser.cc"
    break;

  case 58: /* exp: tokALL0 name_where_list tokCOLON exp  */
#line 236 "parser.y"
                                               {(yyval.untypedExp) = new UntypedExp_All0((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2176 "parser.cc"
    break;

  case 59: /* exp: tokALL1 universe name_where_list tokCOLON exp  */
#line 238 "parser.y"
                                                        {(yyval.untypedExp) = new UntypedExp_All1((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2182 "parser.cc"
    break;

  case 60: /* exp: tokALL2 universe name_where_list tokCOLON exp  */
#line 240 "parser.y"
                                                        {(yyval.untypedExp) = new UntypedExp_All2((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2188 "parser.cc"
    break;

  case 61: /* exp: tokLET0 defs tokIN exp  */
#line 242 "parser.y"
                                             {}
#line 2194 "parser.cc"
    break;

  case 62: /* exp: tokLET1 defs tokIN exp  */
#line 244 "parser.y"
                                            {}
#line 2200 "parser.cc"
    break;

  case 63: /* exp: tokLET2 defs tokIN exp  */
#line 246 "parser.y"
                                             {}
#line 2206 "parser.cc"
    break;

  case 64: /* exp: name tokLPAREN exp_list tokRPAREN  */
#line 248 "parser.y"
                                            {}
#line 2212 "parser.cc"
    break;

  case 65: /* exp: tokTRUE  */
#line 250 "parser.y"
                  {}
#line 2218 "parser.cc"
    break;

  case 66: /* exp: tokFALSE  */
#line 252 "parser.y"
                   {}
#line 2224 "parser.cc"
    break;

  case 67: /* exp: tokUNIVROOT tokLPAREN exp tokCOMMA universe tokRPAREN  */
#line 254 "parser.y"
                                                                {}
#line 2230 "parser.cc"
    break;

  case 68: /* exp: tokEMPTY tokLPAREN exp tokRPAREN  */
#line 256 "parser.y"
                                           {}
#line 2236 "parser.cc"
    break;

  case 69: /* exp: exp tokPLUS arith_exp  */
#line 258 "parser.y"
                                {(yyval.untypedExp) = new UntypedExp_Plus((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2242 "parser.cc"
    break;

  case 70: /* exp: exp tokMINUS arith_exp  */
#line 260 "parser.y"
                                 {(yyval.untypedExp) = new UntypedExp_Minus((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2248 "parser.cc"
    break;

  case 71: /* exp: exp tokSTAR arith_exp  */
#line 262 "parser.y"
                                {(yyval.untypedExp) = new UntypedExp_Mult((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2254 "parser.cc"
    break;

  case 72: /* exp: exp tokSLASH arith_exp  */
#line 264 "parser.y"
                                 {(yyval.untypedExp) = new UntypedExp_Div((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2260 "parser.cc"
    break;

  case 73: /* exp: exp tokMODULO arith_exp  */
#line 266 "parser.y"
                                   {(yyval.untypedExp) = new UntypedExp_Modul((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2266 "parser.cc"
    break;

  case 74: /* exp: tokEMPTY  */
#line 268 "parser.y"
                  {}
#line 2272 "parser.cc"
    break;

  case 75: /* exp: tokLBRACE set_body tokRBRACE  */
#line 270 "parser.y"
                                      {(yyval.untypedExp) = new UntypedExp_Set((yyvsp[-1].varDeclList));}
#line 2278 "parser.cc"
    break;

  case 76: /* exp: exp tokUNION exp  */
#line 272 "parser.y"
                           {}
#line 2284 "parser.cc"
    break;

  case 77: /* exp: exp tokINTER exp  */
#line 274 "parser.y"
                           {}
#line 2290 "parser.cc"
    break;

  case 78: /* exp: exp tokSETMINUS exp  */
#line 276 "parser.y"
                              {}
#line 2296 "parser.cc"
    break;

  case 79: /* exp: tokIMPORT tokLPAREN tokSTRING map_list tokRPAREN  */
#line 278 "parser.y"
                                                           {}
#line 2302 "parser.cc"
    break;

  case 80: /* exp: tokEXPORT tokLPAREN tokSTRING tokCOMMA exp tokRPAREN  */
#line 280 "parser.y"
                                                              {}
#line 2308 "parser.cc"
    break;

  case 81: /* exp: tokPREFIX tokLPAREN exp tokRPAREN  */
#line 282 "parser.y"
                                           {}
#line 2314 "parser.cc"
    break;

  case 82: /* exp: tokINSTATESPACE tokLPAREN exp tokCOMMA name_list tokRPAREN  */
#line 284 "parser.y"
                                                                    {}
#line 2320 "parser.cc"
    break;

  case 83: /* exp: tokVARIANT tokLPAREN exp tokCOMMA exp tokCOMMA name tokCOMMA name tokRPAREN  */
#line 287 "parser.y"
                                 {}
#line 2326 "parser.cc"
    break;

  case 84: /* exp: tokSUCC tokLPAREN exp tokCOMMA name tokCOMMA name tokCOMMA name tokRPAREN  */
#line 290 "parser.y"
                        {}
#line 2332 "parser.cc"
    break;

  case 85: /* exp: tokTREE tokLPAREN exp tokRPAREN  */
#line 292 "parser.y"
                                         {}
#line 2338 "parser.cc"
    break;

  case 86: /* exp: tokTYPE tokLPAREN exp tokCOMMA name tokRPAREN  */
#line 294 "parser.y"
                                                       {}
#line 2344 "parser.cc"
    break;

  case 87: /* exp: tokSOMETYPE tokLPAREN exp tokRPAREN  */
#line 296 "parser.y"
                                             {}
#line 2350 "parser.cc"
    break;

  case 88: /* exp: tokCONSTTREE tokLPAREN exp tokCOMMA name tokCOLON constnode tokRPAREN  */
#line 299 "parser.y"
                             {}
#line 2356 "parser.cc"
    break;

  case 89: /* exp: tokTREEROOT tokLPAREN exp tokRPAREN  */
#line 301 "parser.y"
                                             {}
#line 2362 "parser.cc"
    break;

  case 90: /* exp: tokRESTRICT tokLPAREN exp tokRPAREN  */
#line 303 "parser.y"
                                             {}
#line 2368 "parser.cc"
    break;

  case 91: /* arith_exp: arith_exp tokPLUS arith_exp  */
#line 308 "parser.y"
                                       {(yyval.arithExp) = new ArithExp_Add((yyvsp[-2].arithExp), (yyvsp[0].arithExp));}
#line 2374 "parser.cc"
    break;

  case 92: /* arith_exp: arith_exp tokMINUS arith_exp  */
#line 310 "parser.y"
                                       {(yyval.arithExp) = new ArithExp_Subtr((yyvsp[-2].arithExp), (yyvsp[0].arithExp));}
#line 2380 "parser.cc"
    break;

  case 93: /* arith_exp: arith_exp tokSTAR arith_exp  */
#line 312 "parser.y"
                                      {(yyval.arithExp) = new ArithExp_Mult((yyvsp[-2].arithExp), (yyvsp[0].arithExp));}
#line 2386 "parser.cc"
    break;

  case 94: /* arith_exp: arith_exp tokSLASH arith_exp  */
#line 314 "parser.y"
                                       {(yyval.arithExp) = new ArithExp_Div((yyvsp[-2].arithExp), (yyvsp[0].arithExp));}
#line 2392 "parser.cc"
    break;

  case 95: /* arith_exp: arith_exp tokMODULO arith_exp  */
#line 316 "parser.y"
                                       {(yyval.arithExp)=new ArithExp_Modul((yyvsp[-2].arithExp),(yyvsp[0].arithExp));}
#line 2398 "parser.cc"
    break;

  case 96: /* arith_exp: tokMINUS arith_exp  */
#line 318 "parser.y"
                             {}
#line 2404 "parser.cc"
    break;

  case 97: /* arith_exp: tokINT  */
#line 321 "parser.y"
        {
		(yyval.arithExp) = new ArithExp_Integer(stoi(*(yyvsp[0].st)));
	}
#line 2412 "parser.cc"
    break;

  case 98: /* arith_exp: tokReal  */
#line 325 "parser.y"
                 {(yyval.arithExp)=new ArithExp_Real{(yyvsp[0].doubleVal)};}
#line 2418 "parser.cc"
    break;

  case 99: /* arith_exp: dotExp  */
#line 327 "parser.y"
                 {
					if((yyvsp[0].UntypedExpDotName)->kind==uDotName)
						(yyval.arithExp)=new AritExp_ConstDotName{(yyvsp[0].UntypedExpDotName)->dotName};
					else{
						UntypedExp_DotNameNumber* dotwithPath=static_cast<UntypedExp_DotNameNumber*>((yyvsp[0].UntypedExpDotName));
						(yyval.arithExp)=new ArithExp_ConstPathDotName{dotwithPath->dotName,dotwithPath->path};
					}
		}
#line 2431 "parser.cc"
    break;

  case 100: /* arith_exp: tokLPAREN arith_exp tokRPAREN  */
#line 336 "parser.y"
                                        {}
#line 2437 "parser.cc"
    break;

  case 101: /* dotExp: name tokDOT name  */
#line 340 "parser.y"
                                 {(yyval.UntypedExpDotName)=new UntypedExp_DotName{new DotName{(yyvsp[-2].name),(yyvsp[0].name)}};}
#line 2443 "parser.cc"
    break;

  case 102: /* dotExp: name tokDOT tokINT tokDOT name  */
#line 342 "parser.y"
                                                        {checkNameIntName(*(yyvsp[-2].st));(yyval.UntypedExpDotName)=new UntypedExp_DotNameNumber{new DotName{(yyvsp[-4].name),(yyvsp[0].name)},(yyvsp[-2].st)};}
#line 2449 "parser.cc"
    break;

  case 103: /* par_list: tokVAR0 name tokCOMMA par_list  */
#line 346 "parser.y"
                                         {}
#line 2455 "parser.cc"
    break;

  case 104: /* par_list: tokVAR1 name where tokCOMMA par_list  */
#line 348 "parser.y"
                                              {}
#line 2461 "parser.cc"
    break;

  case 105: /* par_list: tokVAR2 name where tokCOMMA par_list  */
#line 350 "parser.y"
                                              {}
#line 2467 "parser.cc"
    break;

  case 106: /* par_list: tokUNIVERSE name tokCOMMA par_list  */
#line 352 "parser.y"
                                             {}
#line 2473 "parser.cc"
    break;

  case 107: /* par_list: name where tokCOMMA par_list  */
#line 354 "parser.y"
                                       {}
#line 2479 "parser.cc"
    break;

  case 108: /* par_list: tokVAR0 name  */
#line 356 "parser.y"
                       {}
#line 2485 "parser.cc"
    break;

  case 109: /* par_list: tokVAR1 name where  */
#line 358 "parser.y"
                             {}
#line 2491 "parser.cc"
    break;

  case 110: /* par_list: tokVAR2 name where  */
#line 360 "parser.y"
                            {}
#line 2497 "parser.cc"
    break;

  case 111: /* par_list: tokUNIVERSE name  */
#line 362 "parser.y"
                           {}
#line 2503 "parser.cc"
    break;

  case 112: /* par_list: name where  */
#line 364 "parser.y"
                    {}
#line 2509 "parser.cc"
    break;

  case 113: /* defs: def tokCOMMA defs  */
#line 369 "parser.y"
                           {}
#line 2515 "parser.cc"
    break;

  case 114: /* defs: def  */
#line 371 "parser.y"
              {}
#line 2521 "parser.cc"
    break;

  case 115: /* def: name tokEQUAL exp  */
#line 375 "parser.y"
                           {}
#line 2527 "parser.cc"
    break;

  case 116: /* set_body: non_empty_set_body  */
#line 379 "parser.y"
                            {}
#line 2533 "parser.cc"
    break;

  case 117: /* non_empty_set_body: name tokCOMMA non_empty_set_body  */
#line 383 "parser.y"
                                                    {(yyvsp[0].varDeclList)->push_back(new VarDecl{(yyvsp[-2].name),nullptr});(yyval.varDeclList)=(yyvsp[0].varDeclList);}
#line 2539 "parser.cc"
    break;

  case 118: /* non_empty_set_body: name  */
#line 385 "parser.y"
              {(yyval.varDeclList)=new VarDeclList{}; (yyval.varDeclList)->push_back(new VarDecl{(yyvsp[0].name),nullptr});}
#line 2545 "parser.cc"
    break;

  case 119: /* exp_list: non_empty_exp_list  */
#line 389 "parser.y"
                            {}
#line 2551 "parser.cc"
    break;

  case 120: /* exp_list: %empty  */
#line 391 "parser.y"
                     {}
#line 2557 "parser.cc"
    break;

  case 121: /* non_empty_exp_list: exp tokCOMMA non_empty_exp_list  */
#line 395 "parser.y"
                                                   {}
#line 2563 "parser.cc"
    break;

  case 122: /* non_empty_exp_list: exp  */
#line 397 "parser.y"
              {}
#line 2569 "parser.cc"
    break;

  case 123: /* universe: tokLBRACKET name_list tokRBRACKET  */
#line 401 "parser.y"
                                           {}
#line 2575 "parser.cc"
    break;

  case 124: /* universe: %empty  */
#line 403 "parser.y"
                     {}
#line 2581 "parser.cc"
    break;

  case 125: /* name: tokNAME  */
#line 408 "parser.y"
                {(yyval.name) = new Name((yyvsp[0].st));}
#line 2587 "parser.cc"
    break;

  case 126: /* name_list: name tokCOMMA name_list  */
#line 412 "parser.y"
                                  {}
#line 2593 "parser.cc"
    break;

  case 127: /* name_list: name  */
#line 414 "parser.y"
              {}
#line 2599 "parser.cc"
    break;

  case 128: /* name_where_list: name where tokCOMMA name_where_list  */
#line 419 "parser.y"
                {(yyvsp[0].varDeclList)->push_front(new VarDecl((yyvsp[-3].name),nullptr)); 
		 (yyval.varDeclList) = (yyvsp[0].varDeclList);}
#line 2606 "parser.cc"
    break;

  case 129: /* name_where_list: name where  */
#line 422 "parser.y"
                {(yyval.varDeclList) = new VarDeclList(); 
		 (yyval.varDeclList)->push_front(new VarDecl((yyvsp[-1].name),nullptr));}
#line 2613 "parser.cc"
    break;

  case 130: /* func_list: func tokCOMMA func_list  */
#line 427 "parser.y"
                                  {}
#line 2619 "parser.cc"
    break;

  case 131: /* func_list: func  */
#line 429 "parser.y"
              {}
#line 2625 "parser.cc"
    break;

  case 132: /* func: name tokARROW tokLPAREN name tokCOMMA name tokRPAREN  */
#line 433 "parser.y"
                                                              {}
#line 2631 "parser.cc"
    break;

  case 133: /* univs: univ tokCOMMA univs  */
#line 437 "parser.y"
                             {}
#line 2637 "parser.cc"
    break;

  case 134: /* univs: univ  */
#line 439 "parser.y"
              {}
#line 2643 "parser.cc"
    break;

  case 135: /* univ: name tokCOLON tokINT  */
#line 443 "parser.y"
                              {}
#line 2649 "parser.cc"
    break;

  case 136: /* univ: name tokCOLON name  */
#line 445 "parser.y"
                            {}
#line 2655 "parser.cc"
    break;

  case 137: /* univ: name  */
#line 447 "parser.y"
              {}
#line 2661 "parser.cc"
    break;

  case 138: /* where: tokWHERE exp  */
#line 451 "parser.y"
                      {}
#line 2667 "parser.cc"
    break;

  case 139: /* where: %empty  */
#line 453 "parser.y"
                     {}
#line 2673 "parser.cc"
    break;

  case 140: /* map_list: tokCOMMA name tokARROW name map_list  */
#line 457 "parser.y"
                                              {}
#line 2679 "parser.cc"
    break;

  case 141: /* map_list: %empty  */
#line 459 "parser.y"
                     {}
#line 2685 "parser.cc"
    break;

  case 142: /* variant_list: name tokLPAREN component_list tokRPAREN tokCOMMA variant_list  */
#line 463 "parser.y"
                                                                           {}
#line 2691 "parser.cc"
    break;

  case 143: /* variant_list: name tokLPAREN tokRPAREN tokCOMMA variant_list  */
#line 465 "parser.y"
                                                        {}
#line 2697 "parser.cc"
    break;

  case 144: /* variant_list: name tokCOMMA variant_list  */
#line 467 "parser.y"
                                    {}
#line 2703 "parser.cc"
    break;

  case 145: /* variant_list: name tokLPAREN component_list tokRPAREN  */
#line 469 "parser.y"
                                                 {}
#line 2709 "parser.cc"
    break;

  case 146: /* variant_list: name tokLPAREN tokRPAREN  */
#line 471 "parser.y"
                                  {}
#line 2715 "parser.cc"
    break;

  case 147: /* variant_list: name  */
#line 473 "parser.y"
              {}
#line 2721 "parser.cc"
    break;

  case 148: /* component_list: name tokCOLON name tokCOMMA component_list  */
#line 477 "parser.y"
                                                          {}
#line 2727 "parser.cc"
    break;

  case 149: /* component_list: name tokCOLON name  */
#line 479 "parser.y"
                            {}
#line 2733 "parser.cc"
    break;

  case 150: /* constnode: name tokLPAREN constnode_list tokRPAREN  */
#line 483 "parser.y"
                                                  {}
#line 2739 "parser.cc"
    break;

  case 151: /* constnode: name tokLPAREN tokRPAREN  */
#line 485 "parser.y"
                                  {}
#line 2745 "parser.cc"
    break;

  case 152: /* constnode: name  */
#line 487 "parser.y"
              {}
#line 2751 "parser.cc"
    break;

  case 153: /* constnode_list: constnode tokCOMMA constnode_list  */
#line 491 "parser.y"
                                                 {}
#line 2757 "parser.cc"
    break;

  case 154: /* constnode_list: constnode  */
#line 493 "parser.y"
                   {}
#line 2763 "parser.cc"
    break;

  case 155: /* optstring: tokSTRING  */
#line 497 "parser.y"
                    {}
#line 2769 "parser.cc"
    break;

  case 156: /* optstring: %empty  */
#line 499 "parser.y"
                      {}
#line 2775 "parser.cc"
    break;


#line 2779 "parser.cc"

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

#line 504 "parser.y"

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
	std::cout<<string(msg);
	delete untypedAST->declarations;
	exit(-1);
}
