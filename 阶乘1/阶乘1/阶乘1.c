#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int _jc1(int n)
{
	int i = 0;
	int c = 1;
	for(i=1; i<=n; i++)
	{
		
		c*=i;
	}
	return c;

}
int _jc2(int n)
{
	//5!
	//4!*5
	if(n == 1)
		return 1;
	return _jc2(n-1)*n;

}
int main()
{
	int num = 0;

	scanf("%d",&num);

	printf("%d!=%d\n",num,_jc1(num));
	printf("%d!=%d\n",num,_jc2(num));

	return 0;
}