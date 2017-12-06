#include<iostream>
#include<cstdio>
#include<string.h>
#include<algorithm>
#define maxn 1000
 
using namespace std;
 
int mount[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 
void f(int out[])
{
    if(out[1]>12||out[2]>mount[out[1]]);
        else
        {
            printf("20%02d-%02d-%02d\n",out[0],out[1],out[2]);
        }   
    if(out[0]<=out[1])
    {
        if(out[0]>12||out[1]>mount[out[1]]);
        else
        {
            printf("20%02d-%02d-%02d\n",out[2],out[0],out[1]);
        }       
        if(out[1]>12||out[0]>mount[out[1]]);
            else
            {
                printf("20%02d-%02d-%02d",out[2],out[1],out[0]);
            }
    }
    else
    {
        if(out[1]>12||out[0]>mount[out[1]]);
            else
            {
                printf("20%02d-%02d-%02d\n",out[2],out[1],out[0]);
            }
        if(out[0]>12||out[1]>mount[out[1]]);
        else
        {
            printf("20%02d-%02d-%02d",out[2],out[0],out[1]);
        }       
         
    }
}
 
int main()
{
    int year,mou,day;
     
    int ru=0;
     
    int out[3];
     
    int a,b,c;
     
    char str[maxn];cin>>str;
     
    out[0]=year=(str[0]-48)*10+(str[1]-48);
    out[1]=mou=(str[3]-48)*10+(str[4]-48);
    out[2]=day=(str[6]-48)*10+(str[7]-48);
     
    if(year%4==0)
    {
        if(year%100==0&&year%400!=0)
            ru=0;
        else
            ru=1;
    }else;
     
    if(ru)  mount[2]=29;
     
    if(out[0]==out[2])
    {
        if(out[1]>12||out[2]>mount[out[1]]);
        else
        {
            printf("20%02d-%02d-%02d",out[0],out[1],out[2]);
             
        }   
    }
    else
    {
        if(out[0]<out[2])
    {
        f(out);
    }
    else
    {
        if(out[0]==out[1])
        {
            printf("20%02d-%02d-%02d\n",out[2],out[1],out[0]);
             
        }
             
        else
        {
            if(out[0]<=out[1])
        {
            if(out[0]>12||out[1]>mount[out[1]]);
            else
            {
                printf("20%02d-%02d-%02d\n",out[2],out[0],out[1]);
            }       
            if(out[1]>12||out[0]>mount[out[1]]);
                else
                {
                    printf("20%02d-%02d-%02d",out[2],out[1],out[0]);
                }
        }
        else
        {
            if(out[1]>12||out[0]>mount[out[1]]);
                else
                {
                    printf("20%02d-%02d-%02d\n",out[2],out[1],out[0]);
                }
            if(out[0]>12||out[1]>mount[out[1]]);
            else
            {
                printf("20%02d-%02d-%02d\n",out[2],out[0],out[1]);
            }       
             
        }
         
         
     
        }
         
        if(out[1]>12||out[2]>mount[out[1]]);
            else
            {
                printf("20%02d-%02d-%02d",out[0],out[1],out[2]);
            }   
         
    }
     
    }
     
}
