#include<untyped.hh>

void MonaUntypedAST::typeCheckDeclarations()
{
  for(Declaration * dec: declarations)
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

    insertDecInSymbolTable(decls);
}

MonaTypeTag UntypedExp_Ex1::chekType()
{
  
 insertDecInSymbolTable();
  exp->chekType();
  deleteElementSymbleTable(nameList);
}

void Variable_Declaration::insertDecInSymbolTable()
{
   for(VarDecl*dec : *decls)
    {
      symbleTable.insert(new symbolEntry{dec->name,declKind});
    }
}

void UntypedExp_Ex1::insertDecInSymbolTable()
{
    for(VarDecl*dec : *nameList)
        {
          symbolTable.insert(new symbolEntry{dec->name,Varname1});
        }
}

void UntypedExp_Ex1:: deleteElementSymbleTable()
{
   for(VarDecl*dec : *nameList)
    {
      symbolTable.remove(dec->name);
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
                //lounch a error
              break;
        }
    }
   //lounch a error
}

MonaTypeTag UntypedExp_Name::chekType()
{
        if(symbolTable.isPresentEntry(name))
        {
            return (symbolTable.lookup(name))->tag;
        }
}

MonaTypeTag UntypedExp_And::chekType()
{
        MonaTypeTag e1=exp1->chekType();
        MonaTypeTag e2=exp2->chekType();

          if(e1==e2 && e1==Boolean)
            {
              return Boolean;
            }
           //lounch a error

}

MonaTypeTag UntypedExp_Plus::chekType()
{
    MonaTypeTag e=exp->checkType();
    MonaTypeTag ar=aexp->evaluate();

    if(e==ar)
    {
        if(e==Integer || e==Real)
            return dExpression,
         else
            //handle the error
    }

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
    //handle the error
}

MonaTypeTag ArithExp_Integer::evaluate()
{
  return Integer;
}

MonaTypeTag ArithExp_Const::evaluate()
{
    return dotName->chekType;
}


MonaTypeTag UntypedExp_DotName::chekType()
{
     if(symbleTable.isPresentEntry(dotName))
                 return *(symbleTable.lookup(dotName)->tag);
              else
                //handle the error
}







