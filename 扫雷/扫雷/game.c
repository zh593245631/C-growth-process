#include"game.h"
void init(char show[ROW1][COL1],char clei[ROW1][COL1],int row,int col)
{
	/*int i = 0;
	int j = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			show[i][j] = '*';
			clei[i][j] = '0';

		}
	}*/
	//库函数数组初始化，头文件string.h
	memset(&show[0][0],'*', row*col*sizeof(show[0][0]));//游戏界面初始‘*’
	memset(&clei[0][0],'0', row*col*sizeof(clei[0][0]));//雷数组初始为‘0’

}

void display(char arr[ROW1][COL1],int row,int col)
{
		int i = 0;
		int j = 0;
	for(j=0; j<row-1; j++) //打印横坐标：
	{
		printf("%4d",j);
	}
		printf("\n");
	for(i=1; i<row-1; i++)
	{
		printf("%4d",i);	//打印纵坐标
		for(j=1; j<col-1; j++)
		{
			printf("%4c",arr[i][j]);
		}
		printf("\n");
	}
	printf("-------------------------------------------------------------------\n");

}
void _lei(char arr[ROW1][COL1],int row,int col)
{
	int lei = LEI;
	while(lei)
	{
		int x = rand()%row+1;
		int y = rand()%col+1;
		if(arr[x][y]=='0') //判断坐标位置是否有雷；
		{
			arr[x][y]='1';
			lei--;			//安排雷控制循环；
		}
	}
}
int  playergo(char show[ROW1][COL1],char clei[ROW1][COL1],int row,int col)
{
	int x = 0;
	int y = 0;
	int count = row*col;
	int ret = 0;

	while(count!=LEI)
	{
		printf("请输入坐标：>");
		scanf("%d%d",&x,&y);
		if(x<1||x>col||y<1||y>row)
		{
			printf("输入坐标有误!\n");
		}
		else
		{
				if(count==row*col&&clei[x][y]=='1') //判断第一次玩的条件，如果
				{
					safe_LEI(clei,x,y);  
				
				}

				if(clei[x][y]=='1')
				{
					printf("你被炸死了\n");
					display(clei,ROW1,COL1);
					return 0;
				}
				else
				{
				
					open(clei,show,x,y); // 判断是否连续展开；
					count=getcount(show,ROW,COL); //剩余‘*’数量，与LEI比较控制循环；
					display(show,ROW1,COL1);
					/*display(clei,ROW1,COL1);*/

				}
		}

	}
	display(clei,ROW1,COL1);
	printf("恭喜你，游戏胜利！\n");
	return 1;
}
void safe_LEI(char clei[ROW1][COL1],int x,int y)
{
	int count = 1;
	while(count)
	{
		if(clei[x][y]=='1')
		{
			int i = rand()%ROW+1;
			int j = rand()%COL+1;
			
			clei[x][y]='0';
			if(clei[i][j]=='0')
			{
				clei[i][j]='1';
				count--;
			}

		}
		else
			count--;
	
	}


}

int  _swap(char clei[ROW1][COL1],int x,int y)
{
	return clei[x-1][y]+clei[x-1][y-1]+clei[x][y-1]+clei[x+1][y-1]+clei[x+1][y]+
		clei[x+1][y+1]+clei[x][y+1]+clei[x-1][y+1]-('0'*8);

}
void open(char clei[ROW1][COL1],char show[ROW1][COL1],int x,int y)
{
		
	show[x][y] = _swap(clei,x,y)+'0';

	if(clei[x][y]=='0'&&_swap(clei,x,y)==0) //如果此坐标不是LEI，并且附近安全则展开；
	{
		
		//x+1,x-1,y+1,y-1时需要判断是否越界

		if(clei[x+1][y]=='0'&&show[x+1][y]=='*'&&x+1<=ROW)//向下
		{
			show[x+1][y] = _swap(clei,x+1,y)+'0';
			if(_swap(clei,x+1,y)==0)
			{
				open(clei,show,x+1,y);
			}

		}
		if(clei[x-1][y]=='0'&&show[x-1][y]=='*'&&x-1>0)//向上
		{
			show[x-1][y] = _swap(clei,x-1,y)+'0';
			if(_swap(clei,x-1,y)==0)
			{
				open(clei,show,x-1,y);
			}

		}
		if(clei[x][y+1]=='0'&&show[x][y+1]=='*'&&y+1<=COL)//向右
		{
			show[x][y+1] = _swap(clei,x,y+1)+'0';
			if(_swap(clei,x,y+1)==0)
			{
				open(clei,show,x,y+1);
			}

		}
		if(clei[x][y-1]=='0'&&show[x][y-1]=='*'&&y-1>0)//向左
		{
			show[x][y-1] = _swap(clei,x,y-1)+'0';
			if(_swap(clei,x,y-1)==0)
			{
				open(clei,show,x,y-1);
			}

		}
	}


}
int getcount(char show[ROW1][COL1],int row,int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			if(show[i][j]=='*')
				count++;
		}
	}
	return count;

}