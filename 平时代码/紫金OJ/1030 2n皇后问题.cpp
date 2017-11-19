#include<stdio.h>
#include<iostream>

#define maxn 100

using namespace std;

//int out[maxn];

int n,time=0;

struct	info{
	
	int black;
	int white;
	
}out[maxn]; 

void print()
{
	cout<<"\nblack\n";
	for(int i=0;i<n*n;i++)
		if(i%n==0)	cout<<out[i].black<<endl;
		else	cout<<out[i].black<<" ";
		
	cout<<"\nwhite\n";
	for(int i=0;i<n*n;i++)
		if(i%n==0)	cout<<out[i].white<<endl;
		else	cout<<out[i].white<<" ";
}

int f(int cur)
{
	if(cur==n)
	{
		time++;
		print();
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				int ok=1;
				
				out[cur].black=i;
				
				out[cur].white=j;
				
				for(int k=0;k<cur;k++)
				{
					if(j==i)
					
					
					if(out[k].black==out[cur].black||cur-out[cur].black==k-out[k].black||cur+out[cur].black==k+out[k].black)
					{
						ok=0;
						break;
					}
					
					if(out[k].white==out[cur].white||cur-out[cur].white==k-out[k].white||cur+out[cur].white==k+out[k].white)
					{
						ok=0;
						break;
					}
				
				}
				
					
					if(ok)
					{
						f(cur+1);
					}
			}
		}
	}
}

int main()
{
	cin>>n;
	
	f(0);
	
	cout<<endl<<time;
}
