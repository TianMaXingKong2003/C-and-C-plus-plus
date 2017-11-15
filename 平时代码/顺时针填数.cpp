#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int n;cin>>n;int time=n;int round=1;int k,p;
	int x[25][25]={0};
	if(n==1)	cout<<n;
	else
	for(int i=1;i<=n*n;)
	{
		k=1;
		while(k<=time&&i<=n*n)//右
		{
			x[round][round+k-1]=i;
			i++;k++;
		}
		
		time--;

		p=1;
		
		while(p<=time&&i<=n*n)//下 
		{
			x[p+round][k-1]=i;
			i++;p++;
			cout<<"zhi"<<endl;
		} 	
			
		k=time--;
		while(k>0&&i<=n*n)//左 
		{
			x[p][k--]=i++;
			
		}
		
		p--;
		cout<<" p="<<p<<endl;
		while(p>round&&i<=n*n)//上
		{
			x[p][k+1]=i++;
			p--;
		} 
		
		round++;
		
		cout<<" p="<<p<<"and"<<" i="<<i<<endl;
		cout<<"数据"<<"time="<<time<<" k="<<k<<" p="<<p<<endl; 
		for(int a=0;a<10;a++)
		{
			for(int b=0;b<10;b++)
				cout<<x[a][b]<<" ";
			cout<<endl;
		}
		cout<<endl;
	
		
	
	}
		
	
}
