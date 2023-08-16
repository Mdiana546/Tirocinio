#include<iostream>
#include "Expression.hpp"
#include "HandleFiles.hpp"
using std::cin;
using std::cout;
using std::endl;

int main()
{
string expression;
cout<<"you insert a expression"<<endl;
cin>>expression;
Expression exp{expression};
HandleFiles f{};
string str=exp.returnMonaVersion();
f.writeOnMonaFile(str);
str=exp.returnSMTLIBVersion();
f.writeOnSMTLIBFile(str);
}
