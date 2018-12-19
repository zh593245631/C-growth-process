#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d:", n / 3600);
	printf("%d:", n % 3600/60);
	printf("%d\n", n %60);

	system("pause");
	return 0;
}