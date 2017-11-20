#include<stdio.h>
#include<iostream>
#include<string.h>
#include<cstdlib>
#include<string>
using namespace std;

int out[20];

int lenth;

unsigned long x;

int cur=0;

string next[50];

string call[50]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu","shi"};

string flag[50]={"shi","bai","qian","wan","yi"};

void f(int a)
{
		int b;
		if(a>=1000)
		{
			b=a/1000;
			next[cur++]=call[b];
			next[cur++]=flag[2];
			a-=b*1000;
			if(a<100&&a>0)		next[cur++]=call[0];
		}
		
		if(a>=100)
		{
			b=a/100;
			next[cur++]=call[b];
			next[cur++]=flag[1];
			a-=b*100;
			if(a<10&&a>0)	next[cur++]=call[0];
		}
		
		if(a>=10)
		{
			b=a/10;
			if(b!=1)
			{
				next[cur++]=call[b];
			next[cur++]=flag[0];
			}
			else
			next[cur++]=flag[0];a-=b*10;
		}
		
		if(a>=0)
		{
			b=a;
			if(b!=0)
			next[cur++]=call[b];
		}
		
	
}

int main()
{
	char get[20];cin>>get;lenth=strlen(get);
	
	for(int i=0;i<lenth;i++)	out[i]=get[i]-48;	//赋值给int out[]
	
	x=atoi(get);		//赋值给x 
	
	if(lenth>8)
	{
		int a=x/100000000;
		
		f(a);
		
			next[cur++]=flag[4];
		
		if(x-a*100000000>0&&x-a*100000000<10000000)	next[cur++]=call[0];
		
		x-=a*100000000;
		
		
	}
	
	
	if(lenth>4)
	{
		int a=x/10000;
		
		f(a);
		
		if(a!=0)		next[cur++]=flag[3];
		
		if(x-a*10000>0&&x-a*10000<1000)	next[cur++]=call[0];
		
		x-=a*10000;
	}
	
	if(lenth>0)
	{
		int a=x;
		
		f(a);
		
	}
	
	for(int i=0;i<cur;i++)
	{
		if(i==0)	cout<<next[i];
		else
			if(next[i-1]==call[0]&&next[i]==call[10])	
				cout<<"yi shi";
			else	cout<<next[i];
		
		if(i!=cur)	cout<<" ";
	
		}	
	
 } 
