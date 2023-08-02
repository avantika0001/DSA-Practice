#include <iostream>
using namespace std;

 void calcPW(float pw[],int size, int profit[],int weight[]){
 
  for(int i=0;i<size;i++){
pw[i]=profit[i]/weight[i];
}
 }


void bubbleSort(int a[], int size, int profit[], int weight[]) {
//take input pw arr
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < (size - i - 1); j++) {
      if (a[j] > a[j + 1]) {
        int temp;
temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
       
        temp = profit[j];
        profit[j] = profit[j + 1];
        profit[j + 1] = temp;
       
        temp = weight[j];
        weight[j] = weight[j + 1];
        weight[j + 1] = temp;
      }
    }
  }
}


void calcXi(int size, int max_weight, int weight[]){
int arr_xi[size];
int rem =max_weight;
for(int i=0;i<size;i++){
if(rem<weight[i]){
arr_xi[i]=1;
rem=rem-weight[i];
}
else if(weight[i]>rem){
arr_xi[i]=(rem/weight[i]);
rem=0;
}else if(rem =0){
arr_xi[i]=0;
}
}
}

int main(){
int max_weight;
cout<<"Enter the maximum weight of objects: "<<endl;
cin>>max_weight;
int size;
cout<<"Enter the no. of objects: "<<endl;
cin>>size;
int myarr[size];
int profit[size];
int weight[size];
for(int i=0; i<size;i++){
cout<<"For object no."<<i+1<<endl;
cout<<"enter the profit for object no."<<i+1<<endl;
cin>>profit[i];
cout<<"enter the weight for object no."<<i+1<<endl;
cin>>weight[i];
}

cout<<endl<<"The objects entered by the user are: "<<endl;
cout<<"object no."<<" "<<"Profit"<<" "<<"Weight"<<endl;

for(int i=0; i<size;i++){
cout<<i+1<<"           ";
cout<<profit[i]<<"      ";
cout<<weight[i];
cout<<endl;
}
float pw[size];

calcPW(float pw,int size, int profit,int weight);
bubbleSort(float pw, int size, int profit, int weight);
calcXi(int size, int max_weight, int weight);


//calcpw
//sort pw
/* now pw[i] make xi arr and in the xi[i]
if rem!=0 and && rem<=m
make xi[i] =1
now rem=m-w[i];
else if w[i]>rem
xi[i]=rem
rem =0;
else if rem(rem=0)
xi=0


*/


return 0;
}

