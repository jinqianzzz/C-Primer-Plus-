/*Q6--名姓字母数与名姓对齐*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char surname[10] = { 0 };
	char name[10] = { 10 };

	printf("请输入名\n");
	scanf("%s", name);
	printf("请输入姓\n");
	scanf("%s", surname);
	printf("%s %s\n", name, surname);
	printf("%*d %*d\n", strlen(name), strlen(name), strlen(surname), strlen(surname));
	printf("%s %s\n", name, surname);
	printf("%-*d %-*d\n", strlen(name), strlen(name), strlen(surname), strlen(surname));
	return 0;
}