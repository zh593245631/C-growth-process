#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<time.h>

int main()
{
	int n = 10000000;
	clock_t begin, end;
	begin = clock();

	while (n--);
	end = clock();
	printf("%lfs\n", (double)(end-begin)/CLOCKS_PER_SEC);
	system("pause");
	return 0;
}