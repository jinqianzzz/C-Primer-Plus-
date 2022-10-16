/*Q6--统计输入的语句中ei出现的次数*/
#include <stdio.h>
int main(void)
{
	int i = 0;
	int j = 0;
	char ch;

	while ((ch = getchar()) != '#')
	{
		if (ch == 'e')
		{
			i++;
		}
		else if (i == 1)
		{
			if (ch == 'i')
			{
				j++;
			}
			i = 0;
		}
	}
	printf("ei出现%d次\n", j);
	return 0;
}

