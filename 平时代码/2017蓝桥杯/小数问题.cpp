#include<stdio.h>
#include<string.h>

int main()
{
	int t;scanf("%d",&t);int n;int out[100];
	
	for(int i=0;i<t;i++)
	{
		char x[100];
		
		scanf("%s",&x);scanf("%d",&n);
		
		for(int j=0;j<strlen(x);j++)
		{
			if(x[j]!='.')	continue;
			else
			{
				out[i]=x[j+n];
				break;
			}
		}
	}
	
	for(int q=0;q<t;q++)
		
		if(q!=t-1)
		printf("%c\n",out[q]);
		else
	printf("%c",out[q]);
}
