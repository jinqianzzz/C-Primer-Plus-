/*Q5--年龄转换微秒数*/
#include <stdio.h>
#define SEC_PER_YEAR 3.156e+7
int main(void)
{
	float age;

	printf("请输入你的年龄：");
	scanf("%f", &age);
	printf("该年龄对应的秒数为%e\n", age * SEC_PER_YEAR);
	return 0;
}