#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
#include<math.h>
//������ϰ �ֽ�������
//ʱ�����ƣ�1.0s   �ڴ����ƣ�512.0MB
//
//��������
//�������[a, b]�������������������ֽ⡣
//�����ʽ
//������������a��b��
//�����ʽ
//ÿ�����һ�����ķֽ⣬����k = a1*a2*a3...(a1 <= a2 <= a3...��kҲ�Ǵ�С�����)(����ɿ�����)
//��������
//3 10
//�������
//3 = 3
//4 = 2 * 2
//5 = 5
//6 = 2 * 3
//7 = 7
//8 = 2 * 2 * 2
//9 = 3 * 3
//10 = 2 * 5
//��ʾ
//��ɸ������������Ȼ���ٷֽ⡣
//���ݹ�ģ��Լ��
//2 <= a <= b <= 10000
int p_su(int num)
{
	int i = 0;
	for (i = 2; i <= sqrt(num); i++)
	{
		if (num%i == 0)
			return 0;
	}
	return 1;
}
void FJ(const int a, const int b)
{
	int i = (int)a;
	int j = (int)b;
	while (i <= j)
	{
		printf("%d=",i);
		if (p_su(i))
			printf("%d\n", i);
		else{
			int m;
			for (m = 2; m < i; m++)
			{
				int tmp = i;
				while (p_su(m) && !(tmp%m)){
					printf("%d", m);
					tmp /= m;
					if (tmp != 1)
						printf("*");
				}
				if (p_su(tmp)&&tmp!=1){
					printf("%d", tmp);
					break;
				}
			}
			printf("\n");
		}
		i++;
	}
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	FJ(a, b);
	system("pause");
	return 0;
}