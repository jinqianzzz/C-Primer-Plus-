/*Q2--打印比输入整数至比其大10整数间的所有数字*/
#include <stdio.h>
int main(void)
{
	int num = 0;
	int end = 0;

	printf("请输入一个整数\n");
	scanf("%d", &num);
	end = num+10;
	while (num <= end)
	{
		printf("%d	", num);
		num++;
	}
	return 0;
}