/*Q4--�������뵥�ʵ�ƽ���ַ���*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
	char ch;
	long n_chars = 0L;//�ַ���
	int n_words = 0;//������
	bool inword = false;//���ch�ڵ����У�inword==true
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
			inword = true;//��ȡ���ʵĵ�һ���ַ���++����inword��Ϊ�棬���ټ���
			n_words++;
		}
		if (isspace(ch)&& inword)
			inword = false;//�ڵ��ʼ�Ŀո񣬽�inword��Ϊ�٣����Կ�ʼ��һ�ֵļ���
	}
	count = (float)n_chars / n_words;
	printf("ƽ�����ʵ��ַ���Ϊ%f", count);
	return 0;
}
