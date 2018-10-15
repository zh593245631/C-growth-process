#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void _swap(int *p1,int *p2)
{
	/*int tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;*/
	*p1= *p1^*p2;
	*p2= *p1^*p2;
	*p1= *p1^*p2;



}
int main()
{
	int a = 10;
	int b = 20;

	printf("a=%d b=%d\n",a,b);

	_swap(&a,&b);

	printf("a=%d b=%d\n",a,b);
	return 0;
}