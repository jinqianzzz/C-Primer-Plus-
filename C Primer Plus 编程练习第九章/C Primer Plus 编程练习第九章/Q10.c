/*Q10--��ʮ��������ת��Ϊָ���Ķ�~ʮ���Ƶ�����*/
#include <stdio.h>
void to_base_n(unsigned long x, int y)
{
	if (x < y)
		printf("%d",x);
	else
	{
		to_base_n(x / y,y);
		printf("%d", x % y);
	}
	
}
int main(void)
{
	unsigned long number;
	int base = 0;
	printf("������ʮ����������������ת����Ľ���(2~8)\n");
	printf("����q���˳�����\n");
	while (scanf("%lu%d",&number,&base) == 2)
	{
		if (base < 2 || base>10)
		{
			printf("�������������2~8������\n");
			continue;
		}
		to_base_n(number, base);
		printf("\n");
	}
	return 0;
}