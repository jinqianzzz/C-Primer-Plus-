/*Q6--打印与平方立方有关的表格*/
#include <stdio.h>
int main(void)
{
	int max = 0;
	int min = 0;
	int time = 0;

	printf("请输入表格的下限：");
	scanf("%d", &min);
	printf("请输入表格的上限：");
	scanf("%d", &max);
	if (min > max)
	{
		printf("输入错误 \n");
	}
	else
	{
		printf("原数           平方           立方\n");
		for (time = min; time <= max; time++)
			printf("%-d		%-d		%-d\n", time, time * time, time * time * time);
	}
	return 0;
}