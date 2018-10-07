#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX 1000
#define C1(x, y) ((x)*(y))
#define C2(x, y) (x*y)
#define ADD(x, y)      \
	{                  \
		printf("%d\n",x+y);   \
	}
int add(int x, int y){return x+y;}

int main()
{
	printf("%d\n",MAX);
	printf("%d\n",C1(1+2,1+2));//(1+2)*(1+2) = 9
	printf("%d\n",C2(1+2,1+2));//1+2*1+2 = 5
	printf("%d\n",add(3,4));
	ADD(3, 4);

	return 0;
}