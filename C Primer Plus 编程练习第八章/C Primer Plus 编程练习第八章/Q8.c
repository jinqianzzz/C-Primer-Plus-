/*Q8--显示一个可以提供加减乘除的菜单*/
#include <stdio.h>
#include <ctype.h>
char get_choice(void);
char get_first(void);//获取输入的第一个非空白字符的函数
float get_float(void);
float Add(void);
float Subtract(void);
float Multiply(void);
float Divide(void);
int main(void)
{
	int choice;//getchar返回int类型的数据
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
		default:printf("程序出错，请重新输入\n");
			continue;
		}
		printf("计算的结果是%f", answer);
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
		printf("请在\'a\',\'s\',\'m\',\'d\',\'q\'间进行输入\n");
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
			putchar(ch);//处理错误输出
		printf("%f 不是一个浮点数\n",input);
		printf("请输入一个浮点数，类似于2.5,-1.78E8,或者3:");
	}
	return input;
}
float Add(void)
{
	float fir, sec;
	printf("请输入第一个数字\n");
	fir = get_float();
	printf("请输入第二个数字\n");
	sec = get_float();
	return fir + sec;
}
float Subtract(void)
{
	float fir, sec;
	printf("请输入第一个数字\n");
	fir = get_float();
	printf("请输入第二个数字\n");
	sec = get_float();
	return fir - sec;
}
float Multiply(void)
{
	float fir, sec;
	printf("请输入第一个数字\n");
	fir = get_float();
	printf("请输入第二个数字\n");
	sec = get_float();
	return fir * sec;
}
float Divide(void)
{
	float fir, sec;
	printf("请输入第一个数字\n");
	fir = get_float();
	printf("请输入第二个数字\n");
	do
	{
		sec = get_float();
		if (sec == 0)
			printf("请输入除0以外的数字\n");
	} while (sec == 0);
	return fir / sec;
}