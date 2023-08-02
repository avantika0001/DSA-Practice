#include <iostream>
#include <string>
using namespace std;

void increment(int a){
	a=a+1;
}


int main(){
	int a;
	a=10;
	increment(a);
	cout<<a<<endl; //wont get incremented //10 
	return 0;
}
