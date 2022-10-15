/*Q9--Q8基础上用函数返回结果*/
#include <stdio.h>
double Answer(double x, double y)
{
	return (x - y) / (x * y);
}
int main(void)
{
	float x, y;
	printf("Please enter the two float data(separated by blank):");
	while (scanf("%f %f", &x, &y) == 2)
	{
		printf("The answer is %f\n", Answer(x,y));
		printf("Please enter the two float data(separated by blank):");
	}
	printf("Program end!");
	return 0;
}