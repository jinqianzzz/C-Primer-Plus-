/*Q2/3--���һ����ӡָ���ַ�i��j�еĺ���*/
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
	printf("������Ҫ��ӡ���ַ�\n");
	ch = getchar();
	while (getchar() != '\n')
		continue;
	printf("������Ҫ��ӡ������\n");
	scanf("%d", &i);
	printf("������Ҫ��ӡ������\n");
	scanf("%d", &j);
	chline(ch, i, j);
	return 0;
}