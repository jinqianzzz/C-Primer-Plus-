/*Q3--ͳ�������ַ��д�д��ĸ��Сд��ĸ�ĸ���*/
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
	printf("��д��ĸ�ĸ�����%d\nСд��ĸ�ĸ���:%d\n",upp, low);
	return 0;
}