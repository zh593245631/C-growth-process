#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#define Y 100000000
#define W 10000
#define Q 1000
#define B 100
#define S 10
char* p[] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu", "shi", "bai", "qian", "wan", "yi" };
void print(int n)
{
	printf("%s ", *(p + n));
}
void du(int num)
{
	//ǧ
	if (num / Q){
		print(num / Q);
		print(12);
		if (!(num / B%S)&&(num/S%S))
			print(num / B%S);
	}
	//��
	if (num / B%S){
		print(num/B%S);
		print(11);
	}
	//ʮ
	if (num / S%S){
		if (num / S%S == 1&&(num/Q==0))
			;
		else{
			print(num / S%S);
		}
		print(10);
	}
	else{
		if (num/Q)
			print(num / S%S);
	}
	//��
	if (num%S){
		print(num%S);
	}
	
}
int main()
{
	long long c;
	scanf("%lld", &c);
	//��ӡ��
	if (c / Y){
		du(c / Y);
		printf("%s ", *(p + 14));
	}
	//��ӡ��
	if (c%Y / W){
		du(c%Y/W);
		printf("%s ", *(p + 13));
	}
	//��ӡǧ
	if (c%W){
		du(c%W);
	}
	printf("%lld", c);
	system("pause");
	return 0;
}