#include"game.h"
void get_rand(int* arr)
{
	int i = 0;
	printf("你抽到的数字是：");
	for(i = 0; i<4; i++)
	{
		arr[i] = rand()%9+1;
		printf("%4d",arr[i]);
	}
	printf("\n");
}
void PlayGame(int* arr)
{
	int count = 3;
	//1+2+3+4
	//0123456
	//0 2 4 6
	int arr2[7];
	int i = 0;
	int j = 0;
	int tmp = 0;
	while(1)
	{
		scanf("%d%s%d%s%d%s%d",&arr2[0],&arr2[1],&arr2[2],&arr2[3],&arr2[4],&arr2[5],&arr2[6]);
		tmp = arr2[0];
		for(i=1,j=2; i<4; i++,j+=2)
		{
			arr[0]^=arr[i];
			tmp^=arr2[j];
		}
		if(arr[0]^tmp)
		{
			printf("输入不匹配：\n");
		}
		else
		{
			
		}
	}
}
