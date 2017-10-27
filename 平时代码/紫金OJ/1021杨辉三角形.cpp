#include<stdio.h>

int main()

{
	int n;
	scanf("%d",&n);
	
	int p[50][50]={0};
	
	int i,j,x,y;
	
	p[0][1]=1;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			p[i][j]=p[i-1][j-1]+p[i-1][j];
		}
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		
		{
			if(j!=i)	printf("%d ",p[i][j]);
			else	printf("%d",p[i][j]);
		}
		
		//printf("end");
			
		if(i!=n)
			printf("\n");
	}
		
}
