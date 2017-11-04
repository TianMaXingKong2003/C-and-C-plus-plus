#include<stdio.h>

void an(int n)
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("sin(%d",i);
		
		if(i!=n&&(i+1)%2==0)	printf("–");
		
		if(i!=n&&i%2==0)	printf("+");
		
	}
	
	for(i=1;i<=n;i++)	printf(")");
}


void sn(int n)
{
	int i;
	for(i=1;i<n;i++)
		printf("(");
		
	for(i=1;i<=n;i++)
	{
		an(i);printf("+%d",n-i+1);
		
		if(i!=n)
			printf(")");
	}
	
}

int main()

{
	int N;scanf("%d",&N);
	
	sn(N);
}
