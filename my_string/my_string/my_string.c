#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
char *my_strcpy(char* dst,const char* src)
{
	char* dst1 = dst;
	assert(dst);
	assert(src);
	while(*dst++=*src++)
	{
		;
	}
	return dst1;
}
char* my_strcat(char* dst,const char* src)
{
	char* dst1 = dst;
	assert(dst);
	assert(src);

	while(*dst)
	{
		dst++;
	}
	while(*dst++=*src++);

	return dst1;

}
char* my_strstr(const char* str1,const char* str2)
{
	char* cp = (char*)str1;
	char*  p = (char*)str2;
	char*  s = NULL;

	assert(str1);
	assert(str2);
	while(*str1)
	{
		s = cp;
		p = (char*)str2;
		while(*s==*p)
		{
			s++;
			p++;
		}
		if(*p=='\0')
		{
			return cp;
		}
		cp++;

	}
	return NULL;
}
int main()
{
	char str1[] = "ab0de";
	char str2[10] = "b0";
	
	/*my_strstr(str1,str2);*/

	printf("%s\n",my_strstr(str1,str2));
	return 0;
}