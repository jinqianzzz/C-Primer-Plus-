/*Q2--打印姓名和地址*/
#include <stdio.h>
int main(void)
{
	char name[10], address[50];
	printf("请输入你的名字\n");
	scanf("%s", name);
	printf("请输入你的地址\n");
	scanf("%s", address);
	printf("%s\n", name);
	printf("%s\n", address);
	return 0;
}