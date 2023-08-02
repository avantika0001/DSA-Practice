/*DYNAMIC MEMORY ALLOCATION IN C++
i.e we take an initialize an array and we ask user to enter its size and also all the elements in it*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	int size;
	int* ptr;
	cout<<"Enter the size of array: "<<endl;
	cin>>size;
	ptr = new int[size];
	cout<<"Enter elements to be stored in the array: "<<endl;
	for(int i=0;i<size;i++){
		cin>>ptr[i];
	}
	cout<<" "<<endl<<endl;
	cout<<"Values in the array are: "<<endl;
	for(int i=0;i<size;i++){
		cout<<ptr[i]<<" ";
	}
	
	return 0;
}
