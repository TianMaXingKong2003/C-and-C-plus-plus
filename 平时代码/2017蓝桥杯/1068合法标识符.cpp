#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    char out[50];
    int i;
    
    gets(out);
    
    if(!(out[0]>='a' && out[0]<='z' || out[0]>='A' && out[0]<='Z' || out[0]=='_'))
	        cout<<"no";
	else	
    for(i=1;i<strlen(out);i++)
	{
		if(!(out[i]>='a' && out[i]<='z' || out[i]>='A' && out[i]<='Z' || out[i]=='_' || out[i]>='0' && out[i]<='9'))
		{
            cout<<"no"; break;
        }
        else
	        if(out[i+1]=='\0')    
				cout<<"yes";
	}
}
