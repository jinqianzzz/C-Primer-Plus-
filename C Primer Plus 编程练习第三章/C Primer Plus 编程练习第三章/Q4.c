/*Q4--读取浮点数并打印为不同形式*/
#include <stdio.h>
int main(void)
{
	float a;

	printf("Enter a floating-point value:");
	scanf("%f", &a);
	printf("fixed-point notation:%f\n", a);
	printf("exponential notation:%e\n", a);
	printf("p natation:%a", a);
	return 0;
}