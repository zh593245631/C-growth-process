#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int _ffff1(int n)
{
	if(n<=2)
		return 1;
	else
		return _ffff1(n-1)+_ffff1(n-2);
		
}
int _ffff2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	int i = 0;
	
	for(i=0;i<n-2; i++)
	{
		a=b;
		b=c;
		c=a+b;
	}
		
	
	return c;
		
}

int main()
{
	int n = 0;

	scanf("%d",&n);
	/*printf("%d ",_ffff1(n));*/
	printf("%d ",_ffff2(n));

	return 0;
}