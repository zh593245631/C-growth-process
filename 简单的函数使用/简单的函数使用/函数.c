#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int ADD(int x, int y)
{
	return x + y;
}
int main()
{
	int num1 = 3;
	int num2 = 5;
	int sum = 0;

	sum = ADD(num1,num2);  //num1+num2

	printf("%d\n",sum);
	printf("%d\n",ADD(4,6)); //4+6

	return 0;
}