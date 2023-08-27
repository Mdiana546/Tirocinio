#include "untyped.hh"
SymbolTable symbleTable{};
string MFormat;
string smT;
int count=1;

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

void MonaUntypedAST::createStrings()
{
    for(Declaration * dec:*declarations)
     {
      switch(dec->kind)
      {
        case dVariable:
        (static_cast<Variable_Declaration*>(dec))->insertDeclarationInString();
        break;
        case dExpression:
          (static_cast<Expression_Declaration*>(dec))->exp->setExpressionInString();
        break;
      }
  }
}

void Variable_Declaration::insertDeclarationInSymbolTable()
{

    insertDecInSymbolTable();
}

void Variable_Declaration::insertDeclarationInString()
{
  string type;

      switch(declKind)
      {

          case Varname1:
            type="var1";
            break;
          case Varname2:
            type="var2";
            break;
          case Varname0:
            type="var0";
            break;
          case Integer:
            type="int";
            break;
          case Real:
            type="real";
            break;
          case Boolean:
            type="bool";
           break;
      }
      MFormat+=type;

    for(VarDecl*dec : *decls)
    {
      MFormat+=" "+*(dec->name->str); //TODO I must handel semicolon problem;
    }
    MFormat+="\n";
}


MonaTypeTag UntypedExp_Ex1::chekType()
{
  
 insertDecInSymbolTable();
  exp->chekType();
  deleteElementSymbleTable();
  return nu;
}

string UntypedExp_Ex1::setExpressionInString()
{
  insertDeclarationInString();
  MFormat=":"+MFormat+"\n"+exp->setExpressionInString();
  return "";
}

void UntypedExp_Ex1::insertDeclarationInString()
{
  MFormat="ex1";
    for(VarDecl*dec:*nameList)
      MFormat+=" "+*(dec->name->str); //TODO I must hanlde problem semicolon
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

string UntypedExp_Less::setExpressionInString()
{
    string e1=exp1->setExpressionInString();
    string e2=exp2->setExpressionInString();
    string e3=e1+" < "+e2;
    HanldeExpressionFormat Hexp{e3};
    string smt=Hexp.returnSMTLIBVersion();
    if(!smt.empty())
    { 
      smt+="define-fun"+to_string(count);
      smT+="\n"+smt;
      return to_string(count)+Hexp.returnMonaVersion();
      count++;
    }
    return Hexp.returnMonaVersion();


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

string UntypedExp_Name::setExpressionInString()
{
  return *(name->str);
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

string UntypedExp_And::setExpressionInString()
{
    string e1=exp1->setExpressionInString();
    string e2=exp2->setExpressionInString();
    return e1+" & "+e2;
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

string UntypedExp_DotName::setExpressionInString()
{
  string retString=*(dotName->name1->str)+"."+*(dotName->name2->str);
  return retString;
}





