#include<stdio.h>
#include<windows.h>
#include<malloc.h>
#define N 8
#define M N*N
#pragma warning(disable:4996)
//����һ��n*n�����̣���������һЩλ�ò��ܷŻʺ�����Ҫ�������з���n���ڻʺ��n���׻ʺ�ʹ����������ڻʺ󶼲���ͬһ�С�ͬһ�л�ͬһ���Խ����ϣ�����������׻ʺ󶼲���ͬһ�С�ͬһ�л�ͬһ���Խ����ϡ����ܹ��ж����ַŷ���nС�ڵ���8��
//�����ʽ
//����ĵ�һ��Ϊһ������n����ʾ���̵Ĵ�С��
//������n�У�ÿ��n��0��1�����������һ������Ϊ1����ʾ��Ӧ��λ�ÿ��ԷŻʺ����һ������Ϊ0����ʾ��Ӧ��λ�ò����ԷŻʺ�
//�����ʽ
//���һ����������ʾ�ܹ��ж����ַŷ���
//��������
//4
//1 1 1 1
//1 1 1 1
//1 1 1 1
//1 1 1 1
//�������
//2
//��������
//4
//1 0 1 1
//1 1 1 1
//1 1 1 1
//1 1 1 1
//�������
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
		//�����ȷţ�
		if (a[m*n + i] == 0)
			continue;
		for (j = 0; j < m; j++)
		{
			if (b[j] == i || b[j] - i == j - m || b[j] + j == i + m)//�ж�iλ���Ƿ���Է������ӣ���б���ж϶Խ��ߣ�+-1��
				break;
		}
		if (j == m)
		{
			b[m] = i;
			//��ʼ�ź��壻
			for (k = 0; k < n; k++)
			{
				if (a[m*n + k] == 0 || k == i)  //�ж�kλ���Ƿ���Է��ú��壬���ܺͰ����غϣ�
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