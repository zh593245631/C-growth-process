#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//	给定一个整数数组和一个目标值，找出数组中和为目标值的两个数。
//你可以假设每个输入只对应一种答案，且同样的元素不能被重复利用。
//示例:
//给定 nums = [2, 7, 11, 15], target = 9
//
//因为 nums[0] + nums[1] = 2 + 7 = 9
//所以返回 [0, 1]
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