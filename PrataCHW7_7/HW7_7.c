#include <stdio.h>
#define BASIC_HOUR 40
#define BASIC_RATE 10
#define BREAK1 300
#define BREAK2 150
#define TAX_RATE1 0.15
#define TAX_RATE2 0.20
#define TAX_RATE3 0.25

#define OVERTIME 1.5

int main(void)
{
	float hours = 0.00;

	float gross, taxes, net;
	gross = taxes = net = 0;

	printf("Enter the hours worked in a week:\n");
	fflush(stdout);
	//hours = 50.00;
	scanf("%f", &hours);

		if ( hours > BASIC_HOUR )
			gross = BASIC_HOUR * BASIC_RATE + (hours - BASIC_HOUR) * BASIC_RATE * OVERTIME;
		else
			gross = hours * BASIC_RATE;
		if ( gross <= BREAK1)
			taxes = gross * TAX_RATE1;
		if ( gross <= BREAK1 + BREAK2)
			taxes = (gross - BREAK1) * TAX_RATE2 + BREAK1 * TAX_RATE1;
		else
			taxes = (gross - BREAK1 - BREAK2) * TAX_RATE3 + BREAK1 * TAX_RATE1 + BREAK2 * TAX_RATE2;
		net = gross - taxes;
	printf("the gross pay: $%.2f\n", gross);
	printf("the taxes: $%.2f\n", taxes);
	printf("the net: $%.2f\n", net);

	fflush(stdout);
	return 0;

}
