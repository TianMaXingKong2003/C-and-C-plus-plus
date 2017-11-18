#include<stdio.h>
#include<math.h>

#define max 10000

int main()
{
	int i,j,c,p=0;int out[100];c=0;
	
	for(i=1;i<=max;i++)
	{	
		p=0;
			
		for(j=1;j<i;j++)
			if(i%j==0)
					p+=j;
			
		if(p==i)
		{
			out[c]=p;c++;
		}
	}
	
	for(i=0;i<c;i++)
	if(i!=c-1)
		printf("%d\n",out[i]);
		else
			printf("%d",out[i]);
	
}

