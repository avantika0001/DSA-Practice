#include <iostream>
using namespace std;

int partition(int arr[], int s,int e){
	//int pivot;
	int pIndex;
	
	int pivot=arr[e];	//set last element as the pivot
	pIndex=s;
	for(int i=s;i<e;i++){	//compare all elements with pivot //e-1 so as to exclude the pivot element
		if(arr[i]<pivot){
			int temp;
			//swap arr[i] and arr[pindex]
			temp=arr[i];
			arr[i]=arr[pIndex];
			arr[pIndex]=temp;
			pIndex++;
		}
			
	}
	//swap arr[e] and arr[pIndex]
		int temp;
		temp=arr[e];
		arr[e]=arr[pIndex];
		arr[pIndex]=temp;
		return pIndex;
}

void quickSort(int arr[],int s,int e){
	if(s<e){	//true till we have more than 1 element in the array
		int p;
		p=partition(arr,s,e);
		quickSort(arr,s,(p-1));	//recursive QS call for left partition 
		quickSort(arr,(p+1),e);	//recursive QS call for right partition
	}
	
}

int main(){
		int myarr[5];
	cout<<"Enter 5 elements to be sorted: "<<endl;
	for(int i=0;i<5;i++){
		cin>>myarr[i];
	}
	cout<<endl;
	cout<<"Before Quick sort: "<<endl;
	for(int i=0;i<5;i++){
		cout<<myarr[i]<<" ";
	}
	//array is passed by address in a function
	//quick sort function
	quickSort(myarr,0,4);
	
	cout<<endl;
	cout<<"After Quick sort: "<<endl;
	for(int i=0;i<5;i++){
		cout<<myarr[i]<<" ";
	}
	return 0;
}


/*SWAP LOGIC
// value of first is assigned to temp
  temp = first;

  // value of second is assigned to first
  first = second;

  // value of temp (initial value of first) is assigned to second
  second = temp;
*/
