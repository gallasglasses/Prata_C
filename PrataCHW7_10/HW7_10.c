#include <stdio.h>

#define AMOUNT_S 17850
#define AMOUNT_H 23900
#define AMOUNT_J 29750
#define AMOUNT_SEP 14875
#define TAX_RATE1 0.15
#define TAX_RATE2 0.28

int main(void)
{
	int tax_category;
	int base = 0;
	float tax_income;
	float taxes, net;
	taxes = net = 0;

	printf("Enter the number of the tax category:\n");
	printf("1)  Single                  15%% of first $17,850 plus 28%% of excess\n");
	printf("2)  Head of Household       15%% of first $23,900 plus 28%% of excess\n");
	printf("3)  Married, Joint          15%% of first $29,750 plus 28%% of excess\n");
	printf("4)  Married, Separate       15%% of first $14,875 plus 28%% of excess\n");
	printf("5)  quit\n");
	fflush(stdout);
	//num_rate = 3;
	while ((scanf("%d", &tax_category)) == 1)
	{
		if ((tax_category !=0) && (tax_category <=5))
		{
			switch (tax_category)
			{
				case 1: base = AMOUNT_S;
					break;
				case 2: base = AMOUNT_H;
					break;
				case 3: base = AMOUNT_J;
					break;
				case 4: base = AMOUNT_SEP;
					break;
				case 5: goto quit;
					break;
				default: ;
			}

		}
		else
		{
			printf("Enter the number of the tax category:\n");
			fflush(stdout);
		}
		printf("Enter the number of the taxable income:\n");
		fflush(stdout);
		scanf("%f", &tax_income);
		if (tax_income > base)
			taxes = base * TAX_RATE1 + (tax_income - base) * TAX_RATE2;
		else
			taxes = tax_income * TAX_RATE1;
		net = tax_income - taxes;
		printf("the gross pay: $%.2f\n", tax_income);
		printf("the taxes: $%.2f\n", taxes);
		printf("the net: $%.2f\n", net);
		printf("Enter the number of the tax category::\n");
		fflush(stdout);
	}

	quit: printf("End\n");
	fflush(stdout);
	return 0;
}
