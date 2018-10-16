#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void _sz1(int num)
{
	int count = 1;
	int i = 0;
	int tmp = num;
	//Î»Êý
	while(num/10)
	{
		num/=10;
		count++;
	}
	//printf("%d",count);
	for(i=0; i<count; i++)
	{
		int a=tmp/pow(10,count-i-1);

		printf("%d ",a%10);
	
	}

}
void _sz2(int num)
{
	if(num>9)
		_sz2(num/10);
	printf("%d ",num%10);
}
int main()
{
	int num = 0;

	scanf("%d",&num);

	_sz1(num);
	_sz2(num);

	return 0;
}