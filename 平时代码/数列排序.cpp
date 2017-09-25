#include<stdio.h>
int fun()
{
	
}
int main()
{
	int n;int count=0;int a;int j=0;
	scanf("%d",&n);
	int i=0;
	int x[300];
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	
	for(j=0;;)
	{
			count=0;
		for(j=0;j<i-1;j++)
		{
		
			if(x[j]>=x[j+1])
			{
				a=x[j+1];
				x[j+1]=x[j];
				x[j]=a;
				count++;
			}
		}
		if(count==0)
			break;
		else
			;
		
	}
	for(j=0;j<i;j++)
		printf("%d ",x[j]);
}
