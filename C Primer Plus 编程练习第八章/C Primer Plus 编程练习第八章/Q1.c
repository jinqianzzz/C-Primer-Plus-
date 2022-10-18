/*Q1--统计读到文件结尾之前读取的字符数*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;
	int num = 0;
	FILE* fp;
	char fname[50];

	printf("请输入文件名:");
	scanf("%s", fname);
	fp = fopen(fname, "r");
	if (fp == NULL)
	{
		printf("打开失败，程序退出。\n");
		exit(1);
	}
	while ((ch = getc(fp)) != EOF)
	{
		num++;
	}
	printf("该文件有%d个字符\n",num);
	fclose(fp);
	return 0;
}