//https://www.cnblogs.com/zhanjxcom/p/5596208.html

// 康托编码法

#include<iostream>
#include<string.h>
#include<math.h>
#define ull unsigned long long

using namespace std;

int n;
ull k;
char abc[30];
ull jie[21];
int vis[30];

ull Jie(int n);

void kt(int n,ull k)
{
	char s[30];
	int i,j;
	ull t;
	
	memset(vis,0,sizeof(vis));
	
	k--;
	for (i = 0; i < n; ++i) 
    { 
        t = k / jie[n - i - 1]; 
        
        k %= jie[n - i - 1];///余数
        
        for (j = 1; j <= n; j++) 
            if (!vis[j]) 
            { 
                if (t == 0) break; 
                --t; 
            } 
            
        s[i] = 96+j, vis[j] = true;  
    } 
    
    for(i=0;i<n;i++)
    	cout<<s[i];
	
}



int main()
{
	
	for(int i=0;i<26;i++)abc[i]=97+i;
	
	for(int i=0;i<=20;i++)jie[i]=Jie(i);
	
	//cout<<jie[20]<<endl;
	
	cin>>n>>k;

	kt(n,k);
	
	return 0;
}

ull Jie(int n)
{
	if(n==0)
		return 1;
	ull res=1;
	for(int i=1;i<=n;i++)
		res*=i;
	return res;
}
