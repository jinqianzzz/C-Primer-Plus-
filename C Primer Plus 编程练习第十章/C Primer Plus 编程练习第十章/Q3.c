/*Q3--��д��������int���������е����ֵ*/
#include <stdio.h>
int Max(int* nums,int numsSize)
{
	int i = 0;
	int max = 0;
	for (i = 0; i < numsSize; i++)
	{
		if (nums[i] >= max)
			max = nums[i];
	}
	return max;
}
int main(void)
{
	int arr[] = {6,9,4,8,3,7,6,23,10};
	printf("%d", Max(arr,sizeof(arr)/sizeof(arr[0])));
	return 0;
}

