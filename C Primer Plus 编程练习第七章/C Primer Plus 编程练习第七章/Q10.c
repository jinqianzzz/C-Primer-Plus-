/*Q10--计算美国联邦税收计划下工资的对应税金*/
#include <stdio.h>
#include <stdio.h>
#define tax_fir 0.15
#define tax_sec 0.28
#define degree_fir 17850
#define degree_sec 23900
#define degree_thi 29750
#define degree_fou 14875
int main(void)
{
	double wages = 0;
	double tax = 0;
	double tax_num = 0;
	int degree = 0;

	while (1)
	{
	    printf("*****************************************************************\n");
		printf("以下是缴纳税金的种类:\n");
		printf("1) 单身                               2) 户主\n");
		printf("3) 已婚，共有                      4) 已婚，离异\n");
		printf("5) quit\n");
		printf("*****************************************************************\n");
		printf("请输入所属的类别\n");
		scanf("%d", &degree);
		switch (degree)
		{
		case 1:tax = degree_fir;
			break;
		case 2:tax = degree_sec;
			break;
		case 3:tax = degree_thi;
			break;
		case 4:tax = degree_fou;
			break;
		case 5:return 0;
		default:
		{
			printf("请输入正确的选项\n");
			continue;
		}
		}
		printf("请输入工资(美元):\n");
		scanf("%lf", &wages);
		tax_num = tax * tax_fir + (wages - tax) * tax_sec;
		printf("应缴纳税费：%lf\n", tax_num);
	}
}