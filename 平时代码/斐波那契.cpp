#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i,j;
	int f[100001];f[1]=1;f[2]=1;
	for(i=3;i<=n;++i)
		f[i]=(f[i-1]+f[i-2])%10007;
	printf("%d",f[n]);
	}
	
}

