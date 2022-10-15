/*Q17--计算取光银行内奖金的时间*/
#include <stdio.h>
#define annual_interest_rate 0.08
int main(void)
{
	double rest = 100;
	int i = 0;

 do
    {
    i++;
    rest += rest * annual_interest_rate;
    rest -= 10;
    } while (rest > 9);
   // 若余额低于9则不够下一年支取;
	printf("%d年后取光钱\n",++i);//注意此处i要+1
	return 0;
}


