#include<iostream>
#include<stdio.h>

#define maxn 100

using namespace std;

int main(){
	
	int n,m;cin>>n>>m;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			printf("%c",65+i-j);
		 } 
		for(int j=0;j<m-i;j++)
		{
			
			printf("%c",65+j);
			
		}
		if(i!=n-1)	cout<<endl;
	}
} 
