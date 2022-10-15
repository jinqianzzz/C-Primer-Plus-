/*Q11--倒序打印8个数字*/
#include <stdio.h>
int main(void)
{
	int arr[8] = { 0 };
	int i = 0;

	printf("请输入8个整数\n");
	for (i = 0; i < 8; i++)
		scanf("%d", &arr[i]);
	for (i = 7; i >= 0; i--)
		printf("%d\n", arr[i]);
	return 0;
}