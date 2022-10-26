/*Q9--将一个二维数组赋值到另一个二维数组*/
#include <stdio.h>
void copy_arr(double dst[5][3], double src[5][3], int n, int m)
{
	int i = 0, j = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			dst[i][j] = src[i][j];
		}
	}
	return;
}
void Print(double nums[5][3], int n,int m)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%7.2lf", nums[i][j]);
		}
		putchar('\n');
	}
	return;
}
int main(void)
{
	double arr1[5][3] =
	{
		{1.1,2.2,3.3},
		{4.4,5.5,6.6},
		{7.7,8.8,9.9},
		{10.10,11.11,12.12},
		{13.13,14.14,15.15}
	};
	double arr2[5][3] = { 0 };
	printf("arr1:\n");
	Print(arr1, 5, 3);
	printf("arr2:\n");
	Print(arr2, 5, 3);
	copy_arr(arr2, arr1, 5, 3);
	printf("经复制后\n");
	printf("arr1:\n");
	Print(arr1, 5, 3);
	printf("arr2:\n");
	Print(arr2, 5, 3);
return 0;
}

//#include <stdio.h>
//#define N 3
//#define M 5
//
//void show_array(int n, int m, const double x[n][m]);
//void copy_array(int n, int m, const double a[n][m], double b[n][m]);
//
//int main(void)
//{
//	const double a[N][M] =
//	{
//		{1.0,2.0,3.0,4.0,5.0},
//		{6.0,7.0,8.0,9.0,10.0},
//		{11.0,12.0,13.0,14.0,15.0}
//	};
//	double b[N][M] = { 0.0 };
//
//	printf("Array a:\n");
//	show_array(N, M, a);
//	printf("Array b:\n");
//	show_array(N, M, b);
//	copy_array(N, M, a, b);
//	printf("Copy array a to array b:\n");
//	show_array(N, M, b);
//
//	return 0;
//}
//
//void show_array(int n, int m, const double x[n][m])
//{
//	int i, j;
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%-5g", x[i][j]);
//		}
//		putchar('\n');
//	}
//	return;
//}
//
//void copy_array(int n, int m, const double a[n][m], double b[n][m])
//{
//	int i, j;
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			b[i][j] = a[i][j];
//		}
//	}
//	return;
//}
