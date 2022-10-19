/*Q6--编写get_first函数，使其返回下一个非空白字符*/
#include <stdio.h>
#include <ctype.h>
int get_first(void)
{
	int ch;

	do
	{
		ch = getchar();
	} while (isspace(ch));
		
	while (getchar() != '\n')
		continue;
	return ch;
}
int main(void)
{
	int ch;

	printf("Please enter some characters ('#' to quit):\n");
	while ((ch = get_first()) != '#')
	{
		printf("Result: %c\n", ch);
		printf("You can enter again ('#' to quit):\n");
	}
	printf("Done.\n");
	return 0;
}