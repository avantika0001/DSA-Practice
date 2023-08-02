#include <iostream>
using namespace std;

void shellSort(int arr[], int size){
	int gap;
	for(gap=size/2; gap>0;gap /=2){
		for(int j=gap;j<size;j+=1){
			int temp=arr[j];
			int i=0;	//bcoz we want the scope of i to be in the 2nd and 3rd for loop too
			
			for(i=j;(i>=gap)&&(arr[i-gap]>temp);i-=gap){
				arr[i]=arr[i-gap];
			}
			arr[i]=temp;
		}
	}
}

int main (){
	int size; //won't work for turbo cpp in that you will have to do dynamic memory allocation
	cout<<"Enter the size of the array: "<<endl;
	cin>>size;
	int myarr[size];
	cout<<"Enter "<<size<<" integers in any order: "<<endl;
	for(int i=0;i<size;i++){
		cin>>myarr[i];
	}
	cout<<endl<<"Before sorting: "<<endl;
	
	for(int i=0;i<size;i++){
		cout<<myarr[i]<<" ";
	}
	
	//shell sort function
	shellSort(myarr,size);
	
	cout<<endl<<"After SHELL sorting: "<<endl;
	
	for(int i=0;i<size;i++){
		cout<<myarr[i]<<" ";
	}
	return 0;
}
