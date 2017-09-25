#include<stdio.h>
int fun(int x)
{
	int i;int sum=0;
	for(i=x-1;i>=1;)
	{
		
		if(x%i==0)
			sum++;	
		i--;
		
	}	
	return sum;
 }

int main()
{
	int N;int x[100000];
	scanf("%d",&N);
	int i=2;int j=0;
	for(i=2;i<N;i++)
	{
		if(fun(i)==1)
			{
				x[j]=i;
				j++;
			}
		else 
			continue;
	}
	for(i=0;i<j;i++)
	{
		if(i==j-1)
			printf("%d",x[i]);
		else
			printf("%d\n",x[i]);
	}
 } 
