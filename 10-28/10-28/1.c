#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
unsigned int reverse_bit(unsigned int value)
{
	int t = 0;
	int i = 0;
	int va = 0;
	
	for(i=0; i<32; i++)
	{
		t = ((value>>i)&1)*pow(2,31-i);
		va += t;

	}
	return va;
	


}

int main()
{
//	1.编写函数： 
//unsigned int reverse_bit(unsigned int value); 
//这个函数的返回值value的二进制位模式从左到右翻转后的值。 
//
//如： 
//在32位机器上25这个值包含下列各位： 
//00000000000000000000000000011001 
//翻转后：（2550136832） 
//10011000000000000000000000000000 
//程序结果返回： 
//2550136832 
	unsigned int value = 0;
 
	scanf("%d",&value);
	

	printf("翻转后：%u",reverse_bit(value));//%u 无符号的  否则打印是负数；

	return 0;
}