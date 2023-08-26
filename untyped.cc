#include "untyped.hh"
SymbolTable symbleTable{};

void MonaUntypedAST::typeCheckDeclarations()
{
  for(Declaration * dec:*declarations)
  {
    switch(dec->kind)
    {
      case dVariable:
       (static_cast<Variable_Declaration*>(dec))->insertDeclarationInSymbolTable();
       break;
      case dExpression:
         (static_cast<Expression_Declaration*>(dec))->exp->chekType();
      break;
    }
  }
}

void Variable_Declaration::insertDeclarationInSymbolTable()
{

    insertDecInSymbolTable();
}

MonaTypeTag UntypedExp_Ex1::chekType()
{
  
 insertDecInSymbolTable();
  exp->chekType();
  deleteElementSymbleTable();
  return nu;
}

void Variable_Declaration::insertDecInSymbolTable()
{
   for(VarDecl*dec : *decls)
    {
      symbleTable.insert(new SymbolTable::SymbolEntry{dec->name,declKind});
    }
}

void UntypedExp_Ex1::insertDecInSymbolTable()
{
    for(VarDecl*dec : *nameList)
        {
          symbleTable.insert(new SymbolTable::SymbolEntry{dec->name,Varname1});
        }
}

void UntypedExp_Ex1:: deleteElementSymbleTable()
{
   for(VarDecl*dec : *nameList)
    {
      symbleTable.remove(dec->name);
    }
}


MonaTypeTag UntypedExp_Less::chekType()
{
    MonaTypeTag e1=exp1->chekType();
    MonaTypeTag e2=exp2->chekType();

    if(e1==e2)
    {
        switch(e1)
        {
            case Varname1:
                return Boolean;
             break;
             case Integer:
                return Boolean;
               break;
            case Real:
                return Boolean;
              break;
            default:
                cout<<"error: error type less"<<endl;
              break;
        }
    }
   cout<<"error: error type less"<<endl;
   return nu;
}

MonaTypeTag UntypedExp_Name::chekType()
{
        if(symbleTable.isPresentEntry(name))
        {
            return (symbleTable.lookup(name))->tag;
        }
        cout<<"error:element don't present in a symble table"<<endl;
        return nu;
}

MonaTypeTag UntypedExp_And::chekType()
{
        MonaTypeTag e1=exp1->chekType();
        MonaTypeTag e2=exp2->chekType();

          if(e1==e2 && e1==Boolean)
            {
              return Boolean;
            }
           cout<<"error:error type AND"<<endl;
           return nu;

}

MonaTypeTag UntypedExp_Plus::chekType()
{
    MonaTypeTag e=exp->chekType();
    MonaTypeTag ar=aexp->evaluate();

    if(e==ar)
    {
        if(e==Integer || e==Real)
            return e;
      
    }
  cout<<"error:type of plus"<<endl;
  return nu;
}

MonaTypeTag ArithExp_Add::evaluate()
{
    MonaTypeTag ae1=aexp1->evaluate();
    MonaTypeTag ae2=aexp2->evaluate();

    if(ae1==ae2)
    {
        if(ae1==Integer || ae1==Real)
            return ae1;
    }
    cout<<"error:error on add"<<endl;
    return nu;
}
MonaTypeTag ArithExp_Integer::evaluate()
{
  return Integer;
}

MonaTypeTag ArithExp_Real::evaluate()
{

  return Real;
}

MonaTypeTag ArithExp_Const::evaluate()
{
 if(symbleTable.isPresentEntry(dotName))
                 return symbleTable.lookup(dotName)->tag;
              else{}  
                cout<<"error"<<endl;
                return nu;
}


MonaTypeTag UntypedExp_DotName::chekType()
{
     if(symbleTable.isPresentEntry(dotName))
                 return symbleTable.lookup(dotName)->tag;
              else{}
                cout<<"error:dotName element isn't present"<<endl;
                return nu;
}







