/*Q3--无闰年年龄转换为天数*/
#include <stdio.h>
int main(void)
{
	int age;
	printf("请输入你的年龄\n");
	scanf("%d", &age);
	printf("你的年龄为%d,你的天数为%d",age,age*365);
	return 0;
}