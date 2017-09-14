#include<stdio.h>
int main()
{
	//质数器
	int x=0;
	
	
	printf("请输入求解的数\n");
	scanf("%d",&x); 
	
	int i;
	for(i=x-1;i>=1;)
	{
		
		if(x%i==0)printf("\n质数为：%d\n%d = %d * %d\n",i,x,i,x/i);
			
			i--;
	}	
 }
  
