#include<iostream>
#include<stdio.h>

using namespace std;

#define max 100

int out[max][max]={0};

int main()
{
	int n;cin>>n;
	int x,y,time=out[x=0][y=n-1]=1;
	
	while(time<n*n)
	{
		while(x+1<n&&!out[x+1][y])	out[++x][y]=++time;
		while(y>0&&!out[x][y-1])	out[x][--y]=++time;
		while(x>0&&!out[x-1][y])	out[--x][y]=++time;
		while(y<n&&!out[x][y+1])	out[x][++y]=++time;
		
	}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
				printf("%5d",out[i][j]);
			cout<<endl;
		} 
	
	
}
