#include<iostream>

#include<stdio.h>

#define maxn 100

using namespace std;

int f(int a,int b)
{
	return (a+b)*(b-a+1)/2;
}

struct	info{
	int x;
	int y;
}out[maxn];

int main()
{
	int n;cin>>n;
	
	int x=0;
	
	for(int i=1;i<=(n/2)+1;i++)
	{
		for(int j=i+1;;j++)
		{
			if(f(i,j)==n)	
			{
				out[x].x=i;
				out[x++].y=j;
			}
			else
			{
				if(f(i,j)>n)	break;
			}
		}
	}
	
	for(int i=0;i<x;i++)
	{
		cout<<out[i].x<<" "<<out[i].y;
		if(i!=x-1)	cout<<endl;
	}
}
