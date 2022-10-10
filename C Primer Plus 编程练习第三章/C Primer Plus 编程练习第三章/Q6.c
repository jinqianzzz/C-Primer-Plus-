/*Q6--将水的夸脱数转换为水分子的数量*/
#include <stdio.h>
#define PER_QUA_WATER 950
#define PER_HYD_QUA 3e-23
int main(void)
{
	float quart;
	printf("请输入水的夸脱数：");
	scanf("%f", &quart);
	printf("其对应的水分子数为%e", quart * PER_QUA_WATER/PER_HYD_QUA);
	return 0;
}