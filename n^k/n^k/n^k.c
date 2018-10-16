#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int _jc(int n, int k)
{
	if(k==0||n==1)
		return 1;
	return _jc(n,k-1)*n;

}
int main()
{
	int n = 0;
	int k = 0;

	scanf("%d%d",&n,&k);

	_jc(n,k);
	printf("%d^%d=%d",n,k,_jc(n,k));

	return 0;
}