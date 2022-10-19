/*Q4--计算输入单词的平均字符数*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	char ch;
	long n_chars = 0L;//字符数
	int n_words = 0;//单词数
	bool inword = false;//如果ch在单词中，inword==true
	float count = 0;


	while ((ch = getchar()) != EOF)
	{
		if (ispunct(ch))
		{
			continue;
		}
		if (isalpha(ch))
		{
			n_chars++;
		}
		if (!isspace(ch) && !inword)
		{
			inword = true;//读取单词的第一个字符，++，将inword改为真，不再计数
			n_words++;
		}
		if (isspace(ch)&& inword)
			inword = false;//在单词间的空格，将inword改为假，可以开始新一轮的计数
	}
	count = (float)n_chars / n_words;
	printf("平均单词的字符数为%f", count);
	return 0;
}
