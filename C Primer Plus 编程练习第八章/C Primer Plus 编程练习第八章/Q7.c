/*Q7--在第七章Q8的基础上改用字符进行选择*/
#include <stdio.h>
#include <ctype.h>
#define tax_fir 0.15
#define tax_sec 0.2
#define tax_thi 0.25
int get_first(void)
{
	int ch;

	do
	{
		ch = getchar();
	} while (isspace(ch));

	while (getchar() != '\n')
		continue;
	return ch;
}
int main(void)
{
	double tax_fir_max = 300 * tax_fir;
	double tax_sec_max = tax_fir_max + 150 * tax_sec;
	double hour = 0;
	double wages = 0;
	double tax = 0;
	double wage_per_hour = 0;
	int degree = 0;

	while (1)
	{
		printf("*****************************************************************\n");
		printf("Enter the number corresponding to the desired pay rate or action:\n");
		printf("a) $8.75/hr                       b) $9.33/hr\n");
		printf("c) $10.00/hr                      d) $11.20/hr\n");
		printf("q) quit\n");
		printf("*****************************************************************\n");
		printf("请输入工资等级\n");
		switch (degree = get_first())
		{
		case 'a':wage_per_hour = 8.75;
			break;
		case 'b':wage_per_hour = 9.33;
			break;
		case 'c':wage_per_hour = 10.00;
			break;
		case 'd':wage_per_hour = 11.20;
			break;
		case 'q':return 0;
		default:
		{
			printf("请输入正确的选项\n");
			continue;
		}
		}
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
	}
}