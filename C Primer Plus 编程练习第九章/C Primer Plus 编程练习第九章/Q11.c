/*Q11-��ѭ������ݹ����쳲���������*/
#include <stdio.h>
void Fibonacci(int i)
{
	unsigned long x,y,z;
	x = y = 1;
	int j = 0;

	for (j = 0; j < i; j++)
	{
		printf("%lu		", x);
		z = x + y;//ͨ��x��y��z�����λ�������쳲���������
		x = y;
		y = z;
	}
}
int main(void)
{
	int i = 0;

	printf("��������ʾ��쳲��������еĵڼ�λ\n");
	printf("����q�˳�����\n");
	while (scanf("%d", &i) == 1)
	{
		Fibonacci(i);
		printf("���ٴ����������q�˳�����\n");
	}
	printf("bye\n");
	return 0;
}