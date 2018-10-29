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
	//�⺯�������ʼ����ͷ�ļ�string.h
	memset(&show[0][0],'*', row*col*sizeof(show[0][0]));//��Ϸ�����ʼ��*��
	memset(&clei[0][0],'0', row*col*sizeof(clei[0][0]));//�������ʼΪ��0��

}

void display(char arr[ROW1][COL1],int row,int col)
{
		int i = 0;
		int j = 0;
	for(j=0; j<row-1; j++) //��ӡ�����꣺
	{
		printf("%4d",j);
	}
		printf("\n");
	for(i=1; i<row-1; i++)
	{
		printf("%4d",i);	//��ӡ������
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
		if(arr[x][y]=='0') //�ж�����λ���Ƿ����ף�
		{
			arr[x][y]='1';
			lei--;			//�����׿���ѭ����
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
		printf("���������꣺>");
		scanf("%d%d",&x,&y);
		if(x<1||x>col||y<1||y>row)
		{
			printf("������������!\n");
		}
		else
		{
				if(clei[x][y]=='1')
				{
					printf("�㱻ը����\n");
					display(clei,ROW1,COL1);
					return 0;
				}
				else
				{
					ret = _swap(clei,x,y);
					show[x][y] = ret+'0';
					if(ret==0)
					{
						open(clei,show,x,y);
					}
					count=getcount(show,ROW,COL);
					display(show,ROW1,COL1);

				}
		}

	}
	
	printf("��ϲ�㣬��Ϸʤ����\n");
	return 1;
}
int  _swap(char clei[ROW1][COL1],int x,int y)
{
	return clei[x-1][y]+clei[x-1][y-1]+clei[x][y-1]+clei[x+1][y-1]+clei[x+1][y]+
		clei[x+1][y+1]+clei[x][y+1]+clei[x-1][y+1]-('0'*8);

}
void open(char clei[ROW1][COL1],char show[ROW1][COL1],int x,int y)
{
	if(_swap(clei,x,y)==0)
	{
		open(clei,show,x-1,y);
		open(clei,show,x,y+1);

	}
	show[x][y] = _swap(clei,x,y)+'0';


}
int getcount(char show[ROW1][COL1],int row,int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for(i=1;i<=row;i++)
	{
		for(j=0;j<=col;j++)
		{
			if(show[i][j]=='*')
				count++;
		}
	}
	return count;

}