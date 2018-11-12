//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void _jz(unsigned int a)
//{
//	/*int count = 0;*/
//	int arr[32] = {0};
//	unsigned int tmp = a;
//	int i = 0;
//	while(tmp)
//	{
//		arr[i++]=tmp%2;
//		/*count++;*/
//		tmp/=2;
//	}
//	printf("奇数序列：");
//	for(i=31; i>=0;i-=2)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n偶数序列：");
//	for(i=30; i>=0;i-=2)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	
//}
//void __jz(unsigned int a)
//{
//	unsigned int flat = 0x80000000;
//	
//	printf("偶数列：");
//	while(flat)
//	{
//		if(flat&a)
//		{
//			printf("1 ");
//		}
//		else
//		{
//			printf("0 ");
//		}
//		flat>>=2;
//	}
//	printf("\n");
//
//	flat = 0x40000000;
//	printf("奇数列：");
//	while(flat)
//	{
//		if(flat&a)
//		{
//			printf("1 ");
//		}
//		else
//		{
//			printf("0 ");
//		}
//		flat>>=2;
//	}
//	printf("\n");
//
//}
//int main()
//{
//	int value = 0;
//
//	scanf("%d",&value);
//
//	__jz(value);
//	return 0;
//}