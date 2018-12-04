#include"game.h"
void get_rand(int* arr)
{
	int i = 0;
	printf("��鵽�������ǣ�");
	for(i = 0; i<4; i++)
	{
		arr[i] = rand()%9+1;
		printf("%4d",arr[i]);
	}
	printf("\n");
}
static int insert_operand(int *operand , int * top_num ,int num)           /*����ѹ������ջ*/  
{
    (*top_num) ++;  
    operand[*top_num] = num;                    /*��������*/  
    
    return 0;                           /*�����˳�*/  
}  
static int insert_oper (char * oper , int *top_oper , char ch)             /*������ѹ�����ջ*/  
{  
    (*top_oper)++;  
    oper[*top_oper] = ch;                       /*���������*/  
    return 0;                           /*�����˳�*/  
}       
static int compare(char *oper , int *top_oper , char ch)                   /*�Ƚϲ��������ȼ�*/  
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
static int deal_date(int *operand ,char *oper ,int *top_num, int *top_oper)    /*������������*/  
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

int PlayGame(int* arr)
{
	int sum ;

	int operand[MAX_SIZE];				/*����ջ����ʼ��*/  
    int  top_num ;  
    
    char oper[MAX_SIZE];                  /*������ջ����ʼ��*/  
    int top_oper;  

	char* temp;  
    char dest[MAX_SIZE];  
    
    int num;  
    int i ; 
    char *str = (char *) malloc (sizeof(char) * 100);  /*��ȡ���ʽ(������)*/  
redo: 
	sum = arr[0]+arr[1]+arr[2]+arr[3];
	memset(operand,0,MAX_SIZE);	
    top_num = -1;  
    
    memset(oper,0,MAX_SIZE);                  
    top_oper = -1;  

    num = 0;  
    i = 0; 
    str = (char *) malloc (sizeof(char) * 100);
	scanf("%s",str);   
    
    while(*str != '\0')  
    {  
		temp = dest;  
		while(*str >= '0' && *str <= '9')           /*�ж��Ƿ�������*/  
        {     
			*temp = *str; 
			sum-=(int)(*str-'0');
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
	if(sum!=0)
	{
		printf("�������\n");
		goto redo;
	}
     
    return operand[0]; 
} 

