#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int a1,a2,a3,time=0;
	//cout<<x<<endl;
	for(a1=0;a1<=6;a1++)
	{
		
		char x[]="bbbbbbbbbb";
		
		for(a2=a1+1;a2<=7;a2++)
		{
			for(a3=a2+1;a3<=8;a3++)
			{
				int num=2;
				x[a1]='a'; 
				x[a2]='a'; 
				x[a3]='a'; 
				for(int k=0;k<=9;k++)
				{
					
					if(x[k]=='a')
						num=num*2;
					else
						num--;
				}
				
					if(num==0)
					{
						cout<<x<<endl;
						time++;
					}
				x[a3]='b'; 
			}
			x[a2]='b'; 
		}
		
	}
	cout<<time;
}
