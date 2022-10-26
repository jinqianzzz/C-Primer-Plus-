//#include <stdio.h>
//#define MONTHS 12
//#define YEARS 5
//float Avenages(const float nums[][12],int i_max)
//{
//	int i,j;
//	float subtot, total;
// 	for ( i = 0, total = 0; i < 5; i++)
//	{
//		for (j = 0, subtot = 0; j < 12; j++)
//		{
//			subtot += *(*(nums + i) + j);
//			if (i_max == MONTHS)
//				printf("%4.1f ", subtot / YEARS);
//		}
//		if (i_max == MONTHS)
//		printf("\n");
//			if (i_max == YEARS)
//			{
//				printf("%5d %15.1f\n", 2010 + i, subtot);
//				total += subtot;
//			}
//			
//	}
//	return total;
//}
//int main(void)
//{
//    const float rain[YEARS][MONTHS] =
//	{
//		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
//		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
//		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
//		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
//		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
//	};
//	float total;
//	printf(" YEAR          RAINFALL   (inches)\n");
//	total=Avenages(rain, YEARS);
//	printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
//	printf("MONTHLY AVERAGES:\n\n");
//	printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct ");
//	printf(" Nov  Dec\n");
//	Avenages(rain, MONTHS);
//	printf("\n");
//	return 0;
//}
#include <stdio.h>
#define MONTHS 12
#define YEARS 5

void rainfall_total(const float(*rain)[MONTHS], int years);
void rainfall_aver(const float(*rain)[MONTHS], int years);

int main(void)
{
    const float rain[YEARS][MONTHS] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2},
    };

    rainfall_total(rain, YEARS);
    rainfall_aver(rain, YEARS);

    return 0;
}

void rainfall_total(const float(*rain)[MONTHS], int years)
{
    int year, month;
    float subtot, total;

    printf("YEAR     RAINFALL  (inches)\n");
    for (year = 0, total = 0; year < years; year++)
    {
        for (month = 0, subtot = 0; month < MONTHS; month++)
        {
            subtot += rain[year][month];
        }
        printf("%5d %15.1lf\n", 2010 + year, subtot);
        total += subtot;
    }
    printf("\nThe yearly average is %.1f inches.\n\n", total / years);
}

void rainfall_aver(const float(*rain)[MONTHS], int years)
{
    float subtot;
    int month, year;

    printf("MONTHLY AVERAGES:\n\n");
    printf(" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  ");
    printf(" Nov  Dec\n");
    for (month = 0; month < MONTHS; month++)
    {
        for (year = 0, subtot = 0; year < years; year++)
        {
            subtot += rain[year][month];
        }
        printf("%4.1f ", subtot / years);
    }
    putchar('\n');
}
