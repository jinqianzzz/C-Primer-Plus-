/*Q1--将分钟表示的时间转换为分钟和时钟表示的时间*/
#include <stdio.h>
#define PER_HOUR 60
int main(void)
{
	int time = 0;
	printf("请输入时间/min\n");
	scanf("%d", &time);
	while (time > 0)
	{
		printf("你输入的时间是%dh%dmin\n", time / PER_HOUR, time % PER_HOUR);
		printf("请输入时间，或输入非0数结束程序\n");
		scanf("%d", &time);
	}
	return 0;
}
