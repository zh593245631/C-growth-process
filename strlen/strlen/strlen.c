#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int strlen1(char* arr)
{
	int count = 0;
	while(*arr)
	{
		arr++;
		count++;
	
	}
	return count;

}
int strlen2(char* arr)
{
	if(*(arr+1)!=0)
		return 1+strlen2(arr+1);
	return 1;
	
}
int main()
{
	char arr[] = "abcdef";

	strlen1(arr);
	printf("count=%d\n",strlen1(arr));
	printf("count=%d\n",strlen2(arr));


	return 0;
}