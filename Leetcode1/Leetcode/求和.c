#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//	����һ�����������һ��Ŀ��ֵ���ҳ������к�ΪĿ��ֵ����������
//����Լ���ÿ������ֻ��Ӧһ�ִ𰸣���ͬ����Ԫ�ز��ܱ��ظ����á�
//ʾ��:
//���� nums = [2, 7, 11, 15], target = 9
//
//��Ϊ nums[0] + nums[1] = 2 + 7 = 9
//���Է��� [0, 1]
int* twoSum(int* nums, int numsSize, int target) {
    
	static int arr[2] = {0};
    int i = 0;
    int j = 0;
    for(i = 0; i<numsSize-1; i++)
    {
        for(j = i+1; j<numsSize; j++)
        {
            if(*(nums+i)+*(nums+j)==target)
            {
                arr[0] = i;
                arr[1] = j;
				return arr;
            }

        }
        
    }
    return 0;
}
int main()
{

	int nums[] = {2,7,11,15};
	int i = 0;
	for(i=0; i<2; i++)
	{
		printf("%4d",*(twoSum(nums,4,26)+i));
	}
	return 0;
}