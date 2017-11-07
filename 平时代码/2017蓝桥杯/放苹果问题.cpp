#include<stdio.h>

int f(int m,int n)
{
	
	if(m==0)
	{
		//	printf("f(%d,%d)\n",m,n);
			return 1;
	}
	
	else	if(n==0&&m!=0)	
	{
	//	printf("f(%d,%d)\n",m,n);
		return 0;
	}
	
	else 	if(m<n)		
	{
	//	printf("f(%d,%d)\n",m,m);
		return f(m,m);
	}
	
	else	if(m>=n)
	
	{
	//	printf("f(%d,%d)+f(%d,%d)\n",m,n-1,m-n,n);
		return f(m,n-1)+f(m-n,n);
	}
}

int main()
{
	int c;scanf("%d",&c);int i,j;int out[100];
	
	for(i=0;i<c;i++)
	{
		int m,n;scanf("%d%d",&m,&n);
		out[i]=f(m,n);
	}
	
	for(j=0;j<c;j++)
	{
			printf("%d",out[j]); 
			if(j!=c-1)	printf("\n");
	}
	
	
 } 
 
 
 
 
 
