/*Q8--ÇóÄ£ÔËËã*/
#include <stdio.h>
int main(void)
{
	int fir_ope = 0;
	int sec_ope = 0;

	printf("This program computes moduil.\n");
	printf("Enter an integer to serve as the second operand:\n");
	scanf("%d", &sec_ope);
	printf("Now enter the first operand:\n");
	scanf("%d", &fir_ope);
	while (fir_ope>0)
	{
		printf("%d %% %d is %d\n", fir_ope, sec_ope, fir_ope % sec_ope); 
		printf("Enter next number for first operand (<=0 to quit ):\n");
		scanf("%d", &fir_ope);
	}
	return 0;
}