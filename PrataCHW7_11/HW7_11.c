#include <stdio.h>

#define ARTICHOKES 2.05
#define BEETS 1.15
#define CARROTS 1.09
#define DISCOUNT 0.05
#define DIS_ORDER 100
#define SHIPPING1 6.50
#define SHIPPING2 14.00
#define SHIPPING3 0.50
#define POUNDS1 5.00
#define POUNDS2 20.00

int main(void)
{
	int choice = 0;
	int i, p_s;
	double pounds, p_artichokes, p_beets, p_carrots;
	pounds = p_artichokes = p_beets = p_carrots = 0;
	double total_cost, cost_artichokes, cost_beets, cost_carrots;
	total_cost = cost_artichokes = cost_beets = cost_carrots = 0;
	double discount, ship_charge, grand_total;
	discount = ship_charge = grand_total = 0;

	printf("Choose desired vegetable:\n");
	printf("1)  Artichokes $%.2lf per pound:\n", ARTICHOKES);
	printf("2)  Beets $%.2lf per pound:\n", BEETS);
	printf("3)  Carrots $%.2lf per pound:\n", CARROTS);
	printf("4)  Exit the ordering process\n");
	fflush(stdout);

	while ((scanf("%d", &choice)) == 1)
	{
		switch (choice)
		{
			case 1: printf("Enter the pounds of artichokes ($%.2lf per pound):  ", ARTICHOKES);
				fflush(stdout);
				scanf("%lf", &pounds);
				p_artichokes += pounds;
				cost_artichokes = ARTICHOKES * p_artichokes;
				printf("Artichokes ($%.2lf per pound): $%.2lf by %.2lf pounds\n", ARTICHOKES, cost_artichokes, p_artichokes);
				break;
			case 2: printf("Enter the pounds of beets ($%.2lf per pound):  ", BEETS);
				fflush(stdout);
				scanf("%lf", &pounds);
				p_beets += pounds;
				cost_beets = BEETS * p_beets;
				printf("Beets ($%.2lf per pound): $%.2lf by %.2lf pounds\n", BEETS, cost_beets, p_beets);
				break;
			case 3: printf("Enter the pounds of carrots ($%.2lf per pound):  ", CARROTS);
				fflush(stdout);
				scanf("%lf", &pounds);
				p_carrots += pounds;
				cost_carrots = BEETS * p_carrots;
				printf("Carrots ($%.2lf per pound): $%.2lf by %.2lf pounds\n", CARROTS, cost_carrots, p_carrots);
				break;
			case 4: goto quit;
				break;
			default: printf("It's not a valid option! Try again!\n");
				fflush(stdout);
		}
		printf("Enter the number of the category presented:  ");
		fflush(stdout);
	}
	quit: pounds = p_artichokes + p_beets + p_carrots;

	if (pounds == 0)
		goto exit;
	else if (pounds <= POUNDS1)
		ship_charge = SHIPPING1;
	else if ((pounds > POUNDS1) && (pounds <= POUNDS2))
		ship_charge = SHIPPING2;
	else
		{
			p_s = pounds - POUNDS2;
			p_s += (pounds == (POUNDS2 + p_s) ) ? 0 : 1;
			ship_charge = SHIPPING2;
			for (i = 1; i <= p_s; i++)
				ship_charge += SHIPPING3;
		}

	total_cost = cost_artichokes + cost_beets + cost_carrots;

	if (total_cost >= DIS_ORDER)
			discount = total_cost * DISCOUNT;

	grand_total = total_cost - discount + ship_charge;
	printf("\nYour bill:\n");
	printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
	printf("\n                   *SHOPPING CENTER*                 \n");
	printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n");
	printf("\n");
	if (p_artichokes > 0)
		printf("Artichokes ($%.2lf per pound): $%.2lf by %.2lf pounds\n", ARTICHOKES, cost_artichokes, p_artichokes);
	if (p_beets > 0)
		printf("Beets ($%.2lf per pound): $%.2lf by %.2lf pounds\n", BEETS, cost_beets, p_beets);
	if (p_carrots > 0)
		printf("Carrots ($%.2lf per pound): $%.2lf by %.2lf pounds\n", CARROTS, cost_carrots, p_carrots);
	printf("\n");
	printf("total pounds %.2lf\n", pounds);
	printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n\n");
	printf("PRICE. . . . . . . . . . . . . . . . . . . . . $%.2lf\n", total_cost);
	if (discount > 0)
		printf("DISCOUNT. . . . . . . . . . . . . . . . . . . . $%.2lf\n", discount);
	printf("SHIPPING. . . . . . . . . . . . . . . . . . . . $%.2lf\n", ship_charge);
	printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n\n");
	printf("TOTAL. . . . . . . . . . . . . . . . . . . . . .$%.2lf\n", grand_total);
	printf("\n");
	printf("                      THANK YOU!                    \n");
	exit: printf("                Waiting for you again!              \n");
	return 0;
}
