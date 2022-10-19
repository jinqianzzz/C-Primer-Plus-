/*Q8--��ʾһ�������ṩ�Ӽ��˳��Ĳ˵�*/
#include <stdio.h>
#include <ctype.h>
char get_choice(void);
char get_first(void);//��ȡ����ĵ�һ���ǿհ��ַ��ĺ���
float get_float(void);
float Add(void);
float Subtract(void);
float Multiply(void);
float Divide(void);
int main(void)
{
	int choice;//getchar����int���͵�����
	float answer = 0;

	while ((choice = get_choice())!='q')
	{
		switch (choice)
		{
		case'a':answer = Add();
			break;
		case's':answer = Subtract();
			break;
		case'm':answer = Multiply();
			break;
		case'd':answer = Divide();
			break;
		default:printf("�����������������\n");
			continue;
		}
		printf("����Ľ����%f", answer);
	}
	printf("Bye\n");
	return 0;
}
char get_choice()
{
	int ch;

	printf("Enter the operation of your choice:\n");
	printf("a.add				s.subtract\n");
	printf("m.multiply			d.divide\n ");
	printf("q.quit\n");
	ch = get_first();
	while (ch != 'a' && ch != 's' && ch != 'm' && ch != 'd' && ch != 'q')
	{
		printf("����\'a\',\'s\',\'m\',\'d\',\'q\'���������\n");
			ch = get_first;
	}
	return ch;
}
char get_first(void)
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
float get_float(void)
{
	float input=0;
	char ch;

	while (scanf("%f",&input) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);//����������
		printf("%f ����һ��������\n",input);
		printf("������һ����������������2.5,-1.78E8,����3:");
	}
	return input;
}
float Add(void)
{
	float fir, sec;
	printf("�������һ������\n");
	fir = get_float();
	printf("������ڶ�������\n");
	sec = get_float();
	return fir + sec;
}
float Subtract(void)
{
	float fir, sec;
	printf("�������һ������\n");
	fir = get_float();
	printf("������ڶ�������\n");
	sec = get_float();
	return fir - sec;
}
float Multiply(void)
{
	float fir, sec;
	printf("�������һ������\n");
	fir = get_float();
	printf("������ڶ�������\n");
	sec = get_float();
	return fir * sec;
}
float Divide(void)
{
	float fir, sec;
	printf("�������һ������\n");
	fir = get_float();
	printf("������ڶ�������\n");
	do
	{
		sec = get_float();
		if (sec == 0)
			printf("�������0���������\n");
	} while (sec == 0);
	return fir / sec;
}