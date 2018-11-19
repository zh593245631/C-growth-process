//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define M 3
//int arr_found(const int arr[][M],int h,const int f)
//{
//
//		int i = h-1;
//		int j = 0;
//
//		if(f<arr[0][0]||f>arr[h-1][M-1])
//			return 0;
//		
//		while(i>=0&&j<M)
//		{
//			if(f>arr[i][j])
//			{
//				j--;
//			}
//			else if(f<arr[i][j])
//			{
//				i--;
//			
//			}
//			else
//			{
//				return 1;
//			}
//		
//		}
//		return 0;
//
//}
//
//int main()
//{
//	int arr[][M] = {{1,2,3},{4,5,6},{7,8,9}};
//	int f = 0;
//	int h = sizeof(arr)/sizeof(arr[0]);
//	int ret = 0;
//	
//	scanf("%d",&f);
//	
//	ret = arr_found(arr,h,f);
//	if(ret==1)
//		printf("´æÔÚ");
//	else
//		printf("²»´æÔÚ");
//
//	return 0;
//}