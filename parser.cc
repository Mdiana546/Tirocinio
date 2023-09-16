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
#define YYLAST   2070

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  158
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  431

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
     226,   228,   230,   232,   234,   236,   238,   240,   242,   244,
     246,   248,   250,   252,   254,   256,   258,   260,   262,   264,
     266,   268,   270,   272,   274,   276,   278,   280,   282,   284,
     286,   288,   290,   292,   294,   296,   298,   300,   302,   304,
     307,   310,   312,   314,   316,   319,   321,   326,   328,   330,
     332,   334,   336,   338,   344,   346,   355,   359,   361,   366,
     368,   370,   372,   374,   376,   378,   380,   382,   384,   389,
     392,   397,   401,   405,   407,   413,   415,   419,   424,   426,
     430,   433,   439,   441,   445,   449,   451,   455,   457,   459,
     463,   465,   469,   471,   475,   477,   479,   481,   483,   485,
     489,   491,   495,   497,   499,   503,   505,   509,   511
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

#define YYPACT_NINF (-318)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -65,   -33,    35,   522,  -318,  -318,   -49,    20,    20,   626,
     -49,    16,    43,    46,   -49,    20,    20,  -318,   -49,   -49,
     -49,   -49,   -49,   626,   -49,   626,   626,   626,   -49,    60,
       4,    15,   141,  -318,   -49,   -49,    20,    20,    18,    73,
      81,    94,   -49,    99,   626,   -11,   114,   116,   117,   119,
     126,   -49,  -318,   -49,   -49,   -49,  -318,   522,   702,  -318,
      45,    26,   112,   -49,   -49,   -49,   128,   138,  -318,  -318,
     744,    97,   -49,   -49,   626,   169,   -49,   -49,   181,   134,
     178,   146,  -318,   188,   174,   195,   192,   184,   185,   786,
      70,    57,    57,  1969,    88,   626,    51,   626,  -318,   626,
     626,   -49,   202,   160,   203,   162,   -49,   -49,   -49,   127,
     135,   626,   170,   626,   828,   626,   210,   626,   626,   626,
     626,   626,   191,   193,   196,   197,  -318,   626,   626,   626,
     626,   626,   626,   626,   626,   626,   626,   -10,   -10,   626,
     626,   626,   -10,  -318,   626,   -10,   -10,   626,   626,    52,
     -43,  -318,   626,   226,   626,   234,   201,   242,   244,  -318,
     -10,   206,   215,   870,   626,   258,   259,   240,  -318,   -49,
    -318,   -49,   626,   -49,   626,   626,   626,  -318,   626,   104,
     626,   131,   912,   263,  -318,   954,    36,   996,  1038,   227,
      86,  -318,   -49,  -318,   228,   229,   190,   -49,   -49,  1080,
    -318,  1122,  -318,  1164,   -49,  1206,  1248,  1290,  1332,  1374,
    -318,  -318,  -318,  -318,  1969,  1845,   291,   291,   291,  1887,
    2009,   180,   291,   291,   -10,   -10,  -318,  -318,    78,  -318,
     268,  -318,   291,  2009,  1929,    78,   251,  -318,  -318,  2009,
     323,   270,  -318,  -318,   232,  1845,   -49,  1845,   -49,  -318,
     626,   626,   105,   273,   276,  -318,  1845,   626,   626,   -49,
    -318,  -318,  1845,  -318,   216,  1845,  1845,  1416,   278,   -49,
     -49,   -49,   -49,   235,    26,  1458,   281,   260,  -318,   -49,
      20,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
     233,   222,   230,  -318,   -49,   -49,    10,   264,  -318,   626,
     -49,  -318,   -49,   269,    78,   -10,   -10,   -10,   -10,   -10,
      92,   -49,  -318,  -318,  -318,  1845,  1845,  -318,   626,   626,
    1845,  1845,   305,  -318,   626,   309,   316,    26,    26,   311,
     318,  -318,   626,   313,  -318,   286,  -318,   322,   328,   289,
     296,   -49,    37,  -318,  1509,   338,   345,  -318,    78,  -318,
      78,  -318,  -318,   270,  -318,  1551,  1593,   -49,  1635,    63,
      63,   346,   348,   626,    63,  1677,   626,  -318,   -49,   304,
     626,  -318,  -318,  -318,   349,   355,   314,   -49,   -49,   -49,
    -318,  -318,   315,  -318,  -318,  -318,    63,    63,  1719,  -318,
    -318,  1761,   361,  -318,  1803,   -49,   -49,   359,   363,   364,
     340,   330,  -318,  -318,  -318,  -318,  -318,   -49,  -318,  -318,
     372,   -49,   -49,   -49,    40,  -318,   322,   -49,  -318,   332,
     333,  -318,   375,   335,  -318,  -318,  -318,  -318,   -49,  -318,
    -318
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     1,     0,   126,   126,     0,
       0,     0,     0,    78,     0,   126,   126,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,   158,   126,    69,     0,     0,   126,   126,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   127,    80,     0,    79,     2,     5,     0,    51,
      32,   141,     0,     0,     0,     0,     0,     0,    80,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     133,     0,   122,   124,     0,   120,     0,     0,     0,     0,
       0,    39,    38,    50,     0,     0,     0,     0,   157,     0,
       0,     0,   139,     0,   136,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,    57,     0,   131,     0,   129,     0,     0,     0,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     0,
      81,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,     0,     0,    54,    55,     0,    32,     0,     0,     0,
       0,     8,     0,    12,     0,     0,     0,     0,     0,     0,
      26,     0,    24,     0,     0,     0,     0,     0,     0,     0,
      27,    30,    31,    29,    48,    47,    44,    43,    42,    46,
      36,    83,    40,    41,     0,     0,   104,   103,    74,   105,
       0,    77,    45,    37,    49,    73,    84,    76,    75,    35,
      82,    33,   107,    68,     0,   140,     0,    61,     0,   125,
       0,     0,     0,     0,     0,    72,    58,     0,     0,     0,
     132,   123,    64,   119,   121,    65,    66,     0,     0,     0,
       0,     0,     0,     0,   141,     0,     0,     0,    96,     0,
     126,    52,    23,    91,    15,   137,   138,   135,    13,    14,
       0,     0,     0,    87,     0,     0,   149,     0,    93,     0,
       0,    95,     0,     0,   102,     0,     0,     0,     0,     0,
       0,     0,    67,   130,   128,    62,    63,    11,     0,     0,
      59,    60,     0,    20,     0,   117,   114,   141,   141,     0,
     118,    17,     0,     0,    56,     0,    25,   143,     0,     0,
       0,     0,     0,    28,     0,     0,     0,   106,    98,   101,
      97,   100,    99,     0,   108,     0,     0,     0,     0,     0,
       0,   115,   116,     0,     0,     0,     0,    71,     0,     0,
       0,    88,    92,   146,   148,     0,     0,     0,     0,     0,
       9,    10,     0,    21,   112,   109,     0,     0,     0,   113,
      18,     0,     0,    85,     0,     0,     0,   147,     0,     0,
     154,     0,   134,   110,   111,    19,    16,     0,    86,   145,
     151,     0,     0,     0,     0,    94,   143,     0,   144,     0,
       0,   153,   156,     0,   142,   150,    89,    90,     0,   152,
     155
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -318,  -318,  -318,   331,  -318,   317,   -77,  -104,  -179,   -16,
    -318,  -318,   221,    -5,    -6,  -241,     9,   224,  -318,   204,
    -318,  -273,   -22,  -317,   -20,    19,   -29,  -318
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,    56,    57,    58,   228,    59,   273,    84,
      85,    81,    82,    64,    60,   156,    62,    79,    80,   103,
     104,   153,   369,   297,   376,   422,   423,    99
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,   330,   277,    65,    71,    87,    88,   314,    61,   243,
      76,    77,    78,    83,    86,    86,    86,     1,    90,    96,
       4,   341,    94,    75,   373,   115,   224,   101,   102,    61,
     225,   106,   107,   229,   229,     5,   112,    52,   229,   116,
      97,   229,   229,    52,   105,   122,   342,    61,    61,    61,
      63,   149,    72,   339,   361,   362,   229,   155,    61,    61,
     149,   231,   123,   124,   125,   235,   161,   162,   237,   238,
      61,    61,   150,   157,   158,    52,    52,   226,   409,    73,
     227,   150,    74,   252,   134,   165,   166,   178,   281,   374,
     184,   186,   421,   152,   418,    61,    95,   137,   138,   151,
      61,    61,   196,   142,    98,   180,   179,   108,   151,   109,
     189,   144,   145,   146,   160,   194,   195,   110,   148,   306,
     229,   229,   154,    52,   181,   269,    52,   270,   271,   272,
     111,   230,   230,   308,   309,   113,   230,    52,    52,   230,
     230,   183,   241,   242,    61,   305,   306,   303,   304,    52,
     117,   307,   118,   119,   230,   120,   268,   263,   317,   244,
     308,   309,   121,    78,   100,    83,   269,    86,   270,   271,
     272,    63,    52,   274,   115,   274,   285,   100,    52,   164,
     384,   385,   353,   276,   286,   389,   102,   168,   167,   169,
      52,   291,   292,   269,   170,   270,   271,   272,   296,   171,
     172,   229,   229,   229,   229,   229,   173,   403,   404,   174,
     175,   176,   190,   191,   192,   193,   197,    52,   230,   230,
     137,   138,   127,   200,   198,   128,   142,   204,   348,   349,
     350,   351,   352,   129,   144,   145,   146,   246,   130,   131,
      61,   132,   155,   134,   210,   248,   211,   135,   136,   212,
     213,   249,   250,   322,   251,   313,   137,   138,   253,   139,
     140,   141,   142,   325,   326,   327,   328,   254,   257,   258,
     144,   145,   146,   334,   147,   335,   259,   148,   279,   290,
     284,   288,   289,   310,   312,   311,   336,   329,   155,   340,
     318,   137,   138,   319,   345,   324,   346,   142,   332,   230,
     230,   230,   230,   230,   242,   354,   145,   146,    -1,   305,
     306,   337,   333,    -1,    -1,   307,   357,   343,   134,   338,
     359,   347,    -1,    -1,   308,   309,    70,   360,   363,   364,
     366,   137,   138,   368,    -1,   296,   375,   142,   367,   370,
      89,   371,    91,    92,    93,   144,   145,   146,   372,   378,
     134,   382,   148,   274,   274,   379,   393,   386,   274,   387,
     395,   114,   392,   137,   138,   396,   397,   402,   407,   142,
     411,   398,   399,   400,   412,   413,   414,   144,   145,   146,
     274,   274,   415,   417,   426,   427,   428,   429,   126,   296,
     410,   163,   261,   260,   424,     0,   287,   425,   401,   430,
       0,   416,     0,     0,     0,   296,   419,   420,   400,     0,
       0,   375,   182,     0,   185,     0,   187,   188,     0,     0,
       0,     0,   400,     0,     0,     0,     0,     0,   199,     0,
     201,     0,   203,     0,   205,   206,   207,   208,   209,     0,
       0,     0,     0,     0,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,     0,     0,   232,   233,   234,     0,
       0,   236,     0,     0,   239,   240,     0,     0,     0,   245,
       0,   247,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   256,     0,     0,     0,     0,     0,     0,     0,   262,
       0,   264,   265,   266,     0,   267,     0,   275,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     6,     7,     8,     0,     0,
       9,     0,     0,     0,    10,    11,    12,     0,    13,     0,
      14,    15,    16,    17,     0,     0,    18,     0,     0,     0,
       0,    19,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    27,     0,     0,   315,   316,    28,
       0,    29,     0,    30,   320,   321,     0,     0,     0,    31,
       0,    32,    33,     0,    34,     0,    35,    36,    37,     0,
      38,    39,    40,    41,     0,     0,    42,    43,    44,    45,
      46,    47,    48,     0,     0,    49,    50,    51,    52,    53,
      54,     0,    55,     0,     0,     0,   344,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     6,
       7,     8,     0,     0,     0,   355,   356,     0,     0,     0,
       0,   358,    13,     0,    14,    15,    16,    17,     0,   365,
       0,     0,     0,     0,     0,    19,     0,     0,     0,    20,
      21,    22,    23,     0,    25,    26,     0,     0,    27,     0,
       0,     0,     0,     0,     0,    29,     0,    30,     0,     0,
     388,     0,     0,   391,     0,    66,    33,   394,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,     0,     0,
       0,    43,     0,    67,    46,    47,    48,     0,   127,    49,
      50,   128,    52,    68,     0,     0,    69,     0,     0,   129,
       0,     0,     0,     0,   130,   131,     0,   132,   133,   134,
       0,     0,     0,   135,   136,     0,     0,     0,     0,     0,
       0,     0,   137,   138,     0,   139,   140,   141,   142,     0,
     127,     0,     0,   128,     0,   143,   144,   145,   146,     0,
     147,   129,     0,   148,     0,     0,   130,   131,     0,   132,
     133,   134,     0,     0,     0,   135,   136,     0,     0,     0,
       0,     0,     0,     0,   137,   138,     0,   139,   140,   141,
     142,     0,   127,     0,     0,   128,     0,   159,   144,   145,
     146,     0,   147,   129,     0,   148,     0,     0,   130,   131,
       0,   132,   133,   134,     0,     0,     0,   135,   136,     0,
       0,     0,     0,     0,     0,     0,   137,   138,     0,   139,
     140,   141,   142,     0,   127,     0,     0,   128,   177,     0,
     144,   145,   146,     0,   147,   129,     0,   148,     0,     0,
     130,   131,     0,   132,   133,   134,     0,     0,     0,   135,
     136,     0,     0,     0,     0,     0,     0,     0,   137,   138,
       0,   139,   140,   141,   142,     0,   127,     0,     0,   128,
       0,   202,   144,   145,   146,     0,   147,   129,     0,   148,
       0,     0,   130,   131,     0,   132,   133,   134,     0,     0,
       0,   135,   136,     0,     0,     0,     0,     0,     0,     0,
     137,   138,     0,   139,   140,   141,   142,     0,   127,     0,
       0,   128,   255,     0,   144,   145,   146,     0,   147,   129,
       0,   148,     0,     0,   130,   131,     0,   132,   133,   134,
       0,     0,     0,   135,   136,     0,     0,     0,     0,     0,
       0,     0,   137,   138,     0,   139,   140,   141,   142,     0,
     127,     0,     0,   128,   278,   280,   144,   145,   146,     0,
     147,   129,     0,   148,     0,     0,   130,   131,     0,   132,
     133,   134,     0,     0,     0,   135,   136,     0,     0,     0,
       0,     0,     0,     0,   137,   138,     0,   139,   140,   141,
     142,     0,   127,     0,     0,   128,     0,     0,   144,   145,
     146,     0,   147,   129,     0,   148,     0,     0,   130,   131,
       0,   132,   133,   134,     0,     0,     0,   135,   136,     0,
       0,     0,     0,     0,     0,     0,   137,   138,     0,   139,
     140,   141,   142,     0,   127,     0,     0,   128,     0,   282,
     144,   145,   146,     0,   147,   129,     0,   148,     0,     0,
     130,   131,     0,   132,   133,   134,     0,     0,     0,   135,
     136,     0,     0,     0,     0,     0,     0,     0,   137,   138,
       0,   139,   140,   141,   142,     0,   127,     0,     0,   128,
     283,     0,   144,   145,   146,     0,   147,   129,     0,   148,
       0,     0,   130,   131,     0,   132,   133,   134,     0,     0,
       0,   135,   136,     0,     0,     0,     0,     0,     0,     0,
     137,   138,     0,   139,   140,   141,   142,     0,   127,     0,
       0,   128,   293,   294,   144,   145,   146,     0,   147,   129,
       0,   148,     0,     0,   130,   131,     0,   132,   133,   134,
       0,     0,     0,   135,   136,     0,     0,     0,     0,     0,
       0,     0,   137,   138,     0,   139,   140,   141,   142,     0,
     127,     0,     0,   128,     0,   295,   144,   145,   146,     0,
     147,   129,     0,   148,     0,     0,   130,   131,     0,   132,
     133,   134,     0,     0,     0,   135,   136,     0,     0,     0,
       0,     0,     0,     0,   137,   138,     0,   139,   140,   141,
     142,     0,   127,     0,     0,   128,     0,     0,   144,   145,
     146,     0,   147,   129,     0,   148,     0,     0,   130,   131,
       0,   132,   133,   134,     0,     0,     0,   135,   136,     0,
       0,     0,     0,     0,     0,     0,   137,   138,     0,   139,
     140,   141,   142,     0,   127,     0,     0,   128,   298,   299,
     144,   145,   146,     0,   147,   129,     0,   148,     0,     0,
     130,   131,     0,   132,   133,   134,     0,     0,     0,   135,
     136,     0,     0,     0,     0,     0,     0,     0,   137,   138,
       0,   139,   140,   141,   142,     0,   127,     0,     0,   128,
       0,   300,   144,   145,   146,     0,   147,   129,     0,   148,
       0,     0,   130,   131,     0,   132,   133,   134,     0,     0,
       0,   135,   136,     0,     0,     0,     0,     0,     0,     0,
     137,   138,     0,   139,   140,   141,   142,     0,   127,     0,
       0,   128,     0,     0,   144,   145,   146,     0,   147,   129,
       0,   148,     0,     0,   130,   131,     0,   132,   133,   134,
       0,     0,     0,   135,   136,     0,     0,     0,     0,     0,
       0,     0,   137,   138,     0,   139,   140,   141,   142,     0,
     127,     0,     0,   128,   301,   302,   144,   145,   146,     0,
     147,   129,     0,   148,     0,     0,   130,   131,     0,   132,
     133,   134,     0,     0,     0,   135,   136,     0,     0,     0,
       0,     0,     0,     0,   137,   138,     0,   139,   140,   141,
     142,     0,   127,     0,     0,   128,     0,     0,   144,   145,
     146,     0,   147,   129,     0,   148,     0,     0,   130,   131,
       0,   132,   133,   134,     0,     0,     0,   135,   136,     0,
       0,     0,     0,     0,     0,     0,   137,   138,     0,   139,
     140,   141,   142,     0,   127,     0,     0,   128,     0,   323,
     144,   145,   146,     0,   147,   129,     0,   148,     0,     0,
     130,   131,     0,   132,   133,   134,     0,     0,     0,   135,
     136,     0,     0,     0,     0,     0,     0,     0,   137,   138,
       0,   139,   140,   141,   142,     0,     0,     0,     0,     0,
       0,   331,   144,   145,   146,   127,   147,     0,   128,   148,
     377,     0,     0,     0,     0,     0,   129,     0,     0,     0,
       0,   130,   131,     0,   132,   133,   134,     0,     0,     0,
     135,   136,     0,     0,     0,     0,     0,     0,     0,   137,
     138,     0,   139,   140,   141,   142,     0,   127,     0,     0,
     128,     0,     0,   144,   145,   146,     0,   147,   129,     0,
     148,     0,     0,   130,   131,     0,   132,   133,   134,     0,
       0,     0,   135,   136,     0,     0,     0,     0,     0,     0,
       0,   137,   138,     0,   139,   140,   141,   142,     0,   127,
       0,     0,   128,     0,   380,   144,   145,   146,     0,   147,
     129,     0,   148,     0,     0,   130,   131,     0,   132,   133,
     134,     0,     0,     0,   135,   136,     0,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,   140,   141,   142,
       0,   127,     0,     0,   128,     0,   381,   144,   145,   146,
       0,   147,   129,     0,   148,     0,     0,   130,   131,     0,
     132,   133,   134,     0,     0,     0,   135,   136,     0,     0,
       0,     0,     0,     0,     0,   137,   138,     0,   139,   140,
     141,   142,     0,   127,     0,     0,   128,     0,   383,   144,
     145,   146,     0,   147,   129,     0,   148,     0,     0,   130,
     131,     0,   132,   133,   134,     0,     0,     0,   135,   136,
       0,     0,     0,     0,     0,     0,     0,   137,   138,     0,
     139,   140,   141,   142,     0,   127,     0,     0,   128,     0,
     390,   144,   145,   146,     0,   147,   129,     0,   148,     0,
       0,   130,   131,     0,   132,   133,   134,     0,     0,     0,
     135,   136,     0,     0,     0,     0,     0,     0,     0,   137,
     138,     0,   139,   140,   141,   142,     0,   127,     0,     0,
     128,     0,   405,   144,   145,   146,     0,   147,   129,     0,
     148,     0,     0,   130,   131,     0,   132,   133,   134,     0,
       0,     0,   135,   136,     0,     0,     0,     0,     0,     0,
       0,   137,   138,     0,   139,   140,   141,   142,     0,   127,
       0,     0,   128,     0,   406,   144,   145,   146,     0,   147,
     129,     0,   148,     0,     0,   130,   131,     0,   132,   133,
     134,     0,     0,     0,   135,   136,     0,     0,     0,     0,
       0,     0,     0,   137,   138,     0,   139,   140,   141,   142,
       0,   127,     0,     0,   128,   408,     0,   144,   145,   146,
       0,   147,   129,     0,   148,     0,     0,   130,   131,     0,
     132,   133,   134,     0,     0,     0,   135,   136,     0,     0,
       0,     0,     0,     0,     0,   137,   138,     0,   139,   140,
     141,   142,     0,   127,     0,     0,     0,     0,     0,   144,
     145,   146,     0,   147,   129,     0,   148,     0,     0,   130,
     131,     0,   132,   133,   134,     0,     0,     0,   135,   136,
       0,     0,     0,     0,     0,     0,     0,   137,   138,     0,
     139,   140,   141,   142,     0,   127,     0,     0,     0,     0,
       0,   144,   145,   146,     0,   147,   129,     0,   148,     0,
       0,   130,   131,     0,     0,   133,   134,     0,     0,     0,
     135,   136,     0,     0,     0,     0,     0,     0,     0,   137,
     138,     0,   139,   140,     0,   142,     0,     0,     0,     0,
       0,     0,     0,   144,   145,   146,   129,   147,     0,     0,
     148,   130,   131,     0,     0,   133,   134,     0,     0,     0,
     135,   136,     0,     0,     0,     0,     0,     0,     0,   137,
     138,     0,   139,   140,     0,   142,     0,     0,     0,     0,
       0,     0,     0,   144,   145,   146,   129,   147,     0,     0,
     148,   130,   131,     0,     0,    -1,   134,     0,     0,     0,
     135,   136,     0,     0,     0,     0,     0,     0,     0,   137,
     138,     0,   139,    -1,     0,   142,     0,     0,     0,     0,
       0,     0,     0,   144,   145,   146,     0,    -1,     0,     0,
     148
};

static const yytype_int16 yycheck[] =
{
       6,   274,   181,     8,    10,    21,    22,   248,    14,    52,
      15,    16,    18,    19,    20,    21,    22,    82,    24,    15,
      53,    11,    28,    14,   341,    36,    36,    32,    34,    35,
      40,    36,    37,   137,   138,     0,    42,    86,   142,    45,
      36,   145,   146,    86,    35,    51,    36,    53,    54,    55,
      30,    15,    36,   294,   327,   328,   160,    63,    64,    65,
      15,   138,    53,    54,    55,   142,    72,    73,   145,   146,
      76,    77,    36,    64,    65,    86,    86,    87,   395,    36,
      90,    36,    36,   160,    27,    76,    77,    17,    52,    52,
      96,    97,    52,    67,   411,   101,    36,    40,    41,    63,
     106,   107,   108,    46,    89,    17,    36,    89,    63,    36,
     101,    54,    55,    56,    17,   106,   107,    36,    61,    41,
     224,   225,    10,    86,    36,    62,    86,    64,    65,    66,
      36,   137,   138,    55,    56,    36,   142,    86,    86,   145,
     146,    90,    90,   149,   150,    40,    41,   224,   225,    86,
      36,    46,    36,    36,   160,    36,    52,   173,    53,   150,
      55,    56,    36,   169,    36,   171,    62,   173,    64,    65,
      66,    30,    86,   179,    36,   181,    90,    36,    86,    10,
     359,   360,    90,    52,   190,   364,   192,    53,     7,    11,
      86,   197,   198,    62,    48,    64,    65,    66,   204,    11,
      26,   305,   306,   307,   308,   309,    11,   386,   387,    17,
      26,    26,    10,    53,    11,    53,    89,    86,   224,   225,
      40,    41,     6,    53,    89,     9,    46,    17,   305,   306,
     307,   308,   309,    17,    54,    55,    56,    11,    22,    23,
     246,    25,   248,    27,    53,    11,    53,    31,    32,    53,
      53,    50,    10,   259,    10,   246,    40,    41,    52,    43,
      44,    45,    46,   269,   270,   271,   272,    52,    10,    10,
      54,    55,    56,   279,    58,   280,    36,    61,    15,    89,
      53,    53,    53,    15,    52,    15,    53,    52,   294,   295,
      17,    40,    41,    17,   300,    17,   302,    46,    17,   305,
     306,   307,   308,   309,   310,   311,    55,    56,    17,    40,
      41,    89,    52,    22,    23,    46,    11,    53,    27,    89,
      11,    52,    31,    32,    55,    56,     9,    11,    17,    11,
      17,    40,    41,    11,    43,   341,   342,    46,    52,    11,
      23,    52,    25,    26,    27,    54,    55,    56,    52,    11,
      27,   357,    61,   359,   360,    10,    52,    11,   364,    11,
      11,    44,   368,    40,    41,    10,    52,    52,     7,    46,
      11,   377,   378,   379,    11,    11,    36,    54,    55,    56,
     386,   387,    52,    11,    52,    52,    11,    52,    57,   395,
     396,    74,   171,   169,   416,    -1,   192,   417,   379,   428,
      -1,   407,    -1,    -1,    -1,   411,   412,   413,   414,    -1,
      -1,   417,    95,    -1,    97,    -1,    99,   100,    -1,    -1,
      -1,    -1,   428,    -1,    -1,    -1,    -1,    -1,   111,    -1,
     113,    -1,   115,    -1,   117,   118,   119,   120,   121,    -1,
      -1,    -1,    -1,    -1,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,    -1,    -1,   139,   140,   141,    -1,
      -1,   144,    -1,    -1,   147,   148,    -1,    -1,    -1,   152,
      -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,
      -1,   174,   175,   176,    -1,   178,    -1,   180,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,
       8,    -1,    -1,    -1,    12,    13,    14,    -1,    16,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    42,    -1,    -1,   250,   251,    47,
      -1,    49,    -1,    51,   257,   258,    -1,    -1,    -1,    57,
      -1,    59,    60,    -1,    62,    -1,    64,    65,    66,    -1,
      68,    69,    70,    71,    -1,    -1,    74,    75,    76,    77,
      78,    79,    80,    -1,    -1,    83,    84,    85,    86,    87,
      88,    -1,    90,    -1,    -1,    -1,   299,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    -1,    -1,   318,   319,    -1,    -1,    -1,
      -1,   324,    16,    -1,    18,    19,    20,    21,    -1,   332,
      -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,
     363,    -1,    -1,   366,    -1,    59,    60,   370,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    -1,    -1,
      -1,    75,    -1,    77,    78,    79,    80,    -1,     6,    83,
      84,     9,    86,    87,    -1,    -1,    90,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    22,    23,    -1,    25,    26,    27,
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
      44,    45,    46,    -1,     6,    -1,    -1,     9,    52,    -1,
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
      46,    -1,     6,    -1,    -1,     9,    -1,    -1,    54,    55,
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
       6,    -1,    -1,     9,    52,    11,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    -1,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,     9,    -1,    -1,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    -1,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,     9,    -1,    53,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    -1,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,     6,    58,    -1,     9,    61,
      11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      -1,    22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,
       9,    -1,    -1,    54,    55,    56,    -1,    58,    17,    -1,
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
      -1,     6,    -1,    -1,     9,    52,    -1,    54,    55,    56,
      -1,    58,    17,    -1,    61,    -1,    -1,    22,    23,    -1,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,
      45,    46,    -1,     6,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    -1,    58,    17,    -1,    61,    -1,    -1,    22,
      23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      43,    44,    45,    46,    -1,     6,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    -1,    58,    17,    -1,    61,    -1,
      -1,    22,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,    17,    58,    -1,    -1,
      61,    22,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,    17,    58,    -1,    -1,
      61,    22,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,    -1,    58,    -1,    -1,
      61
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
     106,    97,    97,    97,   106,    36,    15,    36,    89,   119,
      36,   105,   106,   111,   112,   108,   105,   105,    89,    36,
      36,    36,   106,    36,    97,    36,   106,    36,    36,    36,
      36,    36,   106,   108,   108,   108,    95,     6,     9,    17,
      22,    23,    25,    26,    27,    31,    32,    40,    41,    43,
      44,    45,    46,    53,    54,    55,    56,    58,    61,    15,
      36,    63,    67,   113,    10,   106,   107,   108,   108,    53,
      17,   106,   106,    97,    10,   108,   108,     7,    53,    11,
      48,    11,    26,    11,    17,    26,    26,    52,    17,    36,
      17,    36,    97,    90,   106,    97,   106,    97,    97,   108,
      10,    53,    11,    53,   108,   108,   106,    89,    89,    97,
      53,    97,    53,    97,    17,    97,    97,    97,    97,    97,
      53,    53,    53,    53,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    36,    40,    87,    90,    98,    99,
     106,    98,    97,    97,    97,    98,    97,    98,    98,    97,
      97,    90,   106,    52,   108,    97,    11,    97,    11,    50,
      10,    10,    98,    52,    52,    52,    97,    10,    10,    36,
     109,   104,    97,   101,    97,    97,    97,    97,    52,    62,
      64,    65,    66,   100,   106,    97,    52,   100,    52,    15,
      11,    52,    53,    52,    53,    90,   106,   111,    53,    53,
      89,   106,   106,    52,    11,    11,   106,   115,    52,    11,
      11,    52,    11,    98,    98,    40,    41,    46,    55,    56,
      15,    15,    52,   108,   107,    97,    97,    53,    17,    17,
      97,    97,   106,    53,    17,   106,   106,   106,   106,    52,
     113,    53,    17,    52,   106,   105,    53,    89,    89,   107,
     106,    11,    36,    53,    97,   106,   106,    52,    98,    98,
      98,    98,    98,    90,   106,    97,    97,    11,    97,    11,
      11,   113,   113,    17,    11,    97,    17,    52,    11,   114,
      11,    52,    52,   115,    52,   106,   116,    11,    11,    10,
      53,    53,   106,    53,   100,   100,    11,    11,    97,   100,
      53,    97,   106,    52,    97,    11,    10,    52,   106,   106,
     106,   117,    52,   100,   100,    53,    53,     7,    52,   115,
     106,    11,    11,    11,    36,    52,   106,    11,   115,   106,
     106,    52,   117,   118,   114,   116,    52,    52,    11,    52,
     118
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
      97,    97,    97,    97,    97,    97,    97,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    99,    99,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   101,
     101,   102,   103,   104,   104,   105,   105,   106,   107,   107,
     108,   108,   109,   109,   110,   111,   111,   112,   112,   112,
     113,   113,   114,   114,   115,   115,   115,   115,   115,   115,
     116,   116,   117,   117,   117,   118,   118,   119,   119
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     3,     3,     3,     7,
       7,     5,     3,     4,     4,     4,     8,     5,     7,     8,
       5,     7,     2,     4,     3,     5,     3,     3,     5,     3,
       3,     3,     1,     3,     3,     3,     3,     3,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     1,     4,     1,     3,     3,     5,     2,     4,     5,
       5,     4,     5,     5,     4,     4,     4,     4,     3,     1,
       1,     6,     4,     3,     3,     3,     3,     3,     1,     1,
       1,     3,     3,     3,     3,     7,     8,     4,     6,    10,
      10,     4,     6,     4,     8,     4,     4,     3,     3,     3,
       3,     3,     2,     1,     1,     1,     3,     3,     5,     4,
       5,     5,     4,     4,     2,     3,     3,     2,     2,     3,
       1,     3,     1,     3,     1,     3,     0,     1,     3,     1,
       4,     2,     3,     1,     7,     3,     1,     3,     3,     1,
       2,     0,     5,     0,     6,     5,     3,     4,     3,     1,
       5,     3,     4,     3,     1,     3,     1,     1,     0
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
#line 1833 "parser.cc"
    break;

  case 3: /* header: tokWS2S tokSEMICOLON  */
#line 126 "parser.y"
                               {}
#line 1839 "parser.cc"
    break;

  case 4: /* declarations: declaration declarations  */
#line 129 "parser.y"
                                       {if ((yyvsp[-1].declaration)) (yyvsp[0].declList)->push_front((yyvsp[-1].declaration)); (yyval.declList) = (yyvsp[0].declList);}
#line 1845 "parser.cc"
    break;

  case 5: /* declarations: declaration  */
#line 131 "parser.y"
                      {(yyval.declList) = new DeclarationList();     
	         	if ((yyvsp[0].declaration)) (yyval.declList)->push_front((yyvsp[0].declaration));}
#line 1852 "parser.cc"
    break;

  case 6: /* declaration: tokASSERT exp tokSEMICOLON  */
#line 135 "parser.y"
                                        {(yyval.declaration) = new Assertion_Declaration((yyvsp[-1].untypedExp));}
#line 1858 "parser.cc"
    break;

  case 7: /* declaration: tokGUIDE func_list tokSEMICOLON  */
#line 137 "parser.y"
                                         {yyerror("guide  command is not supported");}
#line 1864 "parser.cc"
    break;

  case 8: /* declaration: tokUNIVERSE univs tokSEMICOLON  */
#line 139 "parser.y"
                                        {yyerror("universe command is not supported");}
#line 1870 "parser.cc"
    break;

  case 9: /* declaration: tokDEFAULT1 tokLPAREN name tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 141 "parser.y"
                                                                         {(yyval.declaration) = new Default_Declaration(Varname1, (yyvsp[-4].name), (yyvsp[-1].untypedExp));}
#line 1876 "parser.cc"
    break;

  case 10: /* declaration: tokDEFAULT2 tokLPAREN name tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 143 "parser.y"
                                                                         {(yyval.declaration) = new Default_Declaration(Varname2, (yyvsp[-4].name), (yyvsp[-1].untypedExp));}
#line 1882 "parser.cc"
    break;

  case 11: /* declaration: tokCONST name tokEQUAL arith_exp tokSEMICOLON  */
#line 145 "parser.y"
                                                        {}
#line 1888 "parser.cc"
    break;

  case 12: /* declaration: tokVAR0 name_where_list tokSEMICOLON  */
#line 147 "parser.y"
                                              {(yyval.declaration)=new Variable_Declaration{Varname0,(yyvsp[-1].varDeclList)};}
#line 1894 "parser.cc"
    break;

  case 13: /* declaration: tokVAR1 universe name_where_list tokSEMICOLON  */
#line 149 "parser.y"
                                                       {(yyval.declaration) = new Variable_Declaration(Varname1,(yyvsp[-1].varDeclList));}
#line 1900 "parser.cc"
    break;

  case 14: /* declaration: tokVAR2 universe name_where_list tokSEMICOLON  */
#line 151 "parser.y"
                                                        {(yyval.declaration)=new Variable_Declaration{Varname2,(yyvsp[-1].varDeclList)};}
#line 1906 "parser.cc"
    break;

  case 15: /* declaration: tokTREE universe name_where_list tokSEMICOLON  */
#line 153 "parser.y"
                                                                {yyerror("tree command is not supported");}
#line 1912 "parser.cc"
    break;

  case 16: /* declaration: tokPRED name tokLPAREN par_list tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 155 "parser.y"
                                                                              {(yyval.declaration)=new Predicate_Declaration{(yyvsp[-6].name),(yyvsp[-4].parList),(yyvsp[-1].untypedExp)};}
#line 1918 "parser.cc"
    break;

  case 17: /* declaration: tokPRED name tokEQUAL exp tokSEMICOLON  */
#line 157 "parser.y"
                                                  {(yyval.declaration)=new Predicate_Declaration{(yyvsp[-3].name),new ParList{} ,(yyvsp[-1].untypedExp)};}
#line 1924 "parser.cc"
    break;

  case 18: /* declaration: tokPRED name tokLPAREN tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 159 "parser.y"
                                                                     {(yyval.declaration)=new Predicate_Declaration{(yyvsp[-5].name),new ParList{} ,(yyvsp[-1].untypedExp)};}
#line 1930 "parser.cc"
    break;

  case 19: /* declaration: tokMACRO name tokLPAREN par_list tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 161 "parser.y"
                                                                                {(yyval.declaration)=new Macro_Declaration{(yyvsp[-6].name),(yyvsp[-4].parList),(yyvsp[-1].untypedExp)};}
#line 1936 "parser.cc"
    break;

  case 20: /* declaration: tokMACRO name tokEQUAL exp tokSEMICOLON  */
#line 163 "parser.y"
                                                   {(yyval.declaration)=new Macro_Declaration{(yyvsp[-3].name),new ParList{},(yyvsp[-1].untypedExp)};}
#line 1942 "parser.cc"
    break;

  case 21: /* declaration: tokMACRO name tokLPAREN tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 165 "parser.y"
                                                                       {(yyval.declaration)=new Macro_Declaration{(yyvsp[-5].name),new ParList{},(yyvsp[-1].untypedExp)};}
#line 1948 "parser.cc"
    break;

  case 22: /* declaration: exp tokSEMICOLON  */
#line 167 "parser.y"
                           {(yyval.declaration) = new Expression_Declaration((yyvsp[-1].untypedExp));}
#line 1954 "parser.cc"
    break;

  case 23: /* declaration: tokVERIFY optstring exp tokSEMICOLON  */
#line 169 "parser.y"
                                               { yyerror("verify command is not supported");}
#line 1960 "parser.cc"
    break;

  case 24: /* declaration: tokEXECUTE exp tokSEMICOLON  */
#line 171 "parser.y"
                                      {/*$$ = new Execute_Declaration($2);*/ yyerror("execute command is not supported");}
#line 1966 "parser.cc"
    break;

  case 25: /* declaration: tokINCLUDE tokSTRING name tokSTRING tokSEMICOLON  */
#line 173 "parser.y"
                                                           {}
#line 1972 "parser.cc"
    break;

  case 26: /* declaration: tokLASTPOS name tokSEMICOLON  */
#line 175 "parser.y"
                                               {yyerror("latpos command is not supported");}
#line 1978 "parser.cc"
    break;

  case 27: /* declaration: tokALLPOS name tokSEMICOLON  */
#line 177 "parser.y"
                                              {(yyval.declaration) = new AllPos_Declaration((yyvsp[-1].name));}
#line 1984 "parser.cc"
    break;

  case 28: /* declaration: tokTYPE name tokEQUAL variant_list tokSEMICOLON  */
#line 179 "parser.y"
                                                                { yyerror("type command is not supported");}
#line 1990 "parser.cc"
    break;

  case 29: /* declaration: tokINT name_where_list tokSEMICOLON  */
#line 181 "parser.y"
                                                      {(yyval.declaration) = new Variable_Declaration{Integer,(yyvsp[-1].varDeclList)};}
#line 1996 "parser.cc"
    break;

  case 30: /* declaration: tokReal name_where_list tokSEMICOLON  */
#line 183 "parser.y"
                                                       {(yyval.declaration) = new Variable_Declaration{Real,(yyvsp[-1].varDeclList)};}
#line 2002 "parser.cc"
    break;

  case 31: /* declaration: tokBool name_where_list tokSEMICOLON  */
#line 185 "parser.y"
                                                       {(yyval.declaration) = new Variable_Declaration{Boolean,(yyvsp[-1].varDeclList)};}
#line 2008 "parser.cc"
    break;

  case 32: /* exp: name  */
#line 190 "parser.y"
               {(yyval.untypedExp) = new UntypedExp_Name(uName,(yyvsp[0].name));}
#line 2014 "parser.cc"
    break;

  case 33: /* exp: name tokDOT tokINT  */
#line 192 "parser.y"
                                     {check_bits(*(yyvsp[0].st));(yyval.untypedExp)=new UntypedExp_PathName{uPathName,(yyvsp[-2].name),(yyvsp[0].st)};}
#line 2020 "parser.cc"
    break;

  case 34: /* exp: tokLPAREN exp tokRPAREN  */
#line 194 "parser.y"
                                  {(yyval.untypedExp)=new UntypedExp_Paren{(yyvsp[-1].untypedExp)};}
#line 2026 "parser.cc"
    break;

  case 35: /* exp: exp tokSUB exp  */
#line 196 "parser.y"
                        {yyerror("sub command is not supported");}
#line 2032 "parser.cc"
    break;

  case 36: /* exp: exp tokIN exp  */
#line 198 "parser.y"
                        {(yyval.untypedExp) = new UntypedExp_In((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2038 "parser.cc"
    break;

  case 37: /* exp: exp tokNOTIN exp  */
#line 200 "parser.y"
                          {(yyval.untypedExp) = new UntypedExp_NotIn((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2044 "parser.cc"
    break;

  case 38: /* exp: tokMIN exp  */
#line 202 "parser.y"
                    {yyerror("min command is not supported");}
#line 2050 "parser.cc"
    break;

  case 39: /* exp: tokMAX exp  */
#line 204 "parser.y"
                    {yyerror("max command is not supported");}
#line 2056 "parser.cc"
    break;

  case 40: /* exp: exp tokLESS exp  */
#line 206 "parser.y"
                           {(yyval.untypedExp) = new UntypedExp_Less((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2062 "parser.cc"
    break;

  case 41: /* exp: exp tokLESSEQ exp  */
#line 208 "parser.y"
                            {(yyval.untypedExp) = new UntypedExp_LessEq((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2068 "parser.cc"
    break;

  case 42: /* exp: exp tokGREATEREQ exp  */
#line 210 "parser.y"
                              {(yyval.untypedExp) = new UntypedExp_GreaterEq((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2074 "parser.cc"
    break;

  case 43: /* exp: exp tokGREATER exp  */
#line 212 "parser.y"
                             {(yyval.untypedExp) = new UntypedExp_Greater((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2080 "parser.cc"
    break;

  case 44: /* exp: exp tokEQUAL exp  */
#line 214 "parser.y"
                          {(yyval.untypedExp) = new UntypedExp_Equal((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2086 "parser.cc"
    break;

  case 45: /* exp: exp tokNOTEQUAL exp  */
#line 216 "parser.y"
                              {(yyval.untypedExp)=new UntypedExp_NotEqual((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2092 "parser.cc"
    break;

  case 46: /* exp: exp tokIMPL exp  */
#line 218 "parser.y"
                         {(yyval.untypedExp) = new UntypedExp_Impl((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2098 "parser.cc"
    break;

  case 47: /* exp: exp tokBIIMPL exp  */
#line 220 "parser.y"
                            {(yyval.untypedExp) = new UntypedExp_Biimpl((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2104 "parser.cc"
    break;

  case 48: /* exp: exp tokAND exp  */
#line 222 "parser.y"
                         {(yyval.untypedExp) = new UntypedExp_And((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2110 "parser.cc"
    break;

  case 49: /* exp: exp tokOR exp  */
#line 224 "parser.y"
                        {(yyval.untypedExp) = new UntypedExp_Or((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2116 "parser.cc"
    break;

  case 50: /* exp: tokNOT exp  */
#line 226 "parser.y"
                     {(yyval.untypedExp)=new UntypedExp_Not{(yyvsp[0].untypedExp)};}
#line 2122 "parser.cc"
    break;

  case 51: /* exp: dotExp  */
#line 228 "parser.y"
                         {(yyval.untypedExp)=(yyvsp[0].UntypedExpDotName);}
#line 2128 "parser.cc"
    break;

  case 52: /* exp: tokUNIVROOT tokLPAREN name tokRPAREN  */
#line 230 "parser.y"
                                               {yyerror("root universe command is not supported");}
#line 2134 "parser.cc"
    break;

  case 53: /* exp: tokUNIVROOT  */
#line 232 "parser.y"
                      {(yyval.untypedExp) = new UntypedExp_Name{uName,new Name{new string{"root"}}};}
#line 2140 "parser.cc"
    break;

  case 54: /* exp: tokUNIVROOT tokDOT tokINT  */
#line 234 "parser.y"
                                           {check_bits(*(yyvsp[0].st));(yyval.untypedExp)=new UntypedExp_PathName{uPathName,new Name{new string{"root"}},(yyvsp[0].st)};}
#line 2146 "parser.cc"
    break;

  case 55: /* exp: tokUNIVROOT tokDOT name  */
#line 236 "parser.y"
                                          {(yyval.untypedExp)=new UntypedExp_DotName{new DotName{new Name{new string{"root"}},(yyvsp[0].name)}};}
#line 2152 "parser.cc"
    break;

  case 56: /* exp: tokUNIVROOT tokDOT tokINT tokDOT name  */
#line 238 "parser.y"
                                                        {checkNameIntName(*(yyvsp[-2].st));(yyval.untypedExp)=new UntypedExp_DotNameNumber{new DotName{new Name{new string{"root"}},(yyvsp[0].name)},(yyvsp[-2].st)};}
#line 2158 "parser.cc"
    break;

  case 57: /* exp: name tokUP  */
#line 240 "parser.y"
                     {(yyval.untypedExp) = new UntypedExp_NameUp((yyvsp[-1].name));}
#line 2164 "parser.cc"
    break;

  case 58: /* exp: tokEX0 name_where_list tokCOLON exp  */
#line 242 "parser.y"
                                              {(yyval.untypedExp) = new UntypedExp_Ex0((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2170 "parser.cc"
    break;

  case 59: /* exp: tokEX1 universe name_where_list tokCOLON exp  */
#line 244 "parser.y"
                                                       {(yyval.untypedExp) = new UntypedExp_Ex1((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2176 "parser.cc"
    break;

  case 60: /* exp: tokEX2 universe name_where_list tokCOLON exp  */
#line 246 "parser.y"
                                                       {(yyval.untypedExp) = new UntypedExp_Ex2((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2182 "parser.cc"
    break;

  case 61: /* exp: tokALL0 name_where_list tokCOLON exp  */
#line 248 "parser.y"
                                               {(yyval.untypedExp) = new UntypedExp_All0((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2188 "parser.cc"
    break;

  case 62: /* exp: tokALL1 universe name_where_list tokCOLON exp  */
#line 250 "parser.y"
                                                        {(yyval.untypedExp) = new UntypedExp_All1((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));(yyval.untypedExp)->turnTrueIsAll1();}
#line 2194 "parser.cc"
    break;

  case 63: /* exp: tokALL2 universe name_where_list tokCOLON exp  */
#line 252 "parser.y"
                                                        {(yyval.untypedExp) = new UntypedExp_All2((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2200 "parser.cc"
    break;

  case 64: /* exp: tokLET0 defs tokIN exp  */
#line 254 "parser.y"
                                             {(yyval.untypedExp) = new UntypedExp_Let0((yyvsp[-2].bindExpList), (yyvsp[0].untypedExp));}
#line 2206 "parser.cc"
    break;

  case 65: /* exp: tokLET1 defs tokIN exp  */
#line 256 "parser.y"
                                            {(yyval.untypedExp) = new UntypedExp_Let1((yyvsp[-2].bindExpList), (yyvsp[0].untypedExp));}
#line 2212 "parser.cc"
    break;

  case 66: /* exp: tokLET2 defs tokIN exp  */
#line 258 "parser.y"
                                             {(yyval.untypedExp) = new UntypedExp_Let2((yyvsp[-2].bindExpList), (yyvsp[0].untypedExp));}
#line 2218 "parser.cc"
    break;

  case 67: /* exp: name tokLPAREN name_where_list tokRPAREN  */
#line 260 "parser.y"
                                                   {(yyval.untypedExp)=new UntypedExp_Call{(yyvsp[-3].name),(yyvsp[-1].varDeclList)}; }
#line 2224 "parser.cc"
    break;

  case 68: /* exp: name tokLPAREN tokRPAREN  */
#line 262 "parser.y"
                                           {(yyval.untypedExp)=new UntypedExp_Call{(yyvsp[-2].name),new VarDeclList()};}
#line 2230 "parser.cc"
    break;

  case 69: /* exp: tokTRUE  */
#line 264 "parser.y"
                  {(yyval.untypedExp)=new UntypedExp_True();}
#line 2236 "parser.cc"
    break;

  case 70: /* exp: tokFALSE  */
#line 266 "parser.y"
                   {(yyval.untypedExp) = new UntypedExp_False();}
#line 2242 "parser.cc"
    break;

  case 71: /* exp: tokUNIVROOT tokLPAREN exp tokCOMMA universe tokRPAREN  */
#line 268 "parser.y"
                                                                {yyerror("root universe  command is not supported");}
#line 2248 "parser.cc"
    break;

  case 72: /* exp: tokEMPTY tokLPAREN exp tokRPAREN  */
#line 270 "parser.y"
                                           {(yyval.untypedExp) = new UntypedExp_EmptyPred((yyvsp[-1].untypedExp));}
#line 2254 "parser.cc"
    break;

  case 73: /* exp: exp tokPLUS arith_exp  */
#line 272 "parser.y"
                                {(yyval.untypedExp) = new UntypedExp_Plus((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2260 "parser.cc"
    break;

  case 74: /* exp: exp tokMINUS arith_exp  */
#line 274 "parser.y"
                                 {(yyval.untypedExp) = new UntypedExp_Minus((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2266 "parser.cc"
    break;

  case 75: /* exp: exp tokSTAR arith_exp  */
#line 276 "parser.y"
                                {(yyval.untypedExp) = new UntypedExp_Mult((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2272 "parser.cc"
    break;

  case 76: /* exp: exp tokSLASH arith_exp  */
#line 278 "parser.y"
                                 {(yyval.untypedExp) = new UntypedExp_Div((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2278 "parser.cc"
    break;

  case 77: /* exp: exp tokMODULO arith_exp  */
#line 280 "parser.y"
                                   {(yyval.untypedExp) = new UntypedExp_Modul((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2284 "parser.cc"
    break;

  case 78: /* exp: tokEMPTY  */
#line 282 "parser.y"
                  {(yyval.untypedExp) = new UntypedExp_Empty();}
#line 2290 "parser.cc"
    break;

  case 79: /* exp: tokINT  */
#line 284 "parser.y"
                         {(yyval.untypedExp) = new UntypedExp_Int(stoi(*(yyvsp[0].st)));delete (yyvsp[0].st);}
#line 2296 "parser.cc"
    break;

  case 80: /* exp: tokReal  */
#line 286 "parser.y"
                         {(yyval.untypedExp)=new UntypedExp_Real{(yyvsp[0].doubleVal)};}
#line 2302 "parser.cc"
    break;

  case 81: /* exp: tokLBRACE set_body tokRBRACE  */
#line 288 "parser.y"
                                      {(yyval.untypedExp) = new UntypedExp_Set((yyvsp[-1].varDeclList));}
#line 2308 "parser.cc"
    break;

  case 82: /* exp: exp tokUNION exp  */
#line 290 "parser.y"
                           {(yyval.untypedExp) = new UntypedExp_Union((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2314 "parser.cc"
    break;

  case 83: /* exp: exp tokINTER exp  */
#line 292 "parser.y"
                           {(yyval.untypedExp) = new UntypedExp_Inter((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2320 "parser.cc"
    break;

  case 84: /* exp: exp tokSETMINUS exp  */
#line 294 "parser.y"
                              {(yyval.untypedExp) = new UntypedExp_Setminus((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2326 "parser.cc"
    break;

  case 85: /* exp: tokIMPORT tokLPAREN tokSTRING name tokSTRING map_list tokRPAREN  */
#line 296 "parser.y"
                                                                          {yyerror("import command is not supported");}
#line 2332 "parser.cc"
    break;

  case 86: /* exp: tokEXPORT tokLPAREN tokSTRING name tokSTRING tokCOMMA exp tokRPAREN  */
#line 298 "parser.y"
                                                                             {/*$$ = new UntypedExp_Export{$4, $7};*/ yyerror("export command is not supported");}
#line 2338 "parser.cc"
    break;

  case 87: /* exp: tokPREFIX tokLPAREN exp tokRPAREN  */
#line 300 "parser.y"
                                           { yyerror("prefix command is not supported");}
#line 2344 "parser.cc"
    break;

  case 88: /* exp: tokINSTATESPACE tokLPAREN exp tokCOMMA name_list tokRPAREN  */
#line 302 "parser.y"
                                                                    { yyerror("in_state_space command is not supported");}
#line 2350 "parser.cc"
    break;

  case 89: /* exp: tokVARIANT tokLPAREN exp tokCOMMA exp tokCOMMA name tokCOMMA name tokRPAREN  */
#line 305 "parser.y"
                                 { yyerror("variant command is not supported");}
#line 2356 "parser.cc"
    break;

  case 90: /* exp: tokSUCC tokLPAREN exp tokCOMMA name tokCOMMA name tokCOMMA name tokRPAREN  */
#line 308 "parser.y"
                        {yyerror("succ command is not supported");}
#line 2362 "parser.cc"
    break;

  case 91: /* exp: tokTREE tokLPAREN exp tokRPAREN  */
#line 310 "parser.y"
                                         {yyerror("tree command is not supported");}
#line 2368 "parser.cc"
    break;

  case 92: /* exp: tokTYPE tokLPAREN exp tokCOMMA name tokRPAREN  */
#line 312 "parser.y"
                                                       {yyerror("type command is not supported");}
#line 2374 "parser.cc"
    break;

  case 93: /* exp: tokSOMETYPE tokLPAREN exp tokRPAREN  */
#line 314 "parser.y"
                                             { yyerror("sometype command is not supported");}
#line 2380 "parser.cc"
    break;

  case 94: /* exp: tokCONSTTREE tokLPAREN exp tokCOMMA name tokCOLON constnode tokRPAREN  */
#line 317 "parser.y"
                             {yyerror("const_tree command is not supported");}
#line 2386 "parser.cc"
    break;

  case 95: /* exp: tokTREEROOT tokLPAREN exp tokRPAREN  */
#line 319 "parser.y"
                                             {yyerror("tree_root command is not supported");}
#line 2392 "parser.cc"
    break;

  case 96: /* exp: tokRESTRICT tokLPAREN exp tokRPAREN  */
#line 321 "parser.y"
                                             {(yyval.untypedExp) = new UntypedExp_Restrict((yyvsp[-1].untypedExp));}
#line 2398 "parser.cc"
    break;

  case 97: /* arith_exp: arith_exp tokPLUS arith_exp  */
#line 326 "parser.y"
                                       {(yyval.arithExp) = new ArithExp_Add((yyvsp[-2].arithExp), (yyvsp[0].arithExp));}
#line 2404 "parser.cc"
    break;

  case 98: /* arith_exp: arith_exp tokMINUS arith_exp  */
#line 328 "parser.y"
                                       {(yyval.arithExp) = new ArithExp_Subtr((yyvsp[-2].arithExp), (yyvsp[0].arithExp));}
#line 2410 "parser.cc"
    break;

  case 99: /* arith_exp: arith_exp tokSTAR arith_exp  */
#line 330 "parser.y"
                                      {(yyval.arithExp) = new ArithExp_Mult((yyvsp[-2].arithExp), (yyvsp[0].arithExp));}
#line 2416 "parser.cc"
    break;

  case 100: /* arith_exp: arith_exp tokSLASH arith_exp  */
#line 332 "parser.y"
                                       {(yyval.arithExp) = new ArithExp_Div((yyvsp[-2].arithExp), (yyvsp[0].arithExp));}
#line 2422 "parser.cc"
    break;

  case 101: /* arith_exp: arith_exp tokMODULO arith_exp  */
#line 334 "parser.y"
                                       {(yyval.arithExp)=new ArithExp_Modul((yyvsp[-2].arithExp),(yyvsp[0].arithExp));}
#line 2428 "parser.cc"
    break;

  case 102: /* arith_exp: tokMINUS arith_exp  */
#line 336 "parser.y"
                             {}
#line 2434 "parser.cc"
    break;

  case 103: /* arith_exp: tokINT  */
#line 339 "parser.y"
        {
		(yyval.arithExp) = new ArithExp_Integer(stoi(*(yyvsp[0].st)));
		delete (yyvsp[0].st);
	}
#line 2443 "parser.cc"
    break;

  case 104: /* arith_exp: tokReal  */
#line 344 "parser.y"
                 {(yyval.arithExp)=new ArithExp_Real{(yyvsp[0].doubleVal)};}
#line 2449 "parser.cc"
    break;

  case 105: /* arith_exp: dotExp  */
#line 346 "parser.y"
                 {
					if((yyvsp[0].UntypedExpDotName)->kind==uDotName)
						(yyval.arithExp)=new AritExp_ConstDotName{(yyvsp[0].UntypedExpDotName)->dotName};
					else{
						UntypedExp_DotNameNumber* dotwithPath=static_cast<UntypedExp_DotNameNumber*>((yyvsp[0].UntypedExpDotName));
						(yyval.arithExp)=new ArithExp_ConstPathDotName{dotwithPath->dotName,dotwithPath->path};
					}
		}
#line 2462 "parser.cc"
    break;

  case 106: /* arith_exp: tokLPAREN arith_exp tokRPAREN  */
#line 355 "parser.y"
                                        {(yyval.arithExp)=(yyvsp[-1].arithExp);}
#line 2468 "parser.cc"
    break;

  case 107: /* dotExp: name tokDOT name  */
#line 359 "parser.y"
                                 {(yyval.UntypedExpDotName)=new UntypedExp_DotName{new DotName{(yyvsp[-2].name),(yyvsp[0].name)}};}
#line 2474 "parser.cc"
    break;

  case 108: /* dotExp: name tokDOT tokINT tokDOT name  */
#line 361 "parser.y"
                                                        {checkNameIntName(*(yyvsp[-2].st));(yyval.UntypedExpDotName)=new UntypedExp_DotNameNumber{new DotName{(yyvsp[-4].name),(yyvsp[0].name)},(yyvsp[-2].st)};}
#line 2480 "parser.cc"
    break;

  case 109: /* par_list: tokVAR0 name tokCOMMA par_list  */
#line 366 "parser.y"
                                         {(yyvsp[0].parList)->push_front(new ParPred{Varname0,(yyvsp[-2].name)});(yyval.parList)=(yyvsp[0].parList);}
#line 2486 "parser.cc"
    break;

  case 110: /* par_list: tokVAR1 name where tokCOMMA par_list  */
#line 368 "parser.y"
                                              {{(yyvsp[0].parList)->push_front(new ParPred{Varname1,(yyvsp[-3].name)});(yyval.parList)=(yyvsp[0].parList);}}
#line 2492 "parser.cc"
    break;

  case 111: /* par_list: tokVAR2 name where tokCOMMA par_list  */
#line 370 "parser.y"
                                              {(yyvsp[0].parList)->push_front(new ParPred{Varname2,(yyvsp[-3].name)});(yyval.parList)=(yyvsp[0].parList);}
#line 2498 "parser.cc"
    break;

  case 112: /* par_list: tokUNIVERSE name tokCOMMA par_list  */
#line 372 "parser.y"
                                             {}
#line 2504 "parser.cc"
    break;

  case 113: /* par_list: name where tokCOMMA par_list  */
#line 374 "parser.y"
                                       {}
#line 2510 "parser.cc"
    break;

  case 114: /* par_list: tokVAR0 name  */
#line 376 "parser.y"
                       {(yyval.parList)=new ParList();(yyval.parList)->push_front(new ParPred{Varname0,(yyvsp[0].name)});}
#line 2516 "parser.cc"
    break;

  case 115: /* par_list: tokVAR1 name where  */
#line 378 "parser.y"
                             {(yyval.parList)=new ParList();(yyval.parList)->push_front(new ParPred{Varname1,(yyvsp[-1].name)});}
#line 2522 "parser.cc"
    break;

  case 116: /* par_list: tokVAR2 name where  */
#line 380 "parser.y"
                            {(yyval.parList)=new ParList();(yyval.parList)->push_front(new ParPred{Varname2,(yyvsp[-1].name)});}
#line 2528 "parser.cc"
    break;

  case 117: /* par_list: tokUNIVERSE name  */
#line 382 "parser.y"
                           {}
#line 2534 "parser.cc"
    break;

  case 118: /* par_list: name where  */
#line 384 "parser.y"
                    {}
#line 2540 "parser.cc"
    break;

  case 119: /* defs: def tokCOMMA defs  */
#line 389 "parser.y"
                           {(yyvsp[0].bindExpList)->push_front((yyvsp[-2].bindExp)); 
		 (yyval.bindExpList) = (yyvsp[0].bindExpList);}
#line 2547 "parser.cc"
    break;

  case 120: /* defs: def  */
#line 392 "parser.y"
              {(yyval.bindExpList) = new BindExpList(); 
		 (yyval.bindExpList)->push_front((yyvsp[0].bindExp));}
#line 2554 "parser.cc"
    break;

  case 121: /* def: name tokEQUAL exp  */
#line 397 "parser.y"
                           {(yyval.bindExp) = new BindExp((yyvsp[-2].name), (yyvsp[0].untypedExp));}
#line 2560 "parser.cc"
    break;

  case 122: /* set_body: non_empty_set_body  */
#line 401 "parser.y"
                            {}
#line 2566 "parser.cc"
    break;

  case 123: /* non_empty_set_body: name tokCOMMA non_empty_set_body  */
#line 405 "parser.y"
                                                    {(yyvsp[0].varDeclList)->push_back(new VarDecl{(yyvsp[-2].name),nullptr});(yyval.varDeclList)=(yyvsp[0].varDeclList);}
#line 2572 "parser.cc"
    break;

  case 124: /* non_empty_set_body: name  */
#line 407 "parser.y"
              {(yyval.varDeclList)=new VarDeclList{}; (yyval.varDeclList)->push_back(new VarDecl{(yyvsp[0].name),nullptr});}
#line 2578 "parser.cc"
    break;

  case 125: /* universe: tokLBRACKET name_list tokRBRACKET  */
#line 413 "parser.y"
                                           {}
#line 2584 "parser.cc"
    break;

  case 126: /* universe: %empty  */
#line 415 "parser.y"
                     {}
#line 2590 "parser.cc"
    break;

  case 127: /* name: tokNAME  */
#line 420 "parser.y"
                {(yyval.name) = new Name((yyvsp[0].st));}
#line 2596 "parser.cc"
    break;

  case 128: /* name_list: name tokCOMMA name_list  */
#line 424 "parser.y"
                                  {}
#line 2602 "parser.cc"
    break;

  case 129: /* name_list: name  */
#line 426 "parser.y"
              {}
#line 2608 "parser.cc"
    break;

  case 130: /* name_where_list: name where tokCOMMA name_where_list  */
#line 431 "parser.y"
                {(yyvsp[0].varDeclList)->push_front(new VarDecl((yyvsp[-3].name),(yyvsp[-2].untypedExp))); 
		 (yyval.varDeclList) = (yyvsp[0].varDeclList);}
#line 2615 "parser.cc"
    break;

  case 131: /* name_where_list: name where  */
#line 434 "parser.y"
                {(yyval.varDeclList) = new VarDeclList(); 
		 (yyval.varDeclList)->push_front(new VarDecl((yyvsp[-1].name),(yyvsp[0].untypedExp)));}
#line 2622 "parser.cc"
    break;

  case 132: /* func_list: func tokCOMMA func_list  */
#line 439 "parser.y"
                                  {}
#line 2628 "parser.cc"
    break;

  case 133: /* func_list: func  */
#line 441 "parser.y"
              {}
#line 2634 "parser.cc"
    break;

  case 134: /* func: name tokARROW tokLPAREN name tokCOMMA name tokRPAREN  */
#line 445 "parser.y"
                                                              {}
#line 2640 "parser.cc"
    break;

  case 135: /* univs: univ tokCOMMA univs  */
#line 449 "parser.y"
                             {}
#line 2646 "parser.cc"
    break;

  case 136: /* univs: univ  */
#line 451 "parser.y"
              {}
#line 2652 "parser.cc"
    break;

  case 137: /* univ: name tokCOLON tokINT  */
#line 455 "parser.y"
                              {}
#line 2658 "parser.cc"
    break;

  case 138: /* univ: name tokCOLON name  */
#line 457 "parser.y"
                            {}
#line 2664 "parser.cc"
    break;

  case 139: /* univ: name  */
#line 459 "parser.y"
              {}
#line 2670 "parser.cc"
    break;

  case 140: /* where: tokWHERE exp  */
#line 463 "parser.y"
                      {(yyval.untypedExp)=(yyvsp[0].untypedExp);}
#line 2676 "parser.cc"
    break;

  case 141: /* where: %empty  */
#line 465 "parser.y"
                     {(yyval.untypedExp)=nullptr;}
#line 2682 "parser.cc"
    break;

  case 142: /* map_list: tokCOMMA name tokARROW name map_list  */
#line 469 "parser.y"
                                              {}
#line 2688 "parser.cc"
    break;

  case 143: /* map_list: %empty  */
#line 471 "parser.y"
                     {}
#line 2694 "parser.cc"
    break;

  case 144: /* variant_list: name tokLPAREN component_list tokRPAREN tokCOMMA variant_list  */
#line 475 "parser.y"
                                                                           {}
#line 2700 "parser.cc"
    break;

  case 145: /* variant_list: name tokLPAREN tokRPAREN tokCOMMA variant_list  */
#line 477 "parser.y"
                                                        {}
#line 2706 "parser.cc"
    break;

  case 146: /* variant_list: name tokCOMMA variant_list  */
#line 479 "parser.y"
                                    {}
#line 2712 "parser.cc"
    break;

  case 147: /* variant_list: name tokLPAREN component_list tokRPAREN  */
#line 481 "parser.y"
                                                 {}
#line 2718 "parser.cc"
    break;

  case 148: /* variant_list: name tokLPAREN tokRPAREN  */
#line 483 "parser.y"
                                  {}
#line 2724 "parser.cc"
    break;

  case 149: /* variant_list: name  */
#line 485 "parser.y"
              {}
#line 2730 "parser.cc"
    break;

  case 150: /* component_list: name tokCOLON name tokCOMMA component_list  */
#line 489 "parser.y"
                                                          {}
#line 2736 "parser.cc"
    break;

  case 151: /* component_list: name tokCOLON name  */
#line 491 "parser.y"
                            {}
#line 2742 "parser.cc"
    break;

  case 152: /* constnode: name tokLPAREN constnode_list tokRPAREN  */
#line 495 "parser.y"
                                                  {}
#line 2748 "parser.cc"
    break;

  case 153: /* constnode: name tokLPAREN tokRPAREN  */
#line 497 "parser.y"
                                  {}
#line 2754 "parser.cc"
    break;

  case 154: /* constnode: name  */
#line 499 "parser.y"
              {}
#line 2760 "parser.cc"
    break;

  case 155: /* constnode_list: constnode tokCOMMA constnode_list  */
#line 503 "parser.y"
                                                 {}
#line 2766 "parser.cc"
    break;

  case 156: /* constnode_list: constnode  */
#line 505 "parser.y"
                   {}
#line 2772 "parser.cc"
    break;

  case 157: /* optstring: tokSTRING  */
#line 509 "parser.y"
                    {}
#line 2778 "parser.cc"
    break;

  case 158: /* optstring: %empty  */
#line 511 "parser.y"
                      {}
#line 2784 "parser.cc"
    break;


#line 2788 "parser.cc"

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

#line 516 "parser.y"

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
	if(untypedAST!=nullptr){
		delete untypedAST; 
	}
	exit(-1);
}
