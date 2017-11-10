#include<iostream>
#include<stdio.h>

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF&&n!=0)
	{
		double x=0;
		if(n<=4)	x=10;
		else	if(n<=8)	x=10+(n-4)*2;
		else	if(n>8)
		{
			while(n>=8)
			{
				x+=18;
				n-=8;
			}
			
			if(n<=4)
			{
				x+=n*2.4;
			}
			else
			{
				x+=10+(x-4)*2;
			}
		}
		
		if(x>(int)x)	
			printf("%.1lf\n",x);
		else	
			printf("%d\n",(int)x);
	}
}
