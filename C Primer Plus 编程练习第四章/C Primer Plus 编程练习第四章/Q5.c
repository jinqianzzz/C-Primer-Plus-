/*Q5--计算文件下载时间*/
#include <stdio.h>
int main(void)
{
	float speed=0;
	float size=0;

	printf("请输入文件的下载速度（Mb/s）\n");
	scanf("%f", &speed);
	printf("请输入文件大小\n");
	scanf("%f", &size);
	printf("At %.2f megabits per second ,a file of %.2f megabytes\n", speed, size);
	printf("downloads in %.2f seconds", size * 8 / speed);
	return 0;

}