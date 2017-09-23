#include<stdio.h>

int main(){
	
	int a;
	int b[100];
	int i=0;
	scanf("%d",&a);
	if(a==0)
		printf("0");
	else
	{
		for(i=0;a!=0;a=a/2,i++)
		b[i]=a%2;
	for(int j=i-1;j!=-1;j--)
		printf("%d",b[j]); 
	}
	
} 

