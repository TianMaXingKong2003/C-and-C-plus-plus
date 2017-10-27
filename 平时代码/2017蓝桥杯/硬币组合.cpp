#include<stdio.h>
int main()
{
	int T;scanf("%d",&T);
	
	int n[1000],m[1000],ans[1000];
	
	int i;
	
	int x,y,z;
	 
	for(i=0;i<T;i++)
	{
		scanf("%d%d",&n[i],&m[i]);ans[i]=0;
		
		for(x=0;x<=m[i];x++)
			for(y=0;y<=(m[i]/2);y++)
				for(z=0;z<=(m[i]/5);z++)
				{
					if(x+y+z==n[i]&&x+2*y+5*z==m[i])
						ans[i]++;
				}
		
	}
	
	for(i=0;i<T;i++)
	{
		if(i==T-1)
			printf("%d",ans[i]);
		else
			printf("%d\n",ans[i]);
	}
		
}
