#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int _ert(int a,int b)
{
	int count = 0;
	//1111
	//1110
	while(a^b)
	{
		if((a&1)!=(b&1))
			count++;
		a>>=1;
		b>>=1;
	
	}
	return count;
}
int main()
{
	int num1 = 0;
	int num2 = 0;

	scanf("%d%d",&num1,&num2);
	printf("²»Í¬£º%d\n",_ert(num1,num2));

	
	return 0;
}