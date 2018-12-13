#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
void read_clock(int h, int m)
{
	char* clock[21] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", \
		"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen" ,"twenty"};
	char* clock_k[6] = {"","","twenty","thirty","forty","fifty"};
	//报小时
	if (h > 20)
		printf("%s %s ",*(clock+20),*(clock+h%20));
	else
		printf("%s ", *(clock+h));
	//分钟
	if (m == 0)
		printf("o'clock");
	else{
		if (m > 20)
		{
			printf("%s ", *(clock_k + m / 10));
			if (m%10)
				printf("%s", *(clock + m % 10));
		}
		else
			printf("%s", *(clock + m));
	}
}
int main()
{
	int h, m;
	scanf("%d",&h);
	scanf("%d", &m);
	read_clock(h, m);
	system("pause");
	return 0;
}