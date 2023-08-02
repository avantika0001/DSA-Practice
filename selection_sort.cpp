#include <iostream>
#include <string>
using namespace std;

//for an array of size 'n' ; it get's sorted in 'n-1' steps
void Selection_sort(int arr[]){
	int min;
	for(int i=0; i<4;i++){ 			//for(int i=0; i<n-1;i++)
		//set current element as minimim 
		min=i;
		
		//checks the element to be minimum
		for(int j=i+1;j<5;j++){		//for(int j=i+1;j<n;j++)
			if(arr[j]<arr[min]){		//if(arr[j]>arr[min]) //this statement will sort the array in descending order
				min=j;
			}
		}
		//swap minimum element and current element
		if(min!=i){
			int temp;
			temp=arr[min];
			arr[min]=arr[i];
			arr[i]=temp;
		}
	}
	
}

int main(){
	int myarr[5];
	cout<<"Enter 5 integers in any order : "<<endl;
	for(int i=0;i<5;i++){
		cin>>myarr[i];
	}
	cout<<" "<<endl;
	
	cout<<"UN-SORTED ARRAY :  "<<endl;
	for(int i=0;i<5;i++){
		cout<<myarr[i]<<" ";
	}
	cout<<" "<<endl;
	
	Selection_sort(myarr);
	
	cout<<" "<<endl;
	
	cout<<"SORTED ARRAY(Ascending order) :  "<<endl;
	for(int i=0;i<5;i++){
		cout<<myarr[i]<<" ";
	}
	cout<<" "<<endl<<endl;;
	
	cout<<"SORTED ARRAY(Descending order) :  "<<endl;
	for(int i=4;i>=0;i--){
		cout<<myarr[i]<<" ";
	}
	
	
	return 0;
	
}
