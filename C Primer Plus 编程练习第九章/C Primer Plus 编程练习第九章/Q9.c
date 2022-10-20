/*Q9--用递归来更改Q8*/
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