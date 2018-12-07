#include<stdio.h>
#include<windows.h>
#include<malloc.h>
#pragma warning(disable:4996)
//给定一个n*n的棋盘，棋盘中有一些位置不能放皇后。现在要向棋盘中放入n个黑皇后和n个白皇后，使任意的两个黑皇后都不在同一行、同一列或同一条对角线上，任意的两个白皇后都不在同一行、同一列或同一条对角线上。问总共有多少种放法？n小于等于8。
//输入格式
//输入的第一行为一个整数n，表示棋盘的大小。
//接下来n行，每行n个0或1的整数，如果一个整数为1，表示对应的位置可以放皇后，如果一个整数为0，表示对应的位置不可以放皇后。
//输出格式
//输出一个整数，表示总共有多少种放法。
//样例输入
//4
//1 1 1 1
//1 1 1 1
//1 1 1 1
//1 1 1 1
//样例输出
//2
//样例输入
//4
//1 0 1 1
//1 1 1 1
//1 1 1 1
//1 1 1 1
//样例输出
//0

int main()
{
	int n = 0;
	scanf("%d",&n);
	int* arr = (int *)malloc(sizeof(int)*n*n);
	if (arr == NULL)
	{
		return 1;
	}
	char tmp = 0;
	int i = 0;
	while (tmp = getchar())
	{
		if (tmp == ' ' || tmp == '\n')
		{
			;
		}
		else
		{
			arr[i] = tmp;
			i++;
		}
		if (i == n*n)
		{
			break;
		}

	}

	free(arr);
	arr = NULL;
	system("pause");
	return 0;
}