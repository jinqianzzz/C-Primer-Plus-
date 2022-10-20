/*Q8--设计一个能计算正数的正负整次幂的函数*/
#include <stdio.h>
double power(double x, int y)
{
	double pow=1;
	int i = 0;
	if (y > 0)
	{
		for (i = 0; i < y; i++)
			pow *= x;
	}
	else if (y < 0)
	{
		if (x == 0)
			return 0;
		for (i = 0; i < -y; i++)
			pow *= (1 / x);
	}
	else
	{
		if (x == 0)
			printf("0的0次幂未定义，因此把该值处理为1\n");
		pow = 1;
	}
	return pow;
}
int main(void)
{
	double x, xpow;
	int exp;

	printf("请输入一个浮点数,再输入它的整数幂\n");
	printf("请输入q来退出程序\n");
	while (scanf("%lf%d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf("%lf的%d次幂为%lf\n", x, exp, xpow);
	}
	printf("bye!");
	return 0;
}