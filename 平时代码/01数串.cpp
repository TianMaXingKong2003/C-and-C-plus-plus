#include<stdio.h>
int main()
{
	int a,A;
	int b[100]={0};
	int i=0;
	
	A=0;
	for(a=A;a<32;)
	{
			for(i=0;i<5;a=a/2,i++)
				b[i]=a%2;
			for(int j=i-1;j!=-1;j--)
				printf("%d",b[j]); 
		A++;
		a=A;
		
	if(a==32);
	else
		printf("\n");
	}
	

}
