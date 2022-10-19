/*Q3--统计输入字符中大写字母和小写字母的个数*/
#include <stdio.h>
int main(void)
{
	char ch;
	int upp = 0;
	int low = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch >= 65 && ch <= 90)
		{
			upp++;
		}
		if (ch >= 97 && ch <= 122)
		{
			low++;
		}
	}
	printf("大写字母的个数：%d\n小写字母的个数:%d\n",upp, low);
	return 0;
}