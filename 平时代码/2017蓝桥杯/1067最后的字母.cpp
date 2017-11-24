#include<iostream>
#include<stdio.h>
#include<vector>
#include<string.h>

using namespace std;

char out[3000];

char out2[3000];int q=0;

void zero(char *a,char *b)
{
	q=0;
	int lenth=strlen(a);
	
	for(int i=0;i<lenth;i++)
	{
		if(i%2==0)	
			a[i]='z';
	}
	
	for(int i=0;i<lenth;i++)
	{
		if(a[i]=='z');
		else
			b[q++]=a[i];
	}
	
	int lenth2=strlen(b);
	
	for(int i=0;i<lenth;i++)	a[i]=0;
	
	for(int i=0;i<q;i++)
	{
		a[i]=b[i];
	}
	
}

int main()
{
	
	for(int i=0;i<2014;)
	{
		for(int j=0;j<19;j++,i++)
			
			out[i]=97+j;
		}	
	zero(out,out2);
	
	while(strlen(out)!=1)
	{
		zero(out,out2);
		
	}
	
	cout<<out[0];
 } 
