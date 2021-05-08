#include <stdio.h>
#define DEPOSIT 100

int main(void)
{
	int year;
	double dep_daf, dep_day;
	year = 0;
	dep_daf = dep_day = DEPOSIT;
	printf("%5s %12s %15s\n", "Год", "Вклад Дафны", "Вклад Дейдры");
	printf("%5d %11.2lf$ %14.2lf$\n", year, dep_daf, dep_day);
	do {
		dep_daf += DEPOSIT*0.1;
		dep_day += dep_day*0.05;
		++year;
		printf("%5d %11.2lf$ %14.2lf$\n", year, dep_daf, dep_day);
	} while (dep_day <= dep_daf);

	return 0;
}
