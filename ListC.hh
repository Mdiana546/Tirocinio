#include<list>
#include<set>
#include <iostream>
using std::list;

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


