#include <iostream>
#include <unordered_map>
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

  string *str;
};


class symbolTable {
public:

unordered_map<int, symbolEntry*> table;

    class symbolEntry {
        public:
        Name*name;
        MonaTypetag tag;
    };
virtual ~symbolTable();//it must delete symbolEntry for each entry

    void insert(symbolEntry* entry);
    void remove(Name*name);
    bool isPresentEntry(Name *name);
    void freeAll();
    symbolEntry& lookup(Name*name);
private:
  int hashValue(Name* name);
};

