#include<stdio.h>
#include<iostream>

#define max 100

using namespace std;

int out[max]={0};

int main()
{
	int n;cin>>n;int lenth=n;
	
	for(int i=0;i<=n;i++)	out[i]=i;
	
	int x=1,time=0;
	
	while(n)
	{
		time=0;
		
		while(time!=2)
		{
			do{
				if(x==lenth)
				{
					x=1;
				}
				else
				
				if(x>lenth)	x%=8;
				else	{
					x++;
					
				}
			}while(out[x]==0);
			
			time++;
		}
		
		out[x]=0;n--;cout<<"x="<<x<<" ";
		
		do{
				if(x==lenth)
				{
					x=1;
				}
				else
				
				if(x>lenth)	x%=8;
				else	{
					x++;
					
				}
			}while(out[x]==0);
		
		
		for(int i=1;i<=lenth;i++)	cout<<out[i];
		
		cout<<endl;
		
		if(n==1)	break;
	}
}
