////1 ±‰¡ø
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void test()
//{
//	int i = 0;
//	i++;
//	printf("%d\n",i);
//
//}
//int main()
//{
//	int i = 0;
//
//	for(i=0; i<10; i++)
//	{
//		test();	// 1 1 1 1 1 1 1 1 1 1
//	}
//	
//	return 0;
//}
//// 2
//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d\n",i);
//
//}
//int main()
//{
//	int i = 0;
//
//	for(i=0; i<10; i++)
//	{
//		test();// 1 2 3 4 5 6 7 8 9 10
//	}
//	
//	return 0;
//}
////3 ∫Ø ˝
//int main()
//{
//	printf("%d\n",add1(1, 2));
//	return 0;
//}
//4
int main()
{
	printf("%d\n",add2(1, 2)); //error
	return 0;
}