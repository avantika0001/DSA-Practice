#include <iostream>
#include <string>
using namespace std;

int main(){
	int val =20;
	int *ptr;
	ptr=&val; //&val= address of val
	// can be also written as int* ptr=&val //means the same thing
	//*p= value at address pointed by p
	
	cout<<"The value at ptr = "<<ptr<<endl;
	cout<<"The value at var = "<<val<<endl;
	cout<<"The value at *ptr ="<<*ptr<<endl;
	cout<<""<<endl;
	
	
	/*
	int a = 10;
	int *p;
	p=&a;
	cout<<"Address of 'a' is: "<<p<<endl;
	cout<<"Value at 'a' is: "<<*p<<endl;
	int b=20;
	*p=b; //we only changed the value at address pointed by 'p' to the value of 'b' 
	cout<<"Value at 'a' after change is: "<<*p<<endl;
	*/
	
	
	/*	//pointer arithmetic
	int a = 10;
	int *p;
	p=&a;
	cout<<""<<endl;
	cout<<"Address at address p :"<<p<<endl;    // assume p =2002
	cout<<"Address at address p+1 :"<<p+1<<endl; //p now will incrememnt by 4 bytes bcoz int varianle size is 4 bytes answer here will be 2006 , to got to next integer address we need to skip 4 bytes
	cout<<"value at address p :"<<*p<<endl;
	cout<<"value at address p+1 :"<<*(p+1)<<endl; //this gives garbage value //we can reach any address in C with pointer arithmetic(dangerous thing)
	*/
	
	/*
	//pointeras are strongly typed ie int needs int pointer, char needs char pointer
	//why so? because we use them to dereferenceing (access/modify value)
	int a= 1025;
	//1025 = 00000000 00000000 00000100(p0+1) 00000001(p0)
	int *p;
	p=&a;
	cout<<"Size of integer is: "<<sizeof(int)<<endl;
	cout<<"Address = "<<p<<" Value= "<<*p<<endl;
	char *p0;
	p0=(char*)p; //typecasting
	cout<<"Size of char is: "<<sizeof(char)<<endl;
	cout<<"Address = "<<p0<<" Value= "<<*p0<<endl; //value =1 bcoz byte1 val =1
	*/
	
	//void pointers -cant dereference it -only print address
	
	 
	
	
	
	
	
	
	return 0;
}
