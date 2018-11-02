#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int fun1()
{
	int i = 1;

	return (*(char*)&i);
}
int main()
{
	int ret = 0;
	ret = fun1();
	if(ret == 1)
		printf("大端\n");
	else
		printf("小端\n");

	return 0;
}


int main()
{
	char a = -128;
	//10000000  char a 补码
	//un int a
	//11111111 11111111 11111111 10000000	原反补
	printf("%u",a);
	return 0;
}


int main()
{
	char a = 128;
	//128
	//00000000 00000000 00000000 10000000
	// char a
	//10000000
	//un int a
	//11111111 11111111 11111111 10000000	原反补
	printf("%u",a);
	return 0;
}

int main()
{
	int i = -20;
	unsigned int j = 10;
	//i
	//10000000 00000000 00000000 00010100 原
	//11111111 11111111 11111111 11101011 反
	//11111111 11111111 11111111 11101100 补
	//j
	//00000000 00000000 00000000 00001010 原反补
	//i+j
	//1111111 111111111 11111111 11110110 原反补
	//
	printf("%u",i+j);
	return 0;
}


	/*1.实现一个函数，可以左旋字符串中的k个字符。 
	ABCD左旋一个字符得到BCDA 
	ABCD左旋两个字符得到CDAB 

	2.判断一个字符串是否为另外一个字符串旋转之后的字符串。 
	例如：给定s1 =AABCD和s2 = BCDAA，返回1，给定s1=abcd和s2=ACBD，返回0. 

	AABCD左旋一个字符得到ABCDA 
	AABCD左旋两个字符得到BCDAA 

	AABCD右旋一个字符得到DAABC*/ 
int xuan_str(char* s1,char* s2)
{
	int i = 0;
	int j = 0;
	int k = strlen(s1);

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
	return 0;

}
char* left_xuan(char* p, int arrSize,int k)
{
	int i = 0;
	int j = 0;
	for(i=0; i<k; i++)
	{
		char tmp = *p;
		for(j=0; j<arrSize-1; j++)
		{
			*(p+j) = *(p+j+1);
		}
		
		*(p+arrSize-1) = tmp;	
	}

	return p;

}
int main()
{
	char arr[] = "ABCD";
	char s1[] = "CDEAB";
	char s2[] = "ABCDE";
	int ret = xuan_str(s1,s2);

	int size = strlen(arr);

	printf("之前 %s\n",arr);
	printf("之后 %s\n",left_xuan(arr,size,1));

	if(ret==1)
		printf("s1和s2是转的\n");
	else
		printf("s1和s2不是转的\n");
	
	return 0;
}
