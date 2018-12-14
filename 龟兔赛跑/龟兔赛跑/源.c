#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>

int main()
{
	int v1, v2, s, t, l, i=0;
		scanf("%d%d%d%d%d",&v1,&v2,&s,&t,&l);
	int count = 0;
	int s1;
	while (i<l/v2)
	{
		i++;
		s1 = v1*(i - count*t);
		if (s1 - v2*i == s)
			count++;
		if (s1 >= l)break;
	}
	if (i < l / v2)
		printf("R\n%d\n",i);
	else
	{
		if (s1 >= l)
			printf("D\n%d\n", i);
		else
			printf("T\n%d\n", i);
	}

	system("pause");
	return 0;
}