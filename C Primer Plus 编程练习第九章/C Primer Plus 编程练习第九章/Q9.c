/*Q9--�õݹ�������Q8*/
#include <stdio.h>
double power(double x, int y)
{
	double pow = 1;
	int i = 0;
	if (y > 0)
	{
		if (y > 1)
			pow = x * power(x,y - 1);
		else
			pow = x;
	}
	else if (y < 0)
	{
		if (x == 0)
			return 0;
		if (-y > 1)
			pow = (1/x) * power(x,y + 1);
		else
			pow = 1/x;
	}
	else
	{
		if (x == 0)
			printf("0��0����δ���壬��˰Ѹ�ֵ����Ϊ1\n");
		pow = 1;
	}
	return pow;
}
int main(void)
{
	double x, xpow;
	int exp;

	printf("������һ��������,����������������\n");
	printf("������q���˳�����\n");
	while (scanf("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%lf��%d����Ϊ%lf\n", x, exp, xpow);
	}
	printf("bye!");
	return 0;
}