/*Q7--��Ƴ��򱨸���ĸ����ĸ���е�λ��*/
#include <stdio.h>
int Alphabet_num(char x)
{
	if (x >= 'a' && x <= 'z')
		return x - 'a' + 1;
	else if (x >= 'A' && x <= 'Z')
		return x - 'A' + 1;
	else
		return -1;
}
int main(void)
{
	char ch;
	int num = 0;
	while ((ch = getchar()) != EOF)
	{
		while (getchar() != '\n')
		{
			continue;
		}
		if ((num = Alphabet_num(ch)) != -1)
			printf("����ĸ����ĸ���е���ֵλ��Ϊ%d\n", num);
		else
			printf("���������������ĸ\n");
	}
	return 0;
}