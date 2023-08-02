#include <iostream>
using namespace std;

int getMax(int arr[], int size){
	int max;
	max=arr[0];
	for(int i=1;i<size;i++){
		if(arr[i]>max){
			max=arr[i];
			
		}
	}
	return max;
}

void countingSort(int arr[],int size, int div){
	int count_arr[10];
	int output_arr[size];	
	
	for(int i=0;i<10;i++){
		count_arr[i]=0;
	}
	for(int i=0;i<size;i++){
		count_arr[(arr[i]/div)%10]++;
	}
	for(int i=0;i<10;i++){
		count_arr[i]=count_arr[i]+count_arr[i-1];
	}
	for(int i=size-1;i>=0;i--){
		output_arr[count_arr[ (arr[i]/div)%10 ] - 1] = arr[i]; 
        count_arr[ (arr[i]/div)%10 ]--; 
	}
	    for (int i = 0; i < size; i++){
        arr[i] = output_arr[i]; 
}
}



void radixSort(int arr[],int size){
	int m=getMax(arr,size);
	for(int div=1;m/div>0;div=div*10)
	{
		countingSort(arr,size,div);
	}
}

int main(){
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
	
	//radix sort function
	radixSort(myarr,size);
	
		cout<<endl<<"After sorting: "<<endl;
	
	for(int i=0;i<size;i++){
		cout<<myarr[i]<<" ";
	}
	
	return 0;
}
