#include <iostream>
using namespace std;


//writing merge before bcoz it gets called in mergeSort
 void merge(int arr[], int l, int m, int r){
 	int i =l;	// starting index for left sub array
 	int j=m+1;	// starting index for right sub array
 	int k=l;	// starting index for temporary array
 	int temp[5];
 	
 	while(i<=m && j<=r){	//comparison of right and left sub arrays
 		 if(arr[i]<=arr[j]){
 		 	temp[k]=arr[i];	//arr[i] is smaller than arr[j]
 		 	i++;
 		 	k++; 
		  }
		  else{
		  	temp[k]=arr[j];
		  	j++;
 		 	k++;
		  }
		  
	 }
	 while(i<=m){
	 	temp[k]=arr[i];		//copying all elements from left sub array to temp as it is(i.e when elements in left sub array are remaining while left sub array got exhausted)
	 	i++;
	 	k++;
	 }
	 while(j<=r){
	 	temp[k]=arr[j];		//copying all elements from right sub array to temp as it is
	 	j++;
	 	k++;
	 }
 	for(int s=l;s<=r;s++){	//transfer elements from temp array to our original array
 		arr[s]=temp[s];
	 }
 }

void mergeSort(int arr[],int l,int r){
	if(l<r){		// to check wether the array(or the array we get after dividing) only has one single element or not //if sub array has only one element then this statement becomes false
		int m=(l+r)/2;
		mergeSort(arr,l,m);  //call for left sub array
		mergeSort(arr,m+1,r);  //call for right sub array
		merge(arr, l,m,r);	
	}
}

int main(){
	int myarr[5];
	cout<<"Enter 5 elements to be sorted: "<<endl;
	for(int i=0;i<5;i++){
		cin>>myarr[i];
	}
	cout<<endl;
	cout<<"Before merge sort: "<<endl;
	for(int i=0;i<5;i++){
		cout<<myarr[i]<<" ";
	}
	//array is passed by address in a function
	//merge sort function
	mergeSort(myarr,0,4);
	cout<<endl;
	cout<<"After merge sort: "<<endl;
	for(int i=0;i<5;i++){
		cout<<myarr[i]<<" ";
	}
	
	return 0;
}
