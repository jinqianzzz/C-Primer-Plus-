/*Q2--用数组表示法和指针表示法来拷贝数组的内容*/
#include <stdio.h>
void copy_arr(double* dst, double* src, int x)
{
	int i = 0;
	for (i = 0; i < x; i++)
		dst[i] = src[i];
}
void copy_ptr(double* dst, double* src, int x)
{
	int i = 0;
	for (i = 0; i < x; i++)
		*(dst+i) = *(src + i);
}
void copy_ptrs(double* dst, double* src, double* end)
{
	int i = 0;
	while (src != end)
	{
		*(dst + i) = *src;
		src++;
		i++;
	}

}
int main(void)
{
	double source[5] = { 1.1,2.2,3.3,4.4,5.5 };
	double target1[5];
	double target2[5];
	double target3[5];
	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);
	copy_ptrs(target3, source, source+5);
	return 0;
}

