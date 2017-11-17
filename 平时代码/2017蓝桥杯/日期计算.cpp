#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
	
	int mou[14]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	
	int year,m,day;
	
	cin>>year;
	
	getchar(); 
	
	cin>>m;
	
	getchar();
	
	cin>>day;
	
	//cout<<year<<" "<<m<<" "<<day<<endl;
	
	int i=year;
	
	if(i%4==0||i%400==0)
	{
		if(i%100!=0)
		{
			mou[2]=29;
			}
			
		}
	else	mou[2]=28;
	
	int time=1;
	
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=mou[i];j++)
		
			if(i==m&&day==j)
				break;
			else
			{
			//	printf("%d %d\n",i,j);
				time++;
			}
	}
	
	cout<<time;
	
}
