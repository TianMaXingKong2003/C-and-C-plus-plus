#include<stdio.h>
int main()
{
	int t;scanf("%d",&t);
	
	int i=0;int ok[1000];int out[100];
	
	for(;i<t;i++)
	{
		int a,b,c,d;int x[5];int k=0;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		x[0]=a;x[1]=b;x[2]=c;x[3]=d;
		
		for(int m=0;m<4;m++)
		{
			for(int n=0;n<4;n++)
			{
				for(int p=0;p<4;p++)
				{
					if(x[m]!=x[n]&&x[n]!=x[p]&&x[m]!=x[p]&&x[m]*100+x[n]*10+x[p]>100)
					{
						ok[k]=x[m]*100+x[n]*10+x[p];
					//	printf("%d\n",ok[k]);
						k++;
					 } 
					
				}
			}
		}
		
		out[i]=k;
		//printf("k=%d\n",k);
	}
	
	for(int y=0;y<t;y++)
	{
		printf("%d",out[y]);
		if(y!=t-1)	printf("\n");
	}
}
