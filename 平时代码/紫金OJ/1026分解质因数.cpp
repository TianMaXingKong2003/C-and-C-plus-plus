#include<stdio.h>
#include<math.h>

#define max 10001

int Su[1000];

int main()

{
	
	int su[max];su[0]=1;su[1]=1;su[2]=1;
	
	int i,j;
	
	for(i=3;i<max;i++)	
		su[i]=i%2==0?0:1;
	
	int t=(int ) sqrt(max);	
	for(i=3;i<=t;i++)
	{
		if(su[i])
		{
			for(j=i*i;j<=max;j+=2*i)
					
					su[j]=0;
		}
	}
	
	for(i=2,j=0;i<=max;i++)
	{
		if(su[i])
		{
			Su[j]=i;j++;
		}
	}
	
	//for(i=0;i<500;i++)	printf("%d\n",Su[i]);
	
	int a,b,c;scanf("%d%d",&a,&b);
	
	
	for(int x=a;x<=b;x++)
	{
		
		printf("%d=",x);c=x;
		
		for(i=0;i<=x;)
		{
				
			if(c%Su[i]==0)
			{
				printf("%d",Su[i]);
				c/=Su[i];
				i=0;
				
				if(c!=1)
					printf("*");
				else
					break;
			}
			
			else	i++;
			
		}
		
		if(x!=b)
		printf("\n");
		
	}
	
	
	
	
}
