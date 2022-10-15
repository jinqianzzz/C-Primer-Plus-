/*Q4--Ç¶Ì×Ñ­»·´òÓ¡×ÖÄ¸2*/
#include <stdio.h>
int main(void)
{
	int row = 0;
	int line = 0;
	char target='A';

	for (row = 0; row < 6; row++)
	{
		for (line = 0; line < row + 1; line++,target++)
		{
			printf("%c", target);
		}
		printf("\n");
	}
	return 0;
}