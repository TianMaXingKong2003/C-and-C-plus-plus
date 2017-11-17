#include<stdio.h>
#include<iostream>

using namespace std;

int f(int n)
{
	return n*(n+1)/2;	
}


int main()
{
	
	int n;cin>>n;int out=0;
	
	for(int i=1;i<=n;i++)
	
		out+=f(i);
	
	cout<<out;
	
}
