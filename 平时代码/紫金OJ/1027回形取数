#include<stdio.h>
#include<string.h>

int i=0;char s[100];

const int const1=-1;

void put(int a,int b)
{
	//if(a==1)
	//	printf("%d",b);
		
//	else
		printf("%d ",b);
}


int main()

{
	/* 
	FILE *fp=fopen("123.txt","r");
	
	
	while(fscanf(fp,"%d",&s[i])!=EOF)i++;
	
	
	*/

	int m,n;int x,y;
	
	int g[300][300];memset(g,const1,sizeof(g));
	
	scanf("%d%d",&m,&n);
	
	i=0;
	
	
	for(x=1;x<=m;x++)
		for(y=1;y<=n;y++)
		{
			scanf("%d",&g[x][y]);
			
		//	g[x][y]=s[i];
			
			i++;
			
		}
			
		/* 
			
		for(x=0;x<=10;x++)
		{
			for(y=0;y<=10;y++)
				printf("%d ",g[x][y]);
			printf("\n");
		}
		
	*/
	
	x=1;y=1;
	
	while(i>=0)
	{
		//printf("%d",i);
	//	printf("down");
	
	
			do	{if(i>0)	put(i,g[x][y]);i--;g[x][y]=const1;x++;	}
			while(g[x][y]!=const1&&i>=0);x--;y++;
		
	//	printf("right");
	
	
			do	{if(i>0)	put(i,g[x][y]);i--;g[x][y]=const1;y++;	}
			while(g[x][y]!=const1&&i>=0);y--;x--;
			
	//	printf("up");
			
	
			do	{if(i>0)	put(i,g[x][y]);i--;g[x][y]=const1;x--;	} 
			while(g[x][y]!=const1&&i>=0);x++;y--;
		
	//	printf("left");	
	
	
			do	{if(i>0)	put(i,g[x][y]);i--; g[x][y]=const1;y--;	} 
			while(g[x][y]!=const1&&i>=0);y++;x++;
				
		}
	
	
}
