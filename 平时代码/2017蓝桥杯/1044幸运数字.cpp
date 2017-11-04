#include<stdio.h>
 
#define max 100000
 
int main()
{
     
    int x[max];int g=0;int out[1000];int o=0;
     
    for(int k=6;k<=max;k++)
     
    {
         
        if(k%6==0||k%8==0)
         
        {
            x[g]=k;g++;
        }
    }
     
    int t;scanf("%d",&t);int n;
     
    for(int j=0;j<t;j++)
    {
        scanf("%d",&n);
         
         
        out[j]=x[n-1];
    }
     
    for(o=0;o<t;o++)
    {
        if(o!=t-1)
        printf("%d\n",out[o]);
        else
        printf("%d",out[o]);
         
    }
 
}
