#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
typedef struct
{
	char name[12];
	char sex[4];
	char age[3];
	char tel[15];
	char dz[20];

}TXL;
void TJ(TXL* p)
{
	while(strcmp(p->tel,"00000000000")>0)
	{
		p++;
	}
	scanf("%s",&(p->name));
	scanf("%s",&p->sex);
	scanf("%s",&p->age);
	scanf("%s",&p->tel);
	scanf("%s",&p->dz);
}
void SC(TXL* p, char* name)
{
	while(strcmp(p->name,name))
	{
		p++;
	}
	strcpy(p->name,"");
	strcpy(p->sex,"");
	strcpy(p->age,"");
	strcpy(p->tel,"");
	strcpy(p->dz,"");

}
void cz(TXL* p, char* name)
{
	while(strcmp(p->name,name))
	{
		p++;
	}
	printf("%s  %s  %s  %s  %s\n",p->name,p->sex,p->age,p->tel,p->dz);
}
int main()
{
	TXL txl[1000] = {{"张三","男","17","15802993797","2#a217"}};
	TXL* p = txl;
	/*showTXL(p);*/
	printf("%s  %s  %s  %s  %s\n",p->name,p->sex,p->age,p->tel,p->dz);
	cz(p,"张三");
	/*TJ(p);*/
	/*SC(p,"张三");*/
	/*p++;*/
	//scanf("%s",&(p->name));
	//scanf("%s",&p->sex);
	//scanf("%s",&p->age);
	//scanf("%s",&p->tel);
	//scanf("%s",&p->dz);
	//printf("%s  %s  %s  %s  %s\n",p->name,p->sex,p->age,p->tel,p->dz);

	return 0;
}