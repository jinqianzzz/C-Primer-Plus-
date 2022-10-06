/*Q4--调用两个函数打印*/
#include <stdio.h>
void jolly(void)
{
	printf("For he's a jolly good fellow!\n");
}
void deny(void)
{
	printf("Which nobody can deny!\n");
}
int main(void)
{
	int i = 0;
	for (i = 0; i <= 2;i++)
	{
		jolly();
	}
	deny();
	return 0;
}