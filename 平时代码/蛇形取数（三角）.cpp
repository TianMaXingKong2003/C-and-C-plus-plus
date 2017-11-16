#include<iostream>

#include<stdio.h>
using namespace std;
#define max 10
int out[max][max]={0};

int main()
{
	int x,y,time=out[x=0][y=0]=1;
	
	int n;cin>>n;
	
	while(time<(n+1)*n/2)
	{
		while(y+1<n&&!out[x][y+1])	out[x][++y]=++time;
		
		while(x+1<n&&!out[x+1][y-1])	out[++x][--y]=++time;
		
		while(x>0&&!out[x-1][y])	out[--x][y]=++time;
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		if(out[i][j])
			printf("%5d",out[i][j]);
		cout<<endl;
	}
}
