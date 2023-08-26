// C++ implementation of the approach
#include <bits/stdc++.h>
#include<string>
#define lessEqual '#'
#define greaterEqual '@'
using namespace std;

// Tree Structure
typedef struct node
{
	std::string data;
	struct node *left, *right;
} * nptr;

// Function to create new node
nptr newNode(std::string str)
{
	nptr n = new node;
	n->data = str;
	n->left = n->right = nullptr;
	return n;
}




bool isOperator(char c)
{
      if(c=='<' || c=='>' || c=='=' || c==lessEqual || c==greaterEqual || c=='+' || c=='-'|| c=='%' || c=='/' || c=='*')
        return true;
        
      return false;
}

std::string returnName(std::string& str,int& index)
{
std::string rstring;
      while(!isOperator(str[index]) && index<str.size() && str[index]!=')')
      {
        rstring+=str[index];
        index++;
      }
      index--;
  return rstring;
}

// Function to build Expression Tree
nptr build(string& s)
{
  char op;
        s+=')';
	// Stack to hold nodes
	stack<nptr> stN;

	// Stack to hold chars
	stack<char> stC;
	nptr t, t1, t2;

	// Prioritising the operators
	int p[123] = { 0 };
	p['<']=p['>']=p['=']=p[lessEqual]=p[greaterEqual]=1,p['+'] = p['-']=2, p['/'] = p['*'] =p['%']= 3,
	p[')'] = 0;
	
	stC.push('(');

	for (int i = 0; i < s.length(); i++)
	{

		// Push the operands in node stack
		if (isalpha(s[i]) || isdigit(s[i]))
		{
		  	t=newNode(returnName(s,i));
			stN.push(t);
		}
		
		else if (s[i] == ')') {
			while (!stC.empty() && stC.top() != '(')
			{
			        op=stC.top();
				t = newNode(std::string(1,op));
				stC.pop();
				t1 = stN.top();
				stN.pop();
				t2 = stN.top();
				stN.pop();
				t->left = t2;
				t->right = t1;
				stN.push(t);
			}
			stC.pop();
		}
		
		else 
		{
			// If an operator with lower or
			// same associativity appears
			while ( stC.top() != '(' && (p[stC.top()] >= p[s[i]]))
			{

				// Get and remove the top element
				// from the character stack
			        op=stC.top();
				t = newNode(std::string(1,op));
				stC.pop();

				// Get and remove the top element
				// from the node stack
				t1 = stN.top();
				stN.pop();

				// Get and remove the currently top
				// element from the node stack
				t2 = stN.top();
				stN.pop();

				// Update the tree
				t->left = t2;
				t->right = t1;

				// Push the node to the node stack
				stN.push(t);
			}

			// Push s[i] to char stack
			stC.push(s[i]);
		}

	}
	
	t = stN.top();
	return t;
}


std::string checkOperator(std::string c)
{


    if(c==string(1,lessEqual))
      return "<=";
    else if(c==string(1,greaterEqual))
      return ">=";
    else
      return c;
      
}
// Function to print the post order
// traversal of the tree
std::string generateSMTLIB(nptr node)
{
	if(node->left ==nullptr && node->right == nullptr)
	  return node->data;
	  
	std::string leftExpr=generateSMTLIB(node->left);
	std::string rightExpr=generateSMTLIB(node->right);
	
	return "("+ checkOperator(node->data)+ " " + leftExpr+" "+rightExpr+")";
}




// Driver code
int main()
{
std::string str;
        cout<<"you insert a expression"<<endl;
        cin>>str;
	nptr root = build(str);
        cout<<generateSMTLIB(root);
        
	return 0;
}

