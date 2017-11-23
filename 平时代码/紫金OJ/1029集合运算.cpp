#include<iostream>
#include<stdio.h>
#include<string.h>
#include<set>
#include<algorithm>

#define maxn 1100
using namespace std;

int main()
{
	int n,m;
	//	int A[maxn],B[maxn];
	//	cin>>n>>m;
	
	n=5;m=5;
	
	int	A[maxn]={1,2,3,4,5};
	
	int B[maxn]={2,4,6,8,10};
	
	set<int>	Ag;
	set<int>	Bg;
	set<int> jiao;
	set<int> bing;
	
	for(int i=0;i<n;i++)
	{
		bing.insert(A[i]);Ag.insert(A[i]);
	}
		
	for(int j=0;j<m;j++)
	{
		if(find(Ag.begin(),Ag.end(),B[j])==Ag.end());
		else
			jiao.insert(B[j]);
		bing.insert(B[j]);
	}
	
	for(set<int>::iterator it=jiao.begin();it!=jiao.end();it++)
	{
		Ag.erase(*it);
		cout<<*it;
		if(t++==jiao.end())
		{
			
		}
		else
			cout<<" ";
	}
	cout<<endl;
	for(set<int >::iterator it=bing.begin();it!=bing.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	for(set<int >::iterator it=Ag.begin();it!=Ag.end();it++)
		cout<<*it<<" ";
	
} 
