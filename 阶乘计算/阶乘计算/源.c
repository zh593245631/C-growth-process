#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#define MAX 3000
//char* reverse(char *str, int len)
//{
//	int n = len / 2;
//	for (int i = 0; i < n; i++){
//		char tmp = str[i];
//		str[i] = str[len - 1 - i];
//		str[len - 1 - i] = tmp;
//	}
//	return str;
//}
//char* mul(char* a, int i)
//{
//	int len_a = strlen(a);
//	int j = 0;
//	int r = 0;
//	for (; j < len_a; j++)
//	{
//		int tmp = (a[j] - '0')*i + r;
//		a[j] = tmp % 10 + '0';
//		r = tmp / 10;
//		
//	}
//}
//char* Fac_(int n)
//{
//	int i = 1;
//	char a[10000] = "1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000";
//	int ret = 0;
//	for (i = 1; i <= n; i++)
//	{
//		mul(a, i);
//	}
//	int len_a = strlen(a);
//	reverse(a,len_a);
//	while (*(a+ret)=='0')
//		ret++;
//	return a+ret;
//
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%s\n",Fac_(n));
//	system("pause");
//	return 0;
//}
int main()
{
	int a[MAX], i, n,j,s;
	int c = 0; //½øÎ»
	scanf("%d", &n);
	memset(a, 0, sizeof(a));
	a[0] = 1;
	for (i = 2; i <= n; i++)
	{
		for (j = 0; j < MAX; j++)
		{
			s = a[j] * i + c;
			a[j] = s % 10;
			c = s / 10;
		}
	}
	for (i = MAX - 1; i >= 0; i--)
	if (a[i])break;
	for (j = i; j >= 0; j--)
		printf("%d", a[j]);
	system("pause");
	return 0;
}