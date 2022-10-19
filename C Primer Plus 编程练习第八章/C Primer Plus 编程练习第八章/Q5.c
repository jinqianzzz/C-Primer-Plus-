/*Q5--用二分查找让程序猜数字*/
#include <stdio.h>
int main(void)
{
	int i = 0;
	char response;
	int mid = 50;
	int left = 1;
	int right = 100;

	printf("请在1~100中选择一个数字，本程序会尝试猜测\n");
	printf("请输入y如果我的猜测正确\n");
	printf("请输入b如果我的数字比目标数字大\n");
	printf("请输入s如果我的数字比目标数字小\n");
	printf("你想要我猜的数字是%d\n",mid);
	while ((response=getchar()) != 'y')
	{
		if (response == 'b')
			right = mid;
	    else if(response == 's')
				left = mid;
		else
			printf("对不起请输入\'b\'或\'s\'或\'y\'来继续本程序\n");
		mid = (left + right) / 2;
		printf("你想要我猜的数字是%d\n", mid);
		while (getchar() != '\n')
			continue;
	}
	printf("本程序猜对了，速度超过了全国%%0.01的程序，开心。\n");
	return 0;
}