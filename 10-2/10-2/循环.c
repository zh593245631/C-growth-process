#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int arr[10] = {0};

	for(i=0; i<=12; i++)
	{
		printf("HEHE\n");
		arr[i] = 1;    // i存在数组的后面，当i == 12时 arr[12]就表示12
	}
	return 0;
}