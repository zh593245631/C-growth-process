//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	float sum = 0.0;
//	for(i=1; i<=100;i++)
//	{
//		float t = i;
//		if(1 == i%2)
//		{
//			sum+=1/t;
//		}
//		else
//			sum-=1/t;
//	
//	}
//		printf("sum=%f",sum);
//		return 0;
//}
//ÓÅ»¯ºó
int main()
{
	int i = 0;
	int flat = 1;
	float sum = 0;

	for(i=1; i<=100;i++)

	{
		
		sum += flat*1.0/i;
		flat *= -1;

	}
		
	printf("sum=%f",sum);

		
	return 0;
}