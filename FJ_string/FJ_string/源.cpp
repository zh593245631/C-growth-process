#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
//������ϰ FJ���ַ���
//ʱ�����ƣ�1.0s   �ڴ����ƣ�512.0MB
//
//��������
//FJ��ɳ����д������һЩ�ַ�����
//A1 = ��A��
//A2 = ��ABA��
//A3 = ��ABACABA��
//A4 = ��ABACABADABACABA��
//�� ��
//�����ҳ����еĹ��ɲ�д���е�����AN��
//�����ʽ
//����һ������N �� 26��
//�����ʽ
//�������Ӧ���ַ���AN����һ�����з�����������в��ú��ж���Ŀո���С��س�����
//��������
//3
//�������
//ABACABA

void FJ(int n)
{
	if (!n)
		;
	else{
		FJ(n - 1);
		printf("%c", 'A' + n - 1);
		FJ(n - 1);
	}
	
}
int main()
{
	int n = 0;
	do{
		scanf("%d", &n);
	} while (n > 26);
	FJ(n);
	printf("\n");
	system("pause");
	return 0;
}