#include"game.h"
void menu()
{
	printf("***24����Ϸ***************\n");
	printf("********  1.��ʼ  ********\n");
	printf("********  0.�˳�  ********\n");
	printf("**************************\n");

}
void game()
{
	int arr[4] = {0};
	int num;
	get_rand(arr);
	num = PlayGame(arr);
	if(NUM == num)
	{
		printf("��Ϸʤ����\n");
	}
	else
	{
		printf("���ź�����������󣬽��Ϊ��%d\n",num);
	}

}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("�������\n");
				break;
		}

	}while(input);
	return 0;
}