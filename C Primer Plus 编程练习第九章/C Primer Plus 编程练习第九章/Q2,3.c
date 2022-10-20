/*Q2/3--设计一个打印指定字符i行j列的函数*/
#include <stdio.h>
void chline(char ch, int row, int column)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < column; j++)
			printf("%c", ch);
		printf("\n");
	}
}
int main(void)
{
	char ch;
	int i, j;
	printf("请输入要打印的字符\n");
	ch = getchar();
	while (getchar() != '\n')
		continue;
	printf("请输入要打印的行数\n");
	scanf("%d", &i);
	printf("请输入要打印的列数\n");
	scanf("%d", &j);
	chline(ch, i, j);
	return 0;
}