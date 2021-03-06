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
char* my_strchr(const char* str, int c)
{
	char string = (char)c;
	assert(str);

	while(*str)
	{
		if(*str==string)
			return (char*)str;
		str++;
	}
	return NULL;



}
int my_strcmp(const char* str1, const char* str2)
{
	int ret = 0;
	assert(str1);
	assert(str2);

	while(!(ret = *str1-*str2)&&*str2)
	{
		str1++;
		str2++;
	}

	
	if(ret>0)
		return 1;
	else if(ret<0)
		return -1;
	else
		return 0;


}
void* my_memcpy(void* dst, const void* src, int num)
{
	char* dst1 = (char*)dst;
	char* src1 = (char*)src;

	assert(dst);
	assert(src);

	while(num--)
	{
		/**((char*)dst)++=*((char*)src)++;*/
		*dst1++ = *src1++;

	}

	return dst;
}
void* my_memmove(void* dst, const void* src, int num)
{
	char* dst1 = (char*)dst;
	char* src1 = (char*)src;
	assert(dst);
	assert(src);
	if(dst1>src1&&dst1<(src1+num))
	{
		dst1 = dst1+(num-1);
		src1 = src1+(num-1);
		while(num--)
		{
			*dst1--=*src1--;
		}
	}
	else
	{
		while(num--)
		{
			*dst1++ = *src1++;
		}
	}
	return dst;
}
char *my_strncpy(char* dst,const char* src,int count)
{
	char* dst1 = dst;
	char* src1 = (char*)src;
	int num = count;
	assert(dst&&src);
	while(*src1++)
	{
		num--;
	}
	src1 = (char*)src;
	while(count)
	{
		*dst1++ = *src1++;
		count--;
	}
	if(num>0)	
		*dst1 = '\0';

	return dst;

}
char *my_strncat(char* dst,const char* src,int num)
{
	char* dst1 = dst;
	char* src1 = (char*)src;
	assert(dst&&src);
	while(*dst1)
	{
		dst1++;
	}
	while(num--)
	{
		*dst1++ = *src1++;
	}
	*dst1 = '\0';

	return dst;


}
int my_strncmp(const char* str1,const char*str2, int num)
{
	assert(str1&&str2);
	while(num--)
	{
		if(*str1!=*str2)
			return (*str1-*str2);
		str1++;
		str2++;
	}
	return 0;
	
}
int main()
{
	char str1[] = "aabbbbb";
	char str2[] = "aabbbb";
	int a = my_strncmp(str1,str2,7);
	/*printf("%s\n",str1);*/
	printf("%d\n",a);

	return 0;
}