#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#if 0
int main()
{
	int n = 0;
	
	n = scanf("%d",&n);  //scanf�ķ���ֵ�Ǻ����ɹ�ת�����洢�ڲ����е�ֵ�ĸ���
	n = printf("n = %d\n",n); //printf����һ��intֵ����ʾ����ӡ���ַ���
	printf("n = %d\n",n);

	return 0;
}
#endif
int main()
{
	char arr[10] = {0};
	scanf("%s",arr);             //����qwertyuiopa
	printf("\n arr =%s\n",arr);  //���qwertyuiopa   arr[10]='a',
	return 0;
}