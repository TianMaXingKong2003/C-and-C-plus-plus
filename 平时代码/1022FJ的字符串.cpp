#include<stdio.h>
#include<string.h>

#define max 20		//如果是26的时候会非常大，需要修改方法 

int main()

{
	
	int N1,N;
	
	scanf("%d",&N);
	
	char s[(1<<max)-1];
	
	s[0]=65;	//A
	
	int i,j,k;
	
	N1=1;
	
	int num=0;
	
	for(i=1;i<=N;i++)
	{
		num=(1<<(i-1))-1;
		
		s[num]=i+64;
		
		for(j=1;j<=num;j++)
		{
			s[num+j]=s[num-j];
		}
		
	
	}
	
	for(i=0;i<strlen(s);i++)
		printf("%c",s[i]);
	
 } 
