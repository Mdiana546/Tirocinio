#include "untyped.hh"
SymbolTable symbleTable{};
string MFormat="ws2s; \n";
HandleDeclarationFormat Hdeclaration{};
string smT;
int count=0;

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
   if(Hdeclaration.isADeclarationPresent())
  {
    string smtLibDeclaration=Hdeclaration.returnSmtLibDeclaration();
    smtLibDeclaration+="\n"+smT;
    smT=smtLibDeclaration;
  }
}

void Variable_Declaration::insertDeclarationInSymbolTable()
{

    insertDecInSymbolTable();
}

void Variable_Declaration::insertDeclarationInString()
{
  string type;
  string listELements;
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
              Hdeclaration.addDeclList(decls);
            type="int";
            break;
          case Real:
            Hdeclaration.addDeclList(decls);
            type="real";
            break;
              Hdeclaration.addDeclList(decls);
          case Boolean:
            type="bool";
           break;
      }

    for(VarDecl*dec : *decls)
    {
      listELements+=","+*(dec->name->str);
    }
    listELements.erase(0,1); //I delete the first colon
    MFormat+=type+" "+listELements+";\n";
}


MonaTypeTag UntypedExp_par_unpee::chekType()
{
  
 insertDecInSymbolTable();
  exp->chekType();
  deleteElementSymbleTable();
  return nu;
}

string UntypedExp_par_unpee::setExpressionInString()
{
  insertDeclarationInString();
  MFormat+=":\n"+exp->setExpressionInString()+";";
  return "";
}

void UntypedExp_par_unpee::insertDeclarationInString()
{
    switch(kind)
    {
      case ex1:
        MFormat+="ex1";
      break;
      case ex2:
        MFormat+="ex2";
      break;
      case ex0:
        MFormat+="ex0";
        break;
      case all0:
        MFormat+="all0";
      case all1:
        MFormat+="all1";
      break;
      case all2:
        MFormat+="all2";
      break;
    }
  string listElements;
    for(VarDecl*dec:*nameList)
      listElements+=","+*(dec->name->str); 

     listElements.erase(0,1); //I delete the first colon
     MFormat+=" "+listElements;


}

void Variable_Declaration::insertDecInSymbolTable()
{
   for(VarDecl*dec : *decls)
    {
      symbleTable.insert(new SymbolTable::SymbolEntry{dec->name,declKind});
    }
}

void UntypedExp_par_unpee::insertDecInSymbolTable()
{
    for(VarDecl*dec : *nameList)
        {
          symbleTable.insert(new SymbolTable::SymbolEntry{dec->name,Varname1});
        }
}

void UntypedExp_par_unpee:: deleteElementSymbleTable()
{
   for(VarDecl*dec : *nameList)
    {
      symbleTable.remove(dec->name);
    }
}




MonaTypeTag UntypedExp_par_ee_two::chekType()
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
                if(kind==uEqual || kind==uNotEqual)
                {
                  switch(e1)
                  {
                    case Varname2:
                      return Boolean;
                    break;
                    case Boolean:
                    return Boolean;
                  }
                }
                   
                cout<<"error: error type less"<<endl;
              break;
        }
    }
   cout<<"error: error type less"<<endl;
   return nu;
}

string UntypedExp_par_ee_two::setExpressionInString()
{
  string smtFile,e3;
    string e1=exp1->setExpressionInString();
    string e2=exp2->setExpressionInString();

    switch(kind)
    {
      case uLess:
        e3=e1+"<"+e2;
      break;
      case uLessEq:
        e3=e1+"<="+e2;
        break;
      case uGreater:
        e3=e1+">"+e2;
      break;
      case uGreaterEq:
        e3=e1+">="+e2;
      break;
      case uEqual:
        e3=e1+"="+e2; 
      break;
      case uNotEqual:
         e3=e1+"!="+e2; //TODO i must implement it in HandleExpressionFormat
        break;
    }
    HanldeExpressionFormat Hexp{e3};
    smtFile=Hexp.returnSMTLIBVersion();

    if(!smtFile.empty())
    {
      count++;
      smT+="(define-fun C"+to_string(count)+smtFile+")\n";
      return "C"+to_string(count)+Hexp.returnMonaVersion();
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



MonaTypeTag UntypedExp_par_ee::chekType()
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

string UntypedExp_par_ee::setExpressionInString()
{
    string e1=exp1->setExpressionInString();
    string e2=exp2->setExpressionInString();
    switch(kind)
    {
      case uAnd:
        return e1+"&"+e2;
      break;
      case uOr:
        return e1+"|"+e2;
      break;
      //TODO I muste see how implement not
    }
  cout<<"error "<<endl;
  return "";
}

MonaTypeTag UntypedExp_par_ea::chekType()
{
    MonaTypeTag e=exp->chekType();
    MonaTypeTag ar=aexp->evaluate();

    if(e==ar)
    {
        if(e==Integer || e==Real)
            return e;
      
    }
  cout<<"error:type of UntypedExp_par_ea "<<endl;
  return nu;
}

string UntypedExp_par_ea::setExpressionInString()
{
      string e=exp->setExpressionInString();
      string ar=aexp->setArithString();
      switch(kind)
      {
        case uPlus:
           return e+"+"+ar;
        break;
        case uMinus:
         return e+"-"+ar;
        break;
        case uMult:
          return e+"*"+ar;
        break;
        case uDiv:
          return  e+"/"+ar;
        break;
        case uModul:
          return e+"%"+ar;
        break;
        default:
          return "";
      }

  
}

MonaTypeTag ArithExp_par_aa::evaluate()
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

string ArithExp_par_aa::setArithString()
{

    string ae1=aexp1->setArithString();
    string ae2=aexp2->setArithString();
    switch(kind)
    {
      case aAdd:
          return ae1+"+"+ae2;
      break;
      case aSubtr:
        return ae1+"-"+ae2;
      break;
      case aMult:
        return ae1+"*"+ae2;
      break;
      case aDiv:
        return ae1+"/"+ae2;
      break; aModul:
        return ae1+"%"+ae2;
      break;
      default:
        return "";
    }
}
MonaTypeTag ArithExp_Integer::evaluate()
{
  return Integer;
}

string ArithExp_Integer::setArithString()
{
  return to_string(n);
}

string ArithExp_Real::setArithString()
 {
  return to_string(n);
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
string ArithExp_Const::setArithString()
{
  return *(dotName->name1->str)+"."+*(dotName->name2->str);
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
  return *(dotName->name1->str)+"."+*(dotName->name2->str);
}


void HandleDeclarationFormat::addDeclList(VarDeclList*varDeclList)
{
    decl.push_back(varDeclList);
}
bool HandleDeclarationFormat::isADeclarationPresent()
{
    return !decl.empty();
}
string HandleDeclarationFormat::returnSmtLibDeclaration()
{
    string smtLibFormat;
    for(VarDeclList*varDeclarationList:decl)
    {
        for(VarDecl*v:*varDeclarationList)
        {
            string name=*(v->name->str);
            string type;
            switch (symbleTable.lookup(v->name)->tag)
            {
                case Integer:
                    type="Int";
                break;
                case Real:
                    type="Real";
                break;
                case Boolean:
                    type="Bool";
                break;
            }
            smtLibFormat+=" ("+name+" "+type+") ";
        }
    }
    string deD="(declare-datatypes () ((Data (mk-state";
    return deD+smtLibFormat+"))))";

}






