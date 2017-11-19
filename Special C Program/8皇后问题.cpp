#include<stdio.h>
#include<iostream>

#define maxn 100

using namespace std;

int out[maxn];

int n,time=0;

void print()
{
	for(int i=0;i<n*n;i++)
	{
		if(i%n==0)	cout<<endl<<out[i]<<" ";
		
		else	
		
		cout<<out[i]<<" ";
		
	}
}

int f(int cur)
{
	if(cur==n)
	{
		time++;
		print();cout<<endl;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			int ok=1;
			
			out[cur]=i;
			
			for(int j=0;j<cur;j++)
			{
				if(out[j]==out[cur]||cur-out[cur]==j-out[j]||cur+out[cur]==j+out[j])
				{
					ok=0;break;
				}
			}
			if(ok)	f(cur+1);
		}
	}
}

int main()
{
	cin>>n;
	
	f(0);
	
	cout<<endl<<time;
}
