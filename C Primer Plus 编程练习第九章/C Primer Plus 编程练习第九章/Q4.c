/*Q4--设计计算两个double类型参数的调和平均数的函数*/
#include <stdio.h>
double Harmonic_mean(double x, double y)
{
	double average = 2 / ((1 / x) + (1 / y));
	return average;
}
int main(void)
{
	double a = 0;
	double b = 0;
	printf("请输入第一个数的值\n");
	scanf("%lf", &a);
	printf("请输入第二个数的值\n");
	scanf("%lf", &b);
	printf("这两个数的调和平均数为%lf\n", Harmonic_mean(a, b));
	return 0;
}