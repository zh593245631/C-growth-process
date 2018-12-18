#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
float S_rectangle(float* a, float* b)
{
	float c[4];
	int i = 0;
	for (i = 0; i < 2; i++)
	{
		c[i] = a[i] >= b[i] ? a[i] : b[i];
	}
	for (i = 2; i < 4; i++)
	{
		c[i] = a[i] <= b[i] ? a[i] : b[i];
	}
	return (c[2] - c[0])*(c[3] - c[0]);
}
int main()
{
	float a[4], b[4];
	int i = 0;
	for (i = 0; i < 4; i++)
		scanf("%f", &a[i]);
	for (i = 0; i < 4; i++)
		scanf("%f", &b[i]);

	printf("%0.2f",S_rectangle(a,b));
	system("pause");
	return 0;
}