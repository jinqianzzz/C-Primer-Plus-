/*Q4--对输入的字符进行替换*/
#include <stdio.h>
int main(void)
{
	char ch;
	int i = 0;

	printf("请输入字符（输入#停止程序）\n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			putchar('!');
			i++;
		}
		else if (ch =='!')
		{
			printf("!!");//注意此处有两个字符,用printf函数
			i++;
		}
		else
			putchar(ch);
	}
	printf("一共进行了%d次替换\n", i);
	return 0;
}