#include<stdio.h>

#include<iostream>

#include<string.h> 

int countchar(char *str,char a){
    int n=0;
    int i = 0;
    while(*(str+i)!='\0'){
        if(*(str+i) == a)
            n++;
        i++;
        if(n>1)	break;
    }
    return n;
}

int main()
{
	 
	int t;scanf("%d",&t);
	
	int i=0;
	char out[100];int q=0;
	
	for(;i<t;i++)
	{
		char x[100];
		scanf("%s",&x);
		
		for(int j=0;j<=strlen(x);j++)
		{
			if(countchar(x,x[j])==1)
			{
				//printf("%d\n",countchar(x,x[j]));
				out[q]=x[j];q++;break;
			}
			else
			{
				if(countchar(x,x[j])>1)
					continue;
				else
					continue;
			}
		}
	}
	
	for(int k=0;k<t;k++)
	{
		printf("%c",out[k]);
		if(k!=t-1)	printf("\n");
	}
	 
}
