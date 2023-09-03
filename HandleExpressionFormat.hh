/*I see where insert const*/

#include<string>
#include<stack>
#include <iostream>
#include <sstream>
#include<algorithm>
#include <set>
#define lessEqual '#'
#define greaterEqual '@'
#define NotEqual '$'
using std::stack;
using std::string;
using std::stringstream;
using std::set;

class HanldeExpressionFormat
{

private:


      struct Node{
            string data;
             Node *left,*right;
           Node(string );
          virtual ~Node();
       };
		
string expression;
stack<Node*> sN;
stack<char> sC;
Node * root;
int p[123];
		
bool isMSODExpression(string& );
void replaceOperator(string, char);
bool isOperator(char );
void setP();
void creatElementsN();
void buildTree();
string generateSMTLIB(Node*);
void setVar(Node*);
string returnNameVar(string&,int&);
string checkOperator(string& );
void setMonaExpression();
string changePointWithSpace(string);
bool isANumber(string&);
void deleteParen();
public:

/*
  I must initialize root, if string is a MSOD_VERSION
  I must initialize p if string is MSOD_VERSION*/
  
	HanldeExpressionFormat(string );
/*
	I execute build if, root is differen
	t of null,otherwise I return string expression*/
	
	string returnMonaVersion();
	
/* return error if expression isn't in MSOD_VERSION*/

	string returnSMTLIBVersion();
	
virtual ~HanldeExpressionFormat();


};
