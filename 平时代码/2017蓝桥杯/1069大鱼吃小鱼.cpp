#include<iostream>

#define maxn 10000
using namespace std;

int main()
{
	int s,n;
	int yu[maxn];
	int out[maxn];int p=0;
	while(scanf("%d",&s)!=EOF)
	{
		int S=s;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>yu[i];
			
			if(yu[i]<=s)
				s+=yu[i];
			else
				s=S;
		}
		out[p++]=s;
	}
	
	for(int i=0;i<p;i++)
	{
		cout<<out[i];
		if(i!=p-1)
			cout<<endl;
	}
	
}
