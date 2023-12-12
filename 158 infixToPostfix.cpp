//   m-2 run
// C++ code to convert infix expression to postfix

#include <bits/stdc++.h>
using namespace std;

// Function to return precedence of operators
int prec(char c)
{
	if (c == '^')
		return 3;
	else if (c == '/' || c == '*')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	else
		return -1;
}

// The main function to convert infix expression
// to postfix expression
void infixToPostfix(string s)
{

	stack<char> st;
	string result;

	for (int i = 0; i < s.length(); i++) {
		char c = s[i];

		// If the scanned character is
		// an operand, add it to output string.
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'))
			result += c;

		// If the scanned character is an
		// ‘(‘, push it to the stack.
		else if (c == '(')
			st.push('(');

		// If the scanned character is an ‘)’,
		// pop and add to output string from the stack
		// until an ‘(‘ is encountered.
		else if (c == ')') {
			while (st.top() != '(') {
				result += st.top();
				st.pop();
			}
			st.pop();
		}

		// If an operator is scanned
		else {
			while (!st.empty()
				&& prec(s[i]) <= prec(st.top())) {
				result += st.top();
				st.pop();
			}
			st.push(c);
		}
	}

	// Pop all the remaining elements from the stack
	while (!st.empty()) {
		result += st.top();
		st.pop();
	}

	cout << result << endl;
}

// Driver code
int main()
{
	string exp = "(a-b/c)*(a/k-l)";

	// Function call
	infixToPostfix(exp);

	return 0;
}




//   m-1 run
#include<bits/stdc++.h>
using namespace std;

int precedence(char c){
    if(c=='^'){
      return 3;
    }
    else if (c=='*'||c=='/')
    {
       return 2;
    }
    else if (c=='+'||c=='-')
    {
       return 1;
    }
    else{
        return -1;
    }    
    
}

string infixToPostfix(string s){
    // stack<int>st;
    stack<char>st;
    string res;
    for(int i=0;i<s.length();i++){

        // if(s[i]>='a'||s[i]<='z'||s[i]>='A'||s[i]<='Z'){

         if((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){    
            res+=s[i];
        }
        else if (s[i]=='(')
        {
           st.push(s[i]);
        }
        else if (s[i]==')')
        {          
           while(!st.empty()&&st.top()!='(' ) {
             res+=st.top();
             st.pop();
           }
           if(!st.empty()){
            st.pop();
           }
        }
        else{

            while(!st.empty() && precedence(st.top())>precedence(s[i])){
                res+=st.top();
                st.pop();
            }

            st.push(s[i]);
        }
        
    
    }
    while(!st.empty()){
            res+=st.top();
            st.pop();
        } 
    return res;
}

int main(){

    cout<<infixToPostfix("(a-b/c)*(a/k-l)");
    
}