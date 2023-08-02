#include <iostream>
using namespace std;


void halfIncrement1(int n){
	for(int i=1;i<=n;i++){ //sidha
		for(int j=1;j<=i;j++){ //sidha
			cout<<i;
		}
		cout<<endl;
	}
}

void halfIncrement2(int n){
	for(int i=n;i>=1;i--){ //ulta
		for(int j=1;j<=i;j++){ //sidha
			cout<<(n-i+1);
		}
		cout<<endl;
	}
	}

void halfIncrement3(int n){
	for(int i=1;i<=n;i++){ //sidha
	for(int k=n-i;k>0;k--){
		cout<<" ";
	}
		for(int j=1;j<=i;j++){ //sidha
			cout<<i;
		}
		cout<<endl;
	}
	}
void halfIncrement4(int n){
	for(int i=n;i>=1;i--){ //ulta
	for(int k=n-i;k>0;k--){
		cout<<" ";
	}
		for(int j=1;j<=i;j++){ //sidha
			cout<<(n-i+1);
		}
		cout<<endl;
	}
	}
	
	void halfIncrement5(int n){
	for(int i=n;i>=1;i--){ //ulta
	for(int k=n-i;k>0;k--){
		cout<<" ";
	}
		for(int j=1;j<=i;j++){ //sidha
			cout<<(n-i+1);
		}
		cout<<endl;
	}
	}		

void halfIncrement6(int n){
	for(int i=n;i>=1;i--){ //ulta
	for(int k=n-i;k>0;k--){
		cout<<" ";
	}
		for(int j=1;j<=i;j++){ //sidha
			cout<<(n-i+1);
		}
		cout<<endl;
	}
	}	
int main(){
	int num;
	cout<<"Enter the no. of levels for incremental pyramid: "<<endl;
	cin>>num;
	cout<<endl;
	halfIncrement1(num);
	cout<<endl;
	halfIncrement2(num);
	cout<<endl;
	halfIncrement3(num);
	cout<<endl;
	halfIncrement4(num);
	cout<<endl;
	halfIncrement5(num);
	cout<<endl;
	halfIncrement6(num);
	cout<<endl;
	
	return 0;
}
