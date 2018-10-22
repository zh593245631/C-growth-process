#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void init(char arr[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for(i=0; i<row; i++)
		for(j=0; j<col; j++)
		{
			arr[i][j] = ' ';
		}

}
void display(char arr[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf(" %c ",arr[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");
		if(i<row-1)
		{
			for(j=0; j<col; j++)
			{
				printf("- -");
				if(j<col-1)
					printf("|");
			}
		}
		printf("\n");
	}
	printf("----------------------------------------\n");
}
void playergo(char arr[ROW][COL],int row,int col)
{
	int i = 1;
	int j = 1;
		while(1)
		{
			scanf("%d%d",&i,&j);

			if(arr[i-1][j-1]!=' ')
				printf("已被占用或坐标输入错误\n");
			else
			{
				arr[i-1][j-1] = '*';
				break;
			}
		}
}
void computergo(char arr[ROW][COL],int row,int col)
{
	
	int i = 0;
	int j = 0;
	srand((unsigned int)time(NULL));
	while(1)
		{
			 i = rand()%3;
			 j = rand()%3;
			if(arr[i][j]==' ')
			{
				arr[i][j] = '#';
				break;
			}
		}

}
char is_win(char arr[ROW][COL],int row,int col)
{
		
	int i = 0;
	int j = 0;

	for(i=0; i<row; i++)
	{
		if(arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2])
		{
			if(arr[i][1]=='*')
				return '*';
			
			if(arr[i][1]=='#')
				return '#';
		
		}
	}
	for(j=0; j<row; j++)
	{
		if(arr[0][j]==arr[1][j]&&arr[1][j]==arr[2][j])
		{
			if(arr[1][j]=='*')
				return '*';
			
			if(arr[1][j]=='#')
				return '#';
		
		}
	}
			

	if((arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2])||(arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0]))
	{
			if(arr[1][1]=='*')
				return '*';
			if(arr[1][1]=='#')
				return '#';
	}
			
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(arr[i][j] == ' ')
				return ' ';
				
		}
	}
	return '=';
	

	

}

