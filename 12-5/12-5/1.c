#include<stdio.h>
char* getmem()
{
	char p[]= "hello world";

	return p;
}
int main()
{
	char *str = NULL;
	
	str = getmem();

	printf("%s",str);
	return 0;
}