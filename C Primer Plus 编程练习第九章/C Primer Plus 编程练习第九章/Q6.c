/*Q6--���һ����3��double���͵����ݽ�������ĺ���*/
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
	printf("��ֱ�������������ֵ\n");
	scanf("%lf%lf%lf", &a,&b,&c);
	Sort(&a, &b, &c);
	printf("��sort()������a,b,c����ֵ�Դ�Ϊ%lf,%lf,%lf\n", a, b, c);
	return 0;
}