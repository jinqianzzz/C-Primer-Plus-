/*Q7-观察float与double的精度*/
#include<stdio.h>
#include <float.h>
int main(void)
{
	double a = 1.0 / 3.0;
	float b = 1.0 / 3.0;
	printf("%.6lf\n", a);
	printf("%.12lf\n", a);
	printf("%.16lf\n", a);
	printf("%.6f\n", b);
	printf("%.12f\n", b);
	printf("%.16f\n", b);
	printf("%d\n", DBL_DIG);
	printf("%d\n", FLT_DIG);
	return 0;
}