/*Q11-用循环代替递归计算斐波那契数列*/
#include <stdio.h>
void Fibonacci(int i)
{
	unsigned long x,y,z;
	x = y = 1;
	int j = 0;

	for (j = 0; j < i; j++)
	{
		printf("%lu		", x);
		z = x + y;//通过x，y，z的相对位置来求出斐波那契数列
		x = y;
		y = z;
	}
}
int main(void)
{
	int i = 0;

	printf("请输入显示到斐波那契数列的第几位\n");
	printf("输入q退出程序\n");
	while (scanf("%d", &i) == 1)
	{
		Fibonacci(i);
		printf("请再次输入或输入q退出程序\n");
	}
	printf("bye\n");
	return 0;
}