#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
menu()
{
	printf("****ɨ��С��Ϸ**************************\n");
	printf("***************1.play*******************\n");
	printf("***************0.exit*******************\n");
	printf("****************************************\n");

}
game()
{
	char show[ROW1][COL1] = {0};
	char clei[ROW1][COL1] = {0};
	int ret = 0;
	srand((unsigned int)time(NULL));

	init(show,clei,ROW1,COL1);//��ʼ���������飻
	_lei(clei,ROW,COL);		// ������
	display(show,ROW1,COL1);
	/*display(clei,ROW1,COL1);*/
	ret = playergo(show,clei,ROW,COL);
	if(ret==1)
	{
		printf("��ϲ�㣬��Ϸʤ����\n");
	}
	else
	{	
		printf("�㱻ը����\n");
	}
		display(clei,ROW1,COL1);
	


}
int main()
{
	int input = 0;

	do
	{
		menu();
		scanf("%d",&input);
		switch(input)
		{
		case(1):game();
			break;
		case(0):printf("��Ϸ����\n");
			break;
		default:printf("��Ч������������ѡ��\n");
			break;
		
		}

	}while(input);

	return 0;
}