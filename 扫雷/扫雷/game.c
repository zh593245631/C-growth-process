#include"game.h"
void init(char show[ROW1][COL1],char clei[ROW1][COL1],int row,int col)
{
	int i = 0;
	int j = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			show[i][j] = '*';
			clei[i][j] = '0';

		}
	}


}

void display(char arr[ROW1][COL1],int row,int col)
{
		int i = 0;
		int j = 0;
	for(i=1; i<row-1; i++)
	{
		if(i==1)
		{
			for(j=0; j<row-1; j++)
			{
				printf("%4d",j);
			}
			printf("\n");
		}
		printf("%4d",i);
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
		if(arr[x][y]=='0')
		{
			arr[x][y]='1';
			lei--;
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
		if(x<1&&x<col&&y<1&&y>row)
		{
			printf("输入坐标有误，请重新输入：");
		}
		else
		{
				if(clei[x][y]=='1')
				{
					return 0;
			
				}
				else
				{
					ret = _swap(clei,x,y);
					show[x][y] = ret+'0';
					count--;
					/*open(clei,show,x,y);*/
					display(show,ROW1,COL1);

				}
		}
	}
	
	return 1;
	

}
int  _swap(char clei[ROW1][COL1],int x,int y)
{
	return clei[x-1][y]+clei[x-1][y-1]+clei[x][y-1]+clei[x+1][y-1]+clei[x+1][y]+
		clei[x+1][y+1]+clei[x][y+1]+clei[x-1][y+1]-('0'*8);

}