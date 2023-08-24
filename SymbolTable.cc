#include<SymbolTable.hh>

void symbolTable::insert(symbolEntry*entry)
{

    if(!isPresentEntry(entry->name))
    {
            int key=hashValue(entry->name);
            table[key].push_back(entry);
    }
    else
        //handle this error

}

void symbolTable::remove(Name*name)
{
    if(isPresentEntry(name))
    {
        int key=hashValue(name);
        table[key].remove(getElement(name));
    }
}

bool symbolTable::isPresentEntry(Name*name)
{
      int key=hashValue(name);
      list<symbolEntry*>& listEl=table[key];
         if(!listEl.empty())
           {
                if(getElement(name)!=nullptr)
                    return true;
           }
     return false;
}

bool symbolTable::isPresentEntry(Dotname*dotName)
{
    return isPresentEntry(dotName->name1)&&isPresentEntry(dotName->name2);
}
symbolEntry* symbolTable::lookup(Name* name)
{
        if(isPresentEntry(name))
        {
            int key=hashValue(name);
            return getElement(name);
        }
}

symbolEntry* symbolTable::getElement(Name*name)
{

 int key=hashValue(name);
 for(symbolEntry* ent:table[key])
 {
    if(*(ent->name)==*name)
        return ent;
 }
 return nullptr;

}

int symbolTable::hashValue(Name*name)
{
int hash;
    for(char c:*name)
    {
        hash+=static_cast<int>(c);
    }
 return;
}

void symbolTable::freeAll()
{

}