#include<stdio.h>
#include<iostream>

#define maxn 100

using namespace std;

//int out[maxn];

int time=0;

int n;

int no[maxn][maxn];

int no4[4][4]={
1,0,1,1,
1,1,1,1,
1,1,1,1,
1,1,1,1,
};

int no5[5][5]={
1,1,1,1,1,
1,0,1,1,1,
1,1,1,1,1,
1,0,1,1,1,
1,1,1,1,1
};

int no55[5][5]={
1,2,3,4,5,
6,0,8,9,10,
11,12,13,14,15,
16,17,18,0,20,
21,22,23,24,25
};

int no7[7][7]={
1,1,1,1,1,1,0,
1,1,1,1,1,1,1,
1,1,1,1,1,1,1,
1,1,1,1,1,1,1,
1,1,1,1,1,1,1,
1,1,1,1,1,1,1,
1,1,1,1,1,1,1
};

struct	info{
	
	int black;
	int white;
	
}out[maxn]; 

void print()
{
	cout<<"\nblack\n";
	for(int i=0;i<n*n;i++)
		if((i+1)%n==0&&n!=0)	cout<<out[i].black<<endl;
		else	cout<<out[i].black<<" ";
		
	cout<<"\nwhite\n";
	for(int i=0;i<n*n;i++)
		if((i+1)%n==0&&n!=0)	cout<<out[i].white<<endl;
		else	cout<<out[i].white<<" ";
}

int f(int cur)
{
	if(cur==n)
	{
		time++;
		print();
	}
	else
	{
		for(int i=0;i<n;i++)
		{	
			for(int j=0;j<n;j++)
			{
				int ok=1;
				
				out[cur].black=i;
				
				out[cur].white=j;
				
				
				if(no[cur][out[cur].black]==0)
				{
					printf("no[%d][%d]=%d\n",cur,out[cur].black,no[cur][out[cur].black]);
					cout<<"i="<<i<<endl;
					cout<<"cur="<<cur<<endl;
					cout<<"out[cur].black="<<out[cur].black<<endl;
					ok=0;continue; 
				}
				
				if(no[cur][out[cur].white]==0)
				{
					printf("no[%d][%d]=%d\n",cur,out[cur].white,no[cur][out[cur].white]);
					cout<<"i="<<i<<endl;
					cout<<"cur="<<cur<<endl;
					cout<<"out[cur].white="<<out[cur].white<<endl;
					ok=0;continue;
				}		
				
				if(j==i)		
				{
					//cout<<"执行	j=i="<<j<<endl;
					ok=0;continue;
				}
				
				for(int k=0;k<cur;k++)
				{
						
					if(out[k].black==out[cur].black||cur-out[cur].black==k-out[k].black||cur+out[cur].black==k+out[k].black)
					{
						ok=0;
						break;
					}
					
					if(out[k].white==out[cur].white||cur-out[cur].white==k-out[k].white||cur+out[cur].white==k+out[k].white)
					{
						ok=0;
						break;
					}
				
				}
				
				if(ok)
				{
					f(cur+1);
				}
			}
		}
	}
}

int main()
{
	cin>>n;
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>no[i][j];
	
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout<<no[i][j]<<" ";
		cout<<endl;
	}
	
	f(0);
	
	cout<<endl<<time;
}
