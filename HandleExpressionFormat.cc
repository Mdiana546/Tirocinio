/*I see where insert const*/
// I must see where insert const element Expression
#include "HandleExpressionFormat.hh"



bool HanldeExpressionFormat::isMSODExpression(string &str)
{
    if(str.find('.')!=string::npos)
      return true;
    
    return false;
}

void HanldeExpressionFormat::setP()
{
  p['<']=p['>']=p['=']=p[lessEqual]=p[greaterEqual]=1,p['+'] = p['-']=2, p['/'] = p['*'] =p['%']= 3;
}

void HanldeExpressionFormat::replaceOperator(string oldSubStr,char c)
{
  size_t pos=0;
   while ((pos = expression.find(oldSubStr, pos)) != string::npos) {
        expression.replace(pos, oldSubStr.length(),1, c);
        pos +=1;
    }
    
}

bool HanldeExpressionFormat::isOperator(char c)
{
       if(c=='<' || c=='>' || c=='=' || c==lessEqual || c==greaterEqual || c=='+' || c=='-'|| c=='%' || c=='/' || c=='*')
        return true;
        
      return false;
}

string HanldeExpressionFormat::returnNameVar(string& str,int& index){

std::string rstring;
      while(!isOperator(str[index]) && index<str.size() && str[index]!=')')
      {
        rstring+=str[index];
        index++;
      }
      index--;
  return rstring;
  
}

void HanldeExpressionFormat::creatElementsN()
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

void HanldeExpressionFormat::buildTree()
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


HanldeExpressionFormat::HanldeExpressionFormat(string expression):expression{expression},root{nullptr}
{
  if(isMSODExpression(expression))
  {
    replaceOperator("<=",lessEqual);
    replaceOperator(">=",greaterEqual);
    setP();
    this->expression+=")";
    buildTree();
  }

}

void HanldeExpressionFormat::setVar(Node*node)
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

void HanldeExpressionFormat::setMonaExpression()
{
size_t pos=expression.find(",");
if(pos!=string::npos)
  expression.erase(pos,1);
  
}

string  HanldeExpressionFormat::returnMonaVersion(){  

      if(root!=nullptr){
        expression.clear();
        setVar(root);
        setMonaExpression();
        expression="{"+expression+"}";
        }
      
    return expression;
        
}


string HanldeExpressionFormat:: checkOperator(string& c)
{


    if(c==string(1,lessEqual))
      return "<=";
    else if(c==string(1,greaterEqual))
      return ">=";
    else
      return c;
      
}

string HanldeExpressionFormat::generateSMTLIB(Node*node)
{ 
    	if(node->left ==nullptr && node->right == nullptr)
	        return changePointWithSpace(node->data);
	  
	string leftExpr=generateSMTLIB(node->left);
	string rightExpr=generateSMTLIB(node->right);
	
	return "("+ checkOperator(node->data)+ " " + leftExpr+" "+rightExpr+")";
}

string  HanldeExpressionFormat:: returnSMTLIBVersion()
{
    if(root!=nullptr)
      return generateSMTLIB(root);
  return "";   
}

string HanldeExpressionFormat::changePointWithSpace(string str)
{
  auto index=str.find(".");
  if(index!=string::npos)
    return str.replace(index,1," ");
  return str;
}

HanldeExpressionFormat::~HanldeExpressionFormat()
{
  delete root;
}


/*struct node*/
HanldeExpressionFormat::Node::Node(string data):data{data},left{nullptr},right{nullptr}
{}

HanldeExpressionFormat::Node::~Node()
{
  delete left;
  delete right;
}

