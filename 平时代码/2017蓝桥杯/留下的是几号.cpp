#include<iostream>
#define maxn 1000
using namespace std;

int main()
{
	int n;cin>>n;
	
	int out[maxn];
	for(int i=0;i<n;i++)
		out[i]=i+1;
	
	for(int i=0,count=1,gout=0;(n-gout)!=1;count++,i=(i+1)%(n-gout))
		if(count%3==0)
		{
			for(int j=i;j<(n-gout);j++)
				out[j]=out[j+1];
			count++;
			gout++;
		}
		
	cout<<out[0];
}
