#include <iostream>
#include <unordered_map>
#include<list>
using namespace std;

enum MonaTypeTag { 
  Varname0, Varname1, Varname2, VarnameTree,
  Parname0, Parname1, Parname2, ParnameU,
  Univname, Predname, Constname, Statespacename,ymbolTable.insertVa
  Typename,Integer,Boolean,Real;
};


class Name {
public:
  Name() {} // dummy
  Name(string *s) :
    str(s){}
  Name(const Name& n) :
    str(n.str){}
  virtual ~Name(){delete str}
  bool operator==(const Name& cname){return *str==*cname.str}

  string *str;
};

class DotName {
{
    DotName(Name* name1,Name* name2):Name1{name1},Name2{name2}
    DotName(const DotName& n):str{n.str},str2{n.str2}
    {}
    virtual ~DotName{delete name1;delete name2;}
    Name *name1 ;
    Name * name2;
}


class symbolTable {
public:

unordered_map<int, list<symbolEntry*>> table;

    class symbolEntry {
        public:
        Name*name;
        MonaTypetag tag;
        ~virtual symbolEntry(){delete name;}
    };
virtual ~symbolTable();//it must delete symbolEntry for each entry

    void insert(symbolEntry* entry);
    void remove(Name * name);
    bool isPresentEntry(Name *name);
    bool isPresentEntry(DotName *dotName);
    void freeAll();
    symbolEntry*lookup(DotName *dotName) //it muste return tag of secon name
    symbolEntry* lookup(Name*name);
private:
  int hashValue(Name* name);
  symbolEntry*getElement(Name*name);
  void
};

