#include<stdio.h>
#include<iostream>

#define maxn 100

using namespace std;

int get[maxn];

int out[maxn];

int per[maxn];

int n=0;	

int m=0;

int main()
{

	while(scanf("%d",&get[n++])!=EOF);n--;
	
	//for(int i=0;i<n;i++)	cout<<get[i];cout<<"	n="<<n<<endl;\
	
	for(int i=0;i<n;i++)	per[i]=0;
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		{
			for(int k=0;k<i+1;k++)
			{
				per[j+k]=1;
			}
			
		//	for(int q=0;q<n;q++)	cout<<per[q];cout<<endl;
			
			int sum=0;
			for(int x=0;x<n;x++) 	if(per[x])	sum+=get[x];//cout<<"sum="<<sum<<endl;
			
			for(int p=0;p<n;p++)	per[p]=0;
			
			m=max(m,sum);
		}
	}
	cout<<m;
}


