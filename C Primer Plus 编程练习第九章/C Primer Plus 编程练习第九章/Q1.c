/*Q1--设计返回两个double类型值较小值的函数*/
#include <stdio.h>
double min(double x, double y)
{
	return x < y ? x : y;
}
int main(void)
{
	double a = 0;
	double b = 0;
	printf("请输入第一个数的值\n");
	scanf("%lf", &a);
	printf("请输入第二个数的值\n");
	scanf("%lf", &b);
	printf("两个浮点数中较小的值为%lf\n", min(a, b));
	return 0;
}