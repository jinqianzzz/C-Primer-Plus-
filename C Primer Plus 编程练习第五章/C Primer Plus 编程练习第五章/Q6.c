/*Q6--修改程序addemup.c2*/
#include <stdio.h>
int main(void)
{
	int day=0;
	int count=0;
	int sum = 0;

	printf("请输入赚钱的天数\n");
	scanf("%d", &day);
	while (count++ < day)
	{
		sum += count * count;
	}
	printf("总共赚了%d元\n", sum);
	return 0;
}