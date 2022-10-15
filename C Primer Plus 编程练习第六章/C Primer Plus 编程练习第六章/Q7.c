/*Q7--倒序打印单词*/
#include <stdio.h>
int main(void)
{
	int i = 0;
	char arr[20] = { 0 };

	printf("请输入一个单词\n");
	scanf("%s", arr);
	for (i = strlen(arr); i>0; i--)
	{
		printf("%c", arr[i-1]);
	}

	return 0;
}