/*Q7--¥Ú”°Œ¢–¶*/
#include <stdio.h>
void Smile(void)
{
	printf("Smile!");
}
int main(void)
{
	int i;
	for (i = 0; i <= 2; i++)
	{
		Smile();
	}
	printf("\n");
	for (i = 0; i <= 1; i++)
	{
		Smile();
	}
	printf("\n");
	Smile();
	return 0;
}
