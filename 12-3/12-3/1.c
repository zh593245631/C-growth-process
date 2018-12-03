#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	const char* str = "hello bit!";
//	char* str_cpy = malloc(strlen(str)+1);
//	//char* str_cpy = malloc(0); //无意义
//	
//	if(!str_cpy) //判断申请内存是否成功
//	{
//		return 1;
//	}
//	
//	strncpy(str_cpy,str,strlen(str)+1);
//	free(str_cpy);
//
//	return 0;
//}
//int main()
//{
//	int count = 10;
//	//char *mem = (char*)malloc(count*1024*1024);
//	//if(!mem)
//	//{
//	//	printf("malloc error\n");
//
//	//}
//	//free(mem);
//	char *mem;
//	while(1)
//	{
//		mem = (char*)malloc(count*1024*1024*1024);
//		if(!mem)
//		{
//			printf("malloc error\n");
//			break;
//		}
//		count++;
//	}
//	free(mem);
//	printf("top malloc is :%d gb\n",count);
//	
//	return 0;
//}
//int main()
//{
//	int count = 10;
//	char* mem = "123";
//	printf("%p\n",mem);  //栈上
//	//mem = (char*)malloc(count);
//	mem = (char*)calloc(count,sizeof(int)); //会初始化为0
//	printf("%p\n",mem);   //堆上
//	free(mem);
//	mem = NULL;			//置空
//	printf("%p\n",mem);  
//	return 0;
//}
int main()
{
	int *p = (int *)malloc(sizeof(int)*100);
	char *q;
	if(!p)
	{
		return 1;
	}
	printf("before : %p\n",p);
	//q = realloc(p,sizeof(int)*1000);
	q = realloc(p,sizeof(int)*10);
	printf("after  : %p\n",q);
	return 0;
}