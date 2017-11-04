#include<stdio.h>
#include<algorithm>  

using namespace std;  

struct info  
{  
    int a;  
    int b;  
}unit[1000];  

int cmd(info x,info y)  
{  
    return x.b<y.b;  
}  


int main()
{
	int n,i,j,k,m;int out[100];int time=0;
	
	for(i=0;;i++)
	{
		scanf("%d",&n);
		
		if(!n)	break;
		
		else
		{
			
			for(int q=0;q<n;q++)
			
				scanf("%d %d",&unit[q].a,&unit[q].b);
				
			sort(unit,unit+n,cmd);
			
			j=0;  k=0;  
			
		     for(m=1;m<n;m++)  
		     {  
		         if(unit[m].a>=unit[j].b)  
		         {  
		             k++;  
		             j=m;  
		         }  
		     }  
		     
     		out[i]=k+1;
     		
     		printf("out[%d]=%d\n",i,out[i]);
			
		}
		
		time++;
	}
	
	for(i=0;i<time;i++)
	{
		if(i!=time-1)	printf("%d\n",out[i]);
	
	else printf("%d",out[i]);
	}
 } 
