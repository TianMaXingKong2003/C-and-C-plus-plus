#include<stdio.h>
#include<math.h>
int main()
{	
	double n;int y;
//	scanf("%f",&n);
	
	double x1=1.618;
	double x2= -0.618;
	
	double i;
	for(i=1.0;i<10;i++)
	{
		n=i;	
		for(;n>1;n--)
		{
			x1=x1*1.618;
				
			x2=x2*(-0.618);
		}
		
		//	 y=round ((x1-x2)/2.236);
	
	
			printf("%.0f  %f\n",(x1-x2)/2.236,n);
	}
		//printf("%d\n",y);
//	printf("%d",y%10007);
	
 }	
 
