#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	FILE *fp = fopen("log.txt","w");
//	int c = fgetc(fp);
//	if(NULL == fp)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//putc('A',fp);
//	
//	printf("%c",c);
//
//	fclose(fp);
//	return 0;
//}
#include<string.h>
int main()
{
	char src_file[256];
	char dst_file[256];
	FILE *srcp;
	FILE *dstp;
	long int size_;
	char* mem;

	printf("输入目标文件：");
	/*scanf("%s",src_file);*/
	fgets(src_file,sizeof(src_file),stdin);
	src_file[strlen(src_file)-1] = '\0';
	printf("输入源文件：");
	//scanf("%s",dst_file);
	fgets(dst_file,sizeof(dst_file),stdin);
	dst_file[strlen(dst_file)-1] = '\0';

	srcp = fopen(src_file,"rb");
	dstp = fopen(dst_file,"wb");
	
	if(srcp==NULL||dstp==NULL)
	{
		printf("打开失败\n");
		goto end;
	}
	

	fseek(srcp,0,SEEK_END);
	size_ = ftell(srcp);
	rewind(srcp);


	mem =(char*)malloc(size_);
	if(mem == NULL)
	{
		perror("malloc");
	}
end:
	if(srcp !=NULL)
	{
		fclose(srcp);
		srcp = NULL;
	}
	if(dstp !=NULL)
	{
		fclose(dstp);
		srcp = NULL;
	}	
	if(srcp !=NULL)
	{
		free(mem);
	}



	return 0;
}