#include <stdio.h>  
#include<string.h>

int main2()
{
	char x;
	scanf("%c",&x);
	printf("%d",x);
}

int fun(char a,char b)
{
	int x=(int)a;
	int y=(int)b;
	
	int i=50;
	for(i-50;i<=62;i++)
	{
		if(x==i)
		{
			if(y==100)
				return (x*10+1);
			if(y==99)
				return (x*10+2);
			if(y==104)
				return (x*10+3);
			if(y==115)
				return (x*10+4);
		}
		else
			{
				if(x==49)
				{
					if(y==100)
						return (10*100+1);
					if(y==99)
						return (10*100+2);
					if(y==104)
						return (10*100+3);
					if(y==115)
						return (10*100+4);
				}
				
				if(x==74)
				{
					if(y==100)
						return (11*100+1);
					if(y==99)
						return (11*100+2);
					if(y==104)
						return (11*100+3);
					if(y==115)
						return (11*100+4);
				}
				if(x==81)
				{
					if(y==100)
						return (12*100+1);
					if(y==99)
						return (12*100+2);
					if(y==104)
						return (12*100+3);
					if(y==115)
						return (12*100+4);
				}
				
				if(x==75)
				{
					if(y==100)
						return (13*100+1);
					if(y==99)
						return (13*100+2);
					if(y==104)
						return (13*100+3);
					if(y==115)
						return (13*100+4);
				}
				
				if(x==65)
				{
				if(y==100)
						return (14*100+1);
					if(y==99)
						return (14*100+2);
					if(y==104)
						return (14*100+3);
					if(y==115)
						return (14*100+4);
				}
			}
	}
}

int main()  
{  
		
	
	int xu[10];
	char s[100];int i,j,count=0;char out[100];
	
	
	
//	scanf("%s",&s);	//	printf("%s\n",s);
	
	
	for(i=0;i<=9;)
	{
		scanf("%c",&s[i]);
		if(s[i]==48)
			{
				continue;
			}
		i++;
	}
	

	
	for(j=0;j<=8;j+=2)
	{	
		for(i=0;i<=8;i+=2)
		{
			if(fun(s[j],s[j+1])<fun(s[i],s[i+1]))
			{
			
				count++;
			
				
			}
		
		}
		
			if(count==4)
			{
			
				out[0]=s[j];out[1]=s[j+1];
			
			}
			else
				if(count==3)
			{
				
					out[2]=s[j];out[3]=s[j+1];
			
			}
			else	if(count==2)
			{
				
					out[4]=s[j];out[5]=s[j+1];
			
			}
			else	if(count==1)
			{
				
				out[6]=s[j];out[7]=s[j+1];
			
			}
			else		if(count==0)
			{
				
					out[8]=s[j];out[9]=s[j+1];
			
			}
			count=0;
	}
	
	for(i=0;i<=8;i+=2)
	{
		if(i==8)
		{
			if(out[i]==49)
				printf("10%c",out[i+1]);
			else
				printf("%c%c",out[i],out[i+1]);
		}
		else
		{
			if(out[i]==49)
				printf("10%c ",out[i+1]);
			else
				printf("%c%c ",out[i],out[i+1]);
		}
		
	}
  
}  
