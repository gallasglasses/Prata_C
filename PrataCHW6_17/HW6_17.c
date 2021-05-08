#include <stdio.h>
#define WIN 1000000
#define RATE 0.08
#define withdraw_money 100000

int main(void)
{
	int year;
	double bank_acc;
	year = 0;
	bank_acc = WIN;
	printf("%5s %15s\n", "Год", "Счет в банке");
	printf("%5d %14.2lf$\n", year, bank_acc);
	do {
		bank_acc += bank_acc*RATE;
		bank_acc -= withdraw_money;
		++year;
		printf("%5d %14.2lf$\n", year, bank_acc);
	} while (withdraw_money <= bank_acc);

	return 0;
}
