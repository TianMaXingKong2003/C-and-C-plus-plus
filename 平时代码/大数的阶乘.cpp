 #include<stdio.h>
 #define max 10000
 
 int N(int n)
 {
 	int i=1;
 	int y=1;
 	
 	for(;i<=n;i++)
 		y*=i;
 
 	return y;
 }
 
 int main()
 {
 	
	 
 	int n;scanf("%d",&n);
 	
 	int i,j,num0,num,flag=0;
 	
 	int m[max]={0};m[0]=1;
 	
 	for(i=2;i<=n;i++)
 	{
 		num0=num=0;
 		
	 	for(j=0;j<=flag;j++)
 		{
 			if(m[j]*i+num0>=10)
			 {
			 	num=(m[j]*i+num0)/10;
			 	m[j]=(m[j]*i+num0)%10;
			 	num0=num;
			  } 
 			else
 			{
 				m[j]=m[j]*i+num0;
 				num=0;num0=num;
			 }
			 if(j==flag&&num!=0)
			 	flag++;
		 } 
	 	
	 }	
	 
	 /*
	 int count=0;
	 
	 for(i=0;i<max;i++)
	 {
	 	if(i>=19)
	 	if(m[i+1]==0&&m[i+2]==0&&m[i+3]==0&&m[i+4]==0)
	 		{count++;break;} 
	 	else
	 		count++;
	 }
	 
	 */
	 
	 for(i=flag;i>=0;i--)
	 	printf("%d",m[i]);
	
	
	//	printf("\n\n%d",N(n));
  } 
  
  
  
  
  
  
  
  
  
  
  
