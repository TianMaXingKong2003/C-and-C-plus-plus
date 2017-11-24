#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

struct info  
{  
    int a;  
    int b;  
    
}unit[1000];  

int cmd(info x,info y)  
{  	 
	return x.b<y.b;
}  

int main()
{
	int k;
	
	while(scanf("%d",&k)!=EOF)
	{
		for(int i=0;i<k;i++)
		{
			cin>>unit[i].a>>unit[i].b;
		}
		
		sort(unit,unit+k,cmd);
		
		int sum=0;
		
		int cur=unit[0].b;
		
		for(int i=0;i<k;i++)
		{
			if(unit[i].a>=cur)
			{
				cur=unit[i].b;	
			}
			else
				sum++;
		}
		
		for(int q=0;q<k;q++)	cout<<unit[q].a<<" "<<unit[q].b<<endl;
			cout<<sum;
		}	
}
