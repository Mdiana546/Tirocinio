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
  
 insertDecInSymbolTable(nameList);
  exp->chekType();
  deleteElementSymbleTable(nameList);
}

void insertDecInSymbolTable(VarDeclList*decls)
{
   for(VarDecl*dec : *decls)
    {
      symbleTable.insert(new symbolEntry{dec->name,dec->declKind});
    }
}

void deleteElementSymbleTable(VarDeclList*decls)
{
   for(VarDecl*dec : *decls)
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
                //lounch a error
              break;
        }
    }
   //lounch a error
}

MonaTypeTag UntypedExp_Name::chekType()
{
        if(isPresentEntry(name))
        {
            return (lookup(name))->tag;
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

//I'm gonna have to hanlde the expression







