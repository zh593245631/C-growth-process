#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#if 0
int main()
{
	int n = 0;
	
	n = scanf("%d",&n);  //scanf的返回值是函数成功转换并存储于参数中的值的个数
	n = printf("n = %d\n",n); //printf返回一个int值，表示被打印的字符数
	printf("n = %d\n",n);

	return 0;
}
#endif
int main()
{
	char arr[10] = {0};
	scanf("%s",arr);             //输入qwertyuiopa
	printf("\n arr =%s\n",arr);  //输出qwertyuiopa   arr[10]='a',
	return 0;
}