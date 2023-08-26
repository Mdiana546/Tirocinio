/*I see where insert const*/
// I must see where insert const element Expression
#include "Expression.hh"



bool Expression::isMSODExpression()
{
    if(expression.find('.')!=string::npos)
      return true;
    
    return false;
}

void Expression::setP()
{
  p['<']=p['>']=p['=']=p[lessEqual]=p[greaterEqual]=1,p['+'] = p['-']=2, p['/'] = p['*'] =p['%']= 3;
}

void Expression::replaceOperator(string oldSubStr,char c)
{
  size_t pos=0;
   while ((pos = expression.find(oldSubStr, pos)) != string::npos) {
        expression.replace(pos, oldSubStr.length(),1, c);
        pos +=1;
    }
    
}

bool Expression::isOperator(char c)
{
       if(c=='<' || c=='>' || c=='=' || c==lessEqual || c==greaterEqual || c=='+' || c=='-'|| c=='%' || c=='/' || c=='*')
        return true;
        
      return false;
}

string Expression::returnNameVar(string& str,int& index){

std::string rstring;
      while(!isOperator(str[index]) && index<str.size() && str[index]!=')')
      {
        rstring+=str[index];
        index++;
      }
      index--;
  return rstring;
  
}

void Expression::creatElementsN()
{
Node*t,*t1,*t2;
char op;

                op=sC.top();
                t=new Node(string(1,op));
                sC.pop();
                t1=sN.top();
                sN.pop();
                t2=sN.top();
                sN.pop();
                t->left=t2;
                t->right=t1;
                sN.push(t);

}

void Expression::buildTree()
{
sC.push('(');
    for(int i=0;i<expression.length();i++)
    {
        if(isalpha(expression[i]) || isdigit(expression[i]))
        {
          Node*t=new Node{returnNameVar(expression,i)};
          sN.push(t);
        }
        else if(expression[i]==')')
        {
             while( sC.top()!='(')
              creatElementsN();
          
            sC.pop();
      }
    else
    {
      while( sC.top() != '(' && p[sC.top()]>=p[expression[i]])
        creatElementsN();
        
      sC.push(expression[i]);
     }
  }
root=sN.top();
}


Expression::Expression(string expression):expression{expression},root{nullptr}
{
  if(isMSODExpression())
  {
    replaceOperator("<=",lessEqual);
    replaceOperator(">=",greaterEqual);
    setP();
    this->expression+=")";
    buildTree();
  }

}

void Expression::setVar(Node*node)
{

        if(node->left ==nullptr){
                if(!isdigit(node->data[0]))
                {
                    size_t pos=node->data.find('.');
                    string sub=node->data.substr(0,pos);
                    expression+=","+sub;
                }
          }
          else{
            setVar(node->left);
            setVar(node->right);
          }
}

void Expression::setMonaExpression()
{
size_t pos=expression.find(",");
if(pos!=string::npos)
  expression.erase(pos,1);
  
}

string  Expression::returnMonaVersion(){  

      if(root!=nullptr){
        expression.clear();
        setVar(root);
        setMonaExpression();
        expression="{"+expression+"}";
        }
      
    return expression;
        
}


string Expression:: checkOperator(string& c)
{


    if(c==string(1,lessEqual))
      return "<=";
    else if(c==string(1,greaterEqual))
      return ">=";
    else
      return c;
      
}

string Expression::generateSMTLIB(Node*node)
{ 
    	if(node->left ==nullptr && node->right == nullptr)
	  return node->data;
	  
	string leftExpr=generateSMTLIB(node->left);
	string rightExpr=generateSMTLIB(node->right);
	
	return "("+ checkOperator(node->data)+ " " + leftExpr+" "+rightExpr+")";
}

string  Expression:: returnSMTLIBVersion()
{
    if(root!=nullptr)
      return generateSMTLIB(root);
  return "";   
}

Expression::~Expression()
{
  delete root;
}


/*struct node*/
Expression::Node::Node(string data):data{data},left{nullptr},right{nullptr}
{}

Expression::Node::~Node()
{
  delete left;
  delete right;
}


