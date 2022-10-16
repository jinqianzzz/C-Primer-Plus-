/*Q7--通过工作时间计算工资，税金及净收入*/
#include <stdio.h>
#define tax_fir 0.15
#define tax_sec 0.2
#define tax_thi 0.25
#define wage_per_hour 10
int main(void)
{
	double tax_fir_max = 300 * tax_fir;
	double tax_sec_max = tax_fir_max + 150 * tax_sec;
	double hour = 0;
	double wages = 0;   
	double tax = 0;

	printf("请输入工作的时间(h):\n");
	scanf("%lf", &hour);
	if (hour <= 40)
		wages = hour * wage_per_hour;
	else
		wages = (40 + (hour - 40) * 1.5) * wage_per_hour;
	if (wages <= 300)
		tax = wages * tax_fir;
	else if (wages > 300 && wages <= 450)
		tax = tax_fir_max + (wages - 300) * tax_sec;
	else
		tax = tax_sec_max + (wages - 450) * tax_thi;
	printf("工资总额：%lf\n税金：%lf\n净收入：%lf\n", wages, tax, wages - tax);
	return 0;
}