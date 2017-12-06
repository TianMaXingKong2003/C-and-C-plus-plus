//需要修改，不适用与10进制以上的转换

#include<iostream>
#include<string.h>

#define maxn 1000
#define zj 10
#define jz 2
using namespace std;

void solve(char str[])
{
	int start[maxn],res[maxn],out[maxn],p=0;
	int lenth=strlen(str);
	for(int i=0;i<lenth;i++)
		start[i]=str[i]-'0';
	
	res[0]=start[0]/jz;
	int yu=start[0]%jz;
	
	while(start[0]>=1)
	{
		res[0]=start[0]/jz;
		yu=start[0]%jz;
		for(int i=1;i<lenth;i++)
		{
			res[i]=(yu*zj+start[i])/jz;
			yu=(yu*zj+start[i])%jz;
		}
		
		int begin=0;
		for(int i=0;i<lenth;i++)
		{
			if(res[i]==0)
				begin++;
			else
				break;
		}
		
		for(int i=0;i<lenth;i++)	start[i]=0;
		
		for(int i=begin;i<lenth;i++)
			start[i-begin]=res[i];
			
		for(int i=0;i<lenth;i++)	res[i]=0;
		
		lenth=lenth-begin;
		
		out[p++]=yu;
	}
	for(int i=p-1;i>=0;i--)
		cout<<out[i];
	cout<<endl;
}

int main()
{
	do{
		cout<<"请输入一个需要转换的数："; 
		char str[maxn];
		cin>>str;
		printf("\n它由 %d 进制转换为 %d 进制后：",zj,jz); 
		solve(str);
		cout<<endl; 
	}while(1);
}
