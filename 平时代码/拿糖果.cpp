#include<iostream>  
#include<cmath>   
    
using namespace std;  


int prime[100005],dp[100005]={0};  


bool isprime(int n)
{  
    if(n==2)  
        return true;  
    for(int i=2;i<=n/2;i++)  
        if(n%i==0)  
            return false;  
    return true;  
}  

int create(int n)
{  
    if(n<4)  
        return 0;  
    int k=0;  
    for(int i=2;i<=sqrt(n);i++)  
    {  
        if(isprime(i))  
            prime[k++]=i;  
    }  
    return k;  
}  



int main()  
{  
    int n,k;  
    cin>>n;  
    k=create(n);  
    if(!k)  
        cout<<"0"<<endl;  
    else  
        for(int i=4;i<=n;i++)  
            for(int j=0;prime[j]<=sqrt(i)&&j<k;j++)  
            {  
                if(i%prime[j]==0)
                    dp[i]=max(dp[i],dp[i-2*prime[j]]+prime[j]);  
            }  
    printf("%d",dp[n]);  
    return 0;  
}  
