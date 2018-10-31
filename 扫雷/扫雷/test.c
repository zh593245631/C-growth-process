#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
menu()
{
	printf("****扫雷小游戏**************************\n");
	printf("***************1.play*******************\n");
	printf("***************0.exit*******************\n");
	printf("****************************************\n");

}
game()
{
	char show[ROW1][COL1] = {0};// 游戏面板数组
	char clei[ROW1][COL1] = {0};//	游戏内部含雷数组
	srand((unsigned int)time(NULL));//随机数

	init(show,clei,ROW1,COL1);//初始化两个数组；
	_lei(clei,ROW,COL);	// 布置雷
	display(show,ROW1,COL1);// 打印游戏面板
	display(clei,ROW1,COL1);//可以查看雷布置的位置
	playergo(show,clei,ROW,COL); // 玩家开始玩游戏（内置游戏输赢判断）
		
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
		case(0):printf("游戏结束\n");
			break;
		default:printf("无效操作，请重新选择：\n");
			break;
		
		}

	}while(input);

	return 0;
}