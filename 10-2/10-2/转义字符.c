#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	printf("%s\n","c:\test\32\abc.c"); // '\t'  '\32' '\a'
	printf("%s\n","c:\\test\\32\\abc.c");
	printf("%s\n","(are you ok ??)"); // '??)' == ']'
	printf("%s\n","(are you ok ?\?)");
	printf("%d\n",strlen("c:\test\32\abc.c")); // 12

	return 0;
}