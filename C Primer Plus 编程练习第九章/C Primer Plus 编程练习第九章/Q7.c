/*Q7--设计程序报告字母在字母表中的位置*/
#include <stdio.h>
int Alphabet_num(char x)
{
	if (x >= 'a' && x <= 'z')
		return x - 'a' + 1;
	else if (x >= 'A' && x <= 'Z')
		return x - 'A' + 1;
	else
		return -1;
}
int main(void)
{
	char ch;
	int num = 0;
	while ((ch = getchar()) != EOF)
	{
		while (getchar() != '\n')
		{
			continue;
		}
		if ((num = Alphabet_num(ch)) != -1)
			printf("该字母在字母表中的数值位置为%d\n", num);
		else
			printf("输入错误，请输入字母\n");
	}
	return 0;
}