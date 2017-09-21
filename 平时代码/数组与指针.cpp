#include<stdio.h>

#define L 3

int main(){
	int *p,i,j,a[L];
	
	p=a;
	
	for(i=0;i<L;i++)
		scanf("%d",p++);
	printf("\n");
	
	p=a; 
	
	for(j=0;j<L;j++,p++)
		printf("%d\n",*p);
		
} 
