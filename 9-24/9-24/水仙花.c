//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//
//	int gw=0;	//��λ
//
//	int sw=0;	//ʮλ
//
//	int bw=0;	//��λ
//
//	printf("ˮ�ɻ�����");
//
//	for(i=100; i<=999; i++)
//
//	{
//		
//		gw=i%10;
//
//		sw=i/10%10;
//
//		bw=i/100;
//
//		if(i==(gw*gw*gw+sw*sw*sw+bw*bw*bw))
//
//			printf("%d ",i);
//	}
//
//}

//��չ
#include<math.h>
int main()
{

	int num = 0;
	

	for(num=0; num<9999999; num++)
	{
		
		int tmp = num ;
		int sum = 0;
		int count = 1;

		//�ж�λ��
		while(tmp/10)
		{
		
			tmp /= 10;
			count++;
	
		}
	
		
	//����η���
		tmp = num ;
		while(tmp)
		{
			sum += pow(tmp%10,count);
			tmp /= 10;
		
		}
	//�жϴ�ӡ
		if (sum == num)
		{
			printf("%d ",num);
		}
	
	
	}
	


	return 0;
}