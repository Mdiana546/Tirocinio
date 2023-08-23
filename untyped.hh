#ifndef __UNTYPED_H
#define __UNTYPED_H

#include "symboltable.h"
#include<list>
#include<string>

using std::string;
using std::list;


enum UntypedExpNodeKind {
  uAll0, uAll1, uAll2, uAnd, uBiimpl, uCall, uDiv, uDot, uEmpty, 
  uEmptyPred, uEqual, uEx0, uEx1, uEx2, uFalse, uGreater, uGreaterEq, 
  uImpl, uIn, uInt, uInter, uInterval, uLess, uLessEq, uLet0, uLet1, uLet2,
  uMax, uMin, uMinus, uMinusModulo, uMult, uName, uNot, uNotEqual, uNotIn,
  uOr, uPlus, uPlusModulo, uRoot, uSet, uSetminus, uSub, uRestrict,
  uTrue, uUnion, uUp, uImport, uExport, uPrefix, uRootPred, uInStateSpace,
  uSucc, uWellFormedTree, uType, uSomeType, uVariant, uConstTree, uTreeRoot
};



class UntypedExp {
public:
  UntypedExp(UntypedExpNodeKind k) :
    kind(k), {}
    
  virtual ~UntypedExp() {};
  
   MonaTypeTag chekType() =0

  UntypedExpNodeKind kind;
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


class VarDeclList: public list<VarDecl*> {};


class UntypedExp_par_unpee: public UntypedExp  {
public:
  UntypedExp_par_unpee(UntypedExpNodeKind k, 
		       VarDeclList *d,
		       UntypedExp *e) :
    UntypedExp(k), exp(e), nameList(d) {}
  virtual ~UntypedExp_par_unpee() 
  {delete nameList; delete exp}

  UntypedExp *exp;
  VarDeclList *nameList;
}

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
};


class UntypedExp_Less: public UntypedExp_par_ee {
public:
  UntypedExp_Less(UntypedExp *exp1, UntypedExp *exp2) : 
    UntypedExp_par_ee(uLess, exp1, exp2) {}
  
  MonaTypeTag chekType() override;
};

class UntypedExp_And: public UntypedExp_par_ee {
public:
  UntypedExp_And(UntypedExp *exp1, UntypedExp *exp2) :
    UntypedExp_par_ee(uAnd, exp1, exp2, p) {}

   MonaTypeTag chekType() override;
};


class Expression_Declaration: public Declaration {
public:
  Expression_Declaration(UntypedExp *e) :
    Declaration(dExpression), exp(e) {}
  virtual ~Expression_Declaration() {delete exp;}
  
  UntypedExp *exp;
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

class Declaration {
public:
  Declaration() {}
  Declaration(DeclarationKind k) :
    kind(k) {}
  virtual ~Declaration() {};
		    	    
  DeclarationKind  kind;
};

class DeclarationList: public list<Declaration*> {};

class UntypedExp_Name: public UntypedExp {
public:
  UntypedExp_Name(Name *n) :
    UntypedExp(uName), name(n) {}
  virtual ~UntypedExp_Name() {delete name;}
  
  MonaTypeTag chekType() override;
  
  Name *name;
};


class Variable_Declaration: public Declaration {
public:
  Variable_Declaration(VarDeclKind k, VarDeclList *d) :,
    Declaration(dVariable), declKind(k), decls(d) {}
  virtual ~Variable_Declaration() 
  {delete univs; delete decls;}

void insertDeclarationInSymbolTable();
  
  MonaTypeTag declKind;
  VarDeclList *decls;
};



class MonaUntypedAST {
public:
  MonaUntypedAST(DeclarationList *decls) :
    declarations(decls) {}
  ~MonaUntypedAST() {delete declarations;}

  void typeCheckDeclarations();
  
  DeclarationList *declarations;
};

#endif


