#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
game()
{
	int suzi = 0;
	int num = rand()%100+1;
	//printf("%d",num);
	
	while(1)
	{
		scanf("%d",&suzi);
		if(num == suzi)
		{
			printf("恭喜你，猜对了\n");
			break;
		}
		else if(suzi > num)
			printf("猜大了\n");
		else
			printf("猜小了\n");
	
	
	}

}
int main()
{
	
	int num = 0;
	srand((unsigned int)time(NULL));
	
	do
	{
			printf("*****猜数字游戏*********************************\n");
			printf("*******************1.PLAY***********************\n");
			printf("*******************2.EXIT***********************\n");
			printf("************************************************\n");
		    scanf("%d",&num);
			switch(num)
			{
			case 1:
				printf("开始猜数字：\n");
				game();
				break;
			case 2:
				break;
			default:
				printf("无效的操作，请重新选择\n");
				break;
			}
	
	
	
	
	}while(num != 2);
	return 0;
}