#include <iostream>
#include <string>
using namespace std;

void Insertion_sort(int arr[]){
	int key,j;
	
	//loop for passes 
	for(int i=1;i<=4;i++){		//for (int i = 1; i <= n-1; i++)
		key=arr[i]; //picking the element
		j=i-1;
		
		//loop for each individual element passes
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
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
	
	Insertion_sort(myarr);
	
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

//dry run example
//int A[] = {12, 54, 65, 7, 23, 9};
//    int n = 6;
// -1   0    1   2   3   4   5
//      12,| 54, 65, 07, 23, 09 --> i=1, key=54, j=0
//      12,| 54, 65, 07, 23, 09 --> 1st pass done (i=1)!

//      12, 54,| 65, 07, 23, 09 --> i=2, key=65, j=1
//      12, 54,| 65, 07, 23, 09 --> 2nd pass done (i=2)!

//      12, 54, 65,| 07, 23, 09 --> i=3, key=7, j=2
//      12, 54, 65,| 65, 23, 09 --> i=3, key=7, j=1
//      12, 54, 54,| 65, 23, 09 --> i=3, key=7, j=0
//      12, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1
//      07, 12, 54,| 65, 23, 09 --> i=3, key=7, j=-1--> 3rd pass done (i=3)!

// Fast forwarding and 4th and 5th pass will give:
//      07, 12, 54, 65,| 23, 09 --> i=4, key=23, j=3
//      07, 12, 23, 54,| 65, 09 --> After the 4th pass

//      07, 12, 23, 54, 65,| 09 --> i=5, key=09, j=4
//      07, 09, 12, 23, 54, 65| --> After the 5th pass 
    
    
   
