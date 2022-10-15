/*Q13--将数组元素赋值为2的前8次幂*/
#include <stdio.h>
int main(void)
{
	int arr[8] = { 1,1,1,1,1,1,1,1 };
	int i = 0;
	int j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 1; j < i + 1; j++)
		{
			arr[i] *= 2;
		}
	}
	i = 0;
	do
	{
	printf("arr[%d]=%d\n", i, arr[i]);
	} while (++i< 8);
	return 0;
}