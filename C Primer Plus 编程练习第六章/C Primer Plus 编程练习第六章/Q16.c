/*Q16--计算复利超过单利的时间*/
#include <stdio.h>
#define Dan_li 0.1
#define Fu_li 0.05
int main(void)
{
	int i = 0;
	double mon_Dap =100;
	double mon_Dei =100;

	for (i = 0; mon_Dei <= mon_Dap; i++)
	{
		mon_Dap += 100 * Dan_li;
		mon_Dei += mon_Dei * Fu_li;
	}
	printf("需要%d年，Deirdre的投资额超过Daphne\n", i);
	printf("此时，Deirdre：%lf   Daphne:%lf", mon_Dei, mon_Dap);
	
	return 0;
}

