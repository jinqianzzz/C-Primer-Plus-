/*µ¹Ðò´òÓ¡×Ö·û*/
#include <stdio.h>
int main(void)
{
	char arr[255] = { 0 };
	int i=0;
    do
    {
        scanf("%c", &arr[i]);
    } while (arr[i] != '\n' && ++i && i < 255);
    for (i--; i >= 0; i--)
    {
        printf("%c", arr[i]);
    }
   
	return 0;
}