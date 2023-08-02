#include <iostream>
#include <string>
using namespace std;
/*if the array becomes sorted before completion of all passes then we don't want the passes to still hsppen we 
want the algo to stop right there*/


void Opti_Bubble_sort(int arr[]){
	int rounds=0;
	bool flag= false;
	for(int i=0; i<5;i++){		//for(int i=0;i<;i++)
		rounds++;
		
		for(int j=0;j<5-i-1;j++){		//for(int j=0;j<n-i-1;j++) bcoz last element is  placed correctly
		
		if(arr[j]>arr[j+1]){
			flag=true;
			int temp;
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}	
	
	if(flag==false){		//false means no swapping happened; this means the array is sorted that's why no sorting happened
		break;
	}
	}
	cout<<"number of rounds: "<<rounds<<endl;
}

/*void Bubble_sort(int a[]){
	int rounds=0;
	for(int i=0; i<5;i++){		//for(int i=0;i<;i++)
		rounds++;
		for(int j=0;j<5-i-1;j++){		//for(int j=0;j<n-i-1;j++) bcoz last element is  placed correctly
		
		if(a[j]>a[j+1]){
			int temp;
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
	}
	cout<<"number of rounds: "<<rounds<<endl;
}*/

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
	
	Opti_Bubble_sort(myarr);
	//Bubble_sort(myarr);
	
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
