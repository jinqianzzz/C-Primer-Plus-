/*Q10--��д������������Ķ�ӦԪ����Ӳ�����������������*/
#include <stdio.h>
void Add_array(double* src1, double* src2, double* dst, int numsSize)
{
	for (int i = 0; i < numsSize; i++)
		dst[i] = src1[i] + src2[i];
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
	double arr1[4] = { 2,4,5,8 };
	double arr2[4] = { 1,0,4,6 };
	double arr3[4] = { 0 };

	Add_array(arr1, arr2, arr3, 4);
	Print(arr1, 4);
	Print(arr2, 4);
	Print(arr3, 4);
	return 0;
}