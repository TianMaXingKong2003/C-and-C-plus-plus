#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

double len(double a1x,double a2x,double b1x,double b2x)
{
	double len1,len2,sum,dir;
	
	sum=max(max(a1x,a2x),max(b1x,b2x))-min(min(a1x,a2x),min(b1x,b2x));
	
	len1=abs(a1x-a2x);len2=abs(b1x-b2x);
	
	dir=sum-len1-len2>=0?0:abs(sum-len1-len2);
	
	return dir;
}

int main()
{
	
	double a1x,a1y,a2x,a2y,b1x,b1y,b2x,b2y;
	
	//while(cin>>a1x>>a1y>>a2x>>a2y>>b1x>>b1y>>b2x>>b2y)		
	
		printf("%.2lf\n",len(a1x,a2x,b1x,b2x)*len(a1y,a2y,b1y,b2y));
 } 
