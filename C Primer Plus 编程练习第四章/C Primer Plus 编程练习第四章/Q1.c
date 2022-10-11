/*Q1--以特定格式打印姓名*/
#include <stdio.h>
int main(void)
{
	char surname[10];
	char name[10];

	printf("请输入你的姓（surname）\n");
	scanf("%s", surname);
	printf("接下来请输入你的名（name）\n");
	scanf("%s",name);
	printf("%s,%s", name, surname);
	return 0;
}