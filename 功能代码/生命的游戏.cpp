#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>

#define time 100
#define wc	90
#define wk	80
#define sm  3			//寿命 
#define dsgl 15			//低死亡率
#define hsgl 85			//高死亡率 

int main()
{
	int w1[wc][wk]={0};	//声明世界的大小并初始化 
	int w2[wc][wk]={0};
	int de[wc][wk]={0};	//记录生命体的寿命 
	
	int i,j,k,t,t1,t2,z;t=t1=t2=0;
	
	int x=0;			//随机死亡概率 
	
	//点亮第一组生命（至少三个生命体） 
	
	w1[1][1]='E';w1[2][2]='E';w1[3][3]='E';w1[3][1]='E';w1[3][2]='E';
	
	w1[14][14]='E';w1[13][13]='E';w1[12][12]='E';w1[12][13]='E';w1[12][14]='E';
	
	w1[36][35]='E';w1[36][36]='E';w1[36][37]='E';w1[38][36]='E';w1[37][37]='E';
	
	w1[6][5]='E';w1[6][6]='E';w1[6][7]='E';w1[8][6]='E';w1[7][7]='E';
	
	w1[26][25]='E';w1[26][26]='E';w1[26][27]='E';w1[28][26]='E';w1[27][27]='E'; 

	//开始繁衍与灭亡
	
	//显示世界 
	
	for(;;)
	{
		for(i=1;i<wk-1;i++)			//记录寿命 
			for(j=1;j<wc-1;j++)
			{
				if(w1[i][j]=='E')
					de[i][j]++;
				else
					de[i][j]=0;
			 } 
		k=0;	 
		for(i=1;i<wk-1;i++)			//记录数量 
			for(j=1;j<wc-1;j++)
			{
				if(w1[i][j]=='E')
					k++;	
			}
				 
		for(i=0;i<wk;i++)
			for(j=0;j<wc;j++)
			{
				if(j==wc-1)
					printf("%c\n",w1[i][j]);
				else
					printf("%c",w1[i][j]);
			}
		Sleep(time);
		system("cls");
		
		for(i=1;i<wk-1;i++)					
		{
			for(j=1;j<wc-1;j++)
			{
				if(w1[i-1][j-1]=='E')	t++;			//种群“E” 
				if(w1[i-1][j]=='E')		t++;
				if(w1[i-1][j+1]=='E')	t++;
				if(w1[i][j-1]=='E')		t++;
				if(w1[i][j+1]=='E')		t++;
				if(w1[i+1][j-1]=='E')	t++;
				if(w1[i+1][j]=='E')		t++;
				if(w1[i+1][j+1]=='E')	t++;
				
				
				if(t>=3)
					w2[i][j]='E';
			//	if(t==3)	
			//		w2[i][j]='E';
				if(t==2)
					w2[i][j]=w1[i][j];
				if(t<2)
					w2[i][j]=0;	
	
				if(de[i][j]==sm&&sm!=9)
					w2[i][j]=0;	
				t=0;
				
				x=rand()%100;							//随机死亡概率为15% 
				
				if(k<3000) 
					if(x<dsgl)
						 w2[i][j]=0;
					else;
				else
					if(x<hsgl)
						w2[i][j]=0;
					else;
				
			}	
		}
		
		
		for(i=0;i<wk;i++)
			for(j=0;j<wc;j++)
				w1[i][j]=w2[i][j];
	 } 
 } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
