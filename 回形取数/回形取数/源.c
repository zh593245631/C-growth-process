#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#define M 200
void clip(int* a, int m, int n)
{
	int i = 0;
	int count = 0;
	int j = 0;
	while (count <m*n)
	{

		if (j != 0)
			i += n;
		//ÏòÏÂ
		while (i <= (m-j)*n - (n-j)&&count<m*n)
		{

			printf("%d ", a[i]);
			count++;
			if (i == (m-j)*n - (n-j)){
				break;
			}
			i += n;
		}
		//ÓÒ
		while (i <((m-j)*n -1-j)&&count<m*n)
		{
			i++;
			printf("%d ", a[i]);
			count++;

		}
		//printf("%d", i);
		//ÉÏ
		while (i>(n-1)*(j+1)&&count<m*n)
		{
			i -= n;
			printf("%d ", a[i]);
			count++;
		}
		//×ó
		while (i > n*j+1+j&&count<m*n)
		{
			i--;
			printf("%d ", a[i]);
			count++;
		}
		j++;
	}
}
int main()
{
	int a[M*M];
	int m, n;
	scanf("%d%d", &m, &n);
	int i = 0;
	for (; i < m*n; i++)
		scanf("%d", &a[i]);
	clip(a,m,n);
	system("pause");
	return 0;
}