#include <iostream>
using namespace std;

void bubbleSort(float a[], int size, int profit[], int weight[]) {
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
float max_weight;
cout<<"Enter the maximum weight of objects: "<<endl;
cin>>max_weight;
int size;
cout<<"Enter the no. of objects: "<<endl;
cin>>size;
int myarr[size];
int profit[size];
int weight[size];
float pw[size];

float curr_w,total_prof;
float prof;
float wt;
float xi[size];

for(int i=0; i<size;i++){
cout<<"For object no."<<i+1<<endl;
cout<<"enter the profit for object no."<<i+1<<endl;
cin>>profit[i];
cout<<"enter the weight for object no."<<i+1<<endl;
cin>>weight[i];
pw[i]= (profit[i])/(weight[i]);
}

//calling sorting func
bubbleSort(pw,size,profit,weight);

cout<<endl<<"The objects entered by the user are: "<<endl;
cout<<"object no."<<" "<<"Profit"<<" "<<"Weight"<<endl;

for(int i=0; i<size;i++){
cout<<i+1<<"\t";
cout<<profit[i]<<"\t";
cout<<weight[i]<<"\t";
cout<<pw[i]<<"\t";
cout<<endl;
}


	for(int i=0;i<size;i++)
	{
	  xi[i]=0;	
	}
	curr_w = max_weight;
	
	for(int i=0;i<=size;i++)
	{
		if(curr_w<=0)
		{
			
		    i=i-1;
			cout<<i<<"\n";
			curr_w = curr_w +  weight[i];
			total_prof= total_prof - profit[i];
			cout<<pw[i]<<"\t";
			cout<<profit[i]<<"\t";
			cout<<weight[i]<<"\t";
			cout<<"\n"; 
			prof= profit[i]*(curr_w/weight[i]);
			wt= weight[i]*(curr_w/weight[i]);
			xi[i]=curr_w/weight[i]; 
			curr_w = curr_w - wt;
			total_prof= total_prof + prof; 
			cout<<"final weight: "<<curr_w<<"\n";
			cout<<"total profit: "<<total_prof<<"\n";
			
			break;	
		}
		else
		{
			curr_w = curr_w-weight[i];
			total_prof = total_prof + profit[i];
			cout<< "current weight: "<<curr_w;
			cout<<"\n";
			cout<< "total profit: "<< total_prof<<"\n";
			xi[i]=1;
			
		}
		cout<<xi[i]<<"\n";
	}

return 0;
}


/*OUTPUT:
Enter the maximum weight of objects:
50
Enter the no. of objects:
2
For object no.1
enter the profit for object no.1
20
enter the weight for object no.1
2
For object no.2
enter the profit for object no.2
15
enter the weight for object no.2
3

The objects entered by the user are:
object no. Profit Weight
1       15      3       5
2       20      2       10
current weight: 47
total profit: 15
1
current weight: 45
total profit: 35
1
current weight: -4.20074e+006
total profit: -3.22983e+008
1

*/
