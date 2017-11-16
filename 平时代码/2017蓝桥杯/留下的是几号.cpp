#include<stdio.h>
#include<iostream>

#define max 100
 
using namespace std;

int out[max];

int main()
{
	
	int n,lenth;cin>>n;lenth=n;
	
	for(int i=0;i<=n;i++)	out[i]=i;
	
	int x=3;
	
	while(n)
	{
		int time=0;
		
		if(x>lenth)	x%=lenth;
		
		if(out[x])
		{
			out[x++]=0;n--;
			
			
			while(time!=2)
			{
				if(out[x]==0)
					x++;
				else
				{
					x++;time++;
					
				}
				
				if(x>lenth)	x%=lenth;
				
			}	
		}
		else
			x++;
			
		for(int q=1;q<=lenth;q++)
			cout<<out[q]<<" ";
		cout<<endl; 
		
		if(n==1)
		{
			cout<<x-1<<endl;
			break;
		}
	}
	
	cout<<"end"<<endl;
	
}
