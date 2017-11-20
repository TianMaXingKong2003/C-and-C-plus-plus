#include<stdio.h>
int main()
{
	int g[100][100];
	int x,y,b,m,n,i,j;char w;
	scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&g[i][j]);
	scanf("%d %d %c %d",&x,&y,&w,&b);
	
	for(;b>0;b--)
	{
		if(g[x][y]==0)
		{
			switch(w)
			{
				case'U':
					{
						w='L';
						g[x][y]=1;
						y=y-1;
						break;
					}
				case'R':
					{
						w='U';
						g[x][y]=1;
						x=x-1;
						break;
					}
				case'D':
					{
						w='R';
						g[x][y]=1;
						y=y+1;
						break;
					}
				case'L':
					{
						w='D';
						g[x][y]=1;
						x=x+1;
						break;
					}
			}
		}
		
		else
		{
			switch(w)
			{
				case'U':
					{
						w='R';	
						g[x][y]=0;
						y=y+1;
						break;
					}
				case'R':
					{
						w='D';
						g[x][y]=0;
						x=x+1;
						break;
					}
				case'D':
					{
						w='L';
						g[x][y]=0;
						y=y-1;
						break;
					}
				case'L':
					{
						w='U';
						g[x][y]=0;
						x=x-1;
						break;
					}
			}
		}
		
		
	}
	printf("%d %d",x,y); 
}
