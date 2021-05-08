#include <stdio.h>
#include <ctype.h>

#define BASIC_HOUR 40
#define RATE1 8.75
#define RATE2 9.33
#define RATE3 10.00
#define RATE4 11.20
#define BREAK1 300
#define BREAK2 150
#define TAX_RATE1 0.15
#define TAX_RATE2 0.20
#define TAX_RATE3 0.25
#define OVERTIME 1.5

void menu(void);
int get_first(void);
float get_digit(void);

int main(void)
{
	char num_rate;
	float hours;
	float rate = 0.00;
	float gross, taxes, net;
	gross = taxes = net = 0;

	menu();
	//num_rate = 'c';
	while ((num_rate = get_first()) != 'q')
	{
		if (num_rate == '\n')
			continue;
		num_rate = tolower(num_rate);
		switch (num_rate)
		{
			case 'a': rate = RATE1; break;
			case 'b': rate = RATE2;	break;
			case 'c': rate = RATE3;	break;
			case 'd': rate = RATE4; break;

			default:printf("Enter a, b, c, d or q.\n");
					menu();
					fflush(stdout);
					continue;
		}

		printf("Enter the hours worked in a week:\n");
		fflush(stdout);
		//scanf("%f", &hours);
		//hours = 40.00;

		hours = get_digit();
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
		printf("\n");
		fflush(stdout);
		menu();
	}
	printf("End\n");
	fflush(stdout);
	return 0;

}

void menu(void)
{
	printf("Enter the letter corresponding to the desired pay rate or action:\n");
	printf("a)  $%.2f/hr                     b)  $%.2f/hr\n", RATE1, RATE2);
	printf("c)  $%.2f/hr                    d)  $%.2f/hr\n", RATE3, RATE4);
	printf("q)  quit\n");
	fflush(stdout);
}

int get_first(void)
{
	int ch;
	ch = getchar();

	while (isspace(ch))
		ch = getchar();
	while (getchar() != '\n')
		continue;

	return ch;
}



float get_digit(void)
{
	float input;
	int status;
	char ch;

	while (( (status = scanf("%f", &input) ) != 1) || (input <= 0))
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		if (status != 1)
		{
			printf("- it is not a digit!\n");
			fflush(stdout);
		}
		else if (input <= 0)
		{
			printf("- it is not a positive digit!\n");
			fflush(stdout);
		}
		printf("Enter the digit (for example: 2, 40, 60.5)!\n");
		fflush(stdout);

	}

	return input;
}
