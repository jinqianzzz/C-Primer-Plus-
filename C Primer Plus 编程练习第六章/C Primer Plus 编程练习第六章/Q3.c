/*Q3--Ç¶Ì×Ñ­»·´òÓ¡×ÖÄ¸*/
//#include <stdio.h>
//int main(void)
//{
//	int row = 0;
//	int line = 0;
//	char target =0;
//
//	for (row = 0; row < 6; row++)
//	{
//		for (line = 0, target = 'F'; line < row + 1; line++, target--)
//		{
//			printf("%c", target);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
#include <stdio.h>
#define N 6

int main(void)
{
    int i, j;

    for (i = 1; i <= N; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%c", 'F' - j);
        }
        printf("\n");
    }

    return 0;
}
