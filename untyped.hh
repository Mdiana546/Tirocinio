#ifndef __UNTYPED_H
#define __UNTYPED_H

#include "SymbolTable.hh"
#include<list>
#include<string>
#include<iostream>
#include"HandleExpressionFormat.hh"
#include <exception>
using std::string;
using std::list;
using std::cout;
using std::endl;
using std::runtime_error;




enum UntypedExpNodeKind {
  all0, all1, all2, uAnd, uBiimpl, uCall, uDiv, uDot, uEmpty, 
  uEmptyPred, uEqual, ex0, ex1, ex2, uFalse, uGreater, uGreaterEq, 
  uImpl, uIn, uInt, uInter, uInterval, uLess, uLessEq, uLet0, uLet1, uLet2,
  uMax, uMin, uMinus, uMinusModulo, uMult, uName, uNot, uNotEqual, uNotIn,
  uOr, uPlus, uPlusModulo, uRoot, uSet, uSetminus, uSub, uRestrict,uModul,
  uTrue, uUnion, uUp, uImport, uExport, uPrefix, uRootPred, uInStateSpace,
  uSucc, uWellFormedTree, uType, uSomeType, uVariant, uConstTree, uTreeRoot,uDotName,uDotNameNumber,uPathName,
  uDotNameUp,udouble,uParen
};

enum DeclarationKind {
  dAssertion,
  dConstant,
  dDefault,
  dExpression, 
  dGuide,
  dMacro, 
  dPredicate, 
  dUniverse, 
  dVariable, 
  dLastPos,
  dAllPos,
  dExecute,
  dType,
  dVerify
};



class UntypedExp {
public:
  UntypedExp(UntypedExpNodeKind k) :
    kind(k) {}
    
  virtual ~UntypedExp() {};
  
   virtual MonaTypeTag chekType() = 0;
   virtual string setExpressionInString()=0;
   virtual string getNameParameter(){return "";}

  UntypedExpNodeKind kind;
};


class ArithExp {
public:
  ArithExp(MonaTypeTag k) :
    kind(k) {}
  virtual ~ArithExp() {};

  virtual  MonaTypeTag evaluate() = 0;
  virtual string setArithString()=0;
  virtual string getNameParameter(){return "";}

  MonaTypeTag kind;
};

class VarDecl {
public:
  VarDecl() {}
  VarDecl(Name *n, UntypedExp *w) : 
    name(n), where(w) {}
  ~VarDecl() {delete name; delete where;}    
      
  Name *name;
  UntypedExp *where;
};

class Declaration {
public:
  Declaration() {}
  Declaration(DeclarationKind k) :
    kind(k) {}
  virtual ~Declaration() {};
		    	    
  DeclarationKind  kind;
};


class VarDeclList: public list<VarDecl*> {};

class HandleDeclarationFormat
{
public:
list<VarDeclList*>decl;


    void addDeclList(VarDeclList*);
    bool isADeclarationPresent();;
    string returnSmtLibDeclaration();

};


class UntypedExp_par_unpee: public UntypedExp  {
public:
  UntypedExp_par_unpee(UntypedExpNodeKind k, 
		       VarDeclList *d,
		       UntypedExp *e) :
    UntypedExp(k), exp(e), nameList(d) {}
  virtual ~UntypedExp_par_unpee() 
  {delete nameList; delete exp;}

  protected:

  void insertDecInSymbolTable();
  void deleteElementSymbleTable();
  void insertDeclarationInString(string&);
  string getSymbolOperator();
  string setExpressionInString() override;
  MonaTypeTag chekType() override;
  

  UntypedExp *exp;
  VarDeclList *nameList;

};

class UntypedExp_par_ee: public UntypedExp {
public:
  UntypedExp_par_ee(UntypedExpNodeKind k, 
		    UntypedExp *e1, 
		    UntypedExp *e2) :
    UntypedExp(k), exp1(e1), exp2(e2) {}
  virtual ~UntypedExp_par_ee() {delete exp1; delete exp2;}

  string setExpressionInString() override;
  MonaTypeTag chekType() override;
  virtual string getSymbolOperator();

  UntypedExp *exp1;
  UntypedExp *exp2;
};

class UntypedExp_par_ee_two: public UntypedExp_par_ee
{
  public:
    UntypedExp_par_ee_two(UntypedExpNodeKind k, 
		    UntypedExp *e1, 
		    UntypedExp *e2):UntypedExp_par_ee{k,e1,e2}{}

  string setExpressionInString() override;
  MonaTypeTag chekType() override;
  string getSymbolOperator() override;
  void controlNameParameter();


};

class UntypedExp_Ex1: public UntypedExp_par_unpee  {
public:
  UntypedExp_Ex1(VarDeclList *d,
		 UntypedExp *exp) :
    UntypedExp_par_unpee(ex1,d, exp) {}

};

class UntypedExp_Ex0: public UntypedExp_par_unpee  {
public:
  UntypedExp_Ex0(VarDeclList *d,
		 UntypedExp *exp) :
    UntypedExp_par_unpee(ex0,d, exp) {}

};


class UntypedExp_Ex2: public UntypedExp_par_unpee  {
public:
  UntypedExp_Ex2(VarDeclList *d,
		 UntypedExp *exp) :
    UntypedExp_par_unpee(ex2,d, exp) {}

};

class UntypedExp_All0: public UntypedExp_par_unpee  {
public:
  UntypedExp_All0(VarDeclList *d, 
		  UntypedExp *exp) :
    UntypedExp_par_unpee(all0, d, exp) {} 

};

class UntypedExp_All1: public UntypedExp_par_unpee  {
public:
  UntypedExp_All1(VarDeclList *d, 
		  UntypedExp *exp) :
    UntypedExp_par_unpee(all1, d, exp) {} 
    
};


class UntypedExp_All2: public UntypedExp_par_unpee  {
public:
  UntypedExp_All2(VarDeclList *d, 
		  UntypedExp *exp) :
    UntypedExp_par_unpee(all2, d, exp) {} 
    
};


class UntypedExp_Less: public UntypedExp_par_ee_two {
public:
  UntypedExp_Less(UntypedExp *exp1, UntypedExp *exp2) : 
    UntypedExp_par_ee_two(uLess, exp1, exp2) {}
};

class UntypedExp_LessEq: public UntypedExp_par_ee_two {
public:
  UntypedExp_LessEq(UntypedExp *exp1, UntypedExp *exp2) : 
    UntypedExp_par_ee_two(uLessEq, exp1, exp2) {}
};

class UntypedExp_GreaterEq: public UntypedExp_par_ee_two {
public:
  UntypedExp_GreaterEq(UntypedExp *exp1, UntypedExp *exp2) : 
    UntypedExp_par_ee_two(uGreaterEq, exp1, exp2) {}
};

class UntypedExp_Greater: public UntypedExp_par_ee_two {
public:
  UntypedExp_Greater(UntypedExp *exp1, UntypedExp *exp2) : 
    UntypedExp_par_ee_two(uGreater, exp1, exp2) {}
};

class UntypedExp_Equal: public UntypedExp_par_ee_two {
public:
   UntypedExp_Equal(UntypedExp *exp1, UntypedExp *exp2) : 
    UntypedExp_par_ee_two(uEqual,exp1,exp2) {}

};


class UntypedExp_NotEqual: public UntypedExp_par_ee_two {
public:
   UntypedExp_NotEqual(UntypedExp *exp1, UntypedExp *exp2) : 
    UntypedExp_par_ee_two(uNotEqual,exp1,exp2) {}

};



class UntypedExp_And: public UntypedExp_par_ee {
public:
  UntypedExp_And(UntypedExp *exp1, UntypedExp *exp2) :
    UntypedExp_par_ee(uAnd, exp1, exp2) {}

};

class UntypedExp_Or: public UntypedExp_par_ee {
public:
  UntypedExp_Or(UntypedExp *exp1, UntypedExp *exp2) :
    UntypedExp_par_ee(uOr, exp1, exp2) {}

};

class Membership:public UntypedExp_par_ee
{
  public:
    Membership(UntypedExpNodeKind k,UntypedExp*exp1,UntypedExp*exp2):UntypedExp_par_ee{k,exp1,exp2}{}

    string setExpressionInString() override;
};

class UntypedExp_In: public Membership {
public:
  UntypedExp_In(UntypedExp *exp1, UntypedExp *exp2) :
    Membership(uIn, exp1, exp2) {}

};

class UntypedExp_NotIn: public Membership {
public:
  UntypedExp_NotIn(UntypedExp *exp1, UntypedExp *exp2) :
    Membership(uNotIn, exp1, exp2) {}   
};



class UntypedExp_Impl: public UntypedExp_par_ee {
public:
  UntypedExp_Impl(UntypedExp *exp1, UntypedExp *exp2) :
    UntypedExp_par_ee(uImpl, exp1, exp2) {}
    
};

class UntypedExp_Biimpl: public UntypedExp_par_ee {
public:
  UntypedExp_Biimpl(UntypedExp *exp1, UntypedExp *exp2) :
    UntypedExp_par_ee(uBiimpl, exp1, exp2) {}
};

class Expression_Declaration: public Declaration {
public:
  Expression_Declaration(UntypedExp *e) :
    Declaration(dExpression), exp(e) {}
  virtual ~Expression_Declaration() {delete exp;}
  

  UntypedExp *exp;
};





class DeclarationList: public list<Declaration*> {};


class UntypedExp_Name: public UntypedExp {
public:
  UntypedExp_Name(UntypedExpNodeKind k,Name *n) :
    UntypedExp(k), name(n) {}
  virtual ~UntypedExp_Name() {delete name;}
  
  MonaTypeTag chekType() override;
  string setExpressionInString() override;
  string getNameParameter() override;
  
  Name *name;
};

class UntypedExp_PathName:public UntypedExp_Name
{
  public:
    UntypedExp_PathName(UntypedExpNodeKind k,Name*name,string *s):UntypedExp_Name{k,name},path{s}{}

    MonaTypeTag chekType() override;
    string setExpressionInString() override;

    string *path;
};

class UntypedExp_NameUp:public UntypedExp_Name
{
  public:
    UntypedExp_NameUp(Name *n) :
    UntypedExp_Name(uUp,n) {}
  
  MonaTypeTag chekType() override;

};

class UntypedExp_Dot: public UntypedExp {
public:

  UntypedExp_Dot(UntypedExpNodeKind k,DotName*dotName):UntypedExp(k), dotName{dotName}{}
  virtual ~UntypedExp_Dot(){delete dotName;}

  MonaTypeTag chekType() override;
  string setExpressionInString ()override;
  string getNameParameter() override;

  DotName *dotName;

};

class UntypedExp_DotName: public UntypedExp_Dot 
{
  public:
  UntypedExp_DotName(DotName * dotName):UntypedExp_Dot{uDotName,dotName}{}
};


class UntypedExp_DotNameNumber:public UntypedExp_Dot
{
  public:
    UntypedExp_DotNameNumber(DotName*dotName,string *s):UntypedExp_Dot{uDotNameNumber,dotName},path{s}{}
    virtual ~UntypedExp_DotNameNumber(){delete path;}
    
     string setExpressionInString() override;
 
    string *path;
    
};

class UntypedExp_Call:public UntypedExp
{
  public:
    UntypedExp_Call(Name*,VarDeclList*);
    virtual ~UntypedExp_Call(){delete name,delete parList;}

    MonaTypeTag chekType() override;
    string setExpressionInString() override;
    void setParList();

  Name*name;
  ParList *parList;
};

class Predicate_Declaration:public Declaration
{
  public:
    Predicate_Declaration(Name*name,ParList*parList,UntypedExp*body):Declaration{dPredicate},name{name},parList{parList},body{body}{}
  virtual~Predicate_Declaration(){delete name, delete parList,delete body;}
  
  void insertDeclarationInSymbolTable();
  void insertDeclarationInString();

  Name*name;
  ParList*parList;
  UntypedExp*body;

};


class Variable_Declaration: public Declaration {
public:
  Variable_Declaration(MonaTypeTag k, VarDeclList *d) :
    Declaration(dVariable), declKind(k), decls(d) {}
  virtual ~Variable_Declaration() 
  {delete decls;}

void insertDeclarationInSymbolTable();
void insertDeclarationInString();

  MonaTypeTag declKind;
  VarDeclList *decls;

  private:
  void insertDecInSymbolTable();
};





class MonaUntypedAST {
public:
  MonaUntypedAST(DeclarationList *decls) :
    declarations(decls) {}
  ~MonaUntypedAST() {delete declarations;}

  void typeCheckDeclarations();
  void createStrings();

  DeclarationList *declarations;
 
};

class UntypedExp_par_ea: public UntypedExp{

  public:

  UntypedExp_par_ea(UntypedExpNodeKind k,
		    UntypedExp *e,
		    ArithExp *ae) :
    UntypedExp(k), exp(e), aexp(ae) {}
  virtual ~UntypedExp_par_ea()
  {delete exp; delete aexp,delete name;}

  string getSymbolOperator();
  string setExpressionInString() override;
  MonaTypeTag chekType() override;
  string getNameParameter() override;
  void controlNameParameter();


  UntypedExp *exp;
  ArithExp *aexp;
  Name*name;
};



class UntypedExp_Plus: public UntypedExp_par_ea {
public:
  UntypedExp_Plus(UntypedExp *exp, ArithExp *aexp) :
    UntypedExp_par_ea(uPlus, exp, aexp) {}

};

class UntypedExp_Minus: public UntypedExp_par_ea {
public:
  UntypedExp_Minus(UntypedExp *exp, ArithExp *aexp) :
    UntypedExp_par_ea(uMinus, exp, aexp) {}

};


class UntypedExp_Mult: public UntypedExp_par_ea {
public:
  UntypedExp_Mult(UntypedExp *exp, ArithExp *aexp) :
    UntypedExp_par_ea(uMult, exp, aexp) {}

};

class UntypedExp_Div: public UntypedExp_par_ea {
public:
  UntypedExp_Div(UntypedExp *exp, ArithExp *aexp) :
    UntypedExp_par_ea(uDiv, exp, aexp) {}

};

class UntypedExp_Modul: public UntypedExp_par_ea {
public:
  UntypedExp_Modul(UntypedExp *exp, ArithExp *aexp) :
    UntypedExp_par_ea(uModul, exp, aexp) {}

};

class UntypedExp_Set: public UntypedExp {
public:
  UntypedExp_Set(VarDeclList *nameList) : 
    UntypedExp(uSet), nameList{nameList} {}
  virtual ~UntypedExp_Set() {delete nameList;}

  MonaTypeTag chekType() override;
  string setExpressionInString() override;

  VarDeclList*nameList;
};


class UntypedExp_Boolean:public UntypedExp
{
  public:
   UntypedExp_Boolean(UntypedExpNodeKind k):UntypedExp{k}{}

   MonaTypeTag chekType()override;
   string setExpressionInString() override;
};

class UntypedExp_True: public UntypedExp_Boolean {
public:
  UntypedExp_True() :
    UntypedExp_Boolean(uTrue) {}

};

class UntypedExp_False: public UntypedExp_Boolean {
public:
  UntypedExp_False() :
    UntypedExp_Boolean(uFalse) {}

};

class UntypedExp_Int: public UntypedExp {
public:
  UntypedExp_Int(int c) :
    UntypedExp(uInt), n(c) {}

    MonaTypeTag chekType() override;
  string setExpressionInString() override;
  
    int n;
};

class UntypedExp_Real: public UntypedExp {
public:
  UntypedExp_Real(double c) :
    UntypedExp(udouble), n(c) {}

    MonaTypeTag chekType() override;
    string setExpressionInString() override;
  
    double n;
};


class UntypedExp_Paren:public UntypedExp
{
  public:
    UntypedExp_Paren(UntypedExp *exp):UntypedExp{uParen},exp{exp}{};
    virtual ~UntypedExp_Paren(){delete exp;}

    MonaTypeTag chekType() override;
    string setExpressionInString() override;

    UntypedExp *exp;

};

class ArithExp_par_aa: public ArithExp {
public:

  ArithExp_par_aa(MonaTypeTag k, ArithExp *a1, ArithExp *a2) :
    ArithExp(k), aexp1(a1), aexp2(a2) {}
  virtual ~ArithExp_par_aa() {delete aexp1; delete aexp2,delete name;}
  
  string setArithString() override;
  MonaTypeTag evaluate() override;
  string getSymbolOperator();
  string getNameParameter() override;
  void controlNameParameter();

  ArithExp *aexp1;
  ArithExp *aexp2;
  Name *name;
};

class ArithExp_Add: public ArithExp_par_aa  {
public:
  ArithExp_Add(ArithExp *aexp1, ArithExp *aexp2) :
   ArithExp_par_aa(aAdd, aexp1, aexp2) {}

};
class ArithExp_Subtr: public ArithExp_par_aa  {
public:
  ArithExp_Subtr(ArithExp *aexp1, ArithExp *aexp2) :
   ArithExp_par_aa(aSubtr, aexp1, aexp2) {}

};

class ArithExp_Mult: public ArithExp_par_aa  {
public:
  ArithExp_Mult(ArithExp *aexp1, ArithExp *aexp2) :
   ArithExp_par_aa(aMult, aexp1, aexp2) {}

};

class ArithExp_Div: public ArithExp_par_aa  {
public:
  ArithExp_Div(ArithExp *aexp1, ArithExp *aexp2) :
   ArithExp_par_aa(aDiv, aexp1, aexp2) {}

};

class ArithExp_Modul: public ArithExp_par_aa  {
public:
  ArithExp_Modul(ArithExp *aexp1, ArithExp *aexp2) :
   ArithExp_par_aa(aModul, aexp1, aexp2) {}

};


class ArithExp_Integer: public ArithExp {
public:
  ArithExp_Integer(int n) :
    ArithExp(aInteger),n{n}{}

  MonaTypeTag evaluate()override;
  string setArithString() override;
  int n;
};

class ArithExp_Real:public ArithExp
{
  public:
  ArithExp_Real(double n):ArithExp{aReal},n{n} {}

  MonaTypeTag evaluate()override;
  string setArithString() override;

  double n;

};

class ArithExp_Const: public ArithExp {
public:
  ArithExp_Const(MonaTypeTag k, DotName*dotName) :
    ArithExp(k), dotName{dotName} {}
  virtual ~ArithExp_Const() {delete dotName;}

  MonaTypeTag evaluate()override;
  string setArithString() override;
  string getNameParameter() override;

  DotName *dotName;
};

class AritExp_ConstDotName:public ArithExp_Const
{
  public:
    AritExp_ConstDotName(DotName *dotName):ArithExp_Const{aDotName,dotName}{}
};

class ArithExp_ConstPathDotName:public ArithExp_Const{
  public:
  ArithExp_ConstPathDotName(DotName*dotName,string *path):ArithExp_Const{aDotNameNumber,dotName},path{path}{}
  virtual ~ArithExp_ConstPathDotName(){delete path;}

   string setArithString() override;

  string *path;

};

class UntypedExp_par_e: public UntypedExp {
public:
  UntypedExp_par_e(UntypedExpNodeKind k, UntypedExp *e) :
    UntypedExp(k), exp(e) {}
  virtual ~UntypedExp_par_e() {delete exp;}
  
  MonaTypeTag chekType() override;
  string setExpressionInString() override;

  UntypedExp *exp;
};

class UntypedExp_Not: public UntypedExp_par_e {
public:
  UntypedExp_Not(UntypedExp *exp) :
    UntypedExp_par_e(uNot, exp) {}
};

#endif


