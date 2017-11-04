#include<stdio.h>

int main()
{
	
	int A[2000],B[2000],C[5000],D[5000],E[5000],G[5000];
	
	int a,b,i,j;int c=0;int d=0;int d2=0;	
		int g=0;int time=0;int e=0;
	
	scanf("%d",&a);
	
	for(i=0;i<a;i++)	scanf("%d",&A[i]);
	
	scanf("%d",&b);
	
	for(i=0;i<b;i++)	scanf("%d",&B[i]);
	
	 
	for(i=0;i<a;i++)
		for(j=0;j<b;j++)
		{
			
			if(A[i]==B[j])
			{
				C[c]=A[i];
				c++;
				
			}
			
			}	
	
	//sort(C,C+c);
	//printf("\nC=%d\n",c);
	for(i=0;i<c;i++)	
		printf("%d ",C[i]);
	
	printf("\n");
	
	
	for(d=0;d<(a+b);d++)
	{
		if(d<a) 	
			D[d]=A[d];
		else		
			D[d]=B[d-a];
		
	}
	
		
	for(d=0;d<(a+b);d++)
	{
		d2=D[d];
		for(i=0;i<(a+b);i++)
		{
			if(i==d)	continue;
			else	if(d2==D[i])	D[i]=-99; 
		}
	}
	
	printf("\nD=%d\n",d);
	for(i=0;i<d;i++)	
		printf("%d ",D[i]);
	
	printf("\n");
	
	
	
	//sort(D,D+d);

	//printf("\nD=%d\n",d);
	for(i=0;i<d;i++)
	{
		if(D[i]!=-99)
		{
			G[g]=D[i];g++;
		}
	}
	
	//sort(G,G+g);
	for(i=0;i<g;i++)
			 	printf("%d ",G[i]);
	
	printf("\n");
	
	for(i=0;i<a;i++)	
	
	{
			time=0;
			for(j=0;j<c;j++)
			
			{
				if(A[i]!=C[j])
				{
						time++;
						//printf(" A[i]=%d ",A[i]);
						continue;
					}
			
			}
			
			if(time==c)	
			{
				E[e]=A[i];e++;
			}
	}
	
	//sort(E,E+e);
	
	for(i=0;i<e;i++)	
		printf("%d ",E[i]);
	
}
