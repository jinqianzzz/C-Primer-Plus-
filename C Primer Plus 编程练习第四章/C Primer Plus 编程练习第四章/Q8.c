
/*欧洲与美国的燃油消耗表示法*/
#include <stdio.h>
#define PER_GAL 3.785
#define PER_MILE 1.609
int main(void)
{
	float distance;
	float consumption;

	printf("请输入旅行的旅程(英里)\n");
	scanf("%f", &distance);
	printf("请输入消耗的汽油量(加仑)\n");
	scanf("%f", &consumption);
	printf("每加仑行驶的英里数为%.1f\n", distance / consumption);
	printf("换算为%.1f升/100公里\n", (consumption * PER_GAL * 100) / (distance * PER_MILE) );
	return 0;
}