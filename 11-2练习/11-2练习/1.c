#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
////int fun1()
////{
////	int i = 1;
////
////	return (*(char*)&i);
////}
////int main()
////{
////	int ret = 0;
////	ret = fun1();
////	if(ret == 1)
////		printf("小端\n");
////	else
////		printf("大端\n");
////
////	return 0;
////}
////
////
////int main()
////{
////	char a = -128;
////	//10000000  char a 补码
////	//un int a
////	//11111111 11111111 11111111 10000000 
////	// int a
////	//11111111 11111111 11111111 10000000 补
////	//11111111 11111111 11111111 01111111 反
////	//10000000 00000000 00000000 00000001 原
////	printf("%u\n",a);
////	printf("%d\n",a);
////
////	return 0;
////}
////
////
////int main()
////{
////	char a = 128;
////	//128
////	//00000000 00000000 00000000 10000000
////	// char a
////	//10000000  -128
////	//un int a
////	//11111111 11111111 11111111 10000000
////	//int a
////	//11111111 11111111 11111111 01111111
////	//10000000 00000000 00000000 10000000
////	printf("%u\n",a);
////	printf("%d\n",a);
////
////	return 0;
////}
////
////
////int main()
////{
////	int i = -20;
////	unsigned int j = 10;
////	//i
////	//10000000 00000000 00000000 00010100 原
////	//11111111 11111111 11111111 11101011 反
////	//11111111 11111111 11111111 11101100 补
////	//j
////	//00000000 00000000 00000000 00001010 原反补
////	//un int i+j
////	//1111111 111111111 11111111 11110110 
////	//int i+j
////	//1111111 111111111 11111111 11110101 反
////	//1000000 000000000 00000000 00001010 原
////	printf("%u\n",i+j);
////	printf("%d\n",i+j);
////
////	return 0;
////}
////
//
//	/*1.实现一个函数，可以左旋字符串中的k个字符。 
//	ABCD左旋一个字符得到BCDA 
//	ABCD左旋两个字符得到CDAB 
//
//	2.判断一个字符串是否为另外一个字符串旋转之后的字符串。 
//	例如：给定s1 =AABCD和s2 = BCDAA，返回1，给定s1=abcd和s2=ACBD，返回0. 
//
//	AABCD左旋一个字符得到ABCDA 
//	AABCD左旋两个字符得到BCDAA 
//
//	AABCD右旋一个字符得到DAABC*/ 
int xuan_str(char* s1,char* s2)
{
	int i = 0;
	int j = 0;
	int k = strlen(s1);
	int l = strlen(s2);

	if(k==l)
	{
		for(i=0; i<k; i++)
		{
			char tmp = *s1;
			for(j=0; j<k; j++)
			{
				*(s1+j) = *(s1+j+1);
			}
				*(s1+k-1) = tmp;
			if(strcmp(s1,s2)==0)
				return 1;
		}
	}
	return 0;

}
//char* left_xuan(char* a, int arrSize,int k)
//{
//	int i = 0;
//	int j = 0;
//	for(i=0; i<(k%arrSize); i++)
//	{
//		char tmp = a[0];
//		for(j=1; j<arrSize; j++)
//		{
//			a[j-1] = a[j];
//		}
//		
//		a[j-1] = tmp;	
//	}
//
//	return a;
//
//}
// 优化
void reverse_str(char* a,char* b)
{
	while(a<b)
	{
		*a^=*b;
		*b^=*a;
		*a^=*b;
		a++;
		b--;
	}
}
char* left_xuan1(char* a, int arrSize,int k)
{
	int k1 = k%arrSize;

	reverse_str(a,a+k1-1);
	reverse_str(a+k1,a+arrSize-1);
	reverse_str(a,a+arrSize-1);

	return a;
}
//穷举法
char* left_xuan2(char* a, int arrSize,int k)
{
	int k1 = k%arrSize;
	char *p = (char*)malloc(2*arrSize + 1); //+1字符串'\0'
	strcpy(p,a);
	strcat(p,a);

	strncpy(a,p+k1,arrSize);

	free(p);
	return a;

}

int main()
{
	char arr[] = "ABCD";
	char s1[] = "CDEAB";
	char s2[] = "ABCDE";
	int ret = xuan_str(s1,s2);

	int size = strlen(arr);

	printf("之前 %s\n",arr);
	printf("之后 %s\n",left_xuan2(arr,size,41));

	if(ret==1)
		printf("s1和s2是转的\n");
	else
		printf("s1和s2不是转的\n");
	
	return 0;
}
