#include<stdio.h>
int main()
{
	int i,j,n;scanf("%d",&n);int out[30][30];int p[30]; 
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&out[i][j]);
		
	
	for(j=0;j<n;j++)
	{
		int right=0,wrong=0;
		for(i=0;i<n;i++)
		{
			if(out[i][j])	right++;
			else	wrong++;
		}
		if(right>wrong)	p[j]=1;
		else p[j]=0;
		
		//printf("right=%d wrong=%d\n",right,wrong);
	}
	
	
	//printf("p[0]=%d\n",p[0]);
	
	int put[30];int q=0;
	for(i=0;i<n;i++)
		if(p[i])
		{
			put[q]=i+1;q++;
		}
	for(i=0;i<q;i++)
		if(i!=q-1)
		printf("%d ",put[i]);
		else
			printf("%d",put[i]);
		//printf("end");
 } 
