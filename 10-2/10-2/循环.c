#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = {0};

	for(i=0; i<=12; i++)
	{
		printf("HEHE\n");
		arr[i] = 1;    // i��������ĺ��棬��i == 12ʱ arr[12]�ͱ�ʾ12
	}
	return 0;
}