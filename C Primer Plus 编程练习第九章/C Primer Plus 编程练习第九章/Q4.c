/*Q4--��Ƽ�������double���Ͳ����ĵ���ƽ�����ĺ���*/
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
	printf("�������һ������ֵ\n");
	scanf("%lf", &a);
	printf("������ڶ�������ֵ\n");
	scanf("%lf", &b);
	printf("���������ĵ���ƽ����Ϊ%lf\n", Harmonic_mean(a, b));
	return 0;
}