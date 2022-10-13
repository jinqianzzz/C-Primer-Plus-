/*Q7--设计函数求立方*/
#include <stdio.h>
void Cube(double x)
{
	double cube = x * x * x;
	printf("%lf", cube);
}
int main(void)
{
	double a = 0;
	printf("请输入一个数\n");
	scanf("%lf", &a);
	Cube(a);
	return 0;
}