/*Q5--��ư�����double���͵ı����滻Ϊ�ϴ�ֵ�ĺ���*/
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
	printf("�������һ������ֵ\n");
	scanf("%lf", &a);
	printf("������ڶ�������ֵ\n");
	scanf("%lf", &b);
	large_of(&a, &b);
	printf("��large_of()������a��ֵΪ%lf,b��ֵΪ%lf\n", a, b);
	return 0;
}