#include<stdio.h>

int fun(int n,int m)
{
    if (n==0&&m!=0)
       return 0;
    else if (m==0)
    {
      return 1;   
    }
    else if (m>=n)
    {
      return fun(n,m-n)+fun(n-1,m);
    }
   else
      return fun(m,m);  
 
}

int main()
{
	int c;
	scanf("%d",&c);
	 
	 int m[1000],n[1000],k[1000];
	 
	 
	int i=0;
	for(;i<c;i++)
	{	
		scanf("%d%d",&m[i],&n[i]);k[i]=0;
		
		k[i]=fun(n[i],m[i]);
	 } 
	 
	 for(i=0;i<c;i++)
	 {
	 	if(i==c-1)
	 		printf("%d",k[i]);
	 	else
	 		printf("%d\n",k[i]);
	 }
}


