/*Q1--创建含有26个小写字母的数组并打印*/
#include <stdio.h>
//int main(void)
//{
//	char arr[26];
//	int i = 0;
//	char target=0;
//
//	for (i=0,target='a'; i < 26; i++, target++)
//	{
//		arr[i] = target;
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}
int main(void)
{
	char arr[26];
	int i = 0;

	for (i=0; i < 26; i++)
	{
		arr[i] = 'a'+i;
		printf("%c ", arr[i]);
	}
	return 0;
}