#include<stdio.h>
#include<string.h>

int main()

{

		int x[100];int k;int q;

	for(k=0;k<100;k++)
		x[k]=1;
	
	int z;
	
	scanf("%d",&z);int N;N=z;
	

	int i=2;int j=0;
	while(z-1)
	{
		j=0;
		if(i>=N)
			i=i%N;
			
		if(x[i])
		{
			x[i++]=0;
			
			while(j!=2)
			{
				if(i>=N)
					i=i%N;
				if(x[i])
				{
				
					i++;j++;
				}
				else
				{
					i++;
				}
					
				
			}
			
			z--;
		}
		else
			i++;
			
	//	for(int h=0;h<N;h++)
		//	printf("  %d ",x[h]);printf("\n");
	
	if(z==1)
	{
		if(i>=N)
					i=i%N;
		q=i;//	printf("\nend  i=%d\n",q);
		
	}
	
	}
	
	printf("%d",q);
	

}
