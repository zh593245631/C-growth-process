#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
enum Sex
{
	MALE,             //0
	FEMALE = 50,	  //1
	SECRET			  //2
};               //·ÖºÅ
int main()
{
	enum Sex s1 = MALE;
	enum Sex s2 = FEMALE;
	enum Sex s3 = SECRET;

	printf("%d\n",s1);
	printf("%d\n",s2);
	printf("%d\n",s3);


	return 0;
}