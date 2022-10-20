/*Q5--设计把两个double类型的变量替换为较大值的函数*/
#include <stdio.h>
void large_of(double* x, double* y)
{
	double large = *x > *y ? *x : *y;
	*x = large;
	*y = large;
}
int main(void)
{
	double a = 0;
	double b = 0;
	printf("请输入第一个数的值\n");
	scanf("%lf", &a);
	printf("请输入第二个数的值\n");
	scanf("%lf", &b);
	large_of(&a, &b);
	printf("经large_of()函数后a的值为%lf,b的值为%lf\n", a, b);
	return 0;
}