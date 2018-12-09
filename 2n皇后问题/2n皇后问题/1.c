#include<stdio.h>
#include<windows.h>
#include<malloc.h>
#define N 8
#define M N*N
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

int GoPlay(int* a, int* b, int* c, int m, int n)
{
	if (n < 4)
		return 0;

	if (m == n)
		return 1;

	int i, j, k, count = 0;
	for (i = 0; i < n; i++)
	{
		//白棋先放；
		if (a[m*n + i] == 0)
			continue;
		for (j = 0; j < m; j++)
		{
			if (b[j] == i || b[j] - i == j - m || b[j] + j == i + m)//判断i位置是否可以放置棋子；（斜率判断对角线，+-1）
				break;
		}
		if (j == m)
		{
			b[m] = i;
			//开始放黑棋；
			for (k = 0; k < n; k++)
			{
				if (a[m*n + k] == 0 || k == i)  //判断k位置是否可以放置黑棋，不能和白棋重合；
					continue;
				for (j = 0; j < m; j++)
				{
					if (c[j] == k || c[j] - k == j - m || c[j] + j == k + m)
						break;
				}
				if (j == m)
				{
					c[m] = k;
					count += GoPlay(a, b, c, m + 1, n);
				}

			}
		}
	}
	return count;
}

int main()
{
	int a[M],b[N],c[N], i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	for (j = 0; j < n; j++)
		scanf("%d", &a[i * n + j]);
	printf("%d\n", GoPlay(a, b, c, 0, n));
	system("pause");
	return 0;
}