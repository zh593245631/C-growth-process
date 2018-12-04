#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>                          /*����ͷ�ļ�*/  
#include <stdlib.h>
#define MAX_SIZE 1024                       /*���鳤��*/  
int insert_operand(int *operand , int * top_num ,int num)           /*����ѹ������ջ*/  
{
    (*top_num) ++;  
    operand[*top_num] = num;                    /*��������*/  
    
    return 0;                           /*�����˳�*/  
}  
int insert_oper (char * oper , int *top_oper , char ch)             /*������ѹ�����ջ*/  
{  
    (*top_oper)++;  
    oper[*top_oper] = ch;                       /*���������*/  
    return 0;                           /*�����˳�*/  
}       
int compare(char *oper , int *top_oper , char ch)                   /*�Ƚϲ��������ȼ�*/  
{     
    if((oper[*top_oper] == '-' || oper[*top_oper] == '+')           /*�жϵ�ǰ���ȼ��Ƿ��ջ�����������ȼ���*/  
    && (ch == '*' || ch == '/'))
    {  
        return 0;                      /*������ѹ��ջ*/   
    }   
    else if(*top_oper == -1 || ch == '('|| (oper[*top_oper] == '(' && ch != ')'))  /*�жϲ�����ջ�Ƿ�Ϊ�գ�ջ������   ���Ƿ�Ϊ'('*/  
    {  
		return 0;                       /*������ѹ��ջ*/  
    }  
    else if (oper[*top_oper] =='(' && ch == ')' )       /*�ж������ڵı��ʽ�Ƿ�������*/  
    {  
		(*top_oper)--;  
		return 1;                       /*�ԣ������д���*/  
    }  
    else  
    {  
        return -1;                                          /*���в�����������*/  
    }  
}  
int deal_date(int *operand ,char *oper ,int *top_num, int *top_oper)    /*������������*/  
{  
    int num_1 = operand[*top_num];              /*ȡ������ջ����������*/  
    int num_2 = operand[*top_num - 1];  
    
    int value = 0;  
    
    if(oper[*top_oper] == '+')                  /*�ӷ�����*/  
    {  
		value = num_1 + num_2;  
    }  
    
    else if(oper[*top_oper] == '-')             /*��������*/  
    {  
		value = num_2 - num_1;  
    }  
    
    else if(oper[*top_oper] == '*')             /*�˷�����*/  
    { 
        value = num_2 * num_1;  
    }  
    
    else if(oper[*top_oper] == '/')             /*��������*/  
    {  
		value = num_2 / num_1;  
    }  
    
    (*top_num) --;                              /*������ջ������һλ*/  
    operand[*top_num] = value;                  /*���õ���ֵѹ������ջ*/  
    (*top_oper) --;  /*��������ջ������һλ*/  
	return value;
}  
int main()  
{  
    int operand[MAX_SIZE] = {0};				/*����ջ����ʼ��*/  
    int  top_num = -1;  
    
    char oper[MAX_SIZE] = {0};                  /*������ջ����ʼ��*/  
    int top_oper = -1;  

	char* temp;  
    char dest[MAX_SIZE];  
    
    int num = 0;  
    int i = 0; 
    char *str = (char *) malloc (sizeof(char) * 100);               /*��ȡ���ʽ(������)*/  
    
    scanf("%s",str);   
    
    while(*str != '\0')  
    {  
		temp = dest;  
		while(*str >= '0' && *str <= '9')           /*�ж��Ƿ�������*/  
        {     
			*temp = *str;     
			str ++;     
			temp ++;                  
		}                               /*���������˳�*/  
       
        if(*str != '(')      /*�жϷ����Ƿ�Ϊ'('*/  
		{
			*temp = '\0';     
			num = atoi(dest);               /*���ַ���תΪ����*/     
			insert_operand(operand, &top_num,num);      /*������ѹ������ջ*/  
		}  
		while(1)  
		{     
			i = compare(oper,&top_oper,*str);      /*�жϲ��������ȼ�*/     
			if(i == 0)     
			{         
				insert_oper(oper,&top_oper,*str);   /*ѹ�������*/         
				break;     
			}        
			else if(i == 1)                         /*�ж������ڵı��ʽ�Ƿ����*/     
			{  
				str++;
			}        
			else if(i == -1)                        /*�������ݴ���*/     
			{  
				deal_date(operand,oper,&top_num,&top_oper);     
			}  
		}  
        str ++;                 /*ָ����ʽ��һ���ַ�*/  
    }  
    
    printf("num = %d\n",operand[0]);        /*������*/  
    return 0;                       /*�����˳�*/  
} 
