#include<stdio.h>

char *week[7]={"MON","TUE","WEN","THU","FRI","SAT","SUM"};

int moun[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

//基姆拉尔森公式法 得到该月第一天星期几 

int which_week(int y,int m,int d)
{
    if (m<3) {
        m+=12;y--;
    }
    int w = (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7;
    return w==0?7:w;
}

int  how_many_days(int y,int m)
{
	if(m==2)
	{
		if(y%4==0)
		{
			if(y%100==0&&y%400!=0)	return 28;
			else
				return 29;
		}
	}
	else
		return moun[m];
}

int main()
{
	int y,m,d,i,j,t,w; int sumday;//这个月的总天数
	
	printf("请输入要查询的年份：");scanf("%d",&y);
	printf("请输入月份：");scanf("%d",&m);printf("\n"); 
	
	for(i=0;i<7;i++)	printf("%s ",week[i]);printf("\n"); 
	
	w=which_week(y,m,1);//判断这个月的第一天是星期几
	
	sumday=how_many_days(y,m); //判断这个月是多少天 
	
	for(j=0;j<w-1;j++)	printf("    ");
	
	for(i=1;i<=sumday;i++)//输出日历 
	{		
		if(w==7){printf("%3d\n",i);w=1;} 
		else
		{
			printf("%3d ",i);w++;
		}
	}
	
	return 0;
}
