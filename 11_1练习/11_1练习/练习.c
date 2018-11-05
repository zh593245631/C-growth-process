#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<float.h>
int main()
{
	//X64位 vs2008测试
	printf("int_max=%d\n",INT_MAX);  //2147483647
	printf("int_min=%d\n",INT_MIN);	 //-2147483647

	printf("char_max=%d\n",CHAR_MAX); //127
	printf("char_min=%d\n",CHAR_MIN); //-128
	printf("char_bit=%d\n",CHAR_BIT); // 8

	printf("short_max=%d\n",SHRT_MAX); //32767
	printf("short_min=%d\n",SHRT_MIN); // -32768

	printf("LONG_max=%d\n",LONG_MAX); // 2147483647
	printf("LONG_min=%d\n",LONG_MIN); // -2147483647 

	printf("float_max=%d\n",FLT_MAX); // -536870912
	printf("float_min=%d\n",FLT_MIN); // 0

	printf("double_max=%d\n",DBL_MAX); // -1
	printf("double_min=%d\n",DBL_MIN); // 0



	
	return 0;
}


int main()
{
	long a = 2147483647;
	short b = 0;
	//a
	//01111111 11111111 11111111 11111111 原反补
	//b 高8位丢失
	//11111111 11111111 补
	//int b
	//11111111 11111111 11111111 11111111 补
	//11111111 11111111 11111111 11111110 反
	//10000000 00000000 00000000 00000001 原 -1
	//un int b
	//11111111 11111111 11111111 11111111
	
	b = a;
	printf("long=%d\n",sizeof(long)); // 4
	printf("short=%d\n",sizeof(short)); // 2
	printf("a = %d\n",a);
	printf("a2 = %u\n",a);

	printf("b = %d\n",b);
	printf("b2 = %u\n",b);
	return 0;
}


int main()
{
	double a = 0.111111111111111111111;
	float b = 0;

	b = a;
	printf("double=%d\n",sizeof(double)); // 8
	printf("float=%d\n",sizeof(float));   // 4
	printf("a = %0.16f\n",a);
	printf("b = %0.16f\n",b);
	return 0;
}


enum Liquid
{
	OUNCE = 1,
	CUP = 8,
	PINT = 16,
	QUART = 32,
	GALLON = 128

};
int main()
{
	//不是字符串，不可以用字符串格式打印；
	enum Liquid jar = QUART;
	printf("%s\n",jar); 
	
	jar=jar+PINT;
	printf("%s\n",jar);

	return 0;
}


