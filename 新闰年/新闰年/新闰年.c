#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int p_year(int n)
{
	return ((n%400==0)||(n%4==0&&n%100!=0));//1Ϊ����
}
int main()
{
	int year = 0;
	int flat = 0;
	
	scanf("%d",&year);

	flat = p_year(year);
	if(flat == 1)
		printf("%d������\n",year);
	else
		printf("%d��������\n",year);

	return 0;
}