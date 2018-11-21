#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void _printfTwoBits(unsigned int num)
{
	unsigned int flat = 0x80000000;
	while(flat)
	{
		if(flat&num)
		{
			printf("1 ");
		}
		else
		{
			printf("0 ");
		}
		
		flat>>=1;
	}
	printf("\n");
}
int main()
{
	unsigned int num = 0;

	scanf("%d",&num);
	_printfTwoBits(num);
	return 0;
}