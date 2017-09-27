#include<stdio.h>
#include<math.h>

int main()
{
	int max=100001;
	int prime[max];prime[0]=0;prime[1]=0;prime[2]=1;
	
	int i,j;
	
	for(i=3;i<max;i++)
		prime[i]=i%2==0?0:1;
		

	int t=(int)	sqrt(max); 
	
	
	for(int i=3;i<=t;i++)
	{
		if(prime[i])
			for(j=i*i;j<=max;j+=2*i)
				prime[j]=0;
	}
	
	int n,time=0;
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		if(prime[i])
			time++;
	}

	j=0;
	
	for(i=1;i<n;i++)
	{	
			if(prime[i]&&j!=time)
				{
					
					if(j+1==time)
					{
						printf("%d",i);
						break;
					}
					else 
					{
						printf("%d\n",i);
						j++;
					}
						
				}
				
				
	}

 } 
