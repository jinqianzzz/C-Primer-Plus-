/*Q1--��Ʒ�������double����ֵ��Сֵ�ĺ���*/
#include <stdio.h>
double min(double x, double y)
{
	return x < y ? x : y;
}
int main(void)
{
	double a = 0;
	double b = 0;
	printf("�������һ������ֵ\n");
	scanf("%lf", &a);
	printf("������ڶ�������ֵ\n");
	scanf("%lf", &b);
	printf("�����������н�С��ֵΪ%lf\n", min(a, b));
	return 0;
}