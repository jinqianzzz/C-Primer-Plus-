/*Q5--编写函数返回double类型数组中最大值和最小值的差值*/
#include <stdio.h>
double double_diff(double* nums, int numsSize)
{
	int i = 0;
	double max = nums[0];
	double min = nums[0];
	for (i = 1; i < numsSize; i++)
	{
		if (nums[i] >= max)
			max = nums[i];
		if (nums[i] <= min)
			min = nums[i];
	}
	return max-min;
}
int main(void)
{
	double arr[] = { 1.1,2.2,3.3,6.6,4.4,5.5};
	printf("%lf", double_diff(arr, sizeof(arr) / sizeof(arr[0])));
	return 0;
}