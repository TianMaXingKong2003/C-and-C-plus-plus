#include<stdio.h>
#include<string.h> 
#include<iostream>
int main()
{
/*	char s[1000];
	scanf("%s",&s);
	
	for(int i;i<strlen(s);i++)
		printf("%d\n",s[i]-48);
*/

	int a=1;int L=0;
	char A[1000]={0};A[0]=1;
	int n;
	
	printf("实验一下：A[0]=%d\n",A[0]+2);
	
	
	printf("这是一个%d位数\n",strlen(A));
	n=strlen(A);
	
	for(int i=strlen(A)-1;i>=0;i--)
		printf("%d",A[i]);
		
	
		
	scanf("%d",&n);
	
	for(int j=1;j<=n;j++)
	{
		if(n==1||n==2)
		{
		
			break;
		}
		else
		{
			L=strlen(A)-1;
			
			for(int i=0;i<=L+1;i+=2)
			{
					if(A[i-1]>=10)
					{
						A[i]=A[i]*j+A[i-1]/10;
									
						A[i-1]=A[i-1]%10;
					}
					else
						A[i]=A[i]*j;
					if(A[i]>=10)
					{	
						A[i+1]=A[i+1]*j+A[i]/10;
									
						A[i]=A[i]%10;
							
						
					}
				printf("j=%d i=%d  执行后:A[%d]=%d  A[%d]=%d     A有%d位数\n",j,i,i,A[i],i+1,A[i+1],strlen(A));
			}
			
		}
	}


	printf("这是一个%d位数\n",strlen(A));
	
	printf("%d %d %d %d %d\n",A[0],A[1],A[2],A[3],A[4]);
	
	printf("n!=");
	for(int i=strlen(A)-1;i>=0;i--)
		printf("%d",A[i]);
}
