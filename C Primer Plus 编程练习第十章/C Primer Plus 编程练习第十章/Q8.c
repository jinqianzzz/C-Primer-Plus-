/*Q8--把内含7个元素的数组中的第3到5个元素拷贝到含三个元素的数组中*/
#include <stdio.h>
void copy_arr(double* dst, double* src, int x)
{
	int i = 0;
	for (i = 0; i < x; i++)
		dst[i] = src[i];
}
void Print(double* nums, int numsSize)
{
	for (int i = 0; i < numsSize; i++)
	{
		printf("%lf ", nums[i]);
	}
	printf("\n");
}
int main(void)
{
	double arr1[] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7};
	double arr2[3] = { 0 };
	copy_arr(arr2, arr1 + 2, 3);
	Print(arr1, 7);
	Print(arr2, 3);
	return 0;
}