#include <stdio.h>
void Print(int nums[][5])//第二种传参形式：void Print(int(* nums)[5])
{
	for (int i = 0; i < 3; i++)
	{
		for(int j=0;j<5;j++)
		printf("%d ", nums[i][j]);
		printf("\n");
	}
	printf("\n");
}
void Double_array(int(* nums)[5])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
			nums[i][j] = nums[i][j] * 2;
	}
}
int main(void)
{
	int arr[3][5] = {
	{1,2,3,4,5},
	{6,7,8,9,10},
	{11,22,33,44,55}
	};
	Print(arr);
	Double_array(arr);
	Print(arr);
	return 0;
}