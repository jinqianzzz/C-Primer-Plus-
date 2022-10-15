/*Q18--朋友增长直至超过邓巴数*/
#include <stdio.h>
#define Dunbar_s_number 150
int main(void)
{
	int num = 5;
	int week = 1;

	for (week = 1; num <= 150; week++)
	{
		num = (num - week) * 2;
		if (num <= 150)
			printf("第%d周有%d个朋友\n", week, num);
	}
	printf("第%d周已经超过了邓巴数\n",week-1);
	return 0;
}
