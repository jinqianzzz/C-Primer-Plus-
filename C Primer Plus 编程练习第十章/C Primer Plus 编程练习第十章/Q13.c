/*Q13--�������������һϵ������*/
#include <stdio.h>
void Storage(double* src1, double* src2, double* src3,double(* dst)[5])
{
	
	int i, j;
	for (i = 0; i < 5; i++)
	{
		dst[0][i] = src1[i];
		dst[1][i] = src2[i];
		dst[2][i] = src3[i];
	}
	printf("����arr4Ϊ\n");
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 5; i++)
		{
			printf("%lf ", dst[j][i]);
		}
		printf("\n");
	}
}

double Average(double* arr)
{
	double sum=0;
	for(int i=0;i<5;i++)
	{
		sum += arr[i];
	}
	return sum / 5;
}

double total_average(double(*arr)[5])
{
	double sum=0;
	int i = 0, j = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
			sum += arr[i][j];
	return sum / 15;
}

double Max(double(*arr)[5])
{
	int i = 0, j = 0,max=arr[0][0];
	for (i = 0; i < 3; i++)
		for (j = 0; j < 5; j++)
			if (arr[i][j] >= max)
				max = arr[i][j];
	return max;		
}

int main(void)
{
	double arr1[5] = { 0 };
	double arr2[5] = { 0 };
	double arr3[5] = { 0 };
	double arr4[3][5] = { 0 };
	int i = 0;
	printf("�������������֣�ÿ�������������\n");
	for (int i = 0; i < 5; i++)
	{
		scanf("%lf", &arr1[i]);
	}
	printf("���������һ������\n");
	for (int i = 0; i < 5; i++)
	{
		scanf("%lf", &arr2[i]);
	}
	printf("��������ڶ�������\n");
	for (int i = 0; i < 5; i++)
	{
		scanf("%lf", &arr3[i]);
	}
	printf("�����������������\n");
	Storage(arr1, arr2, arr3,arr4);
	for (i = 1; i <= 3; i++)
		printf("��%d���ƽ����Ϊ%lf\n", i, Average(arr4[i-1]));
	printf("�������ݵ�ƽ��ֵΪ%lf\n",total_average(arr4));
	printf("��15�������е����ֵΪ%lf\n", Max(arr4));
	return 0;
}