#include<iostream>
#include<stdio.h>

#define maxn 100

using namespace std;

int main(){
	
	char out[maxn][maxn];
	
	int n,m;cin>>n>>m;
	
	for(int i=0;i<26;i++)
	{
		for(int j=0;j<i;j++)
		{
			out[i][j]=65+i-j;	
			
		}
		for(int j=i;j<26;j++)
			out[i][j]=65+j-i;	
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%c",out[i][j]);
		}
		if(i!=n-1)	cout<<endl;
	}
} 
