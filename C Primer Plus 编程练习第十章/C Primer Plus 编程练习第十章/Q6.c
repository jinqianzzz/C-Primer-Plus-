/*Q6--编写函数把double类型数组中的元素倒序排序*/
#include <stdio.h>
void Reverse(double* nums,int numsSize)
{
	int i, j;
	double tmp;
	for (i =numsSize-1;i >=0; i--)
	{
		for(j=0;j<i;j++)
			if (nums[j] < nums[j + 1])
			{
				tmp = nums[j + 1];
				nums[j + 1] = nums[j];
				nums[j] = tmp;
			}
	}
}
int main(void)
{
	int numsSize;
	double arr[] = { 8.0,2.0,3.0,6.0,4.0,5.0,9.0,7.0,1.0 };
	numsSize = sizeof(arr) / sizeof(arr[0]);
	Reverse(arr,numsSize);
	for (int i = 0; i <numsSize;i++)
		printf("%lf ",arr[i]);
		return 0;
}