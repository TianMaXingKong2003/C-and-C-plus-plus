#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int mou[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	
	for(int i=1988;i<1989;i++)
	{
		if(i%4==0)
		{
			mou[2]=29;
			if(i%100==0&&i%400!=0)
				mou[2]=28;
		}
		
		for(int j=1;j<=12;j++)
		{
			
			for(int k=0;k<mou[j];k++)
			{
				long date=i*10000+j*100+k;
				
				int state=1;
					
				for(int q=2;q<sqrt(date);q++)
				{
					if(date%q==0){
						state=0;break;
					}
				 } 
				if(state)	cout<<date<<endl;
			}
		
		}
	}
}
