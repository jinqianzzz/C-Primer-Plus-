/*Q1--ͳ�ƶ����ļ���β֮ǰ��ȡ���ַ���*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char ch;
	int num = 0;
	FILE* fp;
	char fname[50];

	printf("�������ļ���:");
	scanf("%s", fname);
	fp = fopen(fname, "r");
	if (fp == NULL)
	{
		printf("��ʧ�ܣ������˳���\n");
		exit(1);
	}
	while ((ch = getc(fp)) != EOF)
	{
		num++;
	}
	printf("���ļ���%d���ַ�\n",num);
	fclose(fp);
	return 0;
}