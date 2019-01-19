#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>

struct s1{
	char a;
	int b;
	char c;
};

struct s2{
	char a;
	char b;
	int c;
};

struct s3{
	double a;
	char b;
	int c;
};

struct s4{
	char a;
	struct s3 b;
	double d;
};
int main()
{
	printf("%d\n", sizeof(struct s1));
	printf("%d\n", sizeof(struct s2));
	printf("%d\n", sizeof(struct s3));
	printf("%d\n", sizeof(struct s4));

	system("pause");
	return 0;
}