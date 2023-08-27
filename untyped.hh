#ifndef __UNTYPED_H
#define __UNTYPED_H

#include "SymbolTable.hh"
#include<list>
#include<string>
#include<iostream>
#include"HandleExpressionFormat.hh"
using std::string;
using std::list;
using std::cout;
using std::endl;




enum UntypedExpNodeKind {
  uAll0, uAll1, uAll2, uAnd, uBiimpl, uCall, uDiv, uDot, uEmpty, 
  uEmptyPred, uEqual, uEx0, uEx1, uEx2, uFalse, uGreater, uGreaterEq, 
  uImpl, uIn, uInt, uInter, uInterval, uLess, uLessEq, uLet0, uLet1, uLet2,
  uMax, uMin, uMinus, uMinusModulo, uMult, uName, uNot, uNotEqual, uNotIn,
  uOr, uPlus, uPlusModulo, uRoot, uSet, uSetminus, uSub, uRestrict,
  uTrue, uUnion, uUp, uImport, uExport, uPrefix, uRootPred, uInStateSpace,
  uSucc, uWellFormedTree, uType, uSomeType, uVariant, uConstTree, uTreeRoot,uDotName
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

  UntypedExpNodeKind kind;
};

class ArithExp {
public:
  ArithExp(MonaTypeTag k) :
    kind(k) {}
  virtual ~ArithExp() {};

  virtual  MonaTypeTag evaluate() = 0;

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


class UntypedExp_par_unpee: public UntypedExp  {
public:
  UntypedExp_par_unpee(UntypedExpNodeKind k, 
		       VarDeclList *d,
		       UntypedExp *e) :
    UntypedExp(k), exp(e), nameList(d) {}
  virtual ~UntypedExp_par_unpee() 
  {delete nameList; delete exp;}

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

  UntypedExp *exp1;
  UntypedExp *exp2;
};

class UntypedExp_Ex1: public UntypedExp_par_unpee  {
public:
  UntypedExp_Ex1(VarDeclList *d,
		 UntypedExp *exp) :
    UntypedExp_par_unpee(uEx1,d, exp) {}

   MonaTypeTag chekType() override;
   string setExpressionInString() override ;

  private:
  void insertDecInSymbolTable() ;
  void deleteElementSymbleTable() ;
  void insertDeclarationInString();


};


class UntypedExp_Less: public UntypedExp_par_ee {
public:
  UntypedExp_Less(UntypedExp *exp1, UntypedExp *exp2) : 
    UntypedExp_par_ee(uLess, exp1, exp2) {}
  
  MonaTypeTag chekType() override;
  string setExpressionInString()override;
};

class UntypedExp_And: public UntypedExp_par_ee {
public:
  UntypedExp_And(UntypedExp *exp1, UntypedExp *exp2) :
    UntypedExp_par_ee(uAnd, exp1, exp2) {}

   MonaTypeTag chekType() override;
   string setExpressionInString() override;
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
  UntypedExp_Name(Name *n) :
    UntypedExp(uName), name(n) {}
  virtual ~UntypedExp_Name() {delete name;}
  
  MonaTypeTag chekType() override;
  string setExpressionInString() override;
  
  Name *name;
};

class UntypedExp_DotName: public UntypedExp {
public:
  UntypedExp_DotName(DotName *n) :
    UntypedExp(uDotName), dotName(n) {}
  virtual ~UntypedExp_DotName() {delete dotName;}

  MonaTypeTag chekType() override;
  string setExpressionInString()override;

  DotName *dotName;

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

class UntypedExp_par_ea: public UntypedExp {
public:
  UntypedExp_par_ea(UntypedExpNodeKind k,
		    UntypedExp *e,
		    ArithExp *ae) :
    UntypedExp(k), exp(e), aexp(ae) {}
  virtual ~UntypedExp_par_ea()
  {delete exp; delete aexp;}

  UntypedExp *exp;
  ArithExp *aexp;
};



class UntypedExp_Plus: public UntypedExp_par_ea {
public:
  UntypedExp_Plus(UntypedExp *exp, ArithExp *aexp) :
    UntypedExp_par_ea(uPlus, exp, aexp) {}

  MonaTypeTag chekType() override;
};



class ArithExp_par_aa: public ArithExp {
public:

  ArithExp_par_aa(MonaTypeTag k, ArithExp *a1, ArithExp *a2) :
    ArithExp(k), aexp1(a1), aexp2(a2) {}
  virtual ~ArithExp_par_aa() {delete aexp1; delete aexp2;}

  ArithExp *aexp1;
  ArithExp *aexp2;
};

class ArithExp_Add: public ArithExp_par_aa  {
public:
  ArithExp_Add(ArithExp *aexp1, ArithExp *aexp2) :
   ArithExp_par_aa(aAdd, aexp1, aexp2) {}

  MonaTypeTag evaluate() override;
};


class ArithExp_Integer: public ArithExp {
public:
  ArithExp_Integer() :
    ArithExp(aInteger) {}

  MonaTypeTag evaluate();
};

class ArithExp_Real:public ArithExp
{
  public:
  ArithExp_Real():ArithExp{aReal}{}

  MonaTypeTag evaluate();

};

class ArithExp_Const: public ArithExp {
public:
  ArithExp_Const(DotName *dotName) :
    ArithExp(aConst), dotName{dotName} {}
  virtual ~ArithExp_Const() {delete dotName;}

  MonaTypeTag evaluate();

  DotName *dotName;
};

#endif


