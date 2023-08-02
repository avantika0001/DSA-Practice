#include <iostream>
#include <stack>
using namespace std;

//function to check for operator
bool isOperator(char c){
	if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^'){
		return true;
	}else{
		return false;
	}
}

int precedence(char c){
	if(c =='^'){
		return 3;
	}
	else if(c=='*'||c=='/'){
		return 2;	
	}
	else if(c=='+'||c=='-'){
		return 1;	
	}
	else{
		return -1;	//this is the case of '(' and ')'
	}
	
}

string InfixToPostfix(stack<char> s, string infix){
	string postfix;
	//scan the string 1st to last char
	for(int i=0;i<infix.length();i++){
		
		if((infix[i]>='a' && infix[i]<='z')||(infix[i]>='A' && infix[i]<='Z')){		//check fot operand
			postfix+=infix[i];	//print in final string
		}
		else if(infix[i]=='('){
			s.push(infix[i]);
		}
		else if(infix[i]==')'){		//till stack =empty or we find "(", pop and print
			while(s.top()!='(' && (!s.empty())) 	//till stack not empty and top of stck is not '(' ; keep popping
			{
				char temp= s.top();		//s.top returns the top of the stack
				postfix+=temp;	//appended to postfix exp i.e. print the top
				s.pop();	//removed the top of stack
			}
			//while loop stops when top of stack= "("
			//which means we still have "(" present in the top of the stack
			//we might get extra brackets due to this in the ans
			//so we use this if block
			if(s.top()=='('){
				s.pop();
			}
		}
		else if(isOperator(infix[i])){		//we can also make this else block by logic but for understanding
			if(s.empty()){
				s.push(infix[i]);	//push to stack
			}else{	//stack NOT empty
				if(precedence(infix[i])>precedence(s.top())){
					s.push(infix[i]);	
				}else if(precedence(infix[i])==precedence(s.top())&&(infix[i]=='^')){	//s.top and incoming opr both= '^'
					s.push(infix[i]);	//associativity is right to left for "^"
				}else{
					while((!s.empty())&&(precedence(infix[i])<=precedence(s.top()))){	//opr has low/equ preced we pop the top
						char temp= s.top();		
						postfix+=temp;	
						s.pop();
					}
					//while loop stops either when stck empty or preced infix[i] becomes > s.top preced
					//in case of preced of infix[i] > preced s.top(); we have to push the incoming opr to stack as we do in line below
					s.push(infix[i]);
				}
			}
		}		
	}
//print remain operators in stack	
while(!s.empty()){
		postfix+=s.top();	//add to postfix
		s.pop();	//popped 
	}	
	return postfix; 	
}

int main(){
	string infix_exp, postfix_exp;
	
	cout<<"Enter an Infix expression: "<<endl;
	cin>>infix_exp;
	
	stack <char> stack; //with help of STL standard template library 
	cout<<"INFIX EXPRESSION: "<<infix_exp<<endl;
	postfix_exp = InfixToPostfix(stack, infix_exp);
	cout<<endl<<"POSTFIX EXPRESSION: "<<postfix_exp<<endl;
	
	return 0;
}

