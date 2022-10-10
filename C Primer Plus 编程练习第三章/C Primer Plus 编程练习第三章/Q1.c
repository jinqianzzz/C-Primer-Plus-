/*Q1--观察上溢和下溢*/
#include <stdio.h>
#include <limits.h>
#include <float.h>
int main(void)
{
	float a = 10.0/3;
	printf("浮点数下溢损失精度打印为%f\n", a);
	printf("最大浮点数为%f\n", FLT_MAX);
	printf("浮点数上溢打印出%f\n", FLT_MAX * 10);
	printf("最大整数为%d\n", INT_MAX);
	printf("整数上溢打印出%d\n", INT_MAX + 1);
	return 0;
}