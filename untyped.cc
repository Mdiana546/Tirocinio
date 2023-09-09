#include "untyped.hh"
SymbolTable symbleTable{};
string MFormat="ws2s; \n";
HandleDeclarationFormat Hdeclaration{};
string smT;
int coun=0;
int cc=1;

void MonaUntypedAST::typeCheckDeclarations()
{
  for(Declaration * dec:*declarations)
  {
    switch(dec->kind)
    {
      case dVariable:
       (static_cast<Variable_Declaration*>(dec))->insertDeclarationInSymbolTable();
       break;
      case dPredicate:
       (static_cast<Predicate_Declaration*>(dec))->insertDeclarationInSymbolTable();
       break;
      case dExpression:
         MonaTypeTag tag=(static_cast<Expression_Declaration*>(dec))->exp->chekType();
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
        case dPredicate:
        (static_cast<Predicate_Declaration*>(dec))->insertDeclarationInString();
        break;
        case dExpression:
          MFormat+=(static_cast<Expression_Declaration*>(dec))->exp->setExpressionInString()+";\n";
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

void Predicate_Declaration::insertDeclarationInSymbolTable()
{
     if(!parList->empty()){
      for(ParPred*parPred:*parList)
        symbleTable.insert(new SymbolTable::SymbolEntry{parPred->name,parPred->type});
     }

      MonaTypeTag tag=body->chekType();

      if(tag!=Boolean)
        throw runtime_error("formula error in pred "+*name->str);
      
      if(!parList->empty()){
        for(ParPred*parPred:*parList)
          symbleTable.remove(parPred->name);
      }


      symbleTable.insert(new SymbolTable::SymbolEntryPred{name,aPred,parList});

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
            break;
          case Real:
             Hdeclaration.addDeclList(decls);
            break;
          case Boolean:
              Hdeclaration.addDeclList(decls);
           break;
      }

  if(!type.empty()){
      for(VarDecl*dec : *decls)
      {
        listELements+=","+*(dec->name->str);
        if(dec->where!=nullptr)
          listELements+=" where "+dec->where->setExpressionInString();
      }
      listELements.erase(0,1); //I delete the first colon
      MFormat+=type+" "+listELements+";\n";
    }
}

void Predicate_Declaration::insertDeclarationInString()
{
  string list;
    if(!parList->empty()){
      for(ParPred*parPred:*parList)
      {
        switch(parPred->type)
        {
          case Varname0:
            list+=" var0 "+*(parPred->name->str)+",";
          break;
          case Varname1:
            list+=" var1 "+*(parPred->name->str)+",";
          break;
          case Varname2:
            list+=" var2 "+*(parPred->name->str)+",";
          break;
        }
      }
      list.pop_back();
    }
    MFormat+="pred "+*(name->str)+"("+list+")="+body->setExpressionInString()+";\n";
}
 

MonaTypeTag UntypedExp_par_unpee::chekType()
{
  
 insertDecInSymbolTable();
 MonaTypeTag tag=exp->chekType();
  deleteElementSymbleTable();

  if(tag!=Boolean){
    string symbolOPerator=getSymbolOperator();
    throw runtime_error{"Error creating formula in "+symbolOPerator};
  }
return tag;
}

string UntypedExp_par_unpee::getSymbolOperator()
{
      switch(kind)
    {
      case ex1:
        return "ex1";
      break;
      case ex2:
        return "ex2";
      break;
      case ex0:
        return "ex0";
        break;
      case all0:
        return "all0";
      case all1:
        return "all1";
      break;
      default :
        return "all2";
      break;
    }
    return "";
}

string UntypedExp_par_unpee::setExpressionInString()
{
string result;
  insertDeclarationInString(result);
  result+=":\n"+exp->setExpressionInString();
  return result;
}

void UntypedExp_par_unpee::insertDeclarationInString(string& result)
{
  result+=getSymbolOperator();
  string listElements;

    for(VarDecl*dec:*nameList){
        listElements+=","+*(dec->name->str);
        if(dec->where!=nullptr)
            listElements+=" where "+dec->where->setExpressionInString();
   }

     listElements.erase(0,1); //I delete the first colon
     result+=" "+listElements;


}

void Variable_Declaration::insertDecInSymbolTable()
{
   for(VarDecl*dec : *decls)
    {
        symbleTable.insert(new SymbolTable::SymbolEntry{dec->name,declKind});
        if(dec->where!=nullptr)
          dec->where->chekType();
    }
}

void UntypedExp_par_unpee::insertDecInSymbolTable()
{
  MonaTypeTag type;

      switch(kind)
      {
        case ex1:
          type=Varname1;
        break;
        case ex2:
          type=Varname2;
        break;
        case ex0:
          type=Varname0;
        break;
        case all0:
          type=Varname0;
        break;
        case all1:
          type=Varname1;
        break;
        case all2:
          type=Varname2;
        break;
      }

    for(VarDecl*dec : *nameList)
        {
          symbleTable.insert(new SymbolTable::SymbolEntry{dec->name,type,aExp});
            if(dec->where!=nullptr)
                dec->where->chekType();
              
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
               controlNameParameter();
                return Boolean;
             break;
             case Integer:
                controlNameParameter();
                return Boolean;
               break;
            case Real:
                controlNameParameter();
                return Boolean;
              break;
            default:
                if(kind==uEqual || kind==uNotEqual)
                {
                  switch(e1)
                  {
                    case Varname2:
                      if(exp1->kind==uSet || exp2->kind==uSet)
                        return Boolean;
                      else
                      {
                        controlNameParameter();
                        return Boolean;

                      }
                    break;
                  }
                }
              break;
        }
    }
    string symbolOperator=getSymbolOperator();
    throw runtime_error{"the two operands for operator -> "+symbolOperator+" are of different type or are of the wrong type"};
}

void UntypedExp_par_ee_two::controlNameParameter()
{

    if(!exp1->getNameParameter().empty())
    {
      if(!exp2->getNameParameter().empty())
      {
        if(exp1->getNameParameter()!=exp2->getNameParameter())
          throw runtime_error{"error name3"};
      }
        
    }
   
}

string UntypedExp_par_ee_two::getSymbolOperator()
{

    switch(kind)
    {
      case uLess:
        return "<";
      break;
      case uLessEq:
        return "<=";
        break;
      case uGreater:
          return ">";
      break;
      case uGreaterEq:
        return ">=";
      break;
      case uEqual:
        return "=";
      break;
      default:
        return "~=";
        break;
    }
    
}

string UntypedExp_par_ee_two::setExpressionInString()
{
  string smtFile,e3;
    string e1=exp1->setExpressionInString();
    string e2=exp2->setExpressionInString();
    e3=e1+getSymbolOperator()+e2;
    
    HanldeExpressionFormat Hexp{e3};
    smtFile=Hexp.returnSMTLIBVersion();

    if(!smtFile.empty())
    {
        coun++;
        smT+="(define-fun C"+to_string(coun)+"((data Data) (data0 Data) (data1 Data)) Bool \n"+smtFile+")\n";
        return Hexp.returnMonaVersion()+to_string(coun);
    }
    return e3;
}


MonaTypeTag UntypedExp_Name::chekType()
{
        if(symbleTable.isPresentEntry(name))
        { 
            SymbolTable::SymbolEntry *entry=symbleTable.lookup(name);
            return (symbleTable.lookup(name))->tag;
        }
        
        throw runtime_error{"the element -> "+*(name->str)+ " has not been declared"};
}

string UntypedExp_Name::setExpressionInString()
{
  if(kind==uName)
    return *(name->str);

  return *(name->str)+"^";

}

string UntypedExp_Name::getNameParameter()
{
    if(symbleTable.lookup(name)->typeEntry==aExp)
        return *name->str;
    
  return "";
}

string UntypedExp_PathName::setExpressionInString()
{
  return *(name->str)+"."+*path;
}

MonaTypeTag UntypedExp_PathName::chekType()
{
  MonaTypeTag entryTag =UntypedExp_Name::chekType();
    if(entryTag==Varname1)
        return entryTag;
    
    throw runtime_error{"the element->"+*(name->str)+" is not order 1"};

}

MonaTypeTag UntypedExp_NameUp::chekType()
{
  MonaTypeTag entryTag =UntypedExp_Name::chekType();
  if(entryTag==Varname1)
    return entryTag;

   throw runtime_error{"the element->"+*(name->str)+" is not order 1"};
}


MonaTypeTag UntypedExp_par_ee::chekType()
{
        MonaTypeTag e1=exp1->chekType();
        MonaTypeTag e2=exp2->chekType();

          if(kind==uAnd || kind==uOr){
            
            if((e1==Varname0 || e1==Boolean ||  e1==aPred) &&  (e2==Varname0 || e2==Boolean||  e2==aPred)){
                return Boolean;
            }
          }
          else if(kind==uIn || kind==uNotIn)
          {
            if(e1==Varname1 && e2==Varname2)
              return Boolean;
          }
          else
          {
            if(e1==Boolean && e2==Boolean)
              return Boolean;
          }

          string symbolOperator=getSymbolOperator();
           throw runtime_error{"the two operands for operator ->"+symbolOperator+" are of different types"};

}

string UntypedExp_par_ee::getSymbolOperator()
{

    switch(kind)
    {
      case uAnd:
        return "&";
      break;
      case uOr:
        return "|";
      break;
      case uIn:
        return "in";
      break;
      case uImpl:
        return "=>";
      break;
      case uNotIn:
        return "notin";
      break;
      default :
        return "<=>";
      break;
      
    }
}

string UntypedExp_par_ee::setExpressionInString()
{
    string e1=exp1->setExpressionInString();
    string e2=exp2->setExpressionInString();
    HanldeExpressionFormat He1=HanldeExpressionFormat{e1};
    HanldeExpressionFormat He2=HanldeExpressionFormat{e2};
    string sE1=He1.returnSMTLIBVersion();
    string sE2=He2.returnSMTLIBVersion();

       if(!sE1.empty())
       {
        coun++;
        smT+="(define-fun C"+to_string(coun)+"((data Data) (data0 Data) (data1 Data)) Bool \n"+sE1+")\n";
        e1=He1.returnMonaVersion()+to_string(coun);
       }

      if(!sE2.empty())
      {
      coun++;
      smT+="(define-fun C"+to_string(coun)+"((data Data) (data0 Data) (data1 Data)) Bool \n"+sE2+")\n";
      e2=He2.returnMonaVersion()+to_string(coun);;
      }

    return e1+" "+getSymbolOperator()+" "+e2;

}


string Membership::setExpressionInString()
{
   string e1=exp1->setExpressionInString();
   string e2=exp2->setExpressionInString();
   return e1+" "+getSymbolOperator()+" "+e2;
}

MonaTypeTag UntypedExp_par_ea::chekType()
{
    MonaTypeTag e=exp->chekType();
    MonaTypeTag ar=aexp->evaluate();

    if(e==ar)
    {
        if(e==Integer || e==Real)
        {
              controlNameParameter();
               return e;  
         }
     }
      
  string symbolOperator=getSymbolOperator();
  throw runtime_error{symbolOperator+" operation error"};
}

void UntypedExp_par_ea::controlNameParameter()
{
    if(!exp->getNameParameter().empty())
    {
      if(!aexp->getNameParameter().empty())
      {
        
        if(exp->getNameParameter()!=aexp->getNameParameter())
          throw runtime_error{"error name1"};
      }
         this->name=new Name{new string{exp->getNameParameter()}};
         return;
    }
  else if(!aexp->getNameParameter().empty()){
     this->name=new Name{new string{aexp->getNameParameter()}};
     return;
  }

 this->name=nullptr;
}

string UntypedExp_par_ea::getSymbolOperator()
{
    switch(kind)
    {
      case uPlus:
        return "+";
      break;
      case uMinus:
        return "-";
      break;
      case uMult:
        return "*";
      break;
      case uDiv:
        return "/";
      break;
      default:
        return "%";
      break;
    }
}



string UntypedExp_par_ea::setExpressionInString()
{
      string e=exp->setExpressionInString();
      string ar=aexp->setArithString();
      return e+getSymbolOperator()+ar;
}

string UntypedExp_par_ea::getNameParameter()
{
    if(name!=nullptr)
        return *name->str;
    return "";
}

MonaTypeTag UntypedExp_Set::chekType()
{
    for(VarDecl*decl:*nameList)
    {
        if(symbleTable.isPresentEntry(decl->name))
        {
            if(symbleTable.lookup(decl->name)->tag!=Varname1)
              throw runtime_error{"there are elements of order other than one"};
        }
    }
    return Varname2;
}

string UntypedExp_Set::setExpressionInString()
{
  string result;
    
      for(VarDecl*decl:*nameList)
      {
        result+=","+*(decl->name->str);
      }
      result.erase(0,1);
    return "{"+result+"}";
}

MonaTypeTag UntypedExp_Boolean::chekType()
{
  return Boolean;
}
string UntypedExp_Boolean::setExpressionInString()
{
  if(kind==uTrue)
    return "true";
  else  
    return "false";
}

MonaTypeTag ArithExp_par_aa::evaluate()
{
    MonaTypeTag ae1=aexp1->evaluate();
    MonaTypeTag ae2=aexp2->evaluate();

    if(ae1==ae2)
    {
        if(ae1==Integer || ae1==Real){
              controlNameParameter();
              return ae1;
            }
    }
    string symbolOperator=getSymbolOperator();
    throw runtime_error{symbolOperator+"operation error"};
}

void ArithExp_par_aa::controlNameParameter()
{
  if(!aexp1->getNameParameter().empty())
  {
      if(!aexp2->getNameParameter().empty())
      {
        if(aexp1->getNameParameter()!=aexp2->getNameParameter())
          throw runtime_error{"error name2"};
      }
         this->name=new Name{new string{aexp1->getNameParameter()}};
         return;
  }
  else if(!aexp2->getNameParameter().empty()){
    this->name=new Name{new string{aexp2->getNameParameter()}};
    return;
  }

 this->name=nullptr;
}

string ArithExp_par_aa::getSymbolOperator()
{
  switch(kind)
    {
      case aAdd:
          return "+";
      break;
      case aSubtr:
        return "-";
      break;
      case aMult:
        return "*";
      break;
      case aDiv:
        return "/";
      default:
        return "%";
      break;
    }
}

string ArithExp_par_aa::setArithString()
{

    string ae1=aexp1->setArithString();
    string ae2=aexp2->setArithString();
    return ae1+getSymbolOperator()+ae2;
}
MonaTypeTag ArithExp_Integer::evaluate()
{
  return Integer;
}

string ArithExp_par_aa::getNameParameter()
{
    if(name!=nullptr)
      return *name->str;

  return "";
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
   
  throw runtime_error{"the element->"+*(dotName->name1->str)+" or the element->"+*(dotName->name2->str)+
        " has not been declared"};

}
string ArithExp_Const::setArithString()
{
  return *(dotName->name1->str)+"."+*(dotName->name2->str);
}

string ArithExp_Const::getNameParameter()
{
    if(symbleTable.lookup(dotName->name1)->typeEntry==aExp)
        return *dotName->name1->str;
    return "";
}

string ArithExp_ConstPathDotName::setArithString()
{
  return *(dotName->name1->str)+"."+*path+"."+*(dotName->name2->str);
}

MonaTypeTag UntypedExp_Dot::chekType()
{
     if(symbleTable.isPresentEntry(dotName))
                 return symbleTable.lookup(dotName)->tag;
              
          throw runtime_error{"the element ->"+*(dotName->name1->str)+" or the element->"+*(dotName->name2->str)+
          " has not been declared"};
}

string UntypedExp_Dot::setExpressionInString()
{
    if(kind!=uDotNameUp)
       return *(dotName->name1->str)+"."+*(dotName->name2->str);

    return *(dotName->name1->str)+"^"+"."+*(dotName->name2->str);

}

string UntypedExp_Dot::getNameParameter()
{
    if(symbleTable.lookup(dotName->name1)->typeEntry==aExp){
        return *dotName->name1->str;
    }

    return "";
}

string UntypedExp_DotNameNumber::setExpressionInString()
{
    return *(dotName->name1->str)+"."+*path+"."+*(dotName->name2->str);
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

MonaTypeTag UntypedExp_par_e::chekType()
{
  MonaTypeTag e1=exp->chekType();

    if(e1==Boolean)
      return Boolean;

    throw runtime_error{"incorrect use of not"};
}

string UntypedExp_par_e::setExpressionInString()
{
  string e=exp->setExpressionInString();
 return "~"+e;
  
}

MonaTypeTag UntypedExp_Int::chekType()
{
  return Integer;
}

string UntypedExp_Int::setExpressionInString()
{
  return to_string(n);
}

MonaTypeTag UntypedExp_Real::chekType()
{
  return Real;
}

string UntypedExp_Real::setExpressionInString()
{
  return to_string(n);
}


MonaTypeTag UntypedExp_Paren::chekType()
{
  return exp->chekType();
}

string UntypedExp_Paren::setExpressionInString()
{
  return "("+exp->setExpressionInString()+")";
}


UntypedExp_Call::UntypedExp_Call(Name*name,VarDeclList*decList):UntypedExp{uCall},name{name}
{
 if(!decList->empty()){
  parList=new ParList{};
    for(VarDecl*decl:*decList)
        parList->push_back(new ParPred{nu,decl->name});
 }else
    parList=new ParList{};

}

void UntypedExp_Call::setParList()
{
  if(!parList->empty()){
      for(ParPred *parPred:*parList)
      {
        if(symbleTable.isPresentEntry(parPred->name))
          parPred->type=symbleTable.lookup(parPred->name)->tag;
        else 
          throw runtime_error{"the element-> "+*parPred->name->str+" was not declared"};
      }
  }

}


MonaTypeTag UntypedExp_Call::chekType()
{
      setParList();
      if(symbleTable.isPresentEntry(name))
      {
        SymbolTable::SymbolEntry*entry=symbleTable.lookup(name);
          if(entry->tag==aPred)
          {
            SymbolTable::SymbolEntryPred *entryPred=static_cast<SymbolTable::SymbolEntryPred*>(entry);

          
            if(parList->size()==entryPred->parList->size())
            {
                auto t1=parList->begin();
                auto t2=entryPred->parList->begin();
                while(t1!=parList->end() && t2!=entryPred->parList->end())
                {

                  if((*t1)->type!=(*t2)->type){
                      throw runtime_error{"pred->"+*name->str+" was not declared"};
                  }
                  ++t1;
                  ++t2;
                }
                return Boolean;
            }
          }
      }
     throw runtime_error{"pred ->"+*name->str+" was not declared"};

}

string UntypedExp_Call::setExpressionInString()
{
  string list;
    if(!parList->empty()){
      for(ParPred *parPred:*parList)
        list+=*parPred->name->str+",";

      list.pop_back();
    }

      return *name->str+"("+list+")";
}

