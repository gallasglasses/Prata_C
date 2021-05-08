#include <stdio.h>
#define BASIC_HOUR 40
#define RATE1 8.75
#define RATE2 9.33
#define RATE3 10
#define RATE4 11.20
#define BREAK1 300
#define BREAK2 150
#define TAX_RATE1 0.15
#define TAX_RATE2 0.20
#define TAX_RATE3 0.25

#define OVERTIME 1.5

int main(void)
{
	int num_rate;
	float hours = 0.00;
	float rate;
	float gross, taxes, net;
	gross = taxes = net = 0;

	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1)  $8.75/hr                     2)  $9.33/hr\n");
	printf("3)  $10.00/hr                    4)  $11.20/hr\n");
	printf("5)  quit\n");
	fflush(stdout);
	//num_rate = 3;
	while ((scanf("%d", &num_rate)) == 1)
	{
		if ((num_rate !=0) && (num_rate <=5))
		{
			switch (num_rate)
			{
				case 1: rate = RATE1;
					break;
				case 2: rate = RATE2;
					break;
				case 3: rate = RATE3;
					break;
				case 4: rate = RATE4;
					break;
				case 5: goto quit;
					break;
				default: ;
			}
			break;
		}
		else
		{
			printf("Enter the number corresponding to the desired pay rate or action:\n");
			fflush(stdout);
		}
	}
	printf("Enter the hours worked in a week:\n");
	fflush(stdout);
	//hours = 40.00;
	scanf("%f", &hours);

		if ( hours > BASIC_HOUR )
			gross = BASIC_HOUR * rate + (hours - BASIC_HOUR) * rate * OVERTIME;
		else
			gross = hours * rate;
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
	quit: printf("End\n");
	fflush(stdout);
	return 0;

}
