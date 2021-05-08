#include <stdio.h>
#define BASEPAY 10 // $10 в час
#define BASEHRS 40 // часов по основной тарифной ставке
#define OVERTIME 1.5 // в 1.5 раза больше
#define AMT1 300 // 1-й уровень тарифов
#define AMT2 150 // 2-й уровень тарифов
#define RATE1 0.15 // ставка для 1-го уровня
#define RATE2 0.20 // ставка для 2-го уровня
#define RATE3 0.25 // ставка для 3-го уровня
int main(void)
{
	double hours;
	double gross;
	double net;
	double taxes;
	printf("Введите количество часов, отработанных за эту неделю: ");
	scanf("%lf", &hours);
	if (hours <= BASEHRS)
		gross = hours * BASEPAY;
	else
		gross = BASEHRS * BASEPAY + (hours - BASEHRS) * BASEPAY * OVERTIME;
	if (gross <= AMT1)
		taxes = gross * RATE1;
	else if (gross <= AMT1 + AMT2)
		taxes = AMT1 * RATE1 + (gross - AMT1) * RATE2;
	else
		taxes = AMT1 * RATE1 + AMT2 * RATE2 + (gross - AMT1 - AMT2) * RATE3;
	net = gross - taxes;
	printf("общая сумма: $%.2f; налоги: $%.2f; чистый доход: $%.2f\n", gross,
			taxes, net);
	return 0;
}
