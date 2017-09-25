#include<stdio.h>
int main()
{
	int x[4][4];int i=0;int j=0;int a;
	scanf("%d %d",&x[0][0],&x[0][1]);
	scanf("%d %d",&x[1][0],&x[1][1]);
	scanf("%d %d",&x[2][0],&x[2][1]);
	scanf("%d %d",&x[3][0],&x[3][1]);
	scanf("%d %d",&x[4][0],&x[4][1]);
	
	for(i=0,j=0;;)
	{
		if(x[i][j])
		{
				
		}	
	}
	printf("%d%d %d%d %d%d %d%d %d%d",
	x[0][0],x[0][1],x[1][0],x[1][1],x[2][0],
	x[2][1],x[3][0],x[3][1],x[4][0],x[4][1]);
}
