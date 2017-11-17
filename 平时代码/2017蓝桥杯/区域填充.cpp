#include<iostream>
#include<stdio.h>
using namespace std;

int f(int n)
{
	int out[20][20]={0};
	
	
	int x,y,time=out[0][0]=1;
	
	out[0][0]=1;
	x=0;y=0;
	
	int sum=(n+1)*n/2;
	
	
	while(time<sum)
	{
		while(x+1<n&&!out[x+1][y])	
		{
			out[++x][y]=++time;
		}
		
		while(y+1<n&&!out[x-1][y+1])	
		{
			out[--x][++y]=++time;
		}
		
		while(y>0&&!out[x][y-1])
		{
			out[x][--y]=++time;
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		
		if(out[i][j])
			printf("%4d",out[i][j]);
			 
			//cout<<"end";
		if(i!=n-1)
		cout<<endl;
	}
	//cout<<"end";
	
}

int main()
{	
	int n;
	while(cin>>n)
		f(n);
}

