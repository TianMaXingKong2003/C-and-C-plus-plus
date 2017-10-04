#include<stdio.h>
#include<string.h>

char y[1<<26];
int A=65;
int D=2;

int count(char z[])
{
	int x=0;
	for(;z[x]!='0';)
		x++;
		
	return x;
}

int fun(int x,char z[])
{
	int g;
	A++;
	g=1<<(D-1);g--;
	z[g]=A;
	
//	printf("z[%d]=%c\n",g,A);
	
	int i,j,k,t;
	
	i=0;j=(1<<(D-1));
	
	t=1<<(D-1);t=t-1;

	for(;i<t;i++)
	{
		k=1<<D;k=k-2-j;
		z[j]=z[k];
		
		//	printf("D=%d	i=%d	i<%d	j=%d	k=%d\n",D,i,t,j,k);
	//	printf("y[%d]=%c	count=%d\n",j,z[j],count(y));
		
		j++;
	
	}
//	for(int q=0;q<count(y);q++)printf("%c",y[q]);printf("\n\n");
	
}

int main()
{
	memset(y,'0',sizeof(y));
	y[0]='A';
	
	int x;scanf("%d",&x);	int i=0;
	
	if(x==1)
		printf("A");
	else
	{
	
		for(;D<=x;)
		{
			fun(x,y);
			D++;
		}
		
		for(;i<count(y);i++)printf("%c",y[i]);
						
	}
	
	
}
