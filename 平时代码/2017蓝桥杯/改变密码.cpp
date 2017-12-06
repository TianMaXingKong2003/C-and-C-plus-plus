#include<iostream>
#include<string.h>
#include<cstdio>
#define maxn 1000
using namespace std;
int put[maxn][6]={0};
int main()
{
    int n;cin>>n;
    int t;
     
    for(int i=0;i<n;i++)
    {
        char str[maxn];
        int out[maxn]={0};
        cin>>str;
        int lenth=strlen(str);
        for(int j=0;j<lenth;j++)
            out[j%6]+=str[j];
         
        for(int k=0;k<6;k++)
        {
            while(out[k]>9)
            {
                t=out[k];
                out[k]=0;
                 
                while(t!=0)
                {
                    out[k]+=t%10;
                    t/=10;
                }
            }
        }
         
        for(int j=0;j<6;j++)
            put[i][j]=out[j];
    }
     
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<6;j++)
            cout<<put[i][j];
        if(i!=n-1)
            cout<<endl;
    }
}
