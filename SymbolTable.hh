#ifndef __SYMBLE_TABLE_H
#define __SYMBLE_TABLE_H

#include <unordered_map>
#include<list>
#include<string>
using namespace std;

enum MonaTypeTag { 
  Varname0, Varname1, Varname2, VarnameTree,
  Parname0, Parname1, Parname2, ParnameU,
  Univname, Predname, Constname, Statespacename,Integer,Boolean,Real,
  aInteger,aReal,aConst,nu,aAdd,aDiv,aMult,aSubtr,aModul,aDotName,aDotNameNumber,aPred,aDec,aExp,aPred_Macro
};


class Name {
public:
  Name() {} // dummy
  Name(string *s) :
    str(s){}
  virtual ~Name(){delete str;}


  string *str;
};

class DotName {
  public:
    DotName(Name* name1,Name* name2):name1{name1},name2{name2}{}

    virtual ~DotName(){delete name1;delete name2;}
    Name *name1 ;
    Name * name2;
};


class ParPred{
  public:

    ParPred(MonaTypeTag type,Name*name):type{type},name{name}{}
    virtual ~ParPred(){delete name;}

    MonaTypeTag type;
    Name*name;


};

class ParList:public list<ParPred*>
{};


class SymbolTable {
public:


    class SymbolEntry { 
        public:
          Name*name;
          MonaTypeTag tag;
          SymbolEntry(Name*name,MonaTypeTag tag):name{name},tag{tag}{}
          virtual ~SymbolEntry(){delete name;}
    };


    class SymbolEntryPred:public SymbolEntry
    {
      public:
        SymbolEntryPred(Name*name,MonaTypeTag tag,ParList*parList):SymbolEntry{name,tag},parList{parList}{}
        virtual ~SymbolEntryPred(){delete parList;}

        ParList *parList;
    };

unordered_map<int, list<SymbolEntry*>> table;

    void insert(SymbolEntry* entry);
    void remove(Name * name);
    bool isPresentEntry(Name *name);
    bool isPresentEntry(DotName *dotName);
    SymbolEntry*lookup(DotName *dotName);
    SymbolEntry* lookup(Name*name);
    bool isTagPresent(MonaTypeTag tag);

private:
  int hashValue(Name* name);
  SymbolEntry*getElement(Name*name);
};
#endif