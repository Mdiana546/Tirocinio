%{   
#include<iostream>
#include "parser.hh"

%}

%option noyywrap


name		[a-zA-Z0-9_'\$]+
whitespace	[ \t\r\n\f]+
numeral		[0-9]+
%%

"%"             return tokMODULO;
"&"             return tokAND;
"("             return tokLPAREN;
")"             return tokRPAREN;
"*"             return tokSTAR;
"+"             return tokPLUS;
","             return tokCOMMA;
"-"             return tokMINUS;
"->"            return tokARROW;
"."             return tokDOT;
"..."           return tokINTERVAL;
"/"             return tokSLASH;
":"             return tokCOLON;
";"             return tokSEMICOLON;
"<"             return tokLESS;
"<="            return tokLESSEQ;
"<=>"           return tokBIIMPL;
"="             return tokEQUAL;
"=>"            return tokIMPL;
">"             return tokGREATER;
">="            return tokGREATEREQ;
"["             return tokLBRACKET;
"\\"            return tokSETMINUS;
"]"             return tokRBRACKET;
"^"             return tokUP;
"{"             return tokLBRACE;
"|"             return tokOR;
"}"             return tokRBRACE;
"~"             return tokNOT;
"~="            return tokNOTEQUAL;
"m2l-str"       return tokM2LSTR;
"m2l-tree"      return tokM2LTREE;
"empty"         return tokEMPTY;
"universe"      return tokUNIVERSE;
"union"         return tokUNION;
"inter"         return tokINTER;
"true"          return tokTRUE;
"false"         return tokFALSE;
"in"            return tokIN;
"notin"         return tokNOTIN;
"sub"           return tokSUB;
"all0"          return tokALL0;
"ex0"           return tokEX0;
"all1"          return tokALL1;
"ex1"           return tokEX1;
"all2"          return tokALL2;
"ex2"           return tokEX2;
"var0"          return tokVAR0;
"var1"          return tokVAR1;
"var2"          return tokVAR2;
"let0"          return tokLET0;
"let1"          return tokLET1;
"let2"          return tokLET2;
"guide"         return tokGUIDE;
"const"         return tokCONST;
"pred"          return tokPRED;
"macro"         return tokMACRO;
"assert"        return tokASSERT;
"root"          return tokUNIVROOT;
"tree"          return tokTREE;
"ws1s"          return tokWS1S;
"ws2s"          {return tokWS2S;}
"min"           return tokMIN;
"max"           return tokMAX;
"where"         return tokWHERE;
"defaultwhere1" return tokDEFAULT1;
"defaultwhere2" return tokDEFAULT2;
"include"       return tokINCLUDE;
"import"        return tokIMPORT;
"export"        return tokEXPORT;
"prefix"        return tokPREFIX;
"in_state_space" return tokINSTATESPACE;
"execute"       return tokEXECUTE;
"lastpos"       return tokLASTPOS;
"allpos"        return tokALLPOS;
"type"          return tokTYPE;
"sometype"      return tokSOMETYPE;
"variant"       return tokVARIANT;
"succ"          return tokSUCC;
"const_tree"    return tokCONSTTREE;
"tree_root"     return tokTREEROOT;
"restrict"      return tokRESTRICT;
"verify"        return tokVERIFY;
"int"           return tokINT;  //new rule
"real"          return tokReal; //new rule
"bool"          return tokBool;  //nu rule

{numeral}      	{yylval.intval=std::stoi(yytext);return tokINT;}
{name}		{yylval.st=new std::string(yytext);return tokNAME;}
{whitespace}    ;/* ignore */




%%
