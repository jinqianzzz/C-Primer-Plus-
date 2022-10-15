/*Q2--Ç¶Ì×Ñ­»·´òÓ¡×Ö·û*/
#include <stdio.h>
int main(void)
{
	int line = 0;
	int row = 0;

	for (row = 0; row < 5; row++)
	{
		for (line = 0; line < row+1; line++)
		{
			printf("$");
		}
		printf("\n");
	}
	return 0;
}