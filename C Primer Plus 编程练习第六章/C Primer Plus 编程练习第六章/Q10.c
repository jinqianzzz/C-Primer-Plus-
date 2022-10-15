/*Q10--打印下限整数与上限整数间所有整数的平方之和*/
#include <stdio.h>
int main(void)
{
	int max = 0;
	int min = 0;
	int sum=0;
	int i = 0;


	printf("Enter lower and upper interger limits :\n");
	scanf("%d %d", &min,&max);
	while (min < max)
	{
		for (i = min,sum=0; i <= max; i++)
		{
			sum += i * i;
		}
		printf("The sums of the squares from %d to %d is %d\n", min * min, max * max, sum);
		printf("Enter next set of limits:\n");
		scanf("%d %d", &min, &max);
	}
	return 0;
}