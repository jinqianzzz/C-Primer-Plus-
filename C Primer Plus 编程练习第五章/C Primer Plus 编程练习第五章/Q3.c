/*Q3--将=天数转换为周数和天数*/
#include <stdio.h>
#define PER_WEEK 7
int main(void)
{
	int day = 0;
	printf("请输入天数/day\n");
	scanf("%d", &day);
	while (day > 0)
	{
		printf("%d days are %d weeks,%d days\n", day,day / PER_WEEK, day % PER_WEEK);
		printf("请输入天数，或输入非0数结束程序\n");
		scanf("%d", &day);
	}
	return 0;
}
