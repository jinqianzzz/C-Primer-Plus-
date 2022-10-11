/*Q4--打印名字与身高*/
#include <stdio.h>
int main(void)
{
	char name[20] = { 0 };
	float height = 0;

	printf("请输入你的姓名\n");
	scanf("%s", name);
	printf("请输入你的身高（cm）\n");
	scanf("%f", &height);
	printf("%s,you are %f metre tall \n", name, height / 100);
	return 0;
}