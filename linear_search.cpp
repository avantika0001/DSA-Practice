#include <iostream>
#include <string>
using namespace std;

//linear search- array traversal eg:searching a certain card in a deck of cards

int LinearSearch(int arr[], int size, int element){
	
	for(int i=0;i<size;i++){
		if(arr[i]==element){
			return i;
		}
	}
	return -1;
	
}

int main(){
	int element;
	int size;
	int* ptr;
	cout<<"Enter the size of array: "<<endl;
	cin>>size;
	ptr = new int[size];
	cout<<"Enter elements to be stored in the array: "<<endl;
	for(int i=0;i<size;i++){
		cin>>ptr[i];
	}
	cout<<"Enter element to be searched in the array: "<<endl;
	cin>>element;
	

    int searchIndex = LinearSearch(ptr, size, element);
    if(searchIndex==-1){
    	cout<<"The element not found!"<<endl;	
	}else{
		 cout<<"The element "<<element<<" was found at index "<<searchIndex<<endl;	
	}

//    hard coding:   
//	  int arr[] = {1,3,5,56,4,3,23,5,4,54634,56,34};
//    int size = sizeof(arr)/sizeof(int);
//    int element = 4;
//	  refer dynamic memory allocation code to refer to how to accept an array from user
	
	return 0;
}
