/*Q10--将十进制数字转换为指定的二~十进制的数字*/
#include <stdio.h>
void to_base_n(unsigned long x, int y)
{
	if (x < y)
		printf("%d",x);
	else
	{
		to_base_n(x / y,y);
		printf("%d", x % y);
	}
	
}
int main(void)
{
	unsigned long number;
	int base = 0;
	printf("请输入十进制数，并输入其转化后的进制(2~8)\n");
	printf("输入q来退出程序\n");
	while (scanf("%lu%d",&number,&base) == 2)
	{
		if (base < 2 || base>10)
		{
			printf("输入错误，请输入2~8的整数\n");
			continue;
		}
		to_base_n(number, base);
		printf("\n");
	}
	return 0;
}