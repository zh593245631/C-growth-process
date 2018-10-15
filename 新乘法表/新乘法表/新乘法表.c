#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void _Tabuada(int i)
{
	int a = 0;
	int b = 0;

	for(a=1; a<=i; a++)
	{
		for(b=1; b<=a; b++)
		{
			printf("%2d*%-2d=%-4d",a,b,a*b);
		}

		printf("\n");
	
	}

}
int main()
{
	int i = 0;

	printf("输入x，输出x*x口诀表：");
	scanf("%d",&i);
	
	_Tabuada(i);


	return 0;
}