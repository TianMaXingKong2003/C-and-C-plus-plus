
#include<stdio.h>
int main()
{
	int x,y,z;
	int a;
	int b[100];int i=0;
	
	while(scanf("%d %d %d",&x,&y,&z)!=EOF)
	{
		for(a=10;;)
		{
			if(a<=100)
			{
				if(a%3==x&&a%5==y&&a%7==z)
				{
					b[i]=a;i++;break;	
				}
				else
					a++;
			}
			else
				{
					b[i]=777;i++;break;
				}
		}
	}
	
	i=i-1;
	int j=0;

	for(j=0;j<=i;j++)
	{
		if(b[j]!=777)
		{
			if(j==i)
				printf("Case%d:%d",j,b[j]);
			else
				printf("Case%d:%d\n",j,b[j]);
		}
		else
		{
			if(j==i)
				printf("Case%d:No answer",j);
			else
				printf("Case%d:No answer\n",j);
		}
	}
}

