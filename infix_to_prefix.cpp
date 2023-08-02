#include<iostream>
#include <stack>
using namespace std;




int main(){
	string infix_exp, prefix_exp;
	cout<<"Enter an infix expression: "<<endl;
	cin>>infix_exp;
	stack <char> stack;
	
	cout<<"INFIX EXPRESSION: "<<infix_exp<<endl;
	
	prefix=InfixtoPrefix(stack, infix_exp);

	cout<<"PREFIX EXPRESSION: "<<prefix_exp<<endl;
	
	return 0;
}
