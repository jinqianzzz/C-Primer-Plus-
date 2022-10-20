/*Q6--设计一个对3个double类型的数据进行排序的函数*/
#include <stdio.h>
void Sort(double* x, double* y, double* z)
{
	double tmp;
	if (*x > *y)
	{
		tmp=*x;
		*x = *y;
		*y = tmp;
	}
	if (*x > *z)
	{
		tmp = *x;
		*x = *z;
		*z = tmp;
	}
	if (*y > *z)
	{
		tmp=*y;
		*y = *z;
		*z = tmp;
	}
}
int main(void)
{
	double a = 0;
	double b = 0;
	double c = 0;
	printf("请分别输入三个数的值\n");
	scanf("%lf%lf%lf", &a,&b,&c);
	Sort(&a, &b, &c);
	printf("经sort()函数后a,b,c三个值以此为%lf,%lf,%lf\n", a, b, c);
	return 0;
}