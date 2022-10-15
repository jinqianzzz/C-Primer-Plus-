/*Q8--两数之差除以两数乘积*/
#include <stdio.h>
int main(void)
{
	float a = 0;
	float b = 0;
	int ch=1;
	int i, j;

	printf("本程序用于计算两数之差除以两数乘积的结果\n");
	printf("请输入两个浮点数");
	scanf("%f", &a);
	scanf("%f", &b);
	while(ch)
	{
		printf("其结果为%f\n", (a - b) / (a * b));
		printf("请继续输入浮点数（输入q退出）\n");
		i=scanf("%f", &a);
		j=scanf("%f", &b);
		ch = i || j;
	}	
	return 0;
}

//标答
//int main(void)
//{
//	float x, y;
//	printf("Please enter the two float data(separated by blank):");
//	while (scanf("%f %f", &x, &y) == 2)
//	{
//		printf("The answer is %f\n", (x - y) / (x * y));
//		printf("Please enter the two float data(separated by blank):");
//	}
//	printf("Program end!");
//	return 0;
//}
