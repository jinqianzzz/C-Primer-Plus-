/*Q9--显示所有小于输入数的素数*/
#include <stdio.h>
int main(void)
{
	int num = 0;
	int i = 0;
	int j = 0;
	int k = 1;

	printf("请输入正整数(输入0退出）\n");
    while ((scanf("%d", &num) == 1) && (num > 0))
	{
		for (i = 2; i <= num; i++)//比输入数小的除1以外的数逐一测试是否为素数
		{
			k = 0;
			for (j = 2; j *j<=i; j++)
			{
                if (i % j == 0)
                {
                    k=1;
                    break;
                }
			}
			if (k==0)
				printf("%d   ", i);
		}
	}
	return 0;
}


