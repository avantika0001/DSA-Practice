#include <iostream>
using namespace std;

void countingSort(int input_arr[],int s, int r){
	int output_arr[s];
	int count_arr[r];
	//initialize all elements to 0 in count_arr
	for(int i=0;i<r;i++){	
		count_arr[i]=0;
	}
	
	//to take a count of all elements in the input_arr
	for(int i=0;i<s;i++){
		++count_arr[input_arr[i]];
	}
	
	//cummulative count(addition) of count array to get the position of the elements to be stored in the output_arr
	for(int i=1;i<r;i++){
		count_arr[i]=count_arr[i]+count_arr[i-1];
	}
	
	//placing input_arr elements into output_arr elements in proper positions 
	//such that the result is a sorted array in ascending order
	for(int i=0;i<s;i++){
		output_arr[--count_arr[input_arr[i]]]=input_arr[i];
	}
	
	//transfer the sorted values from output_arr to input_arr
	for(int i=0;i<s;i++){
		input_arr[i]=output_arr[i];
	}
}

int main(){
	int size=5;	//size of array 
	int myarr[5];
	int range=10;	//we assume that we have range 0-9
	cout<<"Enter 5 elements in the array to be sorted in the range of 0-9:  "<<endl;
	for(int i=0;i<5;i++){
		cin>>myarr[i];
	}
	cout<<endl;
	
	cout<<"Before Counting sort: "<<endl;
	for(int i=0;i<5;i++){
		cout<<myarr[i]<<" ";
	}
	cout<<endl;
	
	//calling counting sort function
	countingSort(myarr,5,range);	//countingSort(myarr,size,range);	
	
	cout<<"After Counting sort: "<<endl;
	for(int i=0;i<5;i++){
		cout<<myarr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
