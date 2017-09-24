#include<stdio.h>

 int JiaMi(char ch[])
 {
 	printf("\t\t请输入您要加密的语句,空格请用“X”表示,输入完毕用“0”结尾 \n\n");
 	char sh[10000];scanf("%s",&sh);ch=sh;
 	for(int i=0;ch[i]!='\0';i++)
	 	printf("%d ",ch[i]);
	 	
	printf("\n");
 	for(int i=0;ch[i]!='\0';i++)
 	{
 		ch[i]=ch[i]*19;	
	 }
	 for(int i=0;ch[i]!='\0';i++)
	 	printf("%d ",ch[i]);
	 	
	printf("初解密\n"); 	
	for(int i=0;ch[i]!='\0';i++)
 	{
 		ch[i]=ch[i]/19;	
	 }
	 for(int i=0;ch[i]!='\0';i++)
	 	printf("%d ",ch[i]);
	printf("\n加密完成\n\n");
 }
 
 int JieMi(char ch[])
 {
 	int s;scanf("%d",&s);
 	printf("\t\t请输入您要解密的语句，输入完毕用“0”结尾 \n\n");
 	int sh[100000];
 	for(int i=0;sh[i]!='\0';i++)
	 {
	 	scanf("%d",&sh[i]);
	 	sh[i]=sh[i]/193937;
	 	i++; 
	 	scanf("%d",&sh[i]);
	 	sh[i]=sh[i]/193937;
	 	printf("%c%c",sh[i-1],sh[i]);
	 }
	 
	printf("\n解密完成\n\n");
 }
 
 int Case(char ch[])
 {
 	char sh[10000];
 	printf("测试\n");
 	scanf("%s",&sh);
 	ch=sh;
 	if(ch[0]==0)printf("1\n");
 	if(ch[0]=='0')printf("2\n");
 	else
 	printf("%s\n",ch);
 	printf("%d %d\n",ch[0],ch[1]);
 	printf("%c%c%c%c%c%c%c%c\n",ch[0],ch[1],ch[2],ch[3],ch[4],ch[5],ch[6],ch[7]);
 }
 
 int main()
 {
 	printf("##################################################################\n\n\n");
 	printf("\t\t   非对称式加密系统（初级）\n\n\n");
 	printf("##################################################################\n\n\n");
 	
 	for(;;)
 	{
 		for(;;)
 		{
		 
 		
	 		printf("\n\t\t加密信息请键入：1 \t解密信息请键入2\t\t");
	 		int x;char ch[10000];
	 		scanf("%d",&x);printf("\n\n");
	 		
	 		switch(x)
	 		{
	 			case 1:JiaMi(ch);break;
	 				
	 			case 2:JieMi(ch);break;
	 			
	 			case 3:Case(ch);break;
			 }
		}
	 }
	 	
 }
