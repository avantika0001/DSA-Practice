#include <iostream>
#include <string>
using namespace std;

//algorithm 1
void sumOfNumbers_1(int n){
	int sum =0;
	for(int i=0;i<=n;i++){
		sum =sum+i;
	}
	cout<<"Sum till "<<n<<" using method 1 with linear time behaviour is: "<<sum<<endl;
}

//algorithm 2 (more effecient bcoz time stays const with the number of input)
void sumOfNumbers_2(int n){
	int sum;
	sum=(n*(n+1))/2;
	cout<<"Sum till "<<n<<" using method 2 with constant time behaviour is: "<<sum<<endl;
}

int main(){
	int num;
	cout<<"Enter the number till which you want the sum: "<<endl;
	cin>>num;
	//sumOfNumbers_1(num);  //method 1 enter a large no. to see the effect eg:1000000000	
	//sumOfNumbers_2(num);	//method 2
}
