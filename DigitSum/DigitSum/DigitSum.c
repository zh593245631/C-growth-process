#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int DigitSum(int n)
{
	//147
	//14 7
	//1 4 7
	if(n<=9)
		return n;
	else
		return DigitSum(n/10)+n%10;
}
int main()
{
	int num = 0;

	scanf("%d",&num);

	printf("sum=%d",DigitSum(num));

	return 0;
}