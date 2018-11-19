#include<iostream>
#include<string> 
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<windows.h>
#define maxn 21
using namespace std;
int nx=0,ny=0;
int x=0;
int steps=0;
int fx[4][2]={-1,0,1,0,0,-1,0,1}; 
int M[maxn][maxn]={		1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
						0,1,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,
						0,1,1,1,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,
						0,0,0,1,1,1,0,0,0,1,1,0,0,1,1,1,0,0,0,0,0,
						0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
						0,0,0,1,0,1,1,0,0,1,1,1,1,1,0,0,0,0,0,0,0,
						0,0,0,1,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,0,
						0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,
						0,0,0,1,0,1,0,0,1,1,0,0,0,1,0,0,1,1,1,0,0,
						0,0,0,1,1,1,0,1,1,0,0,0,0,1,0,0,1,0,1,0,0,
						0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,1,0,1,1,0,
						0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,
						0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,
						0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1};

int robot[maxn][maxn]={0};	//	记录机器人的路径 

void show()
{
	for(int i=0;i<27;i++)
		cout<<"#";cout<<endl;
		cout<<"#                         #"<<endl; 
	for(int i=0;i<14;i++)
	{
		cout<<"#  ";
		for(int j=0;j<21;j++)
		{
			if(i==nx&&j==ny)
					cout<<"@";
			else
			if(M[i][j])
				cout<<" ";
			else
				cout<<"*";
		}
		
		cout<<"  #";cout<<endl;
	}
	cout<<"#                         #"<<endl;
	for(int i=0;i<27;i++)
		cout<<"#";cout<<endl;
	
	 
	//cout<<endl<<"由方向键控制\n"<<endl;
	cout<<endl<<"步数\t"<<steps<<endl<<endl;
}

int cango(int x,int y)
{
	if(M[x][y]==1)
		return 1;
	else
	{
		cout<<"Can't go"<<endl;
		return 0;
	}
}

void dfs(int x,int y)	//	深度优先搜索算法 
{
	if(x==13&&y==20)
	{	
	steps++;
		while(nx!=x&&ny!=y)
		{
			
			for(int i=0;i<4;i++)
			{
				int n_x=nx+fx[i][0];
				int n_y=ny+fx[i][1];
				
				if(robot[n_x][n_y]==4)
				{
					nx=n_x;ny=n_y;
					robot[n_x][n_y]=3; 
					system("cls");
					show();
					Sleep(300);	
					steps++;
				}
			}
			
			
		}
		
	}
	else{
		
		for(int i=0;i<4;i++)
		{
			int nextx=x+fx[i][0];
			int nexty=y+fx[i][1];
			
			if(nextx>=0&&nexty>=0&&nextx<=13&&nexty<=20&&M[nextx][nexty]&&robot[nextx][nexty]!=4)
			{
				robot[nextx][nexty]=4; 
				dfs(nextx,nexty);	
				robot[nextx][nexty]=0; 
			}
		 } 
		
	} 
}

void Ai()
{
	dfs(nx,ny);
}

int main()
{
	
	
	string name;
	cout<<"================================"<<endl;
	cout<<"\t欢迎来到勇者迷宫！"<<endl;
	cout<<"================================"<<endl;
	cout<<endl<<"输入账号名robot即可调用AI算法\n"<<endl;
	
	cout<<"请输入您的用户名：";cin>>name; 
	
	system("cls");
	
	if(name=="robot")	//	Ai算法 
	
		Ai();
		
	else				//	游戏模式 
	{
		int begintime=clock(); 
	
	show();steps++;

	//按键检测	72 80 75 77
	
	while(nx!=13&&ny!=22)
	{
		if(kbhit()!=0)
		{
			getch();x=getch();
		}

		if(x==72)	//上 
		{
			if(cango(nx-1,ny))
			{

			nx-=1;
			system("cls");
			show();steps++;
			}
			x=0;
			
		}

		if(x==80)	//下 
		{
			if(cango(nx+1,ny))
			{
			nx+=1;
			system("cls");
			show();
		steps++;
			}	x=0;
		}
				

		if(x==75)	//左 
		{

			if(cango(nx,ny-1))
			{
				ny-=1;
				system("cls");
				show();
			steps++;
			}x=0;
		}

		if(x==77)	//右 
		{

			if(cango(nx,ny+1))
			{
				ny+=1;
				system("cls");
				show();
				steps++;
			}x=0;
		}	
	}
	
	int endtime=clock(); 
	
	cout<<endl<<"恭喜你走出迷宫！"<<endl<<endl;
	
	cout<<name<<"的总用时为："<<(endtime-begintime)/1000<<"秒"<<endl; 
	
	}
	
	
	return 0;
}
