#define _CRT_SECURE_NO_WARNINGS
int main()
{
	char arr[] = "asdsad0'0'\0";

	
	printf("%s\n",arr);
	printf("%p\n",arr); //首元素地址
	printf("%p\n",&arr);
	printf("%p\n",arr+1); 地址+1
	printf("%p\n",&arr+1); 地址+11



	return 0;
}