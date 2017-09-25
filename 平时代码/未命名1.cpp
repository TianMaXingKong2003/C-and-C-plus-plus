#include<stdio.h>
#include<math.h>
int fun(int n[],int m[],int x,int end)
{
	int j=2;int i=2;
	
	for( ;i<=end;i++)
	{
		if(n[i]%x!=0)
		{
			m[j]=n[i];
			j++;
		}
		
		else
			;
	}
	
	return j;
	printf(" %d  \n",m[j]);
};

int main()
{	
	int n[100001];n[1]=1;n[2]=2;n[3]=3;	int N;
	int m[10000];m[1]=1;m[2]=2;m[3]=3;m[4]=5;
	int i,j;int a=1;int b=1;
	int count=2;int end=100001;int y;
	
	for(i=1;i<=100001;i++)
	 	n[i]=i;
	 	
	 printf("²âÊÔ\n");
	 
		 
/*	 printf("\n\n%d\n\n",fun(n,m,end));
	 for(i=1;i<50;i++)
	{
		printf(" m{%d}=%d\n",i,m[i]);
	}
	for(a=1;a<50;a++)
		n[a]=m[a];
	for(i=1;i<50;i++)
	{
		printf(" n{%d}=%d\n",i,n[i]);
	}
	
*/
	

	for(i=1;i<end; )
	{
		y=fun(n,m,m[count],end);
		end=y;
		
		
		for(a=1;a<end;a++)
			n[a]=m[a];
		
		
		count++;
	}
	
		
	printf("Ñ­»·½áÊø\n");

	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		if(n[i]==0);
		else
				printf("%d\n",n[i]);
	}
	
 }	
 
