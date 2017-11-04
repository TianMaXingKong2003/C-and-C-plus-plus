#include<stdio.h>
int main()
{
	float a,b,c,d;int i;float k;int p;
	
	float out[10][100];
	
	for(i=0;;i++)
	{
		scanf("%f%f%f%f",&a,&b,&c,&d);
		if(a==0&&b==0&&c==0&&d==0)	break;
		
		else
		{
			k=b/a;p=b-a;
			
			//printf("%f\n",k);
			
			if(c-b==p&&d-c==p)
			{
					out[i][0]=d+b-a;
					out[i][1]=d+(b-a)*2;
					out[i][2]=d+(b-a)*3;
					out[i][3]=d+(b-a)*4;
					out[i][4]=d+(b-a)*5;
					out[i][5]=d+(b-a)*6;
			}
			else
			
			if(c/b==k&&d/c==k)
			
			{
					out[i][0]=d*k;
					out[i][1]=k*out[i][0];
					out[i][2]=(b/a)*out[i][1];
					out[i][3]=(b/a)*out[i][2];
					out[i][4]=(b/a)*out[i][3];
					out[i][5]=(b/a)*out[i][4];
			}
			
			else
			
			if(c==a+b&&d==c+b)
			
			{
					out[i][0]=c+d;
					out[i][1]=d+out[i][0];
					out[i][2]=out[i][0]+out[i][1];
					out[i][3]=out[i][1]+out[i][2];
					out[i][4]=out[i][2]+out[i][3];
					out[i][5]=out[i][3]+out[i][4];
				
			}	
			
			//printf("%.0f %.0f %.0f %.0f %.0f %.0f\n",out[i][0],out[i][1],out[i][2],out[i][3],out[i][4],out[i][5]);
		}
	}
	
	for(int j=0;j<i;j++)
	
	if(j!=i-1)
	printf("%.0f %.0f %.0f %.0f %.0f %.0f\n",out[j][0],out[j][1],out[j][2],out[j][3],out[j][4],out[j][5]);
	else
	printf("%.0f %.0f %.0f %.0f %.0f %.0f",out[j][0],out[j][1],out[j][2],out[j][3],out[j][4],out[j][5]);

}
