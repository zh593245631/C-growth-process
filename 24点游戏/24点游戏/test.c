#include"game.h"
void menu()
{
	printf("***24点游戏***************\n");
	printf("********  1.开始  ********\n");
	printf("********  0.退出  ********\n");
	printf("**************************\n");

}
void game()
{
	int arr[4] = {0};
	get_rand(arr);
	PlayGame(arr);
	
	
	
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
				printf("退出游戏\n");
				break;
			default:
				printf("输入错误\n");
				break;
		}

	}while(input);
	return 0;
}