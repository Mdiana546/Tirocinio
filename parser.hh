/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_HH_INCLUDED
# define YY_YY_PARSER_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    tokALL0 = 258,                 /* tokALL0  */
    tokALL1 = 259,                 /* tokALL1  */
    tokALL2 = 260,                 /* tokALL2  */
    tokAND = 261,                  /* tokAND  */
    tokARROW = 262,                /* tokARROW  */
    tokASSERT = 263,               /* tokASSERT  */
    tokBIIMPL = 264,               /* tokBIIMPL  */
    tokCOLON = 265,                /* tokCOLON  */
    tokCOMMA = 266,                /* tokCOMMA  */
    tokCONST = 267,                /* tokCONST  */
    tokDEFAULT1 = 268,             /* tokDEFAULT1  */
    tokDEFAULT2 = 269,             /* tokDEFAULT2  */
    tokDOT = 270,                  /* tokDOT  */
    tokEMPTY = 271,                /* tokEMPTY  */
    tokEQUAL = 272,                /* tokEQUAL  */
    tokEX0 = 273,                  /* tokEX0  */
    tokEX1 = 274,                  /* tokEX1  */
    tokEX2 = 275,                  /* tokEX2  */
    tokFALSE = 276,                /* tokFALSE  */
    tokGREATER = 277,              /* tokGREATER  */
    tokGREATEREQ = 278,            /* tokGREATEREQ  */
    tokGUIDE = 279,                /* tokGUIDE  */
    tokIMPL = 280,                 /* tokIMPL  */
    tokIN = 281,                   /* tokIN  */
    tokINTER = 282,                /* tokINTER  */
    tokINTERVAL = 283,             /* tokINTERVAL  */
    tokLBRACE = 284,               /* tokLBRACE  */
    tokLBRACKET = 285,             /* tokLBRACKET  */
    tokLESS = 286,                 /* tokLESS  */
    tokLESSEQ = 287,               /* tokLESSEQ  */
    tokLET0 = 288,                 /* tokLET0  */
    tokLET1 = 289,                 /* tokLET1  */
    tokLET2 = 290,                 /* tokLET2  */
    tokLPAREN = 291,               /* tokLPAREN  */
    tokMACRO = 292,                /* tokMACRO  */
    tokMAX = 293,                  /* tokMAX  */
    tokMIN = 294,                  /* tokMIN  */
    tokMINUS = 295,                /* tokMINUS  */
    tokMODULO = 296,               /* tokMODULO  */
    tokNOT = 297,                  /* tokNOT  */
    tokNOTEQUAL = 298,             /* tokNOTEQUAL  */
    tokNOTIN = 299,                /* tokNOTIN  */
    tokOR = 300,                   /* tokOR  */
    tokPLUS = 301,                 /* tokPLUS  */
    tokPRED = 302,                 /* tokPRED  */
    tokRBRACE = 303,               /* tokRBRACE  */
    tokRESTRICT = 304,             /* tokRESTRICT  */
    tokRBRACKET = 305,             /* tokRBRACKET  */
    tokUNIVROOT = 306,             /* tokUNIVROOT  */
    tokRPAREN = 307,               /* tokRPAREN  */
    tokSEMICOLON = 308,            /* tokSEMICOLON  */
    tokSETMINUS = 309,             /* tokSETMINUS  */
    tokSLASH = 310,                /* tokSLASH  */
    tokSTAR = 311,                 /* tokSTAR  */
    tokVERIFY = 312,               /* tokVERIFY  */
    tokSUB = 313,                  /* tokSUB  */
    tokTREE = 314,                 /* tokTREE  */
    tokTRUE = 315,                 /* tokTRUE  */
    tokUNION = 316,                /* tokUNION  */
    tokUNIVERSE = 317,             /* tokUNIVERSE  */
    tokUP = 318,                   /* tokUP  */
    tokVAR0 = 319,                 /* tokVAR0  */
    tokVAR1 = 320,                 /* tokVAR1  */
    tokVAR2 = 321,                 /* tokVAR2  */
    tokWHERE = 322,                /* tokWHERE  */
    tokINCLUDE = 323,              /* tokINCLUDE  */
    tokIMPORT = 324,               /* tokIMPORT  */
    tokEXPORT = 325,               /* tokEXPORT  */
    tokPREFIX = 326,               /* tokPREFIX  */
    tokM2LSTR = 327,               /* tokM2LSTR  */
    tokM2LTREE = 328,              /* tokM2LTREE  */
    tokLASTPOS = 329,              /* tokLASTPOS  */
    tokINSTATESPACE = 330,         /* tokINSTATESPACE  */
    tokEXECUTE = 331,              /* tokEXECUTE  */
    tokTYPE = 332,                 /* tokTYPE  */
    tokSOMETYPE = 333,             /* tokSOMETYPE  */
    tokVARIANT = 334,              /* tokVARIANT  */
    tokSUCC = 335,                 /* tokSUCC  */
    tokWS1S = 336,                 /* tokWS1S  */
    tokWS2S = 337,                 /* tokWS2S  */
    tokTREEROOT = 338,             /* tokTREEROOT  */
    tokCONSTTREE = 339,            /* tokCONSTTREE  */
    tokALLPOS = 340,               /* tokALLPOS  */
    tokNAME = 341,                 /* tokNAME  */
    tokReal = 342,                 /* tokReal  */
    tokBool = 343,                 /* tokBool  */
    tokSTRING = 344,               /* tokSTRING  */
    tokINT = 345,                  /* tokINT  */
    LOW = 346                      /* LOW  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 37 "parser.y"

int intval; 
double doubleVal;
std::string *st;
DeclarationList* declList;
Declaration *declaration;
UntypedExp *untypedExp; 
ArithExp *arithExp;
Name *name;
UntypedExp_Dot*UntypedExpDotName;
VarDeclList *varDeclList; 
ParList*parList;


#line 170 "parser.hh"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_HH_INCLUDED  */
