#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#define N 30
void matrix_mul(int* a, int* b, int m, int n)
{
	int l = 0,ab[N*N];
	for (; l < m*m; l++)
		ab[l] = a[l];
	int i = 1;
	for (; i < n; i++)//¼¸´ÎÃÝ
	{
		for (int j = 0; j < m; j++)
		{
			for (int k = 0; k < m; k++)
			{
				int tmp = 0;
				for (int c = j*m,d = k; c < j*m + m; c++,d+=m)//¼ÆËã
				{
						tmp += ab[c] * a[d];
				}
				b[j*m + k] = tmp;
			}
		}
		for (l=0; l < m*m; l++)
			ab[l] = b[l];
	}
	int e = 0;
	for (; e < m; e++)
	{
		for (int f = 0; f < m; f++)
			printf("%d ", b[e*m + f]);
		printf("\n");
	}
}
int main()
{
	int m, n;
	int a[N*N],b[N*N];
	scanf("%d%d", &m, &n);
	int i = 0;
	for (; i < m*m; i++)
		scanf("%d", &a[i]);
	matrix_mul(a,b,m,n);
	system("pause");
	return 0;
}