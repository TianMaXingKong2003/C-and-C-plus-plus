#include<iostream>
#include<cstdio>
#include<cmath>
#define maxn 10005
 
using namespace std;
 
int main()
{
    int w,m,n;
     
    cin>>w>>m>>n;
     
    int count=1;
     
    int x1,y1,x2,y2;
    if(m%w==0)  
    {
        x1=m/w;
        if(x1%2==0)
            y1=1;
        else
            y1=w;
    }
    else
    {
        x1=m/w+1;
        if(x1%2==0)
        y1=w-m%w+1;
             
        else
            y1=m%w;
    }
     
    if(n%w==0)  
    {
        x2=n/w;
        if(x2%2==0)
            y2=1;
        else
            y2=w;
    }
    else
    {
        x2=n/w+1;
        if(x2%2==0)
        y2=w-n%w+1;
             
        else
            y2=n%w;
    }
     
    //cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
     
    cout<<abs(x1-x2)+abs(y1-y2);
}
 
