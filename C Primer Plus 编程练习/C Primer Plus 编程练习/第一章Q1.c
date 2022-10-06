/*第一章Q1--英尺到厘米的转换*/
#include <stdio.h>
int main(void)
{
	float in;

	printf("进行英尺到厘米的转换\n");
	printf("请输入将要进行转换的英尺数\n");
	scanf("%f", &in);
	printf("转换为%fcm", 2.54 * in);
	return 0;
}