#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//typedef struct
//{
//	char sname[10];//10+2+4+3+1
//	int age;
//	char sex[3];
//}stu;
//typedef struct
//{
//	char sname[10];//10+2+5+3+20
//	short age;
//	char sex[5];
//	stu s1;
//}stu2;
//int main()
//{
//	stu s1 = {"����",40,"��"};
//	stu2 s2 = {"����",41,"Ů",{"����",40,"��"}};
//
//	stu* p =&s1;
//	printf("%s\t%d\t%s\t%s\t%d\t%s\t\n",s2.sname,s2.age,s2.sex,s2.s1.sname,s2.s1.age,s2.s1.sex);
//	printf("%s\t%d\t%s\t\n",p->sname,p->age,p->sex);
//    printf("%d\n",sizeof(stu2));
//    printf("%d\n",sizeof(short));//2
//
//
//
//	return 0;
//}
//�ṹ��������

//struct student
//{
//	char name[8];
//	//student s1;����
//	struct student *s2; //��ȷ
//};
//int main()
//{
//	struct student s0 = {"����",NULL};
//	struct student s1 = {"����",&s0};
//
//	printf("%s %s\n",s1.name,s1.s2->name);
//	printf("%s %s\n",s1.name,(*(s1.s2)).name);
//	printf("%d\n",sizeof(struct student));
//
//	return 0;
//}
//
//��ע����ӦΪ��1������2������4������8�����ߡ�16��
//#pragma pack(2)//����Ĭ�϶�����Ϊ2
//struct S1 
//{
//	char c1;   
//	int i;    
//	char c2; 
//}; 
//struct S2 
//{    
//	//��ʡ�ռ�
//	char c1;    
//	char c2;    
//	int i;
//};
//#pragma pack()//ȡ�����õ�Ĭ�϶���������ԭΪĬ��
//int main()
//{
//	printf("%d\n",sizeof(struct S1));
//	printf("%d\n",sizeof(struct S2));
//
//	return 0;
//}
//struct S
//{
//	int data[100];
//	int num;
//};
//struct S s1 = {{1,2,3,4},10};
//void print1(struct S s1) //���ٿռ�� �����Ƽ�ʹ��
//{
//	s1.num = 10;
//	
//}
//void print2(struct S* s1)
//{
//	s1->num = 100;
//}
//int main()
//{
//	
//	print2(&s1);
//	printf("%d\n",s1.num);
//	print1(s1);
//	printf("%d\n",s1.num);
//	
//
//	return 0;
//}
//struct A 
//{    
//	int _a:2;    
//	int _b:5;    
//	int _c:10;    
//	int _d:30; 
//};
//struct	S
//{
//	char a:3;
//	char b:4;
//	char c:5;
//	char d:4;
//};
//
//int main()
//{
//	struct S s = {0};
//		s.a= 10;//1010  010   2
//		s.b= 12;//1100  1100  -4
//		s.c= 3; //0011  00011 3
//		s.d= 4; //0100  0100  4
//	//00000000 00000000 00000000
//	//01100010 00000011 00000100
//	//
//	printf("%d\n",s.a);//2
//	printf("%d\n",s.b);//-4
//	printf("%d\n",s.c);//3
//	printf("%d\n",s.d);//4
//
//	printf("%d\n",sizeof(struct S));//3
//	printf("%d\n",sizeof(struct A));//8
//
//	return 0;
//}
////����
////�������͵����� 
//union Un 
//{    
//	char c;    
//	int i; 
//};
// 
////���ϱ����Ķ��� 
//union Un un; 
//int main()
//{
//	un.i=0x11223344;
//	un.c=0x55;
//	//0000 0000 0000 0000 0000 0000 0000 0000
//	//1     1     2   2    3    3     4    4
//	//0001 0001 0010 0010 0011 0011 0100 0100
//	//                                5    5
//	//0001 0001 0010 0010 0011 0011 0101 0101
//	//1     1    2    2    3    3    5   5
//
//	printf("%x\n",un.i);
//	printf("%p\n",&(un.c));
//	printf("%p\n",&(un.i));
//
//	//�������������Ĵ�С 
//	printf("%d\n", sizeof(un));
//	return 0;
//}
union Un1 
{    
	char c[5];
	int i;
}; 
union Un2 
{    
	short c[7];
	int i; 
};
int main()
{
	//��������Ľ����ʲô�� 
	printf("%d\n", sizeof(union Un1)); //8
	printf("%d\n", sizeof(union Un2)); //16
	
	return 0;
}
