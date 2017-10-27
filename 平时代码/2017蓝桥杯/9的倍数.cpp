#include<stdio.h>

int pan(int i)
{
	
	while(i>0)
	{
		if(i%10==9)
			return 1;
		else
			i/=10; 
	}
	return 0;
}

int main()

{
	
	int N;
	
	scanf("%d",&N);int x[1000];int j=0;
	
	for(int i=1;i<N;i++)
	{
		if(i%9==0||pan(i))
		{
			x[j]=i;
			j++;
		}
	}
	
	for(int k=0;k<j;k++)
	{
		if(k==j-1)
			printf("%d",x[k]);
		else
			printf("%d\n",x[k]);
	}
	
	
}
