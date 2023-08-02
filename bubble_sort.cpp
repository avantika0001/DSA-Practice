#include <iostream>
#include <string>
using namespace std;

void Bubble_sort(int arr[]){
	
	for(int i=0; i<5;i++){		//for(int i=0;i<;i++)
		
		for(int j=0;j<5-i-1;j++){		//for(int j=0;j<n-i-1;j++) bcoz last element is  placed correctly
		
		if(arr[j]>arr[j+1]){
			int temp;
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
	}
	
}

int main(){
	int myarr[5];
	cout<<"Enter 5 integers in any order : "<<endl;
	for(int i=0;i<5;i++){
		cin>>myarr[i];
	}
	cout<<endl<<endl;
	
	cout<<"UN-SORTED ARRAY :  "<<endl;
	for(int i=0;i<5;i++){
		cout<<myarr[i]<<" ";
	}
	cout<<" "<<endl;
	
	Bubble_sort(myarr);
	
	cout<<" "<<endl;
	
	cout<<"SORTED ARRAY(Ascending order) :  "<<endl;
	for(int i=0;i<5;i++){		
		cout<<myarr[i]<<" ";
	}n
	cout<<" "<<endl<<endl;;
	
	cout<<"SORTED ARRAY(Descending order) :  "<<endl;
	for(int i=4;i>=0;i--){
		cout<<myarr[i]<<" ";
	}
	
	return 0;
}
