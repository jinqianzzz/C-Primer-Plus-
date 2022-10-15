/*Q14--第二个数组元素为第一个数组对应元素累积之和*/
#include <stdio.h>
int main(void)
{
	double arr1[8] = { 0 };
	double arr2[8] = { 0 };
	int i = 0;

	printf("请输入第一个数组的8个元素\n");
	for (i = 0; i < 8; i++)
	{
		scanf("%lf", &arr1[i]);
	}
	arr2[0] = arr1[0];
	for (i = 1; i < 8; i++)
	{
		arr2[i] = arr2[i - 1] + arr1[i];
	}
	for (i = 0; i<8; i++)
		printf("%10lf   ", arr1[i]);
	printf("\n");
	for (i = 0; i < 8; i++)
		printf("%10lf   ", arr2[i]);
	return 0;
}