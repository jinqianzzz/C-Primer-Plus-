/*Q2--以不同形式打印姓名*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char name[20] = {0};

	printf("请输入你的名字\n");
	scanf("%s", name);
	printf("\"%s\"\n", name);
	printf("********************\n");
	printf("\"%18s\"\n", name);
	printf("\"%-18s\"\n", name);
	printf("%*s", strlen(name) + 3, name);
	return 0;
}