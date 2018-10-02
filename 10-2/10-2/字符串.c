#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//"abcdef" == "abcdef\0"
	char arr1[] = "abcdef";
	char arr2[] = {'a','b','c','d','e','f'};
	char arr3[] = {'a','b','c','d','e','f','\0'};

	printf("%s\n","abcdef");
	printf("arr1=%s\n",arr1);
	printf("arr2=%s\n",arr2);
	printf("arr3=%s\n",arr3);

	return 0;
}