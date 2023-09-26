#include "SymbolTable.hh"
#include<iostream>


 
SymbolTable::SymbolTable(SymbolEntry*symbolEntry)
{
    insert(symbolEntry); 
}


void SymbolTable::insert(SymbolEntry* entry)
{

        if(entry->global){

             if(isPresentEntry(entry->name))
                throw runtime_error{"element \""+*entry->name->str+"\" is already present"};
            else
            {
               int key=hashValue(entry->name);
               table[key].push_front(entry);

            }

        }
        else  
        {
            int key=hashValue(entry->name);
            table[key].push_front(entry);
        }

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
     if(isPresentEntry(dotName->name1) && isPresentEntry(dotName->name2)){

        if(lookup(dotName->name1)->tag==Varname1)
            return true;
        else 
            return false;
     }
     return false;
}

SymbolTable::SymbolEntry* SymbolTable::lookup(Name* name)
{
        if(isPresentEntry(name))
            return getElement(name);
            
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
    if(*(ent->name->str)==*name->str)
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

bool SymbolTable::isTagPresent(MonaTypeTag tag)
{
    for(const auto& pair:table)
    {
        for(SymbolEntry*entry:pair.second)
        {
            if(entry->tag==aPred)
                return true;
        }
    }
    return false;
}

SymbolTable::~SymbolTable(){
    
    for(auto const& map:table)
    {
        for(SymbolEntry*entry:map.second){
                delete entry;
        }
                    
    }
}