#include<stdio.h>
#include<iostream>
#include<algorithm>
#define maxn 1000 

using namespace std;

int now[maxn];

int out[maxn];

int cmd(int x,int y)
{
	return x>y;
}

int f(int *x,int a,int b,int k)
{
	int test[maxn];int i=0;
	
	for(;i<b-a+1;i++)
	{
		test[i]=x[a+i-1];
		
	
	}
	
	sort(test,test+i,cmd);
	
	return test[k-1];
}

int main()
{
	int n;cin>>n;
	
	for(int i=0;i<n;i++)	cin>>now[i];
	
	int m;cin>>m;
	
	for(int i=0;i<m;i++)
	{
		int a,b,k;	cin>>a>>b>>k;
		
		out[i]=f(now,a,b,k);
	}
	for(int i=0;i<m;i++)	
	{
		cout<<out[i];
		if(i!=m-1)	cout<<endl;
	}
	
 } 
