#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
//��������
//���FJΪ������ţ�ǿ�������ѧ�����Σ�FJ֪����Ҫѧ�����ſΣ�������һ���õ����Ǻ�����������
//������׼������ţ����һ����Sine֮�衱����Ϸ��Ԣ�����֣������ţ�ǵļ���������
//������
//An = sin(1�Csin(2 + sin(3�Csin(4 + ...sin(n))...)
//Sn = (...(A1 + n)A2 + n - 1)A3 + ... + 2)An + 1
//FJ������ţ�Ǽ���Sn��ֵ���������FJ��ӡ��Sn���������ʽ���Է�����ţ�����⡣
//�����ʽ
//����һ������N<201��
//�����ʽ
//�������Ӧ�ı��ʽSn����һ�����з�����������в��ú��ж���Ŀո���С��س�����
//��������
//3
//�������
//((sin(1) + 3)sin(1�Csin(2)) + 2)sin(1�Csin(2 + sin(3))) + 1

void Sine(const int n)
{
	int i = 1;
	//��ӡǰ������
	for (; i < n; i++)
		printf("(");
	for (i = 1; i <= n; i++)
	{
		////��ӡan
		if (i == 1)
			printf("sin(1)");
		else
		{
			printf("sin(1-sin(2");
			int j;
			for (j = 3; j <= i; j++)
			{
				if (j % 2)
					printf("+");
				else
					printf("-");
				printf("sin(%d", j);
			}
			//��ӡan���������
			for (j = 0; j < i; j++)
				printf(")");
		}
		//��ӡn
		printf("+%d", n-i+1);
		if (i < n )
			printf(")");
	}
	printf("\n");
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	Sine(n);
	system("pause");
	return 0;
}