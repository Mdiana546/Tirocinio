/*I see where insert const*/
// I must see where insert const element Expression
#include "HandleExpressionFormat.hh"



bool HanldeExpressionFormat::isMSODExpression(string &str)
{
 auto pos=str.find(".");

  if(pos!=string::npos){

    if((str[pos+1]=='0' || str[pos+1]=='1') & (str[pos+2]=='.'))
        return true;
    else if(isalpha(str[pos+1]))
      return true;
  }
    return false;
}

void HanldeExpressionFormat::setP()
{
  p['&']=p['|']=1,p['<']=p['>']=p['=']=p[lessEqual]=p[greaterEqual]=p[NotEqual]=2,p['+'] = p['-']=3, p['/'] = p['*'] =p['%']= 4;
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
    
       if(c=='<' || c=='>' || c=='=' || c==lessEqual || c==greaterEqual|| c==NotEqual || c=='+' || c=='-'|| c=='%' || c=='/' || c=='*'|| c=='&'|| c=='|')
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


void HanldeExpressionFormat:: deleteParenAndSpace()
{
  expression.erase(std::remove(expression.begin(), expression.end(), '('), expression.end());
  expression.erase(std::remove(expression.begin(), expression.end(), ')'), expression.end());
  expression.erase(std::remove(expression.begin(),expression.end(),' '),expression.end());
}

HanldeExpressionFormat::HanldeExpressionFormat(string expression):expression{expression},root{nullptr}
{
  if(isMSODExpression(expression))
  {
    deleteParenAndSpace();
    replaceOperator("<=",lessEqual);
    replaceOperator(">=",greaterEqual);
    replaceOperator("~=",NotEqual);
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
                   size_t pos=node->data.find('^');
                  if(pos==string::npos)
                      pos=node->data.find('.');

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
set<string> words;
stringstream s(expression);
string word;

  while(getline(s,word,','))
    words.insert(word);
expression.clear();
  for(string str:words)
    expression+=str+" ";
  
}

string  HanldeExpressionFormat::returnMonaVersion(){  

      if(root!=nullptr){
        expression.clear();
        setVar(root);
        setMonaExpression();
        expression=expression +"in C";
        }
      
    return expression;
        
}


string HanldeExpressionFormat:: checkOperator(string& c)
{


    if(c==string(1,lessEqual))
      return "<=";
    else if(c==string(1,greaterEqual))
      return ">=";
    else if(c==string(1,NotEqual))
      return "~=";
    else
      return c;
      
}

bool HanldeExpressionFormat::isANumber(string& str)
{
     for(int index=0;index<str.length();index)
          {
              if(isalpha(str[index]))
                return false;
          }
        return true;
}

string HanldeExpressionFormat::generateSMTLIB(Node*node)
{ 
    	if(node->left ==nullptr && node->right == nullptr){
        string result;
            if(!isANumber(node->data))
	             result=changePointWithSpace(node->data);
            else 
              result=node->data;
          return result;
      }
	  
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
  auto lastIndex=str.find_last_of(".");
  auto firstIndex=str.find(".");

    if(lastIndex==firstIndex)
        return "("+str.substr(lastIndex+1,str.length()-(lastIndex+1))+" data)";
    else{
         return "("+str.substr(lastIndex+1,str.length()-(lastIndex+1))+" data"+string{str[lastIndex-1]}+")";

    }
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

