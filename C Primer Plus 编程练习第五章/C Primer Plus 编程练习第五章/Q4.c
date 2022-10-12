/*Q4--将厘米转换为英尺和英尺*/
#include <stdio.h>
#define PER_INCH 2.54
#define PER_FOOT 30.48
int main(void)
{
	int feet = 0;
	float height = 0;
	float inches = 0;

	printf("Enter a height in centimeters;");
	scanf("%f",&height);
	while (height > 0)
	{
		feet = height / PER_FOOT;
		inches = (height - feet * PER_FOOT) / PER_INCH;
		printf(" %.1f cm = %d feet, %.1f inches\n", height, feet,inches );
		printf("Enter a height in centimeters (<=0 to quit):");
		scanf("%f", &height);
	}
	printf("bye\n");
	return 0;
}