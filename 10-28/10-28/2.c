#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;

	scanf("%d",&a);
	scanf("%d",&b);

	printf("ƽ��ֵΪ%d\n",a-(a-b)/2);
	return 0;
}
