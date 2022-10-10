/*Q8--美国的体积测量系统*/
#include <stdio.h>
int main(void)
{
	float pint;
	printf("请输入杯数：");
	scanf("%f", &pint);
	printf("其对应\n品脱:%f\n", pint / 2);
	printf("盎司:%f\n", pint * 8);
	printf("汤勺:%f\n", pint * 16);
	printf("茶勺:%f\n", pint * 48);
	return 0;
}