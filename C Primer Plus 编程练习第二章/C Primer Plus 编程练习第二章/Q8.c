/*Q8--µ÷ÓÃº¯Êý*/
#include <stdio.h>
void two(void)
{
	printf("three\n");
}
void one_three(void)
{
	printf("one\n");
	two();
}

int main(void)
{
	printf("starting now:\n");
	one_three();
	printf("done!");
	return 0;

}