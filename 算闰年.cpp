#include<stdio.h>
int main()
{
	int i,j,x;
	j=0;
	for(i=1998;i<1998+76;i++)
	{
		if(i%4==0&&i%400!=0)
		{
			j++;
			printf("%d    %d\n",i,j);	
		}
		
		
	}
	
 } 
