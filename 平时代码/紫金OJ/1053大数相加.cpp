#include<stdio.h>
#include<iostream>
#include<string.h> 

using namespace std;

#define maxn 120

int a[maxn];

int b[maxn];

int i,j;

int main()
{
	i=0;j=0;
	
	char ch1[maxn];cin>>ch1;	
	
	char ch2[maxn];cin>>ch2;
	
	int lentha=strlen(ch1);int lenthb=strlen(ch2);
	for(int x=lentha-1;x>=0;x--)	a[i++]=ch1[x]-48;
	for(int x=lenthb-1;x>=0;x--)	b[j++]=ch2[x]-48;
	
	if(lentha>=lenthb)
	{
		for(int x=0;x<lenthb;x++)
		{
			a[x]+=b[x];
		}
		
		
		int flag=0;
		
		for(int x=0;x<lentha+1;x++)
		{
			if(a[x]>=10)
			{
				a[x+1]+=a[x]/10;
				a[x]-=10;
			}
			flag++;
		}
		
		if(a[flag-1]==0)	for(int x=flag-2;x>=0;x--)	cout<<a[x];
		
		else	for(int x=flag-1;x>=0;x--)	cout<<a[x];
		
	}
	else
	{
		for(int x=0;x<lentha;x++)
		{
			b[x]+=a[x];
		}
		
		int flag=0;
		
		for(int x=0;x<lenthb+1;x++)
		{
			if(b[x]>=10)
			{
				b[x+1]+=b[x]/10;
				b[x]-=10;
			}
			flag++;
		}
		
		if(b[flag-1]==0)	for(int x=flag-2;x>=0;x--)	cout<<b[x];
		
		else	for(int x=flag-1;x>=0;x--)	cout<<b[x];
	}
}
