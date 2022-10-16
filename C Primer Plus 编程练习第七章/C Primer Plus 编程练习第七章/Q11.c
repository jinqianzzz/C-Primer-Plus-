/*Q11--购买蔬菜小程序*/
#include <stdio.h>
#define Price_artichokes 2.05
#define Price_beet 1.15
#define Price_carrot 1.09
#define Discount 0.05
#define Shipping_and_packaging_charges_fir 6.5
#define Shipping_and_packaging_charges_sec 14
#define Per_shipping_and_packaging_charges_thi 0.5 


int main(void)
{
	int artichokes = 0;
	int beet = 0;
	int carrot = 0;
	int choice = 0;
	int num = 0;
	int total_num = 0;
	float total_cost_vegetables = 0;
	float total_orders = 0;
	float total_cost = 0;
	float discount = 0;
	float shipping_and_packaging_charges = 0;
	while (1)
	{
		printf("*****************************************************************\n");
		printf("以下是出售的杂货种类:\n");
		printf("1) 洋蓟                               2) 甜菜\n");
		printf("3) 胡萝卜                             4) over\n");
		printf("5)quit\n");
		printf("*****************************************************************\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("请输入购买的磅数\n");
			scanf("%d", &num);
			artichokes += num;
			continue;
		case 2:
			printf("请输入购买的磅数\n");
			scanf("%d", &num);
			beet += num;
			continue;
		case 3:
			printf("请输入购买的磅数\n");
			scanf("%d", &num);
			carrot += num;
			continue;
		case 4:break;
		case 5:return 0;
		default:printf("输入错误，请重新输入\n");
			continue;
		}
		total_num = artichokes + beet + carrot;
		total_cost_vegetables = artichokes * Price_artichokes + beet * Price_beet + carrot * Price_carrot;
		if (total_cost_vegetables > 100)
		{
			discount = total_cost_vegetables * Discount;
		}
		total_orders = total_cost_vegetables - discount;
		if (total_num <= 5)
			shipping_and_packaging_charges = Shipping_and_packaging_charges_fir;
		else if (total_num > 5 && total_num <= 20)
			shipping_and_packaging_charges = Shipping_and_packaging_charges_sec;
		else
			shipping_and_packaging_charges = Shipping_and_packaging_charges_sec + (total_num - 20) * Per_shipping_and_packaging_charges_thi;
		total_cost = total_cost_vegetables - discount + shipping_and_packaging_charges;
		printf("订购洋蓟的重量为%d磅\n", artichokes);
		printf("订购甜菜的重量为%d磅\n", beet);
		printf("订购胡萝卜的重量为%d磅\n", carrot);
		printf("订购的蔬菜费用为%f美元\n", total_cost_vegetables);
		printf("订单的总费用%f美元\n", total_orders);
		printf("折扣为%f美元\n", discount);
		printf("运费和包装费为%f美元\n", shipping_and_packaging_charges);
		printf("所有的总费用%f美元\n", total_cost);
	}
}