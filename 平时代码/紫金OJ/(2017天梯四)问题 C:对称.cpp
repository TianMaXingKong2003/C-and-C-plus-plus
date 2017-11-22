#include<iostream>
#include<stdlib.h>
#include<string.h>

#define maxn 100000
using namespace std;

char zhi[17]={0,1,2,3,4,5,6,7,8,9,'a','b','c','d','e','f'};

char out[maxn];

int n,t=0;

//	任意进制字符串转十进制整数 
long toTen(char *a,int n)
{
	long sum=0;
	
	int lenth=strlen(a);
	
	for(int i=lenth-1;i>=0;i--)
	{
		int num=1;
		for(int j=1;j<=lenth-1-i;j++)
		{
			num*=n;
			
		}
		
		if(a[i]-48>zhi[9])
			sum+=(a[i]-55)*num;
		else
			sum+=(a[i]-48)*num;
	 } 
	 
	 //cout<<"转10->sum="<<sum<<endl;
	 return sum;
}

int pan(char *dui)
{	
	//printf("dui=%s\n",dui);
	
	int lenth=strlen(dui);
	int ok=1;
	for(int i=0;i<lenth/2;i++)
	{
		if(dui[i]!=dui[lenth-1-i])
		{
			ok=0;
			break;
		}
	}
	return ok;
}

void fan(char *a)
{
	int lenth=strlen(a);
	for(int i=0;i<lenth/2;i++)
	{
		int x;x=a[i];
		a[i]=a[lenth-1-i];
		a[lenth-1-i]=x;
	}
	
	//	for(int i=0;i<lenth;i++)	cout<<a[i]<<" ";cout<<endl;
	
}

int main()
{
	cin>>n;
	
	cin>>out;
	
	int ok=1;
	
	if(pan(out));
	else
	for(t=0;t<30;t++)
	{
		 long x=toTen(out,n);
		 	fan(out);
		 long y=toTen(out,n);
		 
		 long z=x+y;
		 
		 itoa(z,out,n);
		 
		 //cout<<"x="<<x<<" y="<<y<<" z="<<z<<endl;
		 
		 if(pan(out))
		 {
		 	t++;
			 break;
		 }
	}
	
	if(ok)	cout<<t;
	else	cout<<"No";
	
}
