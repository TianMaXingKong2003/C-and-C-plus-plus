#include<iostream>
#include<set>
#define maxn 1000

using namespace std;

long out[maxn];int n;

set<long> put;

int f(long x)
{
	int time=0;
	
	for(int i=0;i<n;i++)
		if(out[i]==x)	time++;	
	
	return time;
}

int main()
{
	
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>out[i];
		put.insert(out[i]);
	}	
	
	for(set<long>::iterator it=put.begin();it!=put.end();it++)
	{
		cout<<*it<<" "<<f(*it)<<endl;
	}
	
}
