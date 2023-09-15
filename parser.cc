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
  YYSYMBOL_universe = 105,                 /* universe  */
  YYSYMBOL_name = 106,                     /* name  */
  YYSYMBOL_name_list = 107,                /* name_list  */
  YYSYMBOL_name_where_list = 108,          /* name_where_list  */
  YYSYMBOL_func_list = 109,                /* func_list  */
  YYSYMBOL_func = 110,                     /* func  */
  YYSYMBOL_univs = 111,                    /* univs  */
  YYSYMBOL_univ = 112,                     /* univ  */
  YYSYMBOL_where = 113,                    /* where  */
  YYSYMBOL_map_list = 114,                 /* map_list  */
  YYSYMBOL_variant_list = 115,             /* variant_list  */
  YYSYMBOL_component_list = 116,           /* component_list  */
  YYSYMBOL_constnode = 117,                /* constnode  */
  YYSYMBOL_constnode_list = 118,           /* constnode_list  */
  YYSYMBOL_optstring = 119                 /* optstring  */
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
#define YYLAST   2084

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  155
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
       0,   109,   109,   126,   129,   131,   135,   137,   139,   141,
     143,   145,   147,   149,   151,   153,   155,   157,   159,   161,
     163,   165,   167,   169,   171,   173,   175,   177,   179,   181,
     183,   185,   190,   192,   194,   196,   198,   200,   202,   204,
     206,   208,   210,   212,   214,   216,   218,   220,   222,   224,
     226,   228,   230,   231,   233,   235,   237,   239,   241,   243,
     245,   247,   249,   251,   253,   255,   257,   259,   261,   263,
     265,   267,   269,   271,   273,   275,   277,   279,   281,   283,
     285,   287,   289,   291,   293,   295,   297,   300,   303,   305,
     307,   309,   312,   314,   319,   321,   323,   325,   327,   329,
     331,   337,   339,   348,   352,   354,   359,   361,   363,   365,
     367,   369,   371,   373,   375,   377,   382,   385,   390,   394,
     398,   400,   406,   408,   412,   417,   419,   423,   426,   432,
     434,   438,   442,   444,   448,   450,   452,   456,   458,   462,
     464,   468,   470,   472,   474,   476,   478,   482,   484,   488,
     490,   492,   496,   498,   502,   504
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
  "defs", "def", "set_body", "non_empty_set_body", "universe", "name",
  "name_list", "name_where_list", "func_list", "func", "univs", "univ",
  "where", "map_list", "variant_list", "component_list", "constnode",
  "constnode_list", "optstring", YY_NULLPTR
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
     -40,    29,    91,   497,  -335,  -335,    25,    65,    65,   598,
      25,    60,    76,    80,    25,    65,    65,  -335,    25,    25,
      25,    25,    25,   598,    25,   598,   598,   598,    25,    90,
      92,    38,    89,  -335,    25,    25,    65,    65,    45,   100,
     104,   112,    25,   121,   598,   -11,   123,   125,   127,   129,
     131,    25,  -335,    25,    25,    25,  -335,   497,   674,  -335,
      66,   106,   167,    25,    25,    25,   142,   143,  -335,  -335,
     716,   170,    25,    25,   598,   180,    25,    25,   184,   139,
     182,   146,  -335,   185,   206,   200,   217,   209,   212,   758,
      61,    52,    52,  1983,   116,   598,   598,  -335,   598,   598,
      25,   230,   195,   232,   196,    25,    25,    25,   166,   176,
     598,   213,   598,   800,   598,   236,   598,   598,   598,   598,
     598,   214,   215,   216,   219,  -335,   598,   598,   598,   598,
     598,   598,   598,   598,   598,   598,   -10,   -10,   598,   598,
     598,   -10,  -335,   598,   -10,   -10,   598,   598,   -66,   -43,
    -335,   598,   264,   598,   265,   227,   268,   269,  -335,   -10,
     228,   229,   842,   598,   272,   273,   250,  -335,    25,  -335,
      25,   598,    25,   598,   598,   598,  -335,   598,    58,   598,
      85,   884,   926,    69,   968,  1010,   234,   -52,  -335,    25,
    -335,   235,   238,   204,    25,    25,  1052,  -335,  1094,  -335,
    1136,    25,  1178,  1220,  1262,  1304,  1346,  -335,  -335,  -335,
    -335,  1983,  1817,   190,   190,   190,  1859,  2023,   164,   190,
     190,   -10,   -10,  -335,  -335,    48,  -335,   274,  -335,   190,
    2023,  1943,    48,   168,  -335,  -335,  2023,   114,   279,  -335,
    -335,   251,  1817,    25,  1817,    25,  -335,   598,   598,   201,
     285,   288,  -335,  1817,   598,   598,    25,  -335,  -335,  1817,
    -335,  1901,  1817,  1817,  1388,   289,    25,    25,    25,    25,
     255,   106,  1430,   291,   257,  -335,    65,  -335,  -335,  -335,
    -335,  -335,  -335,  -335,  -335,  -335,   258,   221,   223,  -335,
      25,    25,    10,   260,  -335,   598,    25,  -335,    25,   218,
      48,   -10,   -10,   -10,   -10,   -10,   -36,    25,  -335,  -335,
    -335,  1817,  1817,  -335,   598,   598,  1817,  1817,   303,  -335,
     598,   304,   305,   106,   106,   300,   308,  -335,   598,   306,
     275,  -335,   313,   314,   276,   277,    25,   -35,  -335,  1481,
     315,   322,  -335,    48,  -335,    48,  -335,  -335,   279,  -335,
    1523,  1565,    25,  1607,   120,   120,   323,   324,   598,   120,
    1649,   598,  -335,    25,   281,   598,  -335,  -335,  -335,   325,
     327,   286,    25,    25,    25,  -335,  -335,   290,  -335,  -335,
    -335,   120,   120,  1691,  -335,  -335,  1733,   333,  -335,  1775,
      25,    25,   330,   332,   334,   311,   292,  -335,  -335,  -335,
    -335,  -335,    25,  -335,  -335,   339,    25,    25,    25,   -33,
    -335,   313,    25,  -335,   299,   302,  -335,   341,   307,  -335,
    -335,  -335,  -335,    25,  -335,  -335
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     1,     0,   123,   123,     0,
       0,     0,     0,    75,     0,   123,   123,    67,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,   155,   123,    66,     0,     0,   123,   123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,    77,     0,    76,     2,     5,     0,    51,
      32,   138,     0,     0,     0,     0,     0,     0,    77,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     130,     0,   119,   121,     0,   117,     0,     0,     0,     0,
       0,    39,    38,    50,     0,     0,     0,   154,     0,     0,
       0,   136,     0,   133,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,     0,     0,     0,     0,     0,     0,     0,
      54,     0,   128,     0,   126,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     0,    78,
       0,     0,     0,     0,     0,     0,    34,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,     0,     8,     0,
      12,     0,     0,     0,     0,     0,     0,    26,     0,    24,
       0,     0,     0,     0,     0,     0,     0,    27,    30,    31,
      29,    48,    47,    44,    43,    42,    46,    36,    80,    40,
      41,     0,     0,   101,   100,    71,   102,     0,    74,    45,
      37,    49,    70,    81,    73,    72,    35,    79,    33,   104,
      65,     0,   137,     0,    58,     0,   122,     0,     0,     0,
       0,     0,    69,    55,     0,     0,     0,   129,   120,    61,
     116,   118,    62,    63,     0,     0,     0,     0,     0,     0,
       0,   138,     0,     0,     0,    93,   123,    52,    23,    88,
      15,   134,   135,   132,    13,    14,     0,     0,     0,    84,
       0,     0,   146,     0,    90,     0,     0,    92,     0,     0,
      99,     0,     0,     0,     0,     0,     0,     0,    64,   127,
     125,    59,    60,    11,     0,     0,    56,    57,     0,    20,
       0,   114,   111,   138,   138,     0,   115,    17,     0,     0,
       0,    25,   140,     0,     0,     0,     0,     0,    28,     0,
       0,     0,   103,    95,    98,    94,    97,    96,     0,   105,
       0,     0,     0,     0,     0,     0,   112,   113,     0,     0,
       0,     0,    68,     0,     0,     0,    85,    89,   143,   145,
       0,     0,     0,     0,     0,     9,    10,     0,    21,   109,
     106,     0,     0,     0,   110,    18,     0,     0,    82,     0,
       0,     0,   144,     0,     0,   151,     0,   131,   107,   108,
      19,    16,     0,    83,   142,   148,     0,     0,     0,     0,
      91,   140,     0,   141,     0,     0,   150,   153,     0,   139,
     147,    86,    87,     0,   149,   152
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -335,  -335,  -335,   298,  -335,   295,  -104,   -76,  -179,   -16,
    -335,  -335,   186,    -5,    -6,  -238,     9,   192,  -335,   169,
    -335,  -236,   -50,  -334,   -49,   -12,   -59,  -335
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,    56,    57,    58,   225,    59,   270,    84,
      85,    81,    82,    64,    60,   155,    62,    79,    80,   102,
     103,   152,   364,   293,   371,   417,   418,    98
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,   274,   368,    65,    71,    87,    88,   310,    61,   240,
      76,    77,    78,    83,    86,    86,    86,   369,    90,   416,
      52,   336,    94,    75,   238,   114,   221,   100,   101,    61,
     222,   105,   106,   228,    52,   326,   111,   232,   281,   115,
     234,   235,     1,    52,   104,   121,   337,    61,    61,    61,
      52,    52,   334,    52,   348,   249,   404,   154,    61,    61,
     226,   226,   122,   123,   124,   226,   160,   161,   226,   226,
      61,    61,   413,   156,   157,    52,    52,   223,   177,   133,
     224,   148,     4,   226,   148,   164,   165,   356,   357,   302,
     183,     5,   136,   137,    61,    63,    72,   178,   141,    61,
      61,   193,   149,   304,   305,   149,   143,   144,   145,   186,
     265,    52,    73,   147,   191,   192,    74,   299,   300,    63,
     266,   277,   267,   268,   269,    99,    95,    97,    96,   150,
     227,   227,   150,   179,   107,   227,   108,   273,   227,   227,
     109,   133,   239,    61,    52,   226,   226,   266,   110,   267,
     268,   269,   180,   227,   136,   137,   260,   112,   241,   116,
     141,   117,    78,   118,    83,   119,    86,   120,   143,   144,
     145,    52,   271,   151,   271,   379,   380,   153,    99,   114,
     384,   282,   266,   101,   267,   268,   269,   159,   287,   288,
     163,   166,   167,   168,   169,   292,   170,   343,   344,   345,
     346,   347,   398,   399,   136,   137,    52,    -1,   136,   137,
     141,   172,    -1,    -1,   141,   227,   227,   133,   143,   144,
     145,    -1,    -1,   144,   145,   226,   226,   226,   226,   226,
     136,   137,   171,    -1,   173,   174,   141,    61,   175,   154,
     187,   301,   302,   189,   143,   144,   145,   303,   188,   190,
     318,   147,   309,   201,   313,   194,   304,   305,   301,   302,
     321,   322,   323,   324,   303,   195,   197,   207,   208,   209,
     342,   330,   210,   304,   305,   243,   245,   246,   247,   248,
     250,   251,   254,   255,   154,   335,   256,   280,   284,   306,
     340,   285,   341,   286,   307,   227,   227,   227,   227,   227,
     239,   349,   314,   308,    70,   315,   320,   325,   328,   329,
     332,   331,   333,   338,   352,   354,   355,   358,    89,   359,
      91,    92,    93,   361,   363,   365,   373,   362,   366,   367,
     292,   370,   374,   388,   381,   382,   390,   391,   392,   113,
     402,   406,   397,   407,   410,   408,   377,   409,   271,   271,
     412,   421,   423,   271,   422,   125,   258,   387,   283,   424,
     257,   419,   396,   420,   425,     0,   393,   394,   395,   162,
       0,     0,     0,     0,     0,   271,   271,     0,     0,     0,
       0,     0,     0,     0,   292,   405,     0,     0,     0,     0,
     181,   182,     0,   184,   185,     0,   411,     0,     0,     0,
     292,   414,   415,   395,     0,   196,   370,   198,     0,   200,
       0,   202,   203,   204,   205,   206,     0,   395,     0,     0,
       0,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,     0,     0,   229,   230,   231,     0,     0,   233,     0,
       0,   236,   237,     0,     0,     0,   242,     0,   244,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   253,     0,
       0,     0,     0,     0,     0,     0,   259,     0,   261,   262,
     263,     0,   264,     0,   272,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       6,     7,     8,     0,     0,     9,     0,     0,     0,    10,
      11,    12,     0,    13,     0,    14,    15,    16,    17,     0,
       0,    18,     0,     0,     0,     0,    19,     0,     0,     0,
      20,    21,    22,    23,    24,    25,    26,     0,     0,    27,
       0,     0,   311,   312,    28,     0,    29,     0,    30,   316,
     317,     0,     0,     0,    31,     0,    32,    33,     0,    34,
       0,    35,    36,    37,     0,    38,    39,    40,    41,     0,
       0,    42,    43,    44,    45,    46,    47,    48,     0,     0,
      49,    50,    51,    52,    53,    54,     0,    55,     0,     0,
     339,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     6,     7,     8,     0,     0,     0,     0,     0,   350,
     351,     0,     0,     0,    13,   353,    14,    15,    16,    17,
       0,     0,     0,   360,     0,     0,     0,    19,     0,     0,
       0,    20,    21,    22,    23,     0,    25,    26,     0,     0,
      27,     0,     0,     0,     0,     0,     0,    29,     0,    30,
       0,     0,     0,   383,     0,     0,   386,    66,    33,     0,
     389,     0,     0,     0,     0,     0,     0,    39,    40,    41,
       0,     0,     0,    43,     0,    67,    46,    47,    48,     0,
     126,    49,    50,   127,    52,    68,     0,     0,    69,     0,
       0,   128,     0,     0,     0,     0,   129,   130,     0,   131,
     132,   133,     0,     0,     0,   134,   135,     0,     0,     0,
       0,     0,     0,     0,   136,   137,     0,   138,   139,   140,
     141,     0,   126,     0,     0,   127,     0,   142,   143,   144,
     145,     0,   146,   128,     0,   147,     0,     0,   129,   130,
       0,   131,   132,   133,     0,     0,     0,   134,   135,     0,
       0,     0,     0,     0,     0,     0,   136,   137,     0,   138,
     139,   140,   141,     0,   126,     0,     0,   127,     0,   158,
     143,   144,   145,     0,   146,   128,     0,   147,     0,     0,
     129,   130,     0,   131,   132,   133,     0,     0,     0,   134,
     135,     0,     0,     0,     0,     0,     0,     0,   136,   137,
       0,   138,   139,   140,   141,     0,   126,     0,     0,   127,
     176,     0,   143,   144,   145,     0,   146,   128,     0,   147,
       0,     0,   129,   130,     0,   131,   132,   133,     0,     0,
       0,   134,   135,     0,     0,     0,     0,     0,     0,     0,
     136,   137,     0,   138,   139,   140,   141,     0,   126,     0,
       0,   127,     0,   199,   143,   144,   145,     0,   146,   128,
       0,   147,     0,     0,   129,   130,     0,   131,   132,   133,
       0,     0,     0,   134,   135,     0,     0,     0,     0,     0,
       0,     0,   136,   137,     0,   138,   139,   140,   141,     0,
     126,     0,     0,   127,   252,     0,   143,   144,   145,     0,
     146,   128,     0,   147,     0,     0,   129,   130,     0,   131,
     132,   133,     0,     0,     0,   134,   135,     0,     0,     0,
       0,     0,     0,     0,   136,   137,     0,   138,   139,   140,
     141,     0,   126,     0,     0,   127,   275,   276,   143,   144,
     145,     0,   146,   128,     0,   147,     0,     0,   129,   130,
       0,   131,   132,   133,     0,     0,     0,   134,   135,     0,
       0,     0,     0,     0,     0,     0,   136,   137,     0,   138,
     139,   140,   141,     0,   126,     0,     0,   127,     0,     0,
     143,   144,   145,     0,   146,   128,     0,   147,     0,     0,
     129,   130,     0,   131,   132,   133,     0,     0,     0,   134,
     135,     0,     0,     0,     0,     0,     0,     0,   136,   137,
       0,   138,   139,   140,   141,     0,   126,     0,     0,   127,
       0,   278,   143,   144,   145,     0,   146,   128,     0,   147,
       0,     0,   129,   130,     0,   131,   132,   133,     0,     0,
       0,   134,   135,     0,     0,     0,     0,     0,     0,     0,
     136,   137,     0,   138,   139,   140,   141,     0,   126,     0,
       0,   127,   279,     0,   143,   144,   145,     0,   146,   128,
       0,   147,     0,     0,   129,   130,     0,   131,   132,   133,
       0,     0,     0,   134,   135,     0,     0,     0,     0,     0,
       0,     0,   136,   137,     0,   138,   139,   140,   141,     0,
     126,     0,     0,   127,   289,   290,   143,   144,   145,     0,
     146,   128,     0,   147,     0,     0,   129,   130,     0,   131,
     132,   133,     0,     0,     0,   134,   135,     0,     0,     0,
       0,     0,     0,     0,   136,   137,     0,   138,   139,   140,
     141,     0,   126,     0,     0,   127,     0,   291,   143,   144,
     145,     0,   146,   128,     0,   147,     0,     0,   129,   130,
       0,   131,   132,   133,     0,     0,     0,   134,   135,     0,
       0,     0,     0,     0,     0,     0,   136,   137,     0,   138,
     139,   140,   141,     0,   126,     0,     0,   127,     0,     0,
     143,   144,   145,     0,   146,   128,     0,   147,     0,     0,
     129,   130,     0,   131,   132,   133,     0,     0,     0,   134,
     135,     0,     0,     0,     0,     0,     0,     0,   136,   137,
       0,   138,   139,   140,   141,     0,   126,     0,     0,   127,
     294,   295,   143,   144,   145,     0,   146,   128,     0,   147,
       0,     0,   129,   130,     0,   131,   132,   133,     0,     0,
       0,   134,   135,     0,     0,     0,     0,     0,     0,     0,
     136,   137,     0,   138,   139,   140,   141,     0,   126,     0,
       0,   127,     0,   296,   143,   144,   145,     0,   146,   128,
       0,   147,     0,     0,   129,   130,     0,   131,   132,   133,
       0,     0,     0,   134,   135,     0,     0,     0,     0,     0,
       0,     0,   136,   137,     0,   138,   139,   140,   141,     0,
     126,     0,     0,   127,     0,     0,   143,   144,   145,     0,
     146,   128,     0,   147,     0,     0,   129,   130,     0,   131,
     132,   133,     0,     0,     0,   134,   135,     0,     0,     0,
       0,     0,     0,     0,   136,   137,     0,   138,   139,   140,
     141,     0,   126,     0,     0,   127,   297,   298,   143,   144,
     145,     0,   146,   128,     0,   147,     0,     0,   129,   130,
       0,   131,   132,   133,     0,     0,     0,   134,   135,     0,
       0,     0,     0,     0,     0,     0,   136,   137,     0,   138,
     139,   140,   141,     0,   126,     0,     0,   127,     0,     0,
     143,   144,   145,     0,   146,   128,     0,   147,     0,     0,
     129,   130,     0,   131,   132,   133,     0,     0,     0,   134,
     135,     0,     0,     0,     0,     0,     0,     0,   136,   137,
       0,   138,   139,   140,   141,     0,   126,     0,     0,   127,
       0,   319,   143,   144,   145,     0,   146,   128,     0,   147,
       0,     0,   129,   130,     0,   131,   132,   133,     0,     0,
       0,   134,   135,     0,     0,     0,     0,     0,     0,     0,
     136,   137,     0,   138,   139,   140,   141,     0,     0,     0,
       0,     0,     0,   327,   143,   144,   145,   126,   146,     0,
     127,   147,   372,     0,     0,     0,     0,     0,   128,     0,
       0,     0,     0,   129,   130,     0,   131,   132,   133,     0,
       0,     0,   134,   135,     0,     0,     0,     0,     0,     0,
       0,   136,   137,     0,   138,   139,   140,   141,     0,   126,
       0,     0,   127,     0,     0,   143,   144,   145,     0,   146,
     128,     0,   147,     0,     0,   129,   130,     0,   131,   132,
     133,     0,     0,     0,   134,   135,     0,     0,     0,     0,
       0,     0,     0,   136,   137,     0,   138,   139,   140,   141,
       0,   126,     0,     0,   127,     0,   375,   143,   144,   145,
       0,   146,   128,     0,   147,     0,     0,   129,   130,     0,
     131,   132,   133,     0,     0,     0,   134,   135,     0,     0,
       0,     0,     0,     0,     0,   136,   137,     0,   138,   139,
     140,   141,     0,   126,     0,     0,   127,     0,   376,   143,
     144,   145,     0,   146,   128,     0,   147,     0,     0,   129,
     130,     0,   131,   132,   133,     0,     0,     0,   134,   135,
       0,     0,     0,     0,     0,     0,     0,   136,   137,     0,
     138,   139,   140,   141,     0,   126,     0,     0,   127,     0,
     378,   143,   144,   145,     0,   146,   128,     0,   147,     0,
       0,   129,   130,     0,   131,   132,   133,     0,     0,     0,
     134,   135,     0,     0,     0,     0,     0,     0,     0,   136,
     137,     0,   138,   139,   140,   141,     0,   126,     0,     0,
     127,     0,   385,   143,   144,   145,     0,   146,   128,     0,
     147,     0,     0,   129,   130,     0,   131,   132,   133,     0,
       0,     0,   134,   135,     0,     0,     0,     0,     0,     0,
       0,   136,   137,     0,   138,   139,   140,   141,     0,   126,
       0,     0,   127,     0,   400,   143,   144,   145,     0,   146,
     128,     0,   147,     0,     0,   129,   130,     0,   131,   132,
     133,     0,     0,     0,   134,   135,     0,     0,     0,     0,
       0,     0,     0,   136,   137,     0,   138,   139,   140,   141,
       0,   126,     0,     0,   127,     0,   401,   143,   144,   145,
       0,   146,   128,     0,   147,     0,     0,   129,   130,     0,
     131,   132,   133,     0,     0,     0,   134,   135,     0,     0,
       0,     0,     0,     0,     0,   136,   137,     0,   138,   139,
     140,   141,     0,   126,     0,     0,   127,   403,     0,   143,
     144,   145,     0,   146,   128,     0,   147,     0,     0,   129,
     130,     0,   131,   132,   133,     0,     0,     0,   134,   135,
       0,     0,     0,     0,     0,     0,     0,   136,   137,     0,
     138,   139,   140,   141,     0,   126,     0,     0,     0,     0,
       0,   143,   144,   145,     0,   146,   128,     0,   147,     0,
       0,   129,   130,     0,   131,   132,   133,     0,     0,     0,
     134,   135,     0,     0,     0,     0,     0,     0,     0,   136,
     137,     0,   138,   139,   140,   141,     0,   126,     0,     0,
     127,     0,     0,   143,   144,   145,     0,   146,   128,     0,
     147,     0,     0,   129,   130,     0,   131,     0,   133,     0,
       0,     0,   134,   135,     0,     0,     0,     0,     0,     0,
       0,   136,   137,     0,   138,   139,   140,   141,     0,   126,
       0,     0,     0,     0,     0,   143,   144,   145,     0,   146,
     128,     0,   147,     0,     0,   129,   130,     0,     0,   132,
     133,     0,     0,     0,   134,   135,     0,     0,     0,     0,
       0,     0,     0,   136,   137,     0,   138,   139,     0,   141,
       0,     0,     0,     0,     0,     0,     0,   143,   144,   145,
     128,   146,     0,     0,   147,   129,   130,     0,     0,   132,
     133,     0,     0,     0,   134,   135,     0,     0,     0,     0,
       0,     0,     0,   136,   137,     0,   138,   139,     0,   141,
       0,     0,     0,     0,     0,     0,     0,   143,   144,   145,
     128,   146,     0,     0,   147,   129,   130,     0,     0,    -1,
     133,     0,     0,     0,   134,   135,     0,     0,     0,     0,
       0,     0,     0,   136,   137,     0,   138,    -1,     0,   141,
       0,     0,     0,     0,     0,     0,     0,   143,   144,   145,
       0,    -1,     0,     0,   147
};

static const yytype_int16 yycheck[] =
{
       6,   180,   336,     8,    10,    21,    22,   245,    14,    52,
      15,    16,    18,    19,    20,    21,    22,    52,    24,    52,
      86,    11,    28,    14,    90,    36,    36,    32,    34,    35,
      40,    36,    37,   137,    86,   271,    42,   141,    90,    45,
     144,   145,    82,    86,    35,    51,    36,    53,    54,    55,
      86,    86,   290,    86,    90,   159,   390,    63,    64,    65,
     136,   137,    53,    54,    55,   141,    72,    73,   144,   145,
      76,    77,   406,    64,    65,    86,    86,    87,    17,    27,
      90,    15,    53,   159,    15,    76,    77,   323,   324,    41,
      96,     0,    40,    41,   100,    30,    36,    36,    46,   105,
     106,   107,    36,    55,    56,    36,    54,    55,    56,   100,
      52,    86,    36,    61,   105,   106,    36,   221,   222,    30,
      62,    52,    64,    65,    66,    36,    36,    89,    36,    63,
     136,   137,    63,    17,    89,   141,    36,    52,   144,   145,
      36,    27,   148,   149,    86,   221,   222,    62,    36,    64,
      65,    66,    36,   159,    40,    41,   172,    36,   149,    36,
      46,    36,   168,    36,   170,    36,   172,    36,    54,    55,
      56,    86,   178,    67,   180,   354,   355,    10,    36,    36,
     359,   187,    62,   189,    64,    65,    66,    17,   194,   195,
      10,     7,    53,    11,    48,   201,    11,   301,   302,   303,
     304,   305,   381,   382,    40,    41,    86,    17,    40,    41,
      46,    11,    22,    23,    46,   221,   222,    27,    54,    55,
      56,    31,    32,    55,    56,   301,   302,   303,   304,   305,
      40,    41,    26,    43,    17,    26,    46,   243,    26,   245,
      10,    40,    41,    11,    54,    55,    56,    46,    53,    53,
     256,    61,   243,    17,    53,    89,    55,    56,    40,    41,
     266,   267,   268,   269,    46,    89,    53,    53,    53,    53,
      52,   276,    53,    55,    56,    11,    11,    50,    10,    10,
      52,    52,    10,    10,   290,   291,    36,    53,    53,    15,
     296,    53,   298,    89,    15,   301,   302,   303,   304,   305,
     306,   307,    17,    52,     9,    17,    17,    52,    17,    52,
      89,    53,    89,    53,    11,    11,    11,    17,    23,    11,
      25,    26,    27,    17,    11,    11,    11,    52,    52,    52,
     336,   337,    10,    52,    11,    11,    11,    10,    52,    44,
       7,    11,    52,    11,    52,    11,   352,    36,   354,   355,
      11,    52,    11,   359,    52,    57,   170,   363,   189,    52,
     168,   411,   374,   412,   423,    -1,   372,   373,   374,    74,
      -1,    -1,    -1,    -1,    -1,   381,   382,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   390,   391,    -1,    -1,    -1,    -1,
      95,    96,    -1,    98,    99,    -1,   402,    -1,    -1,    -1,
     406,   407,   408,   409,    -1,   110,   412,   112,    -1,   114,
      -1,   116,   117,   118,   119,   120,    -1,   423,    -1,    -1,
      -1,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,    -1,    -1,   138,   139,   140,    -1,    -1,   143,    -1,
      -1,   146,   147,    -1,    -1,    -1,   151,    -1,   153,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,   173,   174,
     175,    -1,   177,    -1,   179,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,    -1,     8,    -1,    -1,    -1,    12,
      13,    14,    -1,    16,    -1,    18,    19,    20,    21,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    38,    39,    -1,    -1,    42,
      -1,    -1,   247,   248,    47,    -1,    49,    -1,    51,   254,
     255,    -1,    -1,    -1,    57,    -1,    59,    60,    -1,    62,
      -1,    64,    65,    66,    -1,    68,    69,    70,    71,    -1,
      -1,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      83,    84,    85,    86,    87,    88,    -1,    90,    -1,    -1,
     295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,   314,
     315,    -1,    -1,    -1,    16,   320,    18,    19,    20,    21,
      -1,    -1,    -1,   328,    -1,    -1,    -1,    29,    -1,    -1,
      -1,    33,    34,    35,    36,    -1,    38,    39,    -1,    -1,
      42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,
      -1,    -1,    -1,   358,    -1,    -1,   361,    59,    60,    -1,
     365,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      -1,    -1,    -1,    75,    -1,    77,    78,    79,    80,    -1,
       6,    83,    84,     9,    86,    87,    -1,    -1,    90,    -1,
      -1,    17,    -1,    -1,    -1,    -1,    22,    23,    -1,    25,
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
      52,    -1,    54,    55,    56,    -1,    58,    17,    -1,    61,
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
      44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,    -1,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    -1,
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
       6,    -1,    -1,     9,    52,    11,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    -1,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,     9,    -1,    11,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    -1,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,    -1,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    -1,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,     9,
      52,    11,    54,    55,    56,    -1,    58,    17,    -1,    61,
      -1,    -1,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    45,    46,    -1,     6,    -1,
      -1,     9,    -1,    11,    54,    55,    56,    -1,    58,    17,
      -1,    61,    -1,    -1,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    -1,
       6,    -1,    -1,     9,    -1,    -1,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    -1,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,     9,    52,    11,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    -1,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,    -1,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    -1,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,     9,
      -1,    53,    54,    55,    56,    -1,    58,    17,    -1,    61,
      -1,    -1,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    56,     6,    58,    -1,
       9,    61,    11,    -1,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    -1,    -1,    22,    23,    -1,    25,    26,    27,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    43,    44,    45,    46,    -1,     6,
      -1,    -1,     9,    -1,    -1,    54,    55,    56,    -1,    58,
      17,    -1,    61,    -1,    -1,    22,    23,    -1,    25,    26,
      27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,    46,
      -1,     6,    -1,    -1,     9,    -1,    53,    54,    55,    56,
      -1,    58,    17,    -1,    61,    -1,    -1,    22,    23,    -1,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,
      45,    46,    -1,     6,    -1,    -1,     9,    -1,    53,    54,
      55,    56,    -1,    58,    17,    -1,    61,    -1,    -1,    22,
      23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      43,    44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,
      53,    54,    55,    56,    -1,    58,    17,    -1,    61,    -1,
      -1,    22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,
       9,    -1,    53,    54,    55,    56,    -1,    58,    17,    -1,
      61,    -1,    -1,    22,    23,    -1,    25,    26,    27,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    43,    44,    45,    46,    -1,     6,
      -1,    -1,     9,    -1,    53,    54,    55,    56,    -1,    58,
      17,    -1,    61,    -1,    -1,    22,    23,    -1,    25,    26,
      27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,    46,
      -1,     6,    -1,    -1,     9,    -1,    53,    54,    55,    56,
      -1,    58,    17,    -1,    61,    -1,    -1,    22,    23,    -1,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,
      45,    46,    -1,     6,    -1,    -1,     9,    52,    -1,    54,
      55,    56,    -1,    58,    17,    -1,    61,    -1,    -1,    22,
      23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      43,    44,    45,    46,    -1,     6,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    -1,    58,    17,    -1,    61,    -1,
      -1,    22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,
       9,    -1,    -1,    54,    55,    56,    -1,    58,    17,    -1,
      61,    -1,    -1,    22,    23,    -1,    25,    -1,    27,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    43,    44,    45,    46,    -1,     6,
      -1,    -1,    -1,    -1,    -1,    54,    55,    56,    -1,    58,
      17,    -1,    61,    -1,    -1,    22,    23,    -1,    -1,    26,
      27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    43,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      17,    58,    -1,    -1,    61,    22,    23,    -1,    -1,    26,
      27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    43,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      17,    58,    -1,    -1,    61,    22,    23,    -1,    -1,    26,
      27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    43,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      -1,    58,    -1,    -1,    61
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
     106,   106,   108,    30,   105,   105,    59,    77,    87,    90,
      97,   106,    36,    36,    36,   108,   105,   105,   106,   109,
     110,   103,   104,   106,   101,   102,   106,   101,   101,    97,
     106,    97,    97,    97,   106,    36,    36,    89,   119,    36,
     105,   106,   111,   112,   108,   105,   105,    89,    36,    36,
      36,   106,    36,    97,    36,   106,    36,    36,    36,    36,
      36,   106,   108,   108,   108,    95,     6,     9,    17,    22,
      23,    25,    26,    27,    31,    32,    40,    41,    43,    44,
      45,    46,    53,    54,    55,    56,    58,    61,    15,    36,
      63,    67,   113,    10,   106,   107,   108,   108,    53,    17,
     106,   106,    97,    10,   108,   108,     7,    53,    11,    48,
      11,    26,    11,    17,    26,    26,    52,    17,    36,    17,
      36,    97,    97,   106,    97,    97,   108,    10,    53,    11,
      53,   108,   108,   106,    89,    89,    97,    53,    97,    53,
      97,    17,    97,    97,    97,    97,    97,    53,    53,    53,
      53,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      97,    36,    40,    87,    90,    98,    99,   106,    98,    97,
      97,    97,    98,    97,    98,    98,    97,    97,    90,   106,
      52,   108,    97,    11,    97,    11,    50,    10,    10,    98,
      52,    52,    52,    97,    10,    10,    36,   109,   104,    97,
     101,    97,    97,    97,    97,    52,    62,    64,    65,    66,
     100,   106,    97,    52,   100,    52,    11,    52,    53,    52,
      53,    90,   106,   111,    53,    53,    89,   106,   106,    52,
      11,    11,   106,   115,    52,    11,    11,    52,    11,    98,
      98,    40,    41,    46,    55,    56,    15,    15,    52,   108,
     107,    97,    97,    53,    17,    17,    97,    97,   106,    53,
      17,   106,   106,   106,   106,    52,   113,    53,    17,    52,
     105,    53,    89,    89,   107,   106,    11,    36,    53,    97,
     106,   106,    52,    98,    98,    98,    98,    98,    90,   106,
      97,    97,    11,    97,    11,    11,   113,   113,    17,    11,
      97,    17,    52,    11,   114,    11,    52,    52,   115,    52,
     106,   116,    11,    11,    10,    53,    53,   106,    53,   100,
     100,    11,    11,    97,   100,    53,    97,   106,    52,    97,
      11,    10,    52,   106,   106,   106,   117,    52,   100,   100,
      53,    53,     7,    52,   115,   106,    11,    11,    11,    36,
      52,   106,    11,   115,   106,   106,    52,   117,   118,   114,
     116,    52,    52,    11,    52,   118
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
      97,    97,    97,    97,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    99,    99,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   101,   101,   102,   103,
     104,   104,   105,   105,   106,   107,   107,   108,   108,   109,
     109,   110,   111,   111,   112,   112,   112,   113,   113,   114,
     114,   115,   115,   115,   115,   115,   115,   116,   116,   117,
     117,   117,   118,   118,   119,   119
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     3,     3,     3,     7,
       7,     5,     3,     4,     4,     4,     8,     5,     7,     8,
       5,     7,     2,     4,     3,     5,     3,     3,     5,     3,
       3,     3,     1,     3,     3,     3,     3,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     1,     4,     1,     2,     4,     5,     5,     4,     5,
       5,     4,     4,     4,     4,     3,     1,     1,     6,     4,
       3,     3,     3,     3,     3,     1,     1,     1,     3,     3,
       3,     3,     7,     8,     4,     6,    10,    10,     4,     6,
       4,     8,     4,     4,     3,     3,     3,     3,     3,     2,
       1,     1,     1,     3,     3,     5,     4,     5,     5,     4,
       4,     2,     3,     3,     2,     2,     3,     1,     3,     1,
       3,     1,     3,     0,     1,     3,     1,     4,     2,     3,
       1,     7,     3,     1,     3,     3,     1,     2,     0,     5,
       0,     6,     5,     3,     4,     3,     1,     5,     3,     4,
       3,     1,     3,     1,     1,     0
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
#line 109 "parser.y"
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
		delete untypedAST;
		}
#line 1832 "parser.cc"
    break;

  case 3: /* header: tokWS2S tokSEMICOLON  */
#line 126 "parser.y"
                               {}
#line 1838 "parser.cc"
    break;

  case 4: /* declarations: declaration declarations  */
#line 129 "parser.y"
                                       {if ((yyvsp[-1].declaration)) (yyvsp[0].declList)->push_front((yyvsp[-1].declaration)); (yyval.declList) = (yyvsp[0].declList);}
#line 1844 "parser.cc"
    break;

  case 5: /* declarations: declaration  */
#line 131 "parser.y"
                      {(yyval.declList) = new DeclarationList();     
	         	if ((yyvsp[0].declaration)) (yyval.declList)->push_front((yyvsp[0].declaration));}
#line 1851 "parser.cc"
    break;

  case 6: /* declaration: tokASSERT exp tokSEMICOLON  */
#line 135 "parser.y"
                                        {(yyval.declaration) = new Assertion_Declaration((yyvsp[-1].untypedExp));}
#line 1857 "parser.cc"
    break;

  case 7: /* declaration: tokGUIDE func_list tokSEMICOLON  */
#line 137 "parser.y"
                                         {}
#line 1863 "parser.cc"
    break;

  case 8: /* declaration: tokUNIVERSE univs tokSEMICOLON  */
#line 139 "parser.y"
                                        {}
#line 1869 "parser.cc"
    break;

  case 9: /* declaration: tokDEFAULT1 tokLPAREN name tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 141 "parser.y"
                                                                         {(yyval.declaration) = new Default_Declaration(Varname1, (yyvsp[-4].name), (yyvsp[-1].untypedExp));}
#line 1875 "parser.cc"
    break;

  case 10: /* declaration: tokDEFAULT2 tokLPAREN name tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 143 "parser.y"
                                                                         {(yyval.declaration) = new Default_Declaration(Varname2, (yyvsp[-4].name), (yyvsp[-1].untypedExp));}
#line 1881 "parser.cc"
    break;

  case 11: /* declaration: tokCONST name tokEQUAL arith_exp tokSEMICOLON  */
#line 145 "parser.y"
                                                        {}
#line 1887 "parser.cc"
    break;

  case 12: /* declaration: tokVAR0 name_where_list tokSEMICOLON  */
#line 147 "parser.y"
                                              {(yyval.declaration)=new Variable_Declaration{Varname0,(yyvsp[-1].varDeclList)};}
#line 1893 "parser.cc"
    break;

  case 13: /* declaration: tokVAR1 universe name_where_list tokSEMICOLON  */
#line 149 "parser.y"
                                                       {(yyval.declaration) = new Variable_Declaration(Varname1,(yyvsp[-1].varDeclList));}
#line 1899 "parser.cc"
    break;

  case 14: /* declaration: tokVAR2 universe name_where_list tokSEMICOLON  */
#line 151 "parser.y"
                                                        {(yyval.declaration)=new Variable_Declaration{Varname2,(yyvsp[-1].varDeclList)};}
#line 1905 "parser.cc"
    break;

  case 15: /* declaration: tokTREE universe name_where_list tokSEMICOLON  */
#line 153 "parser.y"
                                                                {}
#line 1911 "parser.cc"
    break;

  case 16: /* declaration: tokPRED name tokLPAREN par_list tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 155 "parser.y"
                                                                              {(yyval.declaration)=new Predicate_Declaration{(yyvsp[-6].name),(yyvsp[-4].parList),(yyvsp[-1].untypedExp)};}
#line 1917 "parser.cc"
    break;

  case 17: /* declaration: tokPRED name tokEQUAL exp tokSEMICOLON  */
#line 157 "parser.y"
                                                  {(yyval.declaration)=new Predicate_Declaration{(yyvsp[-3].name),new ParList{} ,(yyvsp[-1].untypedExp)};}
#line 1923 "parser.cc"
    break;

  case 18: /* declaration: tokPRED name tokLPAREN tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 159 "parser.y"
                                                                     {(yyval.declaration)=new Predicate_Declaration{(yyvsp[-5].name),new ParList{} ,(yyvsp[-1].untypedExp)};}
#line 1929 "parser.cc"
    break;

  case 19: /* declaration: tokMACRO name tokLPAREN par_list tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 161 "parser.y"
                                                                                {(yyval.declaration)=new Macro_Declaration{(yyvsp[-6].name),(yyvsp[-4].parList),(yyvsp[-1].untypedExp)};}
#line 1935 "parser.cc"
    break;

  case 20: /* declaration: tokMACRO name tokEQUAL exp tokSEMICOLON  */
#line 163 "parser.y"
                                                   {(yyval.declaration)=new Macro_Declaration{(yyvsp[-3].name),new ParList{},(yyvsp[-1].untypedExp)};}
#line 1941 "parser.cc"
    break;

  case 21: /* declaration: tokMACRO name tokLPAREN tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 165 "parser.y"
                                                                       {(yyval.declaration)=new Macro_Declaration{(yyvsp[-5].name),new ParList{},(yyvsp[-1].untypedExp)};}
#line 1947 "parser.cc"
    break;

  case 22: /* declaration: exp tokSEMICOLON  */
#line 167 "parser.y"
                           {(yyval.declaration) = new Expression_Declaration((yyvsp[-1].untypedExp));}
#line 1953 "parser.cc"
    break;

  case 23: /* declaration: tokVERIFY optstring exp tokSEMICOLON  */
#line 169 "parser.y"
                                               { yyerror("verify command is not supported");}
#line 1959 "parser.cc"
    break;

  case 24: /* declaration: tokEXECUTE exp tokSEMICOLON  */
#line 171 "parser.y"
                                      {/*$$ = new Execute_Declaration($2);*/ yyerror("execute command is not supported");}
#line 1965 "parser.cc"
    break;

  case 25: /* declaration: tokINCLUDE tokSTRING name tokSTRING tokSEMICOLON  */
#line 173 "parser.y"
                                                           {}
#line 1971 "parser.cc"
    break;

  case 26: /* declaration: tokLASTPOS name tokSEMICOLON  */
#line 175 "parser.y"
                                               {yyerror("latpos command is not supported");}
#line 1977 "parser.cc"
    break;

  case 27: /* declaration: tokALLPOS name tokSEMICOLON  */
#line 177 "parser.y"
                                              {(yyval.declaration) = new AllPos_Declaration((yyvsp[-1].name));}
#line 1983 "parser.cc"
    break;

  case 28: /* declaration: tokTYPE name tokEQUAL variant_list tokSEMICOLON  */
#line 179 "parser.y"
                                                                { yyerror("type command is not supported");}
#line 1989 "parser.cc"
    break;

  case 29: /* declaration: tokINT name_where_list tokSEMICOLON  */
#line 181 "parser.y"
                                                      {(yyval.declaration) = new Variable_Declaration{Integer,(yyvsp[-1].varDeclList)};}
#line 1995 "parser.cc"
    break;

  case 30: /* declaration: tokReal name_where_list tokSEMICOLON  */
#line 183 "parser.y"
                                                       {(yyval.declaration) = new Variable_Declaration{Real,(yyvsp[-1].varDeclList)};}
#line 2001 "parser.cc"
    break;

  case 31: /* declaration: tokBool name_where_list tokSEMICOLON  */
#line 185 "parser.y"
                                                       {(yyval.declaration) = new Variable_Declaration{Boolean,(yyvsp[-1].varDeclList)};}
#line 2007 "parser.cc"
    break;

  case 32: /* exp: name  */
#line 190 "parser.y"
               {(yyval.untypedExp) = new UntypedExp_Name(uName,(yyvsp[0].name));}
#line 2013 "parser.cc"
    break;

  case 33: /* exp: name tokDOT tokINT  */
#line 192 "parser.y"
                                     {check_bits(*(yyvsp[0].st));(yyval.untypedExp)=new UntypedExp_PathName{uPathName,(yyvsp[-2].name),(yyvsp[0].st)};}
#line 2019 "parser.cc"
    break;

  case 34: /* exp: tokLPAREN exp tokRPAREN  */
#line 194 "parser.y"
                                  {(yyval.untypedExp)=new UntypedExp_Paren{(yyvsp[-1].untypedExp)};}
#line 2025 "parser.cc"
    break;

  case 35: /* exp: exp tokSUB exp  */
#line 196 "parser.y"
                        {}
#line 2031 "parser.cc"
    break;

  case 36: /* exp: exp tokIN exp  */
#line 198 "parser.y"
                        {(yyval.untypedExp) = new UntypedExp_In((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2037 "parser.cc"
    break;

  case 37: /* exp: exp tokNOTIN exp  */
#line 200 "parser.y"
                          {(yyval.untypedExp) = new UntypedExp_NotIn((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2043 "parser.cc"
    break;

  case 38: /* exp: tokMIN exp  */
#line 202 "parser.y"
                    {}
#line 2049 "parser.cc"
    break;

  case 39: /* exp: tokMAX exp  */
#line 204 "parser.y"
                    {}
#line 2055 "parser.cc"
    break;

  case 40: /* exp: exp tokLESS exp  */
#line 206 "parser.y"
                           {(yyval.untypedExp) = new UntypedExp_Less((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2061 "parser.cc"
    break;

  case 41: /* exp: exp tokLESSEQ exp  */
#line 208 "parser.y"
                            {(yyval.untypedExp) = new UntypedExp_LessEq((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2067 "parser.cc"
    break;

  case 42: /* exp: exp tokGREATEREQ exp  */
#line 210 "parser.y"
                              {(yyval.untypedExp) = new UntypedExp_GreaterEq((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2073 "parser.cc"
    break;

  case 43: /* exp: exp tokGREATER exp  */
#line 212 "parser.y"
                             {(yyval.untypedExp) = new UntypedExp_Greater((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2079 "parser.cc"
    break;

  case 44: /* exp: exp tokEQUAL exp  */
#line 214 "parser.y"
                          {(yyval.untypedExp) = new UntypedExp_Equal((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2085 "parser.cc"
    break;

  case 45: /* exp: exp tokNOTEQUAL exp  */
#line 216 "parser.y"
                              {(yyval.untypedExp)=new UntypedExp_NotEqual((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2091 "parser.cc"
    break;

  case 46: /* exp: exp tokIMPL exp  */
#line 218 "parser.y"
                         {(yyval.untypedExp) = new UntypedExp_Impl((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2097 "parser.cc"
    break;

  case 47: /* exp: exp tokBIIMPL exp  */
#line 220 "parser.y"
                            {(yyval.untypedExp) = new UntypedExp_Biimpl((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2103 "parser.cc"
    break;

  case 48: /* exp: exp tokAND exp  */
#line 222 "parser.y"
                         {(yyval.untypedExp) = new UntypedExp_And((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2109 "parser.cc"
    break;

  case 49: /* exp: exp tokOR exp  */
#line 224 "parser.y"
                        {(yyval.untypedExp) = new UntypedExp_Or((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2115 "parser.cc"
    break;

  case 50: /* exp: tokNOT exp  */
#line 226 "parser.y"
                     {(yyval.untypedExp)=new UntypedExp_Not{(yyvsp[0].untypedExp)};}
#line 2121 "parser.cc"
    break;

  case 51: /* exp: dotExp  */
#line 228 "parser.y"
                         {(yyval.untypedExp)=(yyvsp[0].UntypedExpDotName);}
#line 2127 "parser.cc"
    break;

  case 52: /* exp: tokUNIVROOT tokLPAREN name tokRPAREN  */
#line 230 "parser.y"
                                               {}
#line 2133 "parser.cc"
    break;

  case 53: /* exp: tokUNIVROOT  */
#line 231 "parser.y"
                      {}
#line 2139 "parser.cc"
    break;

  case 54: /* exp: name tokUP  */
#line 233 "parser.y"
                     {(yyval.untypedExp) = new UntypedExp_NameUp((yyvsp[-1].name));}
#line 2145 "parser.cc"
    break;

  case 55: /* exp: tokEX0 name_where_list tokCOLON exp  */
#line 235 "parser.y"
                                              {(yyval.untypedExp) = new UntypedExp_Ex0((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2151 "parser.cc"
    break;

  case 56: /* exp: tokEX1 universe name_where_list tokCOLON exp  */
#line 237 "parser.y"
                                                       {(yyval.untypedExp) = new UntypedExp_Ex1((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2157 "parser.cc"
    break;

  case 57: /* exp: tokEX2 universe name_where_list tokCOLON exp  */
#line 239 "parser.y"
                                                       {(yyval.untypedExp) = new UntypedExp_Ex2((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2163 "parser.cc"
    break;

  case 58: /* exp: tokALL0 name_where_list tokCOLON exp  */
#line 241 "parser.y"
                                               {(yyval.untypedExp) = new UntypedExp_All0((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2169 "parser.cc"
    break;

  case 59: /* exp: tokALL1 universe name_where_list tokCOLON exp  */
#line 243 "parser.y"
                                                        {(yyval.untypedExp) = new UntypedExp_All1((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));(yyval.untypedExp)->turnTrueIsAll1();}
#line 2175 "parser.cc"
    break;

  case 60: /* exp: tokALL2 universe name_where_list tokCOLON exp  */
#line 245 "parser.y"
                                                        {(yyval.untypedExp) = new UntypedExp_All2((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2181 "parser.cc"
    break;

  case 61: /* exp: tokLET0 defs tokIN exp  */
#line 247 "parser.y"
                                             {(yyval.untypedExp) = new UntypedExp_Let0((yyvsp[-2].bindExpList), (yyvsp[0].untypedExp));}
#line 2187 "parser.cc"
    break;

  case 62: /* exp: tokLET1 defs tokIN exp  */
#line 249 "parser.y"
                                            {(yyval.untypedExp) = new UntypedExp_Let1((yyvsp[-2].bindExpList), (yyvsp[0].untypedExp));}
#line 2193 "parser.cc"
    break;

  case 63: /* exp: tokLET2 defs tokIN exp  */
#line 251 "parser.y"
                                             {(yyval.untypedExp) = new UntypedExp_Let2((yyvsp[-2].bindExpList), (yyvsp[0].untypedExp));}
#line 2199 "parser.cc"
    break;

  case 64: /* exp: name tokLPAREN name_where_list tokRPAREN  */
#line 253 "parser.y"
                                                   {(yyval.untypedExp)=new UntypedExp_Call{(yyvsp[-3].name),(yyvsp[-1].varDeclList)}; }
#line 2205 "parser.cc"
    break;

  case 65: /* exp: name tokLPAREN tokRPAREN  */
#line 255 "parser.y"
                                           {(yyval.untypedExp)=new UntypedExp_Call{(yyvsp[-2].name),new VarDeclList()};}
#line 2211 "parser.cc"
    break;

  case 66: /* exp: tokTRUE  */
#line 257 "parser.y"
                  {(yyval.untypedExp)=new UntypedExp_True();}
#line 2217 "parser.cc"
    break;

  case 67: /* exp: tokFALSE  */
#line 259 "parser.y"
                   {(yyval.untypedExp) = new UntypedExp_False();}
#line 2223 "parser.cc"
    break;

  case 68: /* exp: tokUNIVROOT tokLPAREN exp tokCOMMA universe tokRPAREN  */
#line 261 "parser.y"
                                                                {}
#line 2229 "parser.cc"
    break;

  case 69: /* exp: tokEMPTY tokLPAREN exp tokRPAREN  */
#line 263 "parser.y"
                                           {(yyval.untypedExp) = new UntypedExp_EmptyPred((yyvsp[-1].untypedExp));}
#line 2235 "parser.cc"
    break;

  case 70: /* exp: exp tokPLUS arith_exp  */
#line 265 "parser.y"
                                {(yyval.untypedExp) = new UntypedExp_Plus((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2241 "parser.cc"
    break;

  case 71: /* exp: exp tokMINUS arith_exp  */
#line 267 "parser.y"
                                 {(yyval.untypedExp) = new UntypedExp_Minus((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2247 "parser.cc"
    break;

  case 72: /* exp: exp tokSTAR arith_exp  */
#line 269 "parser.y"
                                {(yyval.untypedExp) = new UntypedExp_Mult((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2253 "parser.cc"
    break;

  case 73: /* exp: exp tokSLASH arith_exp  */
#line 271 "parser.y"
                                 {(yyval.untypedExp) = new UntypedExp_Div((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2259 "parser.cc"
    break;

  case 74: /* exp: exp tokMODULO arith_exp  */
#line 273 "parser.y"
                                   {(yyval.untypedExp) = new UntypedExp_Modul((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2265 "parser.cc"
    break;

  case 75: /* exp: tokEMPTY  */
#line 275 "parser.y"
                  {(yyval.untypedExp) = new UntypedExp_Empty();}
#line 2271 "parser.cc"
    break;

  case 76: /* exp: tokINT  */
#line 277 "parser.y"
                         {(yyval.untypedExp) = new UntypedExp_Int(stoi(*(yyvsp[0].st)));delete (yyvsp[0].st);}
#line 2277 "parser.cc"
    break;

  case 77: /* exp: tokReal  */
#line 279 "parser.y"
                         {(yyval.untypedExp)=new UntypedExp_Real{(yyvsp[0].doubleVal)};}
#line 2283 "parser.cc"
    break;

  case 78: /* exp: tokLBRACE set_body tokRBRACE  */
#line 281 "parser.y"
                                      {(yyval.untypedExp) = new UntypedExp_Set((yyvsp[-1].varDeclList));}
#line 2289 "parser.cc"
    break;

  case 79: /* exp: exp tokUNION exp  */
#line 283 "parser.y"
                           {(yyval.untypedExp) = new UntypedExp_Union((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2295 "parser.cc"
    break;

  case 80: /* exp: exp tokINTER exp  */
#line 285 "parser.y"
                           {(yyval.untypedExp) = new UntypedExp_Inter((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2301 "parser.cc"
    break;

  case 81: /* exp: exp tokSETMINUS exp  */
#line 287 "parser.y"
                              {(yyval.untypedExp) = new UntypedExp_Setminus((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2307 "parser.cc"
    break;

  case 82: /* exp: tokIMPORT tokLPAREN tokSTRING name tokSTRING map_list tokRPAREN  */
#line 289 "parser.y"
                                                                          {yyerror("import command is not supported");}
#line 2313 "parser.cc"
    break;

  case 83: /* exp: tokEXPORT tokLPAREN tokSTRING name tokSTRING tokCOMMA exp tokRPAREN  */
#line 291 "parser.y"
                                                                             {/*$$ = new UntypedExp_Export{$4, $7};*/ yyerror("export command is not supported");}
#line 2319 "parser.cc"
    break;

  case 84: /* exp: tokPREFIX tokLPAREN exp tokRPAREN  */
#line 293 "parser.y"
                                           { yyerror("prefix command is not supported");}
#line 2325 "parser.cc"
    break;

  case 85: /* exp: tokINSTATESPACE tokLPAREN exp tokCOMMA name_list tokRPAREN  */
#line 295 "parser.y"
                                                                    { yyerror("in_state_space command is not supported");}
#line 2331 "parser.cc"
    break;

  case 86: /* exp: tokVARIANT tokLPAREN exp tokCOMMA exp tokCOMMA name tokCOMMA name tokRPAREN  */
#line 298 "parser.y"
                                 { yyerror("variant command is not supported");}
#line 2337 "parser.cc"
    break;

  case 87: /* exp: tokSUCC tokLPAREN exp tokCOMMA name tokCOMMA name tokCOMMA name tokRPAREN  */
#line 301 "parser.y"
                        {yyerror("succ command is not supported");}
#line 2343 "parser.cc"
    break;

  case 88: /* exp: tokTREE tokLPAREN exp tokRPAREN  */
#line 303 "parser.y"
                                         {yyerror("tree command is not supported");}
#line 2349 "parser.cc"
    break;

  case 89: /* exp: tokTYPE tokLPAREN exp tokCOMMA name tokRPAREN  */
#line 305 "parser.y"
                                                       {}
#line 2355 "parser.cc"
    break;

  case 90: /* exp: tokSOMETYPE tokLPAREN exp tokRPAREN  */
#line 307 "parser.y"
                                             { yyerror("sometype command is not supported");}
#line 2361 "parser.cc"
    break;

  case 91: /* exp: tokCONSTTREE tokLPAREN exp tokCOMMA name tokCOLON constnode tokRPAREN  */
#line 310 "parser.y"
                             {yyerror("const_tree command is not supported");}
#line 2367 "parser.cc"
    break;

  case 92: /* exp: tokTREEROOT tokLPAREN exp tokRPAREN  */
#line 312 "parser.y"
                                             {yyerror("tree_root command is not supported");}
#line 2373 "parser.cc"
    break;

  case 93: /* exp: tokRESTRICT tokLPAREN exp tokRPAREN  */
#line 314 "parser.y"
                                             {(yyval.untypedExp) = new UntypedExp_Restrict((yyvsp[-1].untypedExp));}
#line 2379 "parser.cc"
    break;

  case 94: /* arith_exp: arith_exp tokPLUS arith_exp  */
#line 319 "parser.y"
                                       {(yyval.arithExp) = new ArithExp_Add((yyvsp[-2].arithExp), (yyvsp[0].arithExp));}
#line 2385 "parser.cc"
    break;

  case 95: /* arith_exp: arith_exp tokMINUS arith_exp  */
#line 321 "parser.y"
                                       {(yyval.arithExp) = new ArithExp_Subtr((yyvsp[-2].arithExp), (yyvsp[0].arithExp));}
#line 2391 "parser.cc"
    break;

  case 96: /* arith_exp: arith_exp tokSTAR arith_exp  */
#line 323 "parser.y"
                                      {(yyval.arithExp) = new ArithExp_Mult((yyvsp[-2].arithExp), (yyvsp[0].arithExp));}
#line 2397 "parser.cc"
    break;

  case 97: /* arith_exp: arith_exp tokSLASH arith_exp  */
#line 325 "parser.y"
                                       {(yyval.arithExp) = new ArithExp_Div((yyvsp[-2].arithExp), (yyvsp[0].arithExp));}
#line 2403 "parser.cc"
    break;

  case 98: /* arith_exp: arith_exp tokMODULO arith_exp  */
#line 327 "parser.y"
                                       {(yyval.arithExp)=new ArithExp_Modul((yyvsp[-2].arithExp),(yyvsp[0].arithExp));}
#line 2409 "parser.cc"
    break;

  case 99: /* arith_exp: tokMINUS arith_exp  */
#line 329 "parser.y"
                             {}
#line 2415 "parser.cc"
    break;

  case 100: /* arith_exp: tokINT  */
#line 332 "parser.y"
        {
		(yyval.arithExp) = new ArithExp_Integer(stoi(*(yyvsp[0].st)));
		delete (yyvsp[0].st);
	}
#line 2424 "parser.cc"
    break;

  case 101: /* arith_exp: tokReal  */
#line 337 "parser.y"
                 {(yyval.arithExp)=new ArithExp_Real{(yyvsp[0].doubleVal)};}
#line 2430 "parser.cc"
    break;

  case 102: /* arith_exp: dotExp  */
#line 339 "parser.y"
                 {
					if((yyvsp[0].UntypedExpDotName)->kind==uDotName)
						(yyval.arithExp)=new AritExp_ConstDotName{(yyvsp[0].UntypedExpDotName)->dotName};
					else{
						UntypedExp_DotNameNumber* dotwithPath=static_cast<UntypedExp_DotNameNumber*>((yyvsp[0].UntypedExpDotName));
						(yyval.arithExp)=new ArithExp_ConstPathDotName{dotwithPath->dotName,dotwithPath->path};
					}
		}
#line 2443 "parser.cc"
    break;

  case 103: /* arith_exp: tokLPAREN arith_exp tokRPAREN  */
#line 348 "parser.y"
                                        {}
#line 2449 "parser.cc"
    break;

  case 104: /* dotExp: name tokDOT name  */
#line 352 "parser.y"
                                 {(yyval.UntypedExpDotName)=new UntypedExp_DotName{new DotName{(yyvsp[-2].name),(yyvsp[0].name)}};}
#line 2455 "parser.cc"
    break;

  case 105: /* dotExp: name tokDOT tokINT tokDOT name  */
#line 354 "parser.y"
                                                        {checkNameIntName(*(yyvsp[-2].st));(yyval.UntypedExpDotName)=new UntypedExp_DotNameNumber{new DotName{(yyvsp[-4].name),(yyvsp[0].name)},(yyvsp[-2].st)};}
#line 2461 "parser.cc"
    break;

  case 106: /* par_list: tokVAR0 name tokCOMMA par_list  */
#line 359 "parser.y"
                                         {(yyvsp[0].parList)->push_front(new ParPred{Varname0,(yyvsp[-2].name)});(yyval.parList)=(yyvsp[0].parList);}
#line 2467 "parser.cc"
    break;

  case 107: /* par_list: tokVAR1 name where tokCOMMA par_list  */
#line 361 "parser.y"
                                              {{(yyvsp[0].parList)->push_front(new ParPred{Varname1,(yyvsp[-3].name)});(yyval.parList)=(yyvsp[0].parList);}}
#line 2473 "parser.cc"
    break;

  case 108: /* par_list: tokVAR2 name where tokCOMMA par_list  */
#line 363 "parser.y"
                                              {(yyvsp[0].parList)->push_front(new ParPred{Varname2,(yyvsp[-3].name)});(yyval.parList)=(yyvsp[0].parList);}
#line 2479 "parser.cc"
    break;

  case 109: /* par_list: tokUNIVERSE name tokCOMMA par_list  */
#line 365 "parser.y"
                                             {}
#line 2485 "parser.cc"
    break;

  case 110: /* par_list: name where tokCOMMA par_list  */
#line 367 "parser.y"
                                       {}
#line 2491 "parser.cc"
    break;

  case 111: /* par_list: tokVAR0 name  */
#line 369 "parser.y"
                       {(yyval.parList)=new ParList();(yyval.parList)->push_front(new ParPred{Varname0,(yyvsp[0].name)});}
#line 2497 "parser.cc"
    break;

  case 112: /* par_list: tokVAR1 name where  */
#line 371 "parser.y"
                             {(yyval.parList)=new ParList();(yyval.parList)->push_front(new ParPred{Varname1,(yyvsp[-1].name)});}
#line 2503 "parser.cc"
    break;

  case 113: /* par_list: tokVAR2 name where  */
#line 373 "parser.y"
                            {(yyval.parList)=new ParList();(yyval.parList)->push_front(new ParPred{Varname2,(yyvsp[-1].name)});}
#line 2509 "parser.cc"
    break;

  case 114: /* par_list: tokUNIVERSE name  */
#line 375 "parser.y"
                           {}
#line 2515 "parser.cc"
    break;

  case 115: /* par_list: name where  */
#line 377 "parser.y"
                    {}
#line 2521 "parser.cc"
    break;

  case 116: /* defs: def tokCOMMA defs  */
#line 382 "parser.y"
                           {(yyvsp[0].bindExpList)->push_front((yyvsp[-2].bindExp)); 
		 (yyval.bindExpList) = (yyvsp[0].bindExpList);}
#line 2528 "parser.cc"
    break;

  case 117: /* defs: def  */
#line 385 "parser.y"
              {(yyval.bindExpList) = new BindExpList(); 
		 (yyval.bindExpList)->push_front((yyvsp[0].bindExp));}
#line 2535 "parser.cc"
    break;

  case 118: /* def: name tokEQUAL exp  */
#line 390 "parser.y"
                           {(yyval.bindExp) = new BindExp((yyvsp[-2].name), (yyvsp[0].untypedExp));}
#line 2541 "parser.cc"
    break;

  case 119: /* set_body: non_empty_set_body  */
#line 394 "parser.y"
                            {}
#line 2547 "parser.cc"
    break;

  case 120: /* non_empty_set_body: name tokCOMMA non_empty_set_body  */
#line 398 "parser.y"
                                                    {(yyvsp[0].varDeclList)->push_back(new VarDecl{(yyvsp[-2].name),nullptr});(yyval.varDeclList)=(yyvsp[0].varDeclList);}
#line 2553 "parser.cc"
    break;

  case 121: /* non_empty_set_body: name  */
#line 400 "parser.y"
              {(yyval.varDeclList)=new VarDeclList{}; (yyval.varDeclList)->push_back(new VarDecl{(yyvsp[0].name),nullptr});}
#line 2559 "parser.cc"
    break;

  case 122: /* universe: tokLBRACKET name_list tokRBRACKET  */
#line 406 "parser.y"
                                           {}
#line 2565 "parser.cc"
    break;

  case 123: /* universe: %empty  */
#line 408 "parser.y"
                     {}
#line 2571 "parser.cc"
    break;

  case 124: /* name: tokNAME  */
#line 413 "parser.y"
                {(yyval.name) = new Name((yyvsp[0].st));}
#line 2577 "parser.cc"
    break;

  case 125: /* name_list: name tokCOMMA name_list  */
#line 417 "parser.y"
                                  {}
#line 2583 "parser.cc"
    break;

  case 126: /* name_list: name  */
#line 419 "parser.y"
              {}
#line 2589 "parser.cc"
    break;

  case 127: /* name_where_list: name where tokCOMMA name_where_list  */
#line 424 "parser.y"
                {(yyvsp[0].varDeclList)->push_front(new VarDecl((yyvsp[-3].name),(yyvsp[-2].untypedExp))); 
		 (yyval.varDeclList) = (yyvsp[0].varDeclList);}
#line 2596 "parser.cc"
    break;

  case 128: /* name_where_list: name where  */
#line 427 "parser.y"
                {(yyval.varDeclList) = new VarDeclList(); 
		 (yyval.varDeclList)->push_front(new VarDecl((yyvsp[-1].name),(yyvsp[0].untypedExp)));}
#line 2603 "parser.cc"
    break;

  case 129: /* func_list: func tokCOMMA func_list  */
#line 432 "parser.y"
                                  {}
#line 2609 "parser.cc"
    break;

  case 130: /* func_list: func  */
#line 434 "parser.y"
              {}
#line 2615 "parser.cc"
    break;

  case 131: /* func: name tokARROW tokLPAREN name tokCOMMA name tokRPAREN  */
#line 438 "parser.y"
                                                              {}
#line 2621 "parser.cc"
    break;

  case 132: /* univs: univ tokCOMMA univs  */
#line 442 "parser.y"
                             {}
#line 2627 "parser.cc"
    break;

  case 133: /* univs: univ  */
#line 444 "parser.y"
              {}
#line 2633 "parser.cc"
    break;

  case 134: /* univ: name tokCOLON tokINT  */
#line 448 "parser.y"
                              {}
#line 2639 "parser.cc"
    break;

  case 135: /* univ: name tokCOLON name  */
#line 450 "parser.y"
                            {}
#line 2645 "parser.cc"
    break;

  case 136: /* univ: name  */
#line 452 "parser.y"
              {}
#line 2651 "parser.cc"
    break;

  case 137: /* where: tokWHERE exp  */
#line 456 "parser.y"
                      {(yyval.untypedExp)=(yyvsp[0].untypedExp);}
#line 2657 "parser.cc"
    break;

  case 138: /* where: %empty  */
#line 458 "parser.y"
                     {(yyval.untypedExp)=nullptr;}
#line 2663 "parser.cc"
    break;

  case 139: /* map_list: tokCOMMA name tokARROW name map_list  */
#line 462 "parser.y"
                                              {}
#line 2669 "parser.cc"
    break;

  case 140: /* map_list: %empty  */
#line 464 "parser.y"
                     {}
#line 2675 "parser.cc"
    break;

  case 141: /* variant_list: name tokLPAREN component_list tokRPAREN tokCOMMA variant_list  */
#line 468 "parser.y"
                                                                           {}
#line 2681 "parser.cc"
    break;

  case 142: /* variant_list: name tokLPAREN tokRPAREN tokCOMMA variant_list  */
#line 470 "parser.y"
                                                        {}
#line 2687 "parser.cc"
    break;

  case 143: /* variant_list: name tokCOMMA variant_list  */
#line 472 "parser.y"
                                    {}
#line 2693 "parser.cc"
    break;

  case 144: /* variant_list: name tokLPAREN component_list tokRPAREN  */
#line 474 "parser.y"
                                                 {}
#line 2699 "parser.cc"
    break;

  case 145: /* variant_list: name tokLPAREN tokRPAREN  */
#line 476 "parser.y"
                                  {}
#line 2705 "parser.cc"
    break;

  case 146: /* variant_list: name  */
#line 478 "parser.y"
              {}
#line 2711 "parser.cc"
    break;

  case 147: /* component_list: name tokCOLON name tokCOMMA component_list  */
#line 482 "parser.y"
                                                          {}
#line 2717 "parser.cc"
    break;

  case 148: /* component_list: name tokCOLON name  */
#line 484 "parser.y"
                            {}
#line 2723 "parser.cc"
    break;

  case 149: /* constnode: name tokLPAREN constnode_list tokRPAREN  */
#line 488 "parser.y"
                                                  {}
#line 2729 "parser.cc"
    break;

  case 150: /* constnode: name tokLPAREN tokRPAREN  */
#line 490 "parser.y"
                                  {}
#line 2735 "parser.cc"
    break;

  case 151: /* constnode: name  */
#line 492 "parser.y"
              {}
#line 2741 "parser.cc"
    break;

  case 152: /* constnode_list: constnode tokCOMMA constnode_list  */
#line 496 "parser.y"
                                                 {}
#line 2747 "parser.cc"
    break;

  case 153: /* constnode_list: constnode  */
#line 498 "parser.y"
                   {}
#line 2753 "parser.cc"
    break;

  case 154: /* optstring: tokSTRING  */
#line 502 "parser.y"
                    {}
#line 2759 "parser.cc"
    break;

  case 155: /* optstring: %empty  */
#line 504 "parser.y"
                      {}
#line 2765 "parser.cc"
    break;


#line 2769 "parser.cc"

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

#line 509 "parser.y"

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
		delete untypedAST;
	exit(-1);
}
