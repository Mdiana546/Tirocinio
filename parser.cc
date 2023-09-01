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
#define YYLAST   2277

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  159
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  423

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
       0,   104,   104,   121,   124,   126,   130,   132,   134,   136,
     138,   140,   142,   144,   146,   148,   150,   152,   154,   156,
     158,   160,   162,   164,   166,   168,   170,   172,   174,   176,
     178,   180,   180,   185,   187,   189,   191,   193,   195,   197,
     199,   201,   203,   205,   207,   209,   211,   213,   215,   217,
     219,   221,   223,   225,   227,   231,   233,   235,   237,   239,
     241,   243,   245,   247,   249,   251,   253,   255,   257,   259,
     261,   263,   265,   267,   272,   274,   276,   278,   280,   282,
     284,   286,   288,   290,   292,   295,   298,   300,   302,   304,
     307,   309,   314,   316,   318,   320,   322,   324,   329,   331,
     340,   344,   346,   350,   352,   354,   356,   358,   360,   362,
     364,   366,   368,   373,   375,   379,   383,   385,   389,   391,
     393,   395,   399,   401,   405,   407,   411,   413,   417,   422,
     424,   428,   431,   437,   439,   443,   447,   449,   453,   455,
     457,   461,   463,   467,   469,   473,   475,   477,   479,   481,
     483,   487,   489,   493,   495,   497,   501,   503,   507,   509
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

#define YYPACT_NINF (-339)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -47,    -3,    44,   622,  -339,  -339,    -2,    46,    46,   710,
      -2,    54,    60,    61,    -2,    46,    46,  -339,    -2,   496,
      -2,    -2,    -2,   710,    -2,   710,   710,   710,    -2,    72,
      73,     6,   -10,  -339,    -2,    -2,    46,    46,    23,    84,
      86,    91,    -2,    97,   710,   -23,    99,   110,   111,   112,
     115,    -2,  -339,    -2,  -339,    -2,  -339,   622,   786,  -339,
      15,    83,   143,    -2,    -2,    -2,   121,   123,   828,   145,
      -2,    -2,   710,   153,    -2,    -2,   157,   118,   154,   156,
     187,   125,  -339,   150,   167,   165,   159,   160,   870,     7,
     114,   114,  2130,    20,   710,   710,  -339,   710,   710,    -2,
     177,   135,   178,   137,    -2,    -2,   141,   108,   113,   710,
     146,   710,   912,   710,   183,   710,   710,   710,   710,   710,
     148,   155,    -2,   158,  -339,   710,   710,   710,   710,   710,
     710,   710,   710,   710,   710,   -15,   -15,   710,   710,   710,
     -15,  -339,   710,   -15,   -15,   710,   710,  -339,   -44,   710,
     710,   192,   710,   196,   170,   207,   214,  -339,   -15,   171,
     173,   954,   710,   216,   219,   198,  -339,    -2,   496,   496,
    -339,   710,    -2,   710,   710,   710,  -339,   710,    21,   710,
      59,   996,  1038,     2,  1080,  1122,   182,   -20,  -339,    -2,
    -339,   184,   186,  -339,   225,   233,  1164,  -339,  1206,  -339,
    1248,    -2,  1290,  1332,  1374,  1416,  1458,  -339,  -339,   193,
    -339,  2130,  1962,  2214,  2214,  2214,  2004,  2172,   272,  2214,
    2214,   -15,   -15,  -339,  -339,   -22,  -339,   232,  -339,  2214,
    2172,  2088,   -22,   269,  -339,  -339,  2172,   326,   234,  -339,
    1500,   200,  -339,  1962,    -2,  1962,    -2,  -339,   710,   710,
     213,   237,   238,  -339,  1962,   710,   710,    -2,  -339,  -339,
    -339,  1962,  -339,  2046,  1962,  1962,  1542,   239,    -2,    -2,
      -2,    -2,   205,    83,  1584,   241,   208,  -339,    46,  -339,
    -339,  -339,  -339,  -339,  -339,  -339,  -339,  -339,    -2,   209,
     710,  -339,    -2,    -2,    12,   217,  -339,   710,    -2,  -339,
      -2,  -339,    48,   -22,   -15,   -15,   -15,   -15,    -9,    -2,
     710,  -339,  -339,  -339,  1962,  1962,  -339,   710,   710,  1962,
    1962,   256,  -339,   710,   261,   267,    83,    83,   262,   270,
    -339,   710,   263,   231,   277,  -339,  1626,   236,   243,    -2,
     -33,  -339,  1668,   274,   279,  -339,   -22,   -22,  -339,  -339,
     234,  -339,  -339,  1710,  1752,    -2,  1794,    53,    53,   280,
     282,   710,    53,  1836,   710,  -339,    -2,  -339,  -339,  -339,
    -339,   285,   287,   259,    -2,    -2,    -2,  -339,  -339,   264,
    -339,  -339,  -339,    53,    53,  1878,  -339,  -339,  1920,   225,
      -2,    -2,   297,   303,   308,   254,   268,  -339,  -339,  -339,
    -339,  -339,  -339,  -339,   310,    -2,    -2,    -2,   -12,  -339,
      -2,  -339,   278,   284,  -339,   311,   286,  -339,  -339,  -339,
      -2,  -339,  -339
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     1,     0,   127,   127,     0,
       0,     0,     0,    75,     0,   127,   127,    67,     0,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      54,   159,   127,    66,     0,     0,   127,   127,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,     0,    31,     0,     2,     5,     0,    52,
      33,   142,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   134,   121,
     120,     0,   116,     0,   114,     0,     0,     0,     0,     0,
      40,    39,    51,     0,     0,     0,   158,     0,     0,     0,
     140,     0,   137,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,    55,     0,   123,
       0,   132,     0,   130,     0,     0,     0,     6,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
      76,     0,     0,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,    33,     0,     0,     0,     0,     8,     0,
      12,     0,     0,    25,   144,     0,     0,    26,     0,    24,
       0,     0,     0,     0,     0,     0,     0,    27,    30,     0,
      29,    49,    48,    45,    44,    43,    47,    37,    78,    41,
      42,     0,     0,    98,    97,    71,    99,     0,    74,    46,
      38,    50,    70,    79,    73,    72,    36,    77,    34,   101,
     125,     0,   122,   141,     0,    59,     0,   126,     0,     0,
       0,     0,     0,    69,    56,     0,     0,     0,   133,   119,
     118,    62,   113,   115,    63,    64,     0,     0,     0,     0,
       0,     0,     0,   142,     0,     0,     0,    91,   127,    53,
      23,    86,    15,   138,   139,   136,    13,    14,     0,     0,
       0,    82,     0,     0,   150,     0,    88,     0,     0,    90,
       0,    32,     0,    96,     0,     0,     0,     0,     0,     0,
       0,    65,   131,   129,    60,    61,    11,     0,     0,    57,
      58,     0,    20,     0,   111,   108,   142,   142,     0,   112,
      17,     0,     0,     0,     0,    80,     0,     0,     0,     0,
       0,    28,     0,     0,     0,   100,    93,    92,    95,    94,
       0,   102,   124,     0,     0,     0,     0,     0,     0,   109,
     110,     0,     0,     0,     0,    68,     0,    81,    83,    87,
     147,   149,     0,     0,     0,     0,     0,     9,    10,     0,
      21,   106,   103,     0,     0,     0,   107,    18,     0,   144,
       0,     0,   148,     0,     0,   155,     0,   135,   104,   105,
      19,    16,   143,   146,   152,     0,     0,     0,     0,    89,
       0,   145,     0,     0,   154,   157,     0,   151,    84,    85,
       0,   153,   156
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -339,  -339,  -339,   288,  -339,  -339,   314,     0,   -30,  -178,
     -16,  -339,  -339,   -90,  -339,    19,    -5,    -6,  -237,    27,
     164,  -339,   161,  -339,  -266,   -46,  -338,   -68,   -32,   -74,
    -339
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,     3,    56,    57,   122,    80,   225,    59,   272,
      83,    84,    81,    82,   241,   242,    64,    60,   154,    62,
      77,    78,   101,   102,   151,   289,   295,   373,   415,   416,
      97
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,   370,   276,    65,    69,    86,    87,   329,    61,   313,
      74,    75,    76,   113,    85,    85,    85,   148,    89,   371,
      63,   221,    93,   339,   177,   222,    98,    99,   100,    61,
     148,   104,   105,   306,   307,     1,   110,   179,   149,   114,
     414,    73,    52,   178,     5,   120,   238,    61,   340,    61,
       4,   149,   403,    52,   279,   337,   180,   153,    61,    61,
     359,   360,   103,    52,   159,   160,    52,   411,    61,    61,
     283,    52,   223,   267,    52,   224,    63,    52,   259,   260,
     121,   350,   123,   268,    52,   269,   270,   271,   304,   183,
      70,   155,   156,    61,   305,    96,    71,    72,    61,    61,
     345,   163,   164,   306,   307,   226,   226,    52,    94,    95,
     226,   275,   106,   226,   226,   268,    61,   269,   270,   271,
     107,   268,   108,   269,   270,   271,   186,   109,   226,   227,
     227,   191,   192,   111,   227,   115,   228,   227,   227,    52,
     232,   132,   239,   234,   235,    52,   116,   117,   118,   209,
     150,   119,   227,   152,   135,   136,   262,    98,   250,   113,
     140,    76,   158,   162,   165,   167,    85,   168,   142,   143,
     144,   166,   273,   170,   273,   146,   171,   147,   172,   381,
     382,   284,   173,   100,   386,   174,   175,   187,   188,   189,
     190,   226,   226,   125,   193,   294,   126,   194,   169,   197,
     201,   207,   195,   244,   127,   398,   399,   246,   208,   128,
     129,   210,   130,   131,   132,   227,   227,   248,   133,   134,
     247,   302,   303,   251,   249,   252,   255,   135,   136,   256,
     137,   138,   139,   140,   257,   282,   288,   286,    61,   287,
     153,   142,   143,   144,   290,   145,   301,   308,   146,   309,
     147,   321,   311,   304,   317,   318,   323,   328,   331,   305,
     332,   335,   324,   325,   326,   327,   316,   355,   306,   307,
     341,   312,   357,   333,   226,   226,   226,   226,   358,   361,
     364,   362,   334,   365,   366,   375,   153,   338,   368,   376,
     408,   383,   343,   384,   344,   369,   390,   391,   227,   227,
     227,   227,   239,   351,   346,   347,   348,   349,   405,   135,
     136,   392,   135,   136,   406,   140,   397,    58,   140,   407,
     409,   410,   420,    68,   143,   144,   142,   143,   144,   352,
     418,   258,   147,   294,   372,   147,   419,    88,   421,    90,
      91,    92,   417,   402,   396,   124,   422,     0,     0,   379,
     285,   273,   273,   132,     0,     0,   273,     0,   112,     0,
     389,     0,     0,     0,     0,     0,   135,   136,   393,   394,
     395,    58,   140,     0,     0,     0,     0,   273,   273,     0,
     142,   143,   144,     0,   294,   404,   161,     0,     0,   147,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   294,
     412,   413,   395,     0,   372,     0,     0,     0,   181,   182,
       0,   184,   185,     0,   395,     0,     0,     0,     0,     0,
       0,     0,     0,   196,     0,   198,     0,   200,     0,   202,
     203,   204,   205,   206,     0,     0,     0,     0,     0,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,     0,
       0,   229,   230,   231,     0,     0,   233,     0,     0,   236,
     237,     0,     0,   240,   243,     0,   245,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   254,     0,     0,     0,
       0,     0,     0,     0,     0,   261,     0,   263,   264,   265,
       0,   266,     0,   274,     0,     0,     0,     0,     0,     6,
       7,     8,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,     0,     0,
       0,     0,     0,     0,    79,    19,     0,     0,     0,    20,
      21,    22,    23,     0,    25,    26,     0,     0,    27,     0,
       0,     0,     0,     0,     0,    29,     0,    30,     0,     0,
       0,     0,     0,     0,     0,    66,    33,     0,     0,     0,
       0,     0,   314,   315,     0,    39,    40,    41,     0,   319,
     320,    43,     0,    67,    46,    47,    48,     0,     0,    49,
      50,     0,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   336,     0,     0,     0,     0,     0,
       0,   342,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   240,     6,     7,     8,     0,     0,
       9,   353,   354,     0,    10,    11,    12,   356,    13,     0,
      14,    15,    16,    17,     0,   363,    18,     0,     0,     0,
       0,    19,     0,     0,     0,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    27,     0,     0,     0,     0,    28,
       0,    29,     0,    30,     0,   385,     0,     0,   388,    31,
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
       0,   137,   138,   139,   140,     0,   125,     0,     0,   126,
       0,   157,   142,   143,   144,     0,   145,   127,     0,   146,
       0,   147,   128,   129,     0,   130,   131,   132,     0,     0,
       0,   133,   134,     0,     0,     0,     0,     0,     0,     0,
     135,   136,     0,   137,   138,   139,   140,     0,   125,     0,
       0,   126,   176,     0,   142,   143,   144,     0,   145,   127,
       0,   146,     0,   147,   128,   129,     0,   130,   131,   132,
       0,     0,     0,   133,   134,     0,     0,     0,     0,     0,
       0,     0,   135,   136,     0,   137,   138,   139,   140,     0,
     125,     0,     0,   126,     0,   199,   142,   143,   144,     0,
     145,   127,     0,   146,     0,   147,   128,   129,     0,   130,
     131,   132,     0,     0,     0,   133,   134,     0,     0,     0,
       0,     0,     0,     0,   135,   136,     0,   137,   138,   139,
     140,     0,   125,     0,     0,   126,   253,     0,   142,   143,
     144,     0,   145,   127,     0,   146,     0,   147,   128,   129,
       0,   130,   131,   132,     0,     0,     0,   133,   134,     0,
       0,     0,     0,     0,     0,     0,   135,   136,     0,   137,
     138,   139,   140,     0,   125,     0,     0,   126,   277,   278,
     142,   143,   144,     0,   145,   127,     0,   146,     0,   147,
     128,   129,     0,   130,   131,   132,     0,     0,     0,   133,
     134,     0,     0,     0,     0,     0,     0,     0,   135,   136,
       0,   137,   138,   139,   140,     0,   125,     0,     0,   126,
       0,     0,   142,   143,   144,     0,   145,   127,     0,   146,
       0,   147,   128,   129,     0,   130,   131,   132,     0,     0,
       0,   133,   134,     0,     0,     0,     0,     0,     0,     0,
     135,   136,     0,   137,   138,   139,   140,     0,   125,     0,
       0,   126,     0,   280,   142,   143,   144,     0,   145,   127,
       0,   146,     0,   147,   128,   129,     0,   130,   131,   132,
       0,     0,     0,   133,   134,     0,     0,     0,     0,     0,
       0,     0,   135,   136,     0,   137,   138,   139,   140,     0,
     125,     0,     0,   126,   281,     0,   142,   143,   144,     0,
     145,   127,     0,   146,     0,   147,   128,   129,     0,   130,
     131,   132,     0,     0,     0,   133,   134,     0,     0,     0,
       0,     0,     0,     0,   135,   136,     0,   137,   138,   139,
     140,     0,   125,     0,     0,   126,   291,   292,   142,   143,
     144,     0,   145,   127,     0,   146,     0,   147,   128,   129,
       0,   130,   131,   132,     0,     0,     0,   133,   134,     0,
       0,     0,     0,     0,     0,     0,   135,   136,     0,   137,
     138,   139,   140,     0,   125,     0,     0,   126,     0,   293,
     142,   143,   144,     0,   145,   127,     0,   146,     0,   147,
     128,   129,     0,   130,   131,   132,     0,     0,     0,   133,
     134,     0,     0,     0,     0,     0,     0,     0,   135,   136,
       0,   137,   138,   139,   140,     0,   125,     0,     0,   126,
       0,     0,   142,   143,   144,     0,   145,   127,     0,   146,
       0,   147,   128,   129,     0,   130,   131,   132,     0,     0,
       0,   133,   134,     0,     0,     0,     0,     0,     0,     0,
     135,   136,     0,   137,   138,   139,   140,     0,   125,     0,
       0,   126,   296,   297,   142,   143,   144,     0,   145,   127,
       0,   146,     0,   147,   128,   129,     0,   130,   131,   132,
       0,     0,     0,   133,   134,     0,     0,     0,     0,     0,
       0,     0,   135,   136,     0,   137,   138,   139,   140,     0,
     125,     0,     0,   126,     0,   298,   142,   143,   144,     0,
     145,   127,     0,   146,     0,   147,   128,   129,     0,   130,
     131,   132,     0,     0,     0,   133,   134,     0,     0,     0,
       0,     0,     0,     0,   135,   136,     0,   137,   138,   139,
     140,     0,   125,     0,     0,   126,     0,     0,   142,   143,
     144,     0,   145,   127,     0,   146,     0,   147,   128,   129,
       0,   130,   131,   132,     0,     0,     0,   133,   134,     0,
       0,     0,     0,     0,     0,     0,   135,   136,     0,   137,
     138,   139,   140,     0,   125,     0,     0,   126,   299,   300,
     142,   143,   144,     0,   145,   127,     0,   146,     0,   147,
     128,   129,     0,   130,   131,   132,     0,     0,     0,   133,
     134,     0,     0,     0,     0,     0,     0,     0,   135,   136,
       0,   137,   138,   139,   140,     0,   125,     0,     0,   126,
       0,   310,   142,   143,   144,     0,   145,   127,     0,   146,
       0,   147,   128,   129,     0,   130,   131,   132,     0,     0,
       0,   133,   134,     0,     0,     0,     0,     0,     0,     0,
     135,   136,     0,   137,   138,   139,   140,     0,   125,     0,
       0,   126,     0,     0,   142,   143,   144,     0,   145,   127,
       0,   146,     0,   147,   128,   129,     0,   130,   131,   132,
       0,     0,     0,   133,   134,     0,     0,     0,     0,     0,
       0,     0,   135,   136,     0,   137,   138,   139,   140,     0,
     125,     0,     0,   126,     0,   322,   142,   143,   144,     0,
     145,   127,     0,   146,     0,   147,   128,   129,     0,   130,
     131,   132,     0,     0,     0,   133,   134,     0,     0,     0,
       0,     0,     0,     0,   135,   136,     0,   137,   138,   139,
     140,     0,   125,     0,     0,   126,     0,   330,   142,   143,
     144,     0,   145,   127,     0,   146,     0,   147,   128,   129,
       0,   130,   131,   132,     0,     0,     0,   133,   134,     0,
       0,     0,     0,     0,     0,     0,   135,   136,     0,   137,
     138,   139,   140,     0,   125,     0,     0,   126,   367,   374,
     142,   143,   144,     0,   145,   127,     0,   146,     0,   147,
     128,   129,     0,   130,   131,   132,     0,     0,     0,   133,
     134,     0,     0,     0,     0,     0,     0,     0,   135,   136,
       0,   137,   138,   139,   140,     0,   125,     0,     0,   126,
       0,     0,   142,   143,   144,     0,   145,   127,     0,   146,
       0,   147,   128,   129,     0,   130,   131,   132,     0,     0,
       0,   133,   134,     0,     0,     0,     0,     0,     0,     0,
     135,   136,     0,   137,   138,   139,   140,     0,   125,     0,
       0,   126,     0,   377,   142,   143,   144,     0,   145,   127,
       0,   146,     0,   147,   128,   129,     0,   130,   131,   132,
       0,     0,     0,   133,   134,     0,     0,     0,     0,     0,
       0,     0,   135,   136,     0,   137,   138,   139,   140,     0,
     125,     0,     0,   126,     0,   378,   142,   143,   144,     0,
     145,   127,     0,   146,     0,   147,   128,   129,     0,   130,
     131,   132,     0,     0,     0,   133,   134,     0,     0,     0,
       0,     0,     0,     0,   135,   136,     0,   137,   138,   139,
     140,     0,   125,     0,     0,   126,     0,   380,   142,   143,
     144,     0,   145,   127,     0,   146,     0,   147,   128,   129,
       0,   130,   131,   132,     0,     0,     0,   133,   134,     0,
       0,     0,     0,     0,     0,     0,   135,   136,     0,   137,
     138,   139,   140,     0,   125,     0,     0,   126,     0,   387,
     142,   143,   144,     0,   145,   127,     0,   146,     0,   147,
     128,   129,     0,   130,   131,   132,     0,     0,     0,   133,
     134,     0,     0,     0,     0,     0,     0,     0,   135,   136,
       0,   137,   138,   139,   140,     0,   125,     0,     0,   126,
       0,   400,   142,   143,   144,     0,   145,   127,     0,   146,
       0,   147,   128,   129,     0,   130,   131,   132,     0,     0,
       0,   133,   134,     0,     0,     0,     0,     0,     0,     0,
     135,   136,     0,   137,   138,   139,   140,     0,   125,     0,
       0,   126,     0,   401,   142,   143,   144,     0,   145,   127,
       0,   146,     0,   147,   128,   129,     0,   130,   131,   132,
       0,     0,     0,   133,   134,     0,     0,     0,     0,     0,
       0,     0,   135,   136,     0,   137,   138,   139,   140,     0,
     125,     0,     0,     0,     0,     0,   142,   143,   144,     0,
     145,   127,     0,   146,     0,   147,   128,   129,     0,   130,
     131,   132,     0,     0,     0,   133,   134,     0,     0,     0,
       0,     0,     0,     0,   135,   136,     0,   137,   138,   139,
     140,     0,   125,     0,     0,   126,     0,     0,   142,   143,
     144,     0,   145,   127,     0,   146,     0,   147,   128,   129,
       0,   130,     0,   132,     0,     0,     0,   133,   134,     0,
       0,     0,     0,     0,     0,     0,   135,   136,     0,   137,
     138,   139,   140,     0,   125,     0,     0,     0,     0,     0,
     142,   143,   144,     0,   145,   127,     0,   146,     0,   147,
     128,   129,     0,     0,   131,   132,     0,     0,     0,   133,
     134,     0,     0,     0,     0,     0,     0,     0,   135,   136,
       0,   137,   138,     0,   140,     0,     0,     0,     0,     0,
       0,     0,   142,   143,   144,     0,   145,   127,     0,   146,
       0,   147,   128,   129,     0,     0,   131,   132,     0,     0,
       0,   133,   134,     0,     0,     0,     0,     0,     0,     0,
     135,   136,     0,   137,   138,     0,   140,     0,     0,     0,
       0,     0,     0,     0,   142,   143,   144,     0,   145,   127,
       0,   146,     0,   147,   128,   129,     0,     0,    -1,   132,
       0,     0,     0,   133,   134,     0,     0,     0,     0,     0,
       0,     0,   135,   136,     0,   137,    -1,     0,   140,     0,
       0,     0,     0,     0,     0,     0,   142,   143,   144,     0,
      -1,    -1,     0,   146,     0,   147,    -1,    -1,     0,     0,
       0,   132,     0,     0,     0,    -1,    -1,     0,     0,     0,
       0,     0,     0,     0,   135,   136,     0,    -1,     0,     0,
     140,     0,     0,     0,     0,     0,     0,     0,   142,   143,
     144,     0,     0,     0,     0,   146,     0,   147
};

static const yytype_int16 yycheck[] =
{
       6,   339,   180,     8,    10,    21,    22,   273,    14,   246,
      15,    16,    18,    36,    20,    21,    22,    15,    24,    52,
      30,    36,    28,    11,    17,    40,    36,    32,    34,    35,
      15,    36,    37,    55,    56,    82,    42,    17,    36,    45,
      52,    14,    86,    36,     0,    51,    90,    53,    36,    55,
      53,    36,   390,    86,    52,   292,    36,    63,    64,    65,
     326,   327,    35,    86,    70,    71,    86,   405,    74,    75,
      90,    86,    87,    52,    86,    90,    30,    86,   168,   169,
      53,    90,    55,    62,    86,    64,    65,    66,    40,    95,
      36,    64,    65,    99,    46,    89,    36,    36,   104,   105,
      52,    74,    75,    55,    56,   135,   136,    86,    36,    36,
     140,    52,    89,   143,   144,    62,   122,    64,    65,    66,
      36,    62,    36,    64,    65,    66,    99,    36,   158,   135,
     136,   104,   105,    36,   140,    36,   136,   143,   144,    86,
     140,    27,   148,   143,   144,    86,    36,    36,    36,   122,
      67,    36,   158,    10,    40,    41,   172,    36,   158,    36,
      46,   167,    17,    10,     7,    11,   172,    11,    54,    55,
      56,    53,   178,    48,   180,    61,    26,    63,    11,   357,
     358,   187,    17,   189,   362,    26,    26,    10,    53,    11,
      53,   221,   222,     6,    53,   201,     9,    89,    11,    53,
      17,    53,    89,    11,    17,   383,   384,    11,    53,    22,
      23,    53,    25,    26,    27,   221,   222,    10,    31,    32,
      50,   221,   222,    52,    10,    52,    10,    40,    41,    10,
      43,    44,    45,    46,    36,    53,    11,    53,   244,    53,
     246,    54,    55,    56,    11,    58,    53,    15,    61,    15,
      63,   257,    52,    40,    17,    17,    17,    52,    17,    46,
      52,    52,   268,   269,   270,   271,    53,    11,    55,    56,
      53,   244,    11,   278,   304,   305,   306,   307,    11,    17,
      17,    11,   288,    52,     7,    11,   292,   293,    52,    10,
      36,    11,   298,    11,   300,    52,    11,    10,   304,   305,
     306,   307,   308,   309,   304,   305,   306,   307,    11,    40,
      41,    52,    40,    41,    11,    46,    52,     3,    46,    11,
      52,    11,    11,     9,    55,    56,    54,    55,    56,   310,
      52,   167,    63,   339,   340,    63,    52,    23,    52,    25,
      26,    27,   410,   389,   376,    57,   420,    -1,    -1,   355,
     189,   357,   358,    27,    -1,    -1,   362,    -1,    44,    -1,
     366,    -1,    -1,    -1,    -1,    -1,    40,    41,   374,   375,
     376,    57,    46,    -1,    -1,    -1,    -1,   383,   384,    -1,
      54,    55,    56,    -1,   390,   391,    72,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   405,
     406,   407,   408,    -1,   410,    -1,    -1,    -1,    94,    95,
      -1,    97,    98,    -1,   420,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,   111,    -1,   113,    -1,   115,
     116,   117,   118,   119,    -1,    -1,    -1,    -1,    -1,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    -1,
      -1,   137,   138,   139,    -1,    -1,   142,    -1,    -1,   145,
     146,    -1,    -1,   149,   150,    -1,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   171,    -1,   173,   174,   175,
      -1,   177,    -1,   179,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    33,
      34,    35,    36,    -1,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,   248,   249,    -1,    69,    70,    71,    -1,   255,
     256,    75,    -1,    77,    78,    79,    80,    -1,    -1,    83,
      84,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   290,    -1,    -1,    -1,    -1,    -1,
      -1,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   310,     3,     4,     5,    -1,    -1,
       8,   317,   318,    -1,    12,    13,    14,   323,    16,    -1,
      18,    19,    20,    21,    -1,   331,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      38,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    47,
      -1,    49,    -1,    51,    -1,   361,    -1,    -1,   364,    57,
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
      -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,     9,
      -1,    53,    54,    55,    56,    -1,    58,    17,    -1,    61,
      -1,    63,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    45,    46,    -1,     6,    -1,
      -1,     9,    52,    -1,    54,    55,    56,    -1,    58,    17,
      -1,    61,    -1,    63,    22,    23,    -1,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    45,    46,    -1,
       6,    -1,    -1,     9,    -1,    53,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    63,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,     9,    52,    -1,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    63,    22,    23,
      -1,    25,    26,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,     9,    52,    11,
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
       6,    -1,    -1,     9,    52,    -1,    54,    55,    56,    -1,
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
      44,    45,    46,    -1,     6,    -1,    -1,     9,    52,    11,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    63,
      22,    23,    -1,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    45,    46,    -1,     6,    -1,    -1,     9,
      -1,    11,    54,    55,    56,    -1,    58,    17,    -1,    61,
      -1,    63,    22,    23,    -1,    25,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    45,    46,    -1,     6,    -1,
      -1,     9,    -1,    -1,    54,    55,    56,    -1,    58,    17,
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
      44,    45,    46,    -1,     6,    -1,    -1,     9,    52,    11,
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
       6,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    63,    22,    23,    -1,    25,
      26,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    44,    45,
      46,    -1,     6,    -1,    -1,     9,    -1,    -1,    54,    55,
      56,    -1,    58,    17,    -1,    61,    -1,    63,    22,    23,
      -1,    25,    -1,    27,    -1,    -1,    -1,    31,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    43,
      44,    45,    46,    -1,     6,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    -1,    58,    17,    -1,    61,    -1,    63,
      22,    23,    -1,    -1,    26,    27,    -1,    -1,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    43,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    -1,    58,    17,    -1,    61,
      -1,    63,    22,    23,    -1,    -1,    26,    27,    -1,    -1,
      -1,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    -1,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    -1,    58,    17,
      -1,    61,    -1,    63,    22,    23,    -1,    -1,    26,    27,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    -1,    43,    44,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    -1,
      58,    17,    -1,    61,    -1,    63,    22,    23,    -1,    -1,
      -1,    27,    -1,    -1,    -1,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    -1,    43,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    -1,    -1,    -1,    -1,    61,    -1,    63
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
      98,    98,    99,    98,    99,    99,    98,    98,    90,   109,
      98,   106,   107,    98,    11,    98,    11,    50,    10,    10,
      99,    52,    52,    52,    98,    10,    10,    36,   112,   105,
     105,    98,   102,    98,    98,    98,    98,    52,    62,    64,
      65,    66,   101,   109,    98,    52,   101,    52,    11,    52,
      53,    52,    53,    90,   109,   114,    53,    53,    11,   117,
      11,    52,    11,    11,   109,   118,    52,    11,    11,    52,
      11,    53,    99,    99,    40,    46,    55,    56,    15,    15,
      11,    52,   111,   110,    98,    98,    53,    17,    17,    98,
      98,   109,    53,    17,   109,   109,   109,   109,    52,   116,
      53,    17,    52,   108,   109,    52,    98,   110,   109,    11,
      36,    53,    98,   109,   109,    52,    99,    99,    99,    99,
      90,   109,   107,    98,    98,    11,    98,    11,    11,   116,
     116,    17,    11,    98,    17,    52,     7,    52,    52,    52,
     118,    52,   109,   119,    11,    11,    10,    53,    53,   109,
      53,   101,   101,    11,    11,    98,   101,    53,    98,   109,
      11,    10,    52,   109,   109,   109,   120,    52,   101,   101,
      53,    53,   117,   118,   109,    11,    11,    11,    36,    52,
      11,   118,   109,   109,    52,   120,   121,   119,    52,    52,
      11,    52,   121
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
      98,    98,    99,    99,    99,    99,    99,    99,    99,    99,
      99,   100,   100,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   102,   102,   103,   104,   104,   105,   105,
     105,   105,   106,   106,   107,   107,   108,   108,   109,   110,
     110,   111,   111,   112,   112,   113,   114,   114,   115,   115,
     115,   116,   116,   117,   117,   118,   118,   118,   118,   118,
     118,   119,   119,   120,   120,   120,   121,   121,   122,   122
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     1,     3,     3,     3,     7,
       7,     5,     3,     4,     4,     4,     8,     5,     7,     8,
       5,     7,     2,     4,     3,     3,     3,     3,     5,     3,
       3,     0,     4,     1,     3,     3,     3,     3,     3,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     1,     4,     1,     2,     4,     5,     5,     4,
       5,     5,     4,     4,     4,     4,     1,     1,     6,     4,
       3,     3,     3,     3,     3,     1,     3,     3,     3,     3,
       5,     6,     4,     6,    10,    10,     4,     6,     4,     8,
       4,     4,     3,     3,     3,     3,     2,     1,     1,     1,
       3,     3,     5,     4,     5,     5,     4,     4,     2,     3,
       3,     2,     2,     3,     1,     3,     1,     0,     3,     3,
       1,     1,     1,     0,     3,     1,     3,     0,     1,     3,
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
#line 104 "parser.y"
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
#line 1876 "parser.cc"
    break;

  case 3: /* header: tokWS2S tokSEMICOLON  */
#line 121 "parser.y"
                               {}
#line 1882 "parser.cc"
    break;

  case 4: /* declarations: declaration declarations  */
#line 124 "parser.y"
                                       {if ((yyvsp[-1].declaration)) (yyvsp[0].declList)->push_front((yyvsp[-1].declaration)); (yyval.declList) = (yyvsp[0].declList);}
#line 1888 "parser.cc"
    break;

  case 5: /* declarations: declaration  */
#line 126 "parser.y"
                      {(yyval.declList) = new DeclarationList(); 
	         	if ((yyvsp[0].declaration)) (yyval.declList)->push_front((yyvsp[0].declaration));}
#line 1895 "parser.cc"
    break;

  case 6: /* declaration: tokASSERT exp tokSEMICOLON  */
#line 130 "parser.y"
                                        {}
#line 1901 "parser.cc"
    break;

  case 7: /* declaration: tokGUIDE func_list tokSEMICOLON  */
#line 132 "parser.y"
                                         {}
#line 1907 "parser.cc"
    break;

  case 8: /* declaration: tokUNIVERSE univs tokSEMICOLON  */
#line 134 "parser.y"
                                        {}
#line 1913 "parser.cc"
    break;

  case 9: /* declaration: tokDEFAULT1 tokLPAREN name tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 136 "parser.y"
                                                                         {}
#line 1919 "parser.cc"
    break;

  case 10: /* declaration: tokDEFAULT2 tokLPAREN name tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 138 "parser.y"
                                                                         {}
#line 1925 "parser.cc"
    break;

  case 11: /* declaration: tokCONST name tokEQUAL arith_exp tokSEMICOLON  */
#line 140 "parser.y"
                                                        {}
#line 1931 "parser.cc"
    break;

  case 12: /* declaration: tokVAR0 name_where_list tokSEMICOLON  */
#line 142 "parser.y"
                                              {}
#line 1937 "parser.cc"
    break;

  case 13: /* declaration: tokVAR1 universe name_where_list tokSEMICOLON  */
#line 144 "parser.y"
                                                       {(yyval.declaration) = new Variable_Declaration(Varname1,(yyvsp[-1].varDeclList));}
#line 1943 "parser.cc"
    break;

  case 14: /* declaration: tokVAR2 universe name_where_list tokSEMICOLON  */
#line 146 "parser.y"
                                                        {/*$$=new Declaration{Varname2,$3};*/}
#line 1949 "parser.cc"
    break;

  case 15: /* declaration: tokTREE universe name_where_list tokSEMICOLON  */
#line 148 "parser.y"
                                                        {}
#line 1955 "parser.cc"
    break;

  case 16: /* declaration: tokPRED name tokLPAREN par_list tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 150 "parser.y"
                                                                              {}
#line 1961 "parser.cc"
    break;

  case 17: /* declaration: tokPRED name tokEQUAL exp tokSEMICOLON  */
#line 152 "parser.y"
                                                  {}
#line 1967 "parser.cc"
    break;

  case 18: /* declaration: tokPRED name tokLPAREN tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 154 "parser.y"
                                                                     {}
#line 1973 "parser.cc"
    break;

  case 19: /* declaration: tokMACRO name tokLPAREN par_list tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 156 "parser.y"
                                                                                {}
#line 1979 "parser.cc"
    break;

  case 20: /* declaration: tokMACRO name tokEQUAL exp tokSEMICOLON  */
#line 158 "parser.y"
                                                   {}
#line 1985 "parser.cc"
    break;

  case 21: /* declaration: tokMACRO name tokLPAREN tokRPAREN tokEQUAL exp tokSEMICOLON  */
#line 160 "parser.y"
                                                                       {}
#line 1991 "parser.cc"
    break;

  case 22: /* declaration: exp tokSEMICOLON  */
#line 162 "parser.y"
                           {(yyval.declaration) = new Expression_Declaration((yyvsp[-1].untypedExp));}
#line 1997 "parser.cc"
    break;

  case 23: /* declaration: tokVERIFY optstring exp tokSEMICOLON  */
#line 164 "parser.y"
                                               {}
#line 2003 "parser.cc"
    break;

  case 24: /* declaration: tokEXECUTE exp tokSEMICOLON  */
#line 166 "parser.y"
                                      {}
#line 2009 "parser.cc"
    break;

  case 25: /* declaration: tokINCLUDE tokSTRING tokSEMICOLON  */
#line 168 "parser.y"
                                            {}
#line 2015 "parser.cc"
    break;

  case 26: /* declaration: tokLASTPOS name tokSEMICOLON  */
#line 170 "parser.y"
                                               {}
#line 2021 "parser.cc"
    break;

  case 27: /* declaration: tokALLPOS name tokSEMICOLON  */
#line 172 "parser.y"
                                              {}
#line 2027 "parser.cc"
    break;

  case 28: /* declaration: tokTYPE name tokEQUAL variant_list tokSEMICOLON  */
#line 174 "parser.y"
                                                                {}
#line 2033 "parser.cc"
    break;

  case 29: /* declaration: tokINT name_where_list tokSEMICOLON  */
#line 176 "parser.y"
                                                      {(yyval.declaration) = new Variable_Declaration(Integer,(yyvsp[-1].varDeclList));}
#line 2039 "parser.cc"
    break;

  case 30: /* declaration: tokReal name_where_list tokSEMICOLON  */
#line 178 "parser.y"
                                                       {(yyval.declaration) = new Variable_Declaration(Real,(yyvsp[-1].varDeclList));}
#line 2045 "parser.cc"
    break;

  case 31: /* $@1: %empty  */
#line 180 "parser.y"
                          {}
#line 2051 "parser.cc"
    break;

  case 32: /* declaration: tokBool $@1 name_where_list tokSEMICOLON  */
#line 180 "parser.y"
                                                         {}
#line 2057 "parser.cc"
    break;

  case 33: /* exp: name  */
#line 185 "parser.y"
               {(yyval.untypedExp) = new UntypedExp_Name(uName,(yyvsp[0].name));}
#line 2063 "parser.cc"
    break;

  case 34: /* exp: name tokDOT tokINT  */
#line 187 "parser.y"
                                     {check_bits(*(yyvsp[0].st));(yyval.untypedExp)=new UntypedExp_PathName{uPathName,(yyvsp[-2].name),(yyvsp[0].st)};}
#line 2069 "parser.cc"
    break;

  case 35: /* exp: tokLPAREN exp tokRPAREN  */
#line 189 "parser.y"
                                  {}
#line 2075 "parser.cc"
    break;

  case 36: /* exp: exp tokSUB exp  */
#line 191 "parser.y"
                        {}
#line 2081 "parser.cc"
    break;

  case 37: /* exp: exp tokIN exp  */
#line 193 "parser.y"
                        {}
#line 2087 "parser.cc"
    break;

  case 38: /* exp: exp tokNOTIN exp  */
#line 195 "parser.y"
                          {}
#line 2093 "parser.cc"
    break;

  case 39: /* exp: tokMIN exp  */
#line 197 "parser.y"
                    {}
#line 2099 "parser.cc"
    break;

  case 40: /* exp: tokMAX exp  */
#line 199 "parser.y"
                    {}
#line 2105 "parser.cc"
    break;

  case 41: /* exp: exp tokLESS exp  */
#line 201 "parser.y"
                           {(yyval.untypedExp) = new UntypedExp_Less((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2111 "parser.cc"
    break;

  case 42: /* exp: exp tokLESSEQ exp  */
#line 203 "parser.y"
                            {}
#line 2117 "parser.cc"
    break;

  case 43: /* exp: exp tokGREATEREQ exp  */
#line 205 "parser.y"
                              {}
#line 2123 "parser.cc"
    break;

  case 44: /* exp: exp tokGREATER exp  */
#line 207 "parser.y"
                             {}
#line 2129 "parser.cc"
    break;

  case 45: /* exp: exp tokEQUAL exp  */
#line 209 "parser.y"
                          {}
#line 2135 "parser.cc"
    break;

  case 46: /* exp: exp tokNOTEQUAL exp  */
#line 211 "parser.y"
                              {}
#line 2141 "parser.cc"
    break;

  case 47: /* exp: exp tokIMPL exp  */
#line 213 "parser.y"
                         {}
#line 2147 "parser.cc"
    break;

  case 48: /* exp: exp tokBIIMPL exp  */
#line 215 "parser.y"
                            {}
#line 2153 "parser.cc"
    break;

  case 49: /* exp: exp tokAND exp  */
#line 217 "parser.y"
                         {(yyval.untypedExp) = new UntypedExp_And((yyvsp[-2].untypedExp), (yyvsp[0].untypedExp));}
#line 2159 "parser.cc"
    break;

  case 50: /* exp: exp tokOR exp  */
#line 219 "parser.y"
                        {}
#line 2165 "parser.cc"
    break;

  case 51: /* exp: tokNOT exp  */
#line 221 "parser.y"
                     {(yyval.untypedExp)=new UntypedExp_Not{(yyvsp[0].untypedExp)};}
#line 2171 "parser.cc"
    break;

  case 52: /* exp: dotExp  */
#line 223 "parser.y"
                         {(yyval.untypedExp)=(yyvsp[0].UntypedExpDotName);}
#line 2177 "parser.cc"
    break;

  case 53: /* exp: tokUNIVROOT tokLPAREN name tokRPAREN  */
#line 225 "parser.y"
                                               {}
#line 2183 "parser.cc"
    break;

  case 54: /* exp: tokUNIVROOT  */
#line 227 "parser.y"
                      {}
#line 2189 "parser.cc"
    break;

  case 55: /* exp: exp tokUP  */
#line 231 "parser.y"
                    {}
#line 2195 "parser.cc"
    break;

  case 56: /* exp: tokEX0 name_where_list tokCOLON exp  */
#line 233 "parser.y"
                                              {}
#line 2201 "parser.cc"
    break;

  case 57: /* exp: tokEX1 universe name_where_list tokCOLON exp  */
#line 235 "parser.y"
                                                       {(yyval.untypedExp) = new UntypedExp_Ex1((yyvsp[-2].varDeclList), (yyvsp[0].untypedExp));}
#line 2207 "parser.cc"
    break;

  case 58: /* exp: tokEX2 universe name_where_list tokCOLON exp  */
#line 237 "parser.y"
                                                       {}
#line 2213 "parser.cc"
    break;

  case 59: /* exp: tokALL0 name_where_list tokCOLON exp  */
#line 239 "parser.y"
                                               {}
#line 2219 "parser.cc"
    break;

  case 60: /* exp: tokALL1 universe name_where_list tokCOLON exp  */
#line 241 "parser.y"
                                                        {}
#line 2225 "parser.cc"
    break;

  case 61: /* exp: tokALL2 universe name_where_list tokCOLON exp  */
#line 243 "parser.y"
                                                        {}
#line 2231 "parser.cc"
    break;

  case 62: /* exp: tokLET0 defs tokIN exp  */
#line 245 "parser.y"
                                             {}
#line 2237 "parser.cc"
    break;

  case 63: /* exp: tokLET1 defs tokIN exp  */
#line 247 "parser.y"
                                            {}
#line 2243 "parser.cc"
    break;

  case 64: /* exp: tokLET2 defs tokIN exp  */
#line 249 "parser.y"
                                             {}
#line 2249 "parser.cc"
    break;

  case 65: /* exp: name tokLPAREN exp_list tokRPAREN  */
#line 251 "parser.y"
                                            {}
#line 2255 "parser.cc"
    break;

  case 66: /* exp: tokTRUE  */
#line 253 "parser.y"
                  {}
#line 2261 "parser.cc"
    break;

  case 67: /* exp: tokFALSE  */
#line 255 "parser.y"
                   {}
#line 2267 "parser.cc"
    break;

  case 68: /* exp: tokUNIVROOT tokLPAREN exp tokCOMMA universe tokRPAREN  */
#line 257 "parser.y"
                                                                {}
#line 2273 "parser.cc"
    break;

  case 69: /* exp: tokEMPTY tokLPAREN exp tokRPAREN  */
#line 259 "parser.y"
                                           {}
#line 2279 "parser.cc"
    break;

  case 70: /* exp: exp tokPLUS arith_exp  */
#line 261 "parser.y"
                                {(yyval.untypedExp) = new UntypedExp_Plus((yyvsp[-2].untypedExp), (yyvsp[0].arithExp));}
#line 2285 "parser.cc"
    break;

  case 71: /* exp: exp tokMINUS arith_exp  */
#line 263 "parser.y"
                                 {}
#line 2291 "parser.cc"
    break;

  case 72: /* exp: exp tokSTAR arith_exp  */
#line 265 "parser.y"
                                {}
#line 2297 "parser.cc"
    break;

  case 73: /* exp: exp tokSLASH arith_exp  */
#line 267 "parser.y"
                                 {
			// TODO I must hanlde divion by 0

		}
#line 2306 "parser.cc"
    break;

  case 74: /* exp: exp tokMODULO arith_exp  */
#line 272 "parser.y"
                                   {}
#line 2312 "parser.cc"
    break;

  case 75: /* exp: tokEMPTY  */
#line 274 "parser.y"
                  {}
#line 2318 "parser.cc"
    break;

  case 76: /* exp: tokLBRACE set_body tokRBRACE  */
#line 276 "parser.y"
                                      {}
#line 2324 "parser.cc"
    break;

  case 77: /* exp: exp tokUNION exp  */
#line 278 "parser.y"
                           {}
#line 2330 "parser.cc"
    break;

  case 78: /* exp: exp tokINTER exp  */
#line 280 "parser.y"
                           {}
#line 2336 "parser.cc"
    break;

  case 79: /* exp: exp tokSETMINUS exp  */
#line 282 "parser.y"
                              {}
#line 2342 "parser.cc"
    break;

  case 80: /* exp: tokIMPORT tokLPAREN tokSTRING map_list tokRPAREN  */
#line 284 "parser.y"
                                                           {}
#line 2348 "parser.cc"
    break;

  case 81: /* exp: tokEXPORT tokLPAREN tokSTRING tokCOMMA exp tokRPAREN  */
#line 286 "parser.y"
                                                              {}
#line 2354 "parser.cc"
    break;

  case 82: /* exp: tokPREFIX tokLPAREN exp tokRPAREN  */
#line 288 "parser.y"
                                           {}
#line 2360 "parser.cc"
    break;

  case 83: /* exp: tokINSTATESPACE tokLPAREN exp tokCOMMA name_list tokRPAREN  */
#line 290 "parser.y"
                                                                    {}
#line 2366 "parser.cc"
    break;

  case 84: /* exp: tokVARIANT tokLPAREN exp tokCOMMA exp tokCOMMA name tokCOMMA name tokRPAREN  */
#line 293 "parser.y"
                                 {}
#line 2372 "parser.cc"
    break;

  case 85: /* exp: tokSUCC tokLPAREN exp tokCOMMA name tokCOMMA name tokCOMMA name tokRPAREN  */
#line 296 "parser.y"
                        {}
#line 2378 "parser.cc"
    break;

  case 86: /* exp: tokTREE tokLPAREN exp tokRPAREN  */
#line 298 "parser.y"
                                         {}
#line 2384 "parser.cc"
    break;

  case 87: /* exp: tokTYPE tokLPAREN exp tokCOMMA name tokRPAREN  */
#line 300 "parser.y"
                                                       {}
#line 2390 "parser.cc"
    break;

  case 88: /* exp: tokSOMETYPE tokLPAREN exp tokRPAREN  */
#line 302 "parser.y"
                                             {}
#line 2396 "parser.cc"
    break;

  case 89: /* exp: tokCONSTTREE tokLPAREN exp tokCOMMA name tokCOLON constnode tokRPAREN  */
#line 305 "parser.y"
                             {}
#line 2402 "parser.cc"
    break;

  case 90: /* exp: tokTREEROOT tokLPAREN exp tokRPAREN  */
#line 307 "parser.y"
                                             {}
#line 2408 "parser.cc"
    break;

  case 91: /* exp: tokRESTRICT tokLPAREN exp tokRPAREN  */
#line 309 "parser.y"
                                             {}
#line 2414 "parser.cc"
    break;

  case 92: /* arith_exp: arith_exp tokPLUS arith_exp  */
#line 314 "parser.y"
                                       {(yyval.arithExp) = new ArithExp_Add((yyvsp[-2].arithExp), (yyvsp[0].arithExp));}
#line 2420 "parser.cc"
    break;

  case 93: /* arith_exp: arith_exp tokMINUS arith_exp  */
#line 316 "parser.y"
                                       {}
#line 2426 "parser.cc"
    break;

  case 94: /* arith_exp: arith_exp tokSTAR arith_exp  */
#line 318 "parser.y"
                                      {}
#line 2432 "parser.cc"
    break;

  case 95: /* arith_exp: arith_exp tokSLASH arith_exp  */
#line 320 "parser.y"
                                       {}
#line 2438 "parser.cc"
    break;

  case 96: /* arith_exp: tokMINUS arith_exp  */
#line 322 "parser.y"
                             {}
#line 2444 "parser.cc"
    break;

  case 97: /* arith_exp: tokINT  */
#line 325 "parser.y"
        {
		(yyval.arithExp) = new ArithExp_Integer(stoi(*(yyvsp[0].st)));
	}
#line 2452 "parser.cc"
    break;

  case 98: /* arith_exp: tokReal  */
#line 329 "parser.y"
                 {(yyval.arithExp)=new ArithExp_Real{(yyvsp[0].doubleVal)};}
#line 2458 "parser.cc"
    break;

  case 99: /* arith_exp: dotExp  */
#line 331 "parser.y"
                 {
					if((yyvsp[0].UntypedExpDotName)->kind==uDotName)
						(yyval.arithExp)=new AritExp_ConstDotName{(yyvsp[0].UntypedExpDotName)->dotName};
					else{
						UntypedExp_DotNameNumber* dotwithPath=static_cast<UntypedExp_DotNameNumber*>((yyvsp[0].UntypedExpDotName));
						(yyval.arithExp)=new ArithExp_ConstPathDotName{dotwithPath->dotName,dotwithPath->path};
					}
		}
#line 2471 "parser.cc"
    break;

  case 100: /* arith_exp: tokLPAREN arith_exp tokRPAREN  */
#line 340 "parser.y"
                                        {}
#line 2477 "parser.cc"
    break;

  case 101: /* dotExp: name tokDOT name  */
#line 344 "parser.y"
                                 {(yyval.UntypedExpDotName)=new UntypedExp_DotName{new DotName{(yyvsp[-2].name),(yyvsp[0].name)}};}
#line 2483 "parser.cc"
    break;

  case 102: /* dotExp: name tokDOT tokINT tokDOT name  */
#line 346 "parser.y"
                                                        {checkNameIntName(*(yyvsp[-2].st));(yyval.UntypedExpDotName)=new UntypedExp_DotNameNumber{new DotName{(yyvsp[-4].name),(yyvsp[0].name)},(yyvsp[-2].st)};}
#line 2489 "parser.cc"
    break;

  case 103: /* par_list: tokVAR0 name tokCOMMA par_list  */
#line 350 "parser.y"
                                         {}
#line 2495 "parser.cc"
    break;

  case 104: /* par_list: tokVAR1 name where tokCOMMA par_list  */
#line 352 "parser.y"
                                              {}
#line 2501 "parser.cc"
    break;

  case 105: /* par_list: tokVAR2 name where tokCOMMA par_list  */
#line 354 "parser.y"
                                              {}
#line 2507 "parser.cc"
    break;

  case 106: /* par_list: tokUNIVERSE name tokCOMMA par_list  */
#line 356 "parser.y"
                                             {}
#line 2513 "parser.cc"
    break;

  case 107: /* par_list: name where tokCOMMA par_list  */
#line 358 "parser.y"
                                       {}
#line 2519 "parser.cc"
    break;

  case 108: /* par_list: tokVAR0 name  */
#line 360 "parser.y"
                       {}
#line 2525 "parser.cc"
    break;

  case 109: /* par_list: tokVAR1 name where  */
#line 362 "parser.y"
                             {}
#line 2531 "parser.cc"
    break;

  case 110: /* par_list: tokVAR2 name where  */
#line 364 "parser.y"
                            {}
#line 2537 "parser.cc"
    break;

  case 111: /* par_list: tokUNIVERSE name  */
#line 366 "parser.y"
                           {}
#line 2543 "parser.cc"
    break;

  case 112: /* par_list: name where  */
#line 368 "parser.y"
                    {}
#line 2549 "parser.cc"
    break;

  case 113: /* defs: def tokCOMMA defs  */
#line 373 "parser.y"
                           {}
#line 2555 "parser.cc"
    break;

  case 114: /* defs: def  */
#line 375 "parser.y"
              {}
#line 2561 "parser.cc"
    break;

  case 115: /* def: name tokEQUAL exp  */
#line 379 "parser.y"
                           {}
#line 2567 "parser.cc"
    break;

  case 116: /* set_body: non_empty_set_body  */
#line 383 "parser.y"
                            {}
#line 2573 "parser.cc"
    break;

  case 117: /* set_body: %empty  */
#line 385 "parser.y"
                     {}
#line 2579 "parser.cc"
    break;

  case 118: /* non_empty_set_body: exp tokCOMMA non_empty_set_body  */
#line 389 "parser.y"
                                                   {}
#line 2585 "parser.cc"
    break;

  case 119: /* non_empty_set_body: tokINTERVAL tokCOMMA non_empty_set_body  */
#line 391 "parser.y"
                                                 {}
#line 2591 "parser.cc"
    break;

  case 120: /* non_empty_set_body: exp  */
#line 393 "parser.y"
             {}
#line 2597 "parser.cc"
    break;

  case 121: /* non_empty_set_body: tokINTERVAL  */
#line 395 "parser.y"
                     {}
#line 2603 "parser.cc"
    break;

  case 122: /* exp_list: non_empty_exp_list  */
#line 399 "parser.y"
                            {}
#line 2609 "parser.cc"
    break;

  case 123: /* exp_list: %empty  */
#line 401 "parser.y"
                     {}
#line 2615 "parser.cc"
    break;

  case 124: /* non_empty_exp_list: exp tokCOMMA non_empty_exp_list  */
#line 405 "parser.y"
                                                   {}
#line 2621 "parser.cc"
    break;

  case 125: /* non_empty_exp_list: exp  */
#line 407 "parser.y"
              {}
#line 2627 "parser.cc"
    break;

  case 126: /* universe: tokLBRACKET name_list tokRBRACKET  */
#line 411 "parser.y"
                                           {}
#line 2633 "parser.cc"
    break;

  case 127: /* universe: %empty  */
#line 413 "parser.y"
                     {}
#line 2639 "parser.cc"
    break;

  case 128: /* name: tokNAME  */
#line 418 "parser.y"
                {(yyval.name) = new Name((yyvsp[0].st));}
#line 2645 "parser.cc"
    break;

  case 129: /* name_list: name tokCOMMA name_list  */
#line 422 "parser.y"
                                  {}
#line 2651 "parser.cc"
    break;

  case 130: /* name_list: name  */
#line 424 "parser.y"
              {}
#line 2657 "parser.cc"
    break;

  case 131: /* name_where_list: name where tokCOMMA name_where_list  */
#line 429 "parser.y"
                {(yyvsp[0].varDeclList)->push_front(new VarDecl((yyvsp[-3].name),nullptr)); 
		 (yyval.varDeclList) = (yyvsp[0].varDeclList);}
#line 2664 "parser.cc"
    break;

  case 132: /* name_where_list: name where  */
#line 432 "parser.y"
                {(yyval.varDeclList) = new VarDeclList(); 
		 (yyval.varDeclList)->push_front(new VarDecl((yyvsp[-1].name),nullptr));}
#line 2671 "parser.cc"
    break;

  case 133: /* func_list: func tokCOMMA func_list  */
#line 437 "parser.y"
                                  {}
#line 2677 "parser.cc"
    break;

  case 134: /* func_list: func  */
#line 439 "parser.y"
              {}
#line 2683 "parser.cc"
    break;

  case 135: /* func: name tokARROW tokLPAREN name tokCOMMA name tokRPAREN  */
#line 443 "parser.y"
                                                              {}
#line 2689 "parser.cc"
    break;

  case 136: /* univs: univ tokCOMMA univs  */
#line 447 "parser.y"
                             {}
#line 2695 "parser.cc"
    break;

  case 137: /* univs: univ  */
#line 449 "parser.y"
              {}
#line 2701 "parser.cc"
    break;

  case 138: /* univ: name tokCOLON tokINT  */
#line 453 "parser.y"
                              {}
#line 2707 "parser.cc"
    break;

  case 139: /* univ: name tokCOLON name  */
#line 455 "parser.y"
                            {}
#line 2713 "parser.cc"
    break;

  case 140: /* univ: name  */
#line 457 "parser.y"
              {}
#line 2719 "parser.cc"
    break;

  case 141: /* where: tokWHERE exp  */
#line 461 "parser.y"
                      {}
#line 2725 "parser.cc"
    break;

  case 142: /* where: %empty  */
#line 463 "parser.y"
                     {}
#line 2731 "parser.cc"
    break;

  case 143: /* map_list: tokCOMMA name tokARROW name map_list  */
#line 467 "parser.y"
                                              {}
#line 2737 "parser.cc"
    break;

  case 144: /* map_list: %empty  */
#line 469 "parser.y"
                     {}
#line 2743 "parser.cc"
    break;

  case 145: /* variant_list: name tokLPAREN component_list tokRPAREN tokCOMMA variant_list  */
#line 473 "parser.y"
                                                                           {}
#line 2749 "parser.cc"
    break;

  case 146: /* variant_list: name tokLPAREN tokRPAREN tokCOMMA variant_list  */
#line 475 "parser.y"
                                                        {}
#line 2755 "parser.cc"
    break;

  case 147: /* variant_list: name tokCOMMA variant_list  */
#line 477 "parser.y"
                                    {}
#line 2761 "parser.cc"
    break;

  case 148: /* variant_list: name tokLPAREN component_list tokRPAREN  */
#line 479 "parser.y"
                                                 {}
#line 2767 "parser.cc"
    break;

  case 149: /* variant_list: name tokLPAREN tokRPAREN  */
#line 481 "parser.y"
                                  {}
#line 2773 "parser.cc"
    break;

  case 150: /* variant_list: name  */
#line 483 "parser.y"
              {}
#line 2779 "parser.cc"
    break;

  case 151: /* component_list: name tokCOLON name tokCOMMA component_list  */
#line 487 "parser.y"
                                                          {}
#line 2785 "parser.cc"
    break;

  case 152: /* component_list: name tokCOLON name  */
#line 489 "parser.y"
                            {}
#line 2791 "parser.cc"
    break;

  case 153: /* constnode: name tokLPAREN constnode_list tokRPAREN  */
#line 493 "parser.y"
                                                  {}
#line 2797 "parser.cc"
    break;

  case 154: /* constnode: name tokLPAREN tokRPAREN  */
#line 495 "parser.y"
                                  {}
#line 2803 "parser.cc"
    break;

  case 155: /* constnode: name  */
#line 497 "parser.y"
              {}
#line 2809 "parser.cc"
    break;

  case 156: /* constnode_list: constnode tokCOMMA constnode_list  */
#line 501 "parser.y"
                                                 {}
#line 2815 "parser.cc"
    break;

  case 157: /* constnode_list: constnode  */
#line 503 "parser.y"
                   {}
#line 2821 "parser.cc"
    break;

  case 158: /* optstring: tokSTRING  */
#line 507 "parser.y"
                    {}
#line 2827 "parser.cc"
    break;

  case 159: /* optstring: %empty  */
#line 509 "parser.y"
                      {}
#line 2833 "parser.cc"
    break;


#line 2837 "parser.cc"

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

#line 514 "parser.y"

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
