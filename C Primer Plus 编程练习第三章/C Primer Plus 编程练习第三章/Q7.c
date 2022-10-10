/*Q7--将身高由英尺转换为厘米*/
#include <stdio.h>
#define PER_FOOT 2.54
int main(void)
{
	float height;
	printf("请输入身高（英尺）：");
	scanf("%f", &height);
	printf("你的身高以厘米显示为%f", height*PER_FOOT);
	return 0;
}