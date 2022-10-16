/*求输入奇数和偶数的个数及其平均值*/
#include <stdio.h>
int main(void)
{
	int ch;
	int i = 0;
	int j = 0;
	double sum_i = 0;
	double sum_j = 0;

	printf("请输入0以外的整数（输入0停止程序）\n");
	while (1== scanf("%d",&ch)&&(ch != 0))
	{
		if (ch % 2 == 0)
		{
			i++;
			sum_i += ch;
		}
		else
		{
			j++;
			sum_j += ch;
		}
	}
	if(i>0)
	printf("输入%d个偶数，平均值为%lf\n", i, sum_i / i);
	if(j>0)
	printf("输入%d个奇数，平均值为%lf\n", j, sum_j / j);
	return 0;
}