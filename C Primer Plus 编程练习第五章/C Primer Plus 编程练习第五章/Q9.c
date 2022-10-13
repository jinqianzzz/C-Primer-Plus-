/*Q8--温标换算*/
#include <stdio.h>
void Temperatures(double x)
{
	const double s1 = 5.0;
	const double s2 = 9.0;
	const double s3 = 32.0;
	const double k = 273.16;
	double st = 0;
	double kt = 0;
	st = s1 * (x - s3) / s2;
	kt = st + k;
	printf("华氏温度为%.2lf\n",x);
	printf("摄氏温度为%.2lf\n", st);
	printf("开氏温度为%.2lf\n", kt);
}
int main(void)
{
	double tem = 0;
	
	printf("请输入一个华氏温度(输入q退出)\n");
	while(1== scanf("%lf", &tem))
	Temperatures(tem);
	return 0;
}