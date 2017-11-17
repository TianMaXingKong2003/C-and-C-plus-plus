#include<stdio.h>
#include<iostream>
#include<string.h> 
#include<algorithm>

using namespace std;

#define max 100

int f(char *a,char x)
{
	int time=0;
	
	for(int i=0;i<strlen(a);i++)
	{
		if(x==a[i])	time++;
	}
	return time;
}

int p(int a,int b)
{
	int d=b-a;
	
	for(int i=2;i<d;i++)
	{
		if(d%i==0)
			return 0;
	}
	return 1;
}

int main()
{
	char s[max]; int out[max];
	
	cin>>s;
	
	int i;
	
	for(i=0;i<strlen(s);i++)
		
		out[i]=f(s,s[i]);
		
	sort(out,out+i);
	
	int maxd=out[0],mind=out[i-1];
	
	//cout<<maxd<<" "<<mind<<endl;
	
	if(p(maxd,mind))
		cout<<"Lucky Word";
	else
		cout<<"Unlucky Word";
	
	//for(int j=0;j<strlen(s);j++)
	//	cout<<s[j]<<" "<<out[j]<<endl;
		
}
