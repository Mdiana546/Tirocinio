#include<list>
#include<set>
#include <iostream>
using std::list;


template<typename T>
class Compare{
    public:
        bool operator()(const T& first,const T& second) const
        {
            return *(first->name->str)!=*(second->name->str);
        }
};



template<typename T>
class ListC:public list<T>
{
    public:
        virtual~ListC()
        {
            for(auto it=this->begin();it!=this->end();++it)
                delete *it;
        }
};


