/*Q2--打印文件中的字符及对应ASCII码*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;
	FILE* fp;
	char filename[50];
	int i = 0;

	printf("请输入文件名:\n");
	scanf("%s", filename);
	fp=fopen(filename, "r");
	if (fp == NULL)
	{
		printf("文件打开失败，退出程序\n");
		exit(1);
	}
	while ((ch = getc(fp)) != EOF)
	{
		i++;
		if (ch == '\n')
			printf("\\n - %d   ",ch);
		else if (ch == '\t')
			printf("\\t - %d   ",ch);
		else if (ch >= 32)
			printf("\'%c\' - %d   ", ch,ch);
		else
			printf("\'^%c\' - %d   ", ch + 64,ch);
		if (i % 10 == 0)
			printf("\n");
	}
	fclose(fp);
	return 0;
}
