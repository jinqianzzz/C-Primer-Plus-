/*Q2--打印字符及对应的ASCII码*/
#include <stdio.h>
int main(void)
{
	char c;
	int i = 0;

	while ((c = getchar()) != '#')
	{
		if(i % 8 == 0&&i!=0)
			printf("\n");
		if (c == '\n')
		{
			printf("'\\n'-%3d ", c);
		}
		else
			printf("%c-%3d  ", c, c);
		i++;
	}
	return 0;
}