#include<stdio.h>

int fun(int m,int n)
{
	if(n==0)	return 0;
	else	if(m==0&&n!=0)	return 1;
	else	if(m>=n)	return fun(m,n-1)+fun(m-n,n);
	else	return fun(m,m);
}

int main()
{

	int n,k;scanf("%d%d",&n,&k);
	
	printf("%d",fun(n-k,k));	
	
} 
