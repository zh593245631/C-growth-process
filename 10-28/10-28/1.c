//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//unsigned int reverse_bit(unsigned int value)
//{
//	int t = 0;
//	int i = 0;
//	int va = 0;
//	
//	for(i=0; i<32; i++)
//	{
//		t = ((value>>i)&1)*pow(2,31-i);
//		va += t;
//
//	}
//	return va;
//	
//
//
//}
//
//int main()
//{
////	1.��д������ 
////unsigned int reverse_bit(unsigned int value); 
////��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ�� 
////
////�磺 
////��32λ������25���ֵ�������и�λ�� 
////00000000000000000000000000011001 
////��ת�󣺣�2550136832�� 
////10011000000000000000000000000000 
////���������أ� 
////2550136832 
//	unsigned int value = 0;
// 
//	scanf("%d",&value);
//	
//
//	printf("��ת��%u",reverse_bit(value));//%u �޷��ŵ�  �����ӡ�Ǹ�����
//
//	return 0;
//}
//
//
#include<stdio.h>
int reverse(unsigned int x)
{
	int count = 0;
	unsigned int y = 0;
    unsigned int tmp = x;


	while(tmp)
	{
		//0000 0000 0000 0000 0000 0000 0000 00001 ѭ��1��
		//1000 0000 0000 0000 0000 0000 0000 00000 ѭ��32��
		//0000 0000 0000 0000 1000 0000 0000 00000 ѭ��16��
		if(tmp&1)
		{
			y|=(1<<(31-count));//����λ��ʼ��Ϊ0��ֻ��תΪ1��
		}
		tmp>>=1;
		count++;
		
	}
	return y;

}
int main()
{
    unsigned int x = 25;
	unsigned int y = reverse(x);

	printf("x:%u\n",x);
	printf("y:%u\n",y);
	return 0;
}