/*Q2--��ӡ�ļ��е��ַ�����ӦASCII��*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;
	FILE* fp;
	char filename[50];
	int i = 0;

	printf("�������ļ���:\n");
	scanf("%s", filename);
	fp=fopen(filename, "r");
	if (fp == NULL)
	{
		printf("�ļ���ʧ�ܣ��˳�����\n");
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
