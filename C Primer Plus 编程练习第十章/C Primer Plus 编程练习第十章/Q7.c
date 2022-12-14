/*Q7--编写程序将二维数组拷贝到另一个二维数组中*/
#include <stdio.h>
void copy_arr(double* dst, double* src, int x)
{
	int i = 0;
	for (i = 0; i < x; i++)
		dst[i] = src[i];
}
int main(void)
{
	double arr1[5][12] =
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};
	double arr2[5][12] = { 0 };
	for (int i = 0; i < 5; i++)
	{
		copy_arr(*(arr2 + i), *(arr1 + i), 12);
		for (int j = 0; j < 12; j++)
			printf("%lf ", arr2[i][j]);
		printf("\n");
	}

	return 0;
}