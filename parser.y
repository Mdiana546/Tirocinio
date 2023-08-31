%{
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
%} 

%union
{
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

}


/* Terminals */ 
%start start
%token tokALL0 tokALL1 tokALL2 tokAND tokARROW tokASSERT
%token tokBIIMPL tokCOLON tokCOMMA 
%token tokCONST tokDEFAULT1 tokDEFAULT2 tokDOT tokEMPTY
%token tokEQUAL tokEX0 tokEX1 tokEX2 tokFALSE tokGREATER 
%token tokGREATEREQ tokGUIDE tokIMPL tokIN tokINTER 
%token tokINTERVAL tokLBRACE tokLBRACKET tokLESS 
%token tokLESSEQ tokLET0 tokLET1 tokLET2
%token tokLPAREN tokMACRO tokMAX tokMIN tokMINUS
%token tokMODULO tokNOT tokNOTEQUAL tokNOTIN tokOR
%token tokPLUS tokPRED tokRBRACE tokRESTRICT
%token tokRBRACKET tokUNIVROOT tokRPAREN tokSEMICOLON 
%token tokSETMINUS tokSLASH tokSTAR tokVERIFY
%token tokSUB tokTREE tokTRUE tokUNION tokUNIVERSE tokUP 
%token tokVAR0 tokVAR1 tokVAR2 tokWHERE tokINCLUDE
%token tokIMPORT tokEXPORT tokPREFIX tokM2LSTR tokM2LTREE tokLASTPOS
%token tokINSTATESPACE tokEXECUTE tokTYPE tokSOMETYPE tokVARIANT tokSUCC
%token tokWS1S tokWS2S tokTREEROOT tokCONSTTREE tokALLPOS
%token<st> tokNAME
%token <doubleVal>tokReal tokBool
%token  tokSTRING
%token <st> tokINT 

%type <declList> declarations;
%type <declaration> declaration
%type <untypedExp> exp where;
%type <arithExp> arith_exp;
%type <name> name;
%type<UntypedExpDotName>dotExp
%type <varDeclList> name_where_list;  


%nonassoc LOW
%nonassoc tokCOLON
%right tokBIIMPL
%right tokIMPL
%left tokOR
%left tokAND
%nonassoc tokNOT
%nonassoc tokIN tokNOTIN tokSUB
%nonassoc tokEQUAL tokNOTEQUAL tokGREATER tokGREATEREQ tokLESS tokLESSEQ
%nonassoc tokMAX tokMIN
%left tokUNION
%left tokINTER
%left tokSETMINUS
%left tokPLUS tokMINUS
%left tokSTAR tokSLASH tokMODULO
%left tokDOT tokUP

%%

start	: header declarations{
		
		 untypedAST=new MonaUntypedAST($2);
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
	;

header	: tokWS2S tokSEMICOLON {}
		;

declarations : declaration declarations{if ($1) $2->push_front($1); $$ = $2;}
	      
	| declaration {$$ = new DeclarationList(); 
	         	if ($1) $$->push_front($1);}
	      
	 ;
declaration : tokASSERT exp tokSEMICOLON{}
            
	| tokGUIDE func_list tokSEMICOLON{}
        	
	| tokUNIVERSE univs tokSEMICOLON{}
              
        | tokDEFAULT1 tokLPAREN name tokRPAREN tokEQUAL exp tokSEMICOLON {}
             
        | tokDEFAULT2 tokLPAREN name tokRPAREN tokEQUAL exp tokSEMICOLON {}
              
        | tokCONST name tokEQUAL arith_exp tokSEMICOLON {}
             
        | tokVAR0 name_where_list tokSEMICOLON{}
                
        | tokVAR1 universe name_where_list tokSEMICOLON{$$ = new Variable_Declaration(Varname1,$3);}
             
        | tokVAR2 universe name_where_list tokSEMICOLON {/*$$=new Declaration{Varname2,$3};*/}
              
	| tokTREE universe name_where_list tokSEMICOLON {}
		
        | tokPRED name tokLPAREN par_list tokRPAREN tokEQUAL exp tokSEMICOLON {}
             
        | tokPRED name tokEQUAL exp tokSEMICOLON  {}
             
        | tokPRED name tokLPAREN tokRPAREN tokEQUAL exp tokSEMICOLON {}
            
        | tokMACRO name tokLPAREN par_list tokRPAREN tokEQUAL exp tokSEMICOLON  {}
               
        | tokMACRO name tokEQUAL exp tokSEMICOLON  {}
             
        | tokMACRO name tokLPAREN tokRPAREN tokEQUAL exp tokSEMICOLON  {}
              
        | exp tokSEMICOLON {$$ = new Expression_Declaration($1);}
            
        | tokVERIFY optstring exp tokSEMICOLON {}
               
        | tokEXECUTE exp tokSEMICOLON {}
               
        | tokINCLUDE tokSTRING tokSEMICOLON {}
              
		| tokLASTPOS name tokSEMICOLON {}
			
		| tokALLPOS name tokSEMICOLON {}
			
		|tokTYPE name tokEQUAL variant_list tokSEMICOLON{}
		
		| tokINT name_where_list tokSEMICOLON {$$ = new Variable_Declaration(Integer,$2);}    //new rule
		
		| tokReal name_where_list tokSEMICOLON {$$ = new Variable_Declaration(Real,$2);}   //new rule
			
		| tokBool {}name_where_list tokSEMICOLON {} //new rule
	
		
        ;

exp     : name {$$ = new UntypedExp_Name(uName,$1);}

		| name tokDOT tokINT {check_bits(*$3);$$=new UntypedExp_PathName{uPathName,$1,$3};}
              
        | tokLPAREN exp tokRPAREN {}
         
        | exp tokSUB exp{}
           
        | exp tokIN exp {}
              
        | exp tokNOTIN exp{} 
           
        | tokMIN exp{}
             
        | tokMAX exp{}
               
        | exp tokLESS  exp {$$ = new UntypedExp_Less($1, $3);}
               
        | exp tokLESSEQ exp {}
             
        | exp tokGREATEREQ exp{} 
               
        | exp tokGREATER exp {}
              
        | exp tokEQUAL exp{}
               
        | exp tokNOTEQUAL exp {}
             
        | exp tokIMPL exp{}
              
        | exp tokBIIMPL exp {} 
              
        | exp tokAND exp {$$ = new UntypedExp_And($1, $3);}
              
        | exp tokOR exp {}
               
        | tokNOT exp {$$=new UntypedExp_Not{$2};}
        
  		| dotExp {$$=$1;}
  	
        | tokUNIVROOT tokLPAREN name tokRPAREN {}
              
        | tokUNIVROOT {}
               
       // | exp tokDOT tokINT{}
              
        | exp tokUP {}
             
        | tokEX0 name_where_list tokCOLON exp {}
        
        | tokEX1 universe name_where_list tokCOLON exp {$$ = new UntypedExp_Ex1($3, $5);}
               
        | tokEX2 universe name_where_list tokCOLON exp {}
              
        | tokALL0 name_where_list tokCOLON exp {}
               
        | tokALL1 universe name_where_list tokCOLON exp {}
               
        | tokALL2 universe name_where_list tokCOLON exp {}
              
        | tokLET0 defs tokIN exp   %prec LOW {}
              
        | tokLET1 defs tokIN exp   %prec LOW{}
               
        | tokLET2 defs tokIN exp   %prec LOW {}
             
        | name tokLPAREN exp_list tokRPAREN {}
              
        | tokTRUE {}
            
        | tokFALSE {}
             
        | tokUNIVROOT tokLPAREN exp tokCOMMA universe tokRPAREN {}
              
        | tokEMPTY tokLPAREN exp tokRPAREN {}
             
        | exp tokPLUS arith_exp {$$ = new UntypedExp_Plus($1, $3);}
              
        | exp tokMINUS arith_exp {}
               
        | exp tokSTAR arith_exp {}
               
        | exp tokSLASH arith_exp {
			// TODO I must hanlde divion by 0

		}
        
        | exp tokMODULO arith_exp  {} //new Rule
              
        | tokEMPTY{}    
              
        | tokLBRACE set_body tokRBRACE{}
               
        | exp tokUNION exp {} 
             
        | exp tokINTER exp {}
              
        | exp tokSETMINUS exp {}
              
	| tokIMPORT tokLPAREN tokSTRING map_list tokRPAREN {}
	       
	| tokEXPORT tokLPAREN tokSTRING tokCOMMA exp tokRPAREN{}
	       
	| tokPREFIX tokLPAREN exp tokRPAREN{}
		
	| tokINSTATESPACE tokLPAREN exp tokCOMMA name_list tokRPAREN{}
		
	| tokVARIANT tokLPAREN exp tokCOMMA exp tokCOMMA name 
	  tokCOMMA name tokRPAREN{}
		
	| tokSUCC tokLPAREN exp tokCOMMA name tokCOMMA name tokCOMMA 
	  name tokRPAREN{}
		
	| tokTREE tokLPAREN exp tokRPAREN{}
		
	| tokTYPE tokLPAREN exp tokCOMMA name tokRPAREN{}
		
	| tokSOMETYPE tokLPAREN exp tokRPAREN{}
		
	| tokCONSTTREE tokLPAREN exp tokCOMMA name tokCOLON
          constnode tokRPAREN{}
		
	| tokTREEROOT tokLPAREN exp tokRPAREN{}
		   
        | tokRESTRICT tokLPAREN exp tokRPAREN{}
        
              
	;
	
arith_exp: arith_exp tokPLUS arith_exp {$$ = new ArithExp_Add($1, $3);}
		
	| arith_exp tokMINUS arith_exp {}
		
	| arith_exp tokSTAR arith_exp {}
		
	| arith_exp tokSLASH arith_exp {}
              
	| tokMINUS arith_exp {}
	        
	| tokINT
	{
		$$ = new ArithExp_Integer(stoi(*$1));
	}

	| tokReal{$$=new ArithExp_Real{$1};}
	
	| dotExp {
					if($1->kind==uDotName)
						$$=new AritExp_ConstDotName{$1->dotName};
					else{
						UntypedExp_DotNameNumber* dotwithPath=static_cast<UntypedExp_DotNameNumber*>($1);
						$$=new ArithExp_ConstPathDotName{dotwithPath->dotName,dotwithPath->path};
					}
		}
	      
	| tokLPAREN arith_exp tokRPAREN {}
      
	;

dotExp:		name tokDOT name {$$=new UntypedExp_DotName{new DotName{$1,$3}};}

			| name tokDOT tokINT tokDOT name{checkNameIntName(*$3);$$=new UntypedExp_DotNameNumber{new DotName{$1,$5},$3};}
        ;


par_list: tokVAR0 name tokCOMMA par_list {}
	    
	| tokVAR1 name where tokCOMMA par_list{} 
	      
	| tokVAR2 name where tokCOMMA par_list{} 
	
	| tokUNIVERSE name tokCOMMA par_list {}
		
	| name where tokCOMMA par_list {}
	
	| tokVAR0 name {}
		
	| tokVAR1 name where {}
		
	| tokVAR2 name where{}
	      
	| tokUNIVERSE name {}
	      
	| name where{}
		
	;


defs	: def tokCOMMA defs{} 
	
	| def {}
		
	;

def	: name tokEQUAL exp{}
	      
	;

set_body: non_empty_set_body{}
	
	| /* empty */{}
	      
	;

non_empty_set_body: exp tokCOMMA non_empty_set_body{}
             
        | tokINTERVAL tokCOMMA non_empty_set_body{}
             
        | exp{}
           
        | tokINTERVAL{} 
              
        ;

exp_list: non_empty_exp_list{} 
	
	| /* empty */{}
	
	;

non_empty_exp_list: exp tokCOMMA non_empty_exp_list{} 
	
	| exp {}
		
	;

universe: tokLBRACKET name_list tokRBRACKET{} 
	
	| /* empty */{}
	
	;

name	: tokNAME
                {$$ = new Name($1);}
            
	;

name_list: name tokCOMMA name_list{}
	
	| name{}
		
	;

name_where_list: name where tokCOMMA name_where_list
		{$4->push_front(new VarDecl($1,nullptr)); 
		 $$ = $4;} 
	| name where
		{$$ = new VarDeclList(); 
		 $$->push_front(new VarDecl($1,nullptr));}
	
	;

func_list: func tokCOMMA func_list{}
		
	| func{}
		
	;

func	: name tokARROW tokLPAREN name tokCOMMA name tokRPAREN{}
	
	;

univs	: univ tokCOMMA univs{}
	
	| univ{}
		
	;

univ	: name tokCOLON tokINT{}
		
	| name tokCOLON name{}
		
	| name{}
		
	;

where	: tokWHERE exp{}
	
	| /* empty */{}
		
	;

map_list: tokCOMMA name tokARROW name map_list{}
		
	| /* empty */{}
		
	;

variant_list: name tokLPAREN component_list tokRPAREN tokCOMMA variant_list{}
		
	| name tokLPAREN tokRPAREN tokCOMMA variant_list{}
	
	| name tokCOMMA variant_list{}
	
	| name tokLPAREN component_list tokRPAREN{}
		
	| name tokLPAREN tokRPAREN{}
		
	| name{}
		
	;

component_list: name tokCOLON name tokCOMMA component_list{}
	
	| name tokCOLON name{}
		
	;

constnode: name tokLPAREN constnode_list tokRPAREN{}
		
	| name tokLPAREN tokRPAREN{}
		
	| name{}
	
	;

constnode_list: constnode tokCOMMA constnode_list{}
		
	| constnode{}
	
	;

optstring: tokSTRING{}
        
         | /* empty */{}
    
         ;
         
     
%%
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
