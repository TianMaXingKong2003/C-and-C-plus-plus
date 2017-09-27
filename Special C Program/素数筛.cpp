#include<stdio.h>
#include<math.h>
#define max 100001

int main()
{
	bool prime[max];prime[0]=0;prime[1]=0;prime[2]=1;prime[3]=1;
	
	int i,j;
	
	for(i=3;i<max;i++)
		prime[i]=i%2==0?0:1;
	
	int t=(int) sqrt(max);
	
	for(i=3;i<=t;i++)
	{
		if(prime[i])
			for(j=i*i;j<=max;j=j+2*i)
			{
				prime[j]=0;
				//printf("%d不是一个素数\n",j);
			}
	}
	
	
	for(i=1;i<100;i++)
	{
		if(prime[i])
			printf("素数为：%d    prime[%d]\n",i,i);
		//else
		//	printf("prime[%d]     不是素数\n",i);
	}
 } 
