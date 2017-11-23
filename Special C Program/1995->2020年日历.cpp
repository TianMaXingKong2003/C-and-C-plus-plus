#include<iostream>
#include<string>
#include<stdio.h>
#define Year 2020

using namespace std;

int moun[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	
string week[7]={"sun","mon","tue","wen","thu","fri","sat"};	

int t=0;

int out[100];int ok=0;

int year=1995,mounth=10,day=13;

int main()
{
	cout<<"\n这是 "<<year<<" -> "<<Year<<" 年的日历\n\n"; 
	
	for(int k=0;k<7;k++)	cout<<week[k]<<" ";cout<<endl;
	
	for(int i=year;i<=Year;i++)
	{
		moun[2]=28;
		if(i%4==0)
		{
			if(i%100==0&&i%400!=0);
			else
			{
				moun[2]=29;out[ok++]=i;
			}
			
		}
		
		for(int m=1;m<=12;m++)
		{			
			for(int d=1;d<=moun[m];d++)
			{
				if(d==1)
				for(int y=0;y<t;y++)	cout<<"    ";
				printf("%3d ",d);
				
				t++;
				
				if(t==7)
				{
					cout<<endl;
					t=0;
				}
				
				if(d==moun[m])
				{
					cout<<endl;
					cout<<endl<<"这是 "<<i<<"年 "<<m<<"月 "<<endl<<endl;
					printf("\n\n"); 
					if(i+m!=Year+12)
						for(int k=0;k<7;k++)	cout<<week[k]<<" ";cout<<endl;
				}
			}
		}
		
	}
	cout<<" "<<year<<" -> "<<Year<<"年间的闰年如下：\n\n"; 
	for(int i=0;i<ok;i++)	printf("%9d",out[i]);
} 
