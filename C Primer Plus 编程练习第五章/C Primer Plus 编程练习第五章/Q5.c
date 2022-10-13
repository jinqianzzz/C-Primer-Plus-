/*Q5--修改程序addemup.c*/
#include <stdio.h>
int main(void)
{
	int day = 0;
	int sum = 0;
	int count = 0;

	printf("请输入赚钱的天数:\n");
	scanf("%d", &day);
	while (count++ < day)
	{
		sum += count;
	}
	printf("在该天数中共赚了%d元", sum);
	return 0;
}