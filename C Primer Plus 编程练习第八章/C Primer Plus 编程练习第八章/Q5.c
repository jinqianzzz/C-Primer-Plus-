/*Q5--�ö��ֲ����ó��������*/
#include <stdio.h>
int main(void)
{
	int i = 0;
	char response;
	int mid = 50;
	int left = 1;
	int right = 100;

	printf("����1~100��ѡ��һ�����֣�������᳢�Բ²�\n");
	printf("������y����ҵĲ²���ȷ\n");
	printf("������b����ҵ����ֱ�Ŀ�����ִ�\n");
	printf("������s����ҵ����ֱ�Ŀ������С\n");
	printf("����Ҫ�Ҳµ�������%d\n",mid);
	while ((response=getchar()) != 'y')
	{
		if (response == 'b')
			right = mid;
	    else if(response == 's')
				left = mid;
		else
			printf("�Բ���������\'b\'��\'s\'��\'y\'������������\n");
		mid = (left + right) / 2;
		printf("����Ҫ�Ҳµ�������%d\n", mid);
		while (getchar() != '\n')
			continue;
	}
	printf("������¶��ˣ��ٶȳ�����ȫ��%%0.01�ĳ��򣬿��ġ�\n");
	return 0;
}