#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>

void str(int n)

{

	if (n == 1)

		printf("A");

	else

	{

		str(n - 1);

		printf("%c", (char)('A' + n - 1));

		str(n - 1);

	}

}

int main()

{

	int n;

	scanf("%d", &n);

	str(n);
	system("pause");
	return 0;

}