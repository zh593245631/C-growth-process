#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
//问题描述
//最近FJ为他的奶牛们开设了数学分析课，FJ知道若要学好这门课，必须有一个好的三角函数基本功。
//所以他准备和奶牛们做一个“Sine之舞”的游戏，寓教于乐，提高奶牛们的计算能力。
//不妨设
//An = sin(1–sin(2 + sin(3–sin(4 + ...sin(n))...)
//Sn = (...(A1 + n)A2 + n - 1)A3 + ... + 2)An + 1
//FJ想让奶牛们计算Sn的值，请你帮助FJ打印出Sn的完整表达式，以方便奶牛们做题。
//输入格式
//仅有一个数：N<201。
//输出格式
//请输出相应的表达式Sn，以一个换行符结束。输出中不得含有多余的空格或换行、回车符。
//样例输入
//3
//样例输出
//((sin(1) + 3)sin(1–sin(2)) + 2)sin(1–sin(2 + sin(3))) + 1

void Sine(const int n)
{
	int i = 1;
	//打印前面括号
	for (; i < n; i++)
		printf("(");
	for (i = 1; i <= n; i++)
	{
		////打印an
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
			//打印an后面的括号
			for (j = 0; j < i; j++)
				printf(")");
		}
		//打印n
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