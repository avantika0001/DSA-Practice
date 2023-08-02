#include<iostream>
#include<stdio.h>
using namespace std; 
int n;
float wgt,curr_w,total_prof;
float prof;
float wt;
  
int main()
{
    
	cout<<"enter the number of elements:";
	cin>>n;
	cout<<"enter the maximum weight:";
	cin>>wgt;
	float a[n];
    float w[n]; 
	float pw[n], max, xi[n];

	for(int i=0;i<n;i++)
	{
		cout<<"enter the profit of elements";
		cin>>a[i];
		cout<<"enter the weight of elements";
		cin>>w[i];
		pw[i]= float (a[i])/w[i];
		
		//ut<<pw[i];
	
	}
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(pw[j]<pw[j+1])
			{
			
			float temp = pw[j];
			int t1,t2;
		
			pw[j]=pw[j+1];
			pw[j+1]=temp;
			
			t1=a[j];
			a[j]=a[j+1];
			a[j+1]=t1;
			
			t2=w[j];
			w[j]=w[j+1];
			w[j+1]=t2;
			
			
		    }
		    
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<pw[i]<<"\t";
		cout<<a[i]<<"\t";
		cout<<w[i]<<"\t";
		cout<<"\n";
	}
	
	for(int i=0;i<n;i++)
	{
	  xi[i]=0;	
	}
	curr_w = wgt;
	
	for(int i=0;i<=n;i++)
	{
		if(curr_w<=0)
		{
			
		    i=i-1;
			cout<<i<<"\n";
			curr_w = curr_w +  w[i];
			total_prof= total_prof - a[i];
			cout<<pw[i]<<"\t";
			cout<<a[i]<<"\t";
			cout<<w[i]<<"\t";
			cout<<"\n"; 
			prof= a[i]*(curr_w/w[i]);
			wt= w[i]*(curr_w/w[i]);
			xi[i]=curr_w/w[i]; 
			curr_w = curr_w - wt;
			total_prof= total_prof + prof; 
		//	cout<<"prof :"<<prof<<"\n";
		//	cout<<"wt :"<<wt<<"\n";
			cout<<"final weight"<<curr_w<<"\n";
			cout<<"total profit"<<total_prof<<"\n";
			
			break;	
		}
		else
		{
			curr_w = curr_w-w[i];
			total_prof = total_prof + a[i];
			cout<< "current weight"<<curr_w;
			cout<<"\n";
			cout<< "total profit" << total_prof<<"\n";
			xi[i]=1;
			
		}
		cout<<xi[i]<<"\n";
	}
 return 0;

}
