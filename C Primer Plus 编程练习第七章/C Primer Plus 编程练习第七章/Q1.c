/*Q1--统计输入的字符*/
#include <stdio.h>
int main(void)
{
	int space = 0;
	int enter = 0;
	int other = 0;
	char c;

	printf("现在开始进行输入，输入#则停止输入\n");
	while ((c = getchar()) != '#')
	{
		if (c ==' ')
		{
			space++;
		}
	    else if(c =='\n')
		{
			enter++;
		}
		else
		{
			other++;
		}
	}
	printf("读取空格数%d个\n读取换行符数%d个\n读取其他字符%d个\n", space, enter, other);
	return 0;
}
