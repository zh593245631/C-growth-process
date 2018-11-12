//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int count_one_bits(unsigned int value) 
//{ 
//	//15
//	//1111
//	//0001 ^ 1110 &0001 | 1111 
//	int count = 0;
//	unsigned int flat = 1;
//
//	while(flat)
//	{
//		if(flat&value)
//		count++;
//		flat<<=1;
//	}
//	return count;
//
//} 
////高效做法
//int _count_one_bits(unsigned int value) 
//{ 
//	unsigned int a = value;
//	int count = 0;
//
//	while(a)
//	{
//		a &=a-1;
//		count++;
//	
//	}
//	return count;
//
//} 
//
//int main()
//{
//	unsigned int value;
//
//	scanf("%d",&value);
//
//	printf("%d的二进制位是1的个数：%d\n",value,_count_one_bits(value)); 
//
//
//	return 0;
//}