#include <iostream>
#include <string>
using namespace std;

int BinarySearch(int arr[], int size,int element){
	int low,high,mid;
	low=0;
	high=size-1;
	while(low<=high){
		mid=low+(high-low)/2;
		if(arr[mid]==element){
			return mid;
		}
		else if(arr[mid]<element){
			low=mid+1;
		}
		else{
			high=mid-1;
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
	cout<<"Enter elements to be stored in the array(SORTED): "<<endl;
	for(int i=0;i<size;i++){
		cin>>ptr[i];
	}
	cout<<"Enter element to be searched in the array: "<<endl;
	cin>>element;
	
	int searchIndex = BinarySearch(ptr, size, element);
    if(searchIndex==-1){
    	cout<<"The element not found!"<<endl;	
	}else{
		 cout<<"The element "<<element<<" was found at index "<<searchIndex<<endl;	
	}	
	return 0;
}
