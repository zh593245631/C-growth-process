#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("*****************************\n");
	printf("*********1.play**************\n");
	printf("*********0.exit**************\n");
	printf("*****************************\n");



}
void game()
{
	char arr[ROW][COL] ={0};
	char ret = 0;
	
	init(arr,ROW,COL);
	display(arr,ROW,COL);
	do
	{
		playergo(arr,ROW,COL);
		display(arr,ROW,COL);
		ret=is_win(arr,ROW,COL);
		if(ret=='*')
		{
			printf("���ʤ��\n");
			break;
		}
		if(ret=='#')
		{
			printf("����ʤ��\n");
				break;
		}
		if(ret=='=')
		{
			printf("�;�\n");
			break;
		}
		computergo(arr,ROW,COL);
		display(arr,ROW,COL);
		ret=is_win(arr,ROW,COL);
		if(ret=='*')
		{
			printf("���ʤ��\n");
			break;
		}
		if(ret=='#')
		{
			printf("����ʤ��\n");
				break;
		}
		if(ret=='=')
		{
			printf("�;�\n");
			break;
		}
	}while(1);
	
	
	

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
		case(1):
				 game();
				 break;
		case(0):
				 break;
		default:
			printf("����������������룡\n");
			break;
	}
   
   }while(input);

	return 0;
}