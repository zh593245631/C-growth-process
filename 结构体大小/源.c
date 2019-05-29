#include<stdio.h>
//Á·Ï°3
struct S3
{
	double d;
	char c;
	int i;
};

struct S4
{
	char c1;
	struct S3 s3;
	double d;
};

struct A
{
	int _a : 2; // 8
	int _b : 5; // 20
	int _c : 10;// 40
	//int _d : 30;// 120
};
struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

union MyUnion
{
	char a;
	int b;
};
int main()
{
	//printf("%d\n", sizeof(struct S3));
	//printf("%d\n", sizeof(struct S4));
	//printf("%d\n", sizeof(struct A));

	//struct S s = { 0 };
	//s.a = 10;
	//s.b = 12;
	//s.c = 3;
	//s.d = 4;

	//printf("%d\n", s.a);

	union MyUnion u;
	u.b = 0xffffff01;

	printf("%d\n", u.a);
	return 0;
}