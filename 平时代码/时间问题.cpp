#include<stdio.h>
int main()
{
	long t;
	scanf("%ld",&t);
	int a,b,c;
	a=t/3600;
	t=t%3600;
	b=t/60;
	c=t%60;
	printf("%d:%d:%d",a,b,c);
}
