/*Q4--编写函数返回double类型数组中的最大值的下标*/
#include <stdio.h>
int Max_num(double* nums, int numsSize)
{
	int i = 0;
	double max = 0;
	int num = 0;
	for (i = 0; i < numsSize; i++)
	{
		if (nums[i] >= max)
		{
			max = nums[i];
			num = i;
		}
	}
	return num;
}
int main(void)
{
	double arr[] = {1.0,2.0,3.0,6.0,4.0,5.0};
	printf("%d", Max_num(arr, sizeof(arr) / sizeof(arr[0])));
	return 0;
}