//#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	double sum_1 = 0;
//	double sum_2 = 0;
//	int time = 0;
//
//
//	printf("请输入运行的项数\n");
//	scanf("%d", &time);
//	for (i = 1; i <=time; i++)
//	{
//		sum_1 += 1.0 / i;
//	}
//	if (time % 2 == 0)
//	{
//		for (i = 1; i <time; i=i+2)
//			sum_2 += 1.0 / i - 1.0 / (i + 1.0);
//	}
//	else
//	{
//		for (i = 1; i < (time - 1); i = i + 2)
//		{
//			sum_2 += 1.0 / i - 1.0 / (i + 1.0);
//		}
//		sum_2 += 1.0 /time;
//	}
//		printf("1.0+1.0/2.0+1.0/3.0+1.0/4.0+...=%lf\n", sum_1);
//		printf("1.0-1.0/2.0+1.0/3.0-1.0/4.0+...=%lf\n", sum_2);
//		printf("两个数列的和为%lf\n", sum_1 + sum_2);
//	return 0;
//}
// 
// 
//#include <stdio.h>
//int main(void)
//{
//	int i = 0;
//	double sum= 0;
//	int time = 0;
//
//
//	printf("请输入运行的项数\n");
//	scanf("%d", &time);
//	while (time > 0)
//	{
//		sum = 0;
//		for (i = 1; i <= time; i++)
//		{
//			sum += 1.0 / i;
//		}
//		printf("1.0+1.0/2.0+1.0/3.0+1.0/4.0+...1.0/%d=%lf\n",time, sum);
//		sum = 0;//将sum重置为0
//		for (i = 1; i < time; i++)
//		{
//			if (i % 2 == 0)
//				sum = sum - 1.0 / i;//偶数
//			else
//				sum = sum + 1.0 / i;//奇数
//		}
//		printf("1.0-1.0/2.0+1.0/3.0-1.0/4.0+...+1.0/%d=%lf\n",time, sum);
//		sum = 0.0;//将sum重置为0
//		for (i = 1; i <= time; i++)
//		{
//			if (i % 2 != 0)
//				sum += 2 * 1.0 / i;//两数列之和只需计算奇数项
//		}
//		printf("两个数列的和为%lf\n", sum);
//		scanf("%d", &time);
//	}
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	int cout;
	while (scanf("%d", &cout) == 1)
	{
		double sum1 = 0;
		double sum2 = 0;
		int sign = 1;
		for (int i = 1; i <= cout; i++)
		{
			sum1 = sum1 + 1.0 / i;
			sum2 = sum2 + sign * 1.0 / i;
			sign = -sign;
		}
		printf("sum1= %lf, sum2=%lf \n", sum1, sum2);
	}
	return 0;
}


