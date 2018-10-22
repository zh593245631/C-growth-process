#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void _jz(int a)
{
	int count = 0;
	int arr[32] = {0};
	int tmp = a;
	int i = 0;
	while(tmp)
	{
		arr[i++]=tmp%2;
		count++;
		tmp/=2;
	}
	printf("奇数序列：");
	for(i=count-1; i>=0;i-=2)
	{
		printf("%d ", arr[i]);
	}
	printf("\n偶数序列：");
	for(i=count-2; i>=0;i-=2)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	
}
int main()
{
	int value = 0;

	scanf("%d",&value);

	_jz(value);
	return 0;
}