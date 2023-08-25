#include "SymbolTable.hh"
#include<iostream>

void SymbolTable::insert(SymbolEntry* entry)
{


    if(!isPresentEntry(entry->name))
    {
            int key=hashValue(entry->name);
            table[key].push_back(entry);

    }
    else{}
        //handle this error

}

void SymbolTable::remove(Name*name)
{
    if(isPresentEntry(name))
    {
        int key=hashValue(name);
        table[key].remove(getElement(name));
    }
}

bool SymbolTable::isPresentEntry(Name*name)
{
      int key=hashValue(name);
      list<SymbolEntry*>& listEl=table[key];
         if(!listEl.empty())
           {
                if(getElement(name)!=nullptr)
                    return true;
           }
     return false;
}

bool SymbolTable::isPresentEntry(DotName*dotName)
{
    return isPresentEntry(dotName->name1) && isPresentEntry(dotName->name2);
}

SymbolTable::SymbolEntry* SymbolTable::lookup(Name* name)
{
        if(isPresentEntry(name))
        {
            int key=hashValue(name);
            return getElement(name);
        }
    return nullptr;
}

SymbolTable::SymbolEntry* SymbolTable::lookup(DotName*dotName)
{
    if(isPresentEntry(dotName))
        return lookup(dotName->name2);
    
    return nullptr;
}

SymbolTable::SymbolEntry* SymbolTable::getElement(Name*name)
{

 int key=hashValue(name);
 list<SymbolEntry*> l=table[key];
 for(SymbolEntry* ent:l)
 {
    if(*(ent->name)==*name)
        return ent;
 }
 return nullptr;

}

int SymbolTable::hashValue(Name*name)
{
 unsigned long hash = 5381; // Initial hash value
string s=*(name->str);
    for (char c :s ) {
        hash = ((hash << 5) + hash) + c; // hash * 33 + c
    }
 return hash;
}
