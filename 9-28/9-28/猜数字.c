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
			printf("��ϲ�㣬�¶���\n");
			break;
		}
		else if(suzi > num)
			printf("�´���\n");
		else
			printf("��С��\n");
	
	
	}

}
int main()
{
	
	int num = 0;
	srand((unsigned int)time(NULL));
	
	do
	{
			printf("*****��������Ϸ*********************************\n");
			printf("*******************1.PLAY***********************\n");
			printf("*******************2.EXIT***********************\n");
			printf("************************************************\n");
		    scanf("%d",&num);
			switch(num)
			{
			case 1:
				printf("��ʼ�����֣�\n");
				game();
				break;
			case 2:
				break;
			default:
				printf("��Ч�Ĳ�����������ѡ��\n");
				break;
			}
	
	
	
	
	}while(num != 2);
	return 0;
}