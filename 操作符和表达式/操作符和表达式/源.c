#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<ctype.h>
int func()
{
	static int i = 1;
	return ++i;
}
//int store_bit_field(int original_value, int value_to_store, unsigned starting_bit, unsigned ending_bit)
//{
//	unsigned mask = (unsigned)~0;
//	mask>>=
//	printf("%u", mask);
//}
int main()
{
	//ÒÆÎ»²Ù×÷·û ²Ù×÷²¹Âë
	int a = -1;
	//1111 1111 1111 1111 1111 1111 1111 1111  ²¹Âë
	a <<= 1;
	//1111 1111 1111 1111 1111 1111 1111 1110  ²¹Âë
	//1111 1111 1111 1111 1111 1111 1111 1101  ·´Âë
	//1000 0000 0000 0000 0000 0000 0000 0010  Ô­Âë -2
	printf("%d\n", a);
	printf("%f\n", (float)(25 / 10)); //2.000000
	printf("%f\n", (float)25 / 10); //2.500000
	int answer;
	answer = func() - func()*func();
	printf("%d\n", answer);//-10
	int a = 10, b = -22;
	printf("%d\n", b % 10);
	int i = -1;
	if ((i >> 1) == -1)
		printf("ËãÊõÓÒÒÆ\n");
	else
		printf("Âß¼­ÓÒÒÆ\n");
	//p58 1
	char c;
	while ((c = getchar())&& c != EOF)
	{
		//if (isupper(c))
		//	c += 32;
		if (isalpha(c))
		{
			if ((c >= 'N'&&c <= 'Z') || (c >= 'n'&&c <= 'z'))
				c -= 13;
			else
				c += 13;
		}
		putchar(c);
	//}
	//store_bit_field(0xffff,0x123,13,9);

	system("pause");
	return 0;
}