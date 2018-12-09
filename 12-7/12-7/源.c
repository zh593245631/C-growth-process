#include <stdio.h>
#include<Windows.h>
#define N 8
#define M N*N
#pragma warning(disable:4996)
int go(int* a, int* b, int* c, int m, int n)
{
	//if (n < 4)
	//	return 0;
	if (m == n)
		return 1;

	int i, j, k, count = 0;
	for (i = 0; i < n; i++)
	{
		if (a[m * n + i] == 0)
			continue;
		for (j = 0; j < m; j++)
		if (b[j] == i || b[j] - i == j - m || b[j] + j == i + m) //判断i的位置是否可行；
			break;
		if (j == m)
		{
			b[m] = i; //白棋所走
			for (k = 0; k < n; k++)
			{
				if (a[m * n + k] == 0 || k == i)
					continue;
				for (j = 0; j < m; j++)
				if (c[j] == k || c[j] - k == j - m || c[j] + j == k + m)
					break; 
				if (j == m)
				{
					c[m] = k;  //黑棋所走；
					count += go(a, b, c, m + 1, n);
				}
			}
		}
	}
	return count;
}

int main()
{
	int a[M], b[N], c[N], i, j, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i * n + j]);
		}
	}

	printf("%d\n", go(a, b, c, 0, n));
	system("pause");
	return 0;
}