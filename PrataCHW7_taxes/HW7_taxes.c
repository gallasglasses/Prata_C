#include <stdio.h>
#define BASEPAY 10 // $10 � ���
#define BASEHRS 40 // ����� �� �������� �������� ������
#define OVERTIME 1.5 // � 1.5 ���� ������
#define AMT1 300 // 1-� ������� �������
#define AMT2 150 // 2-� ������� �������
#define RATE1 0.15 // ������ ��� 1-�� ������
#define RATE2 0.20 // ������ ��� 2-�� ������
#define RATE3 0.25 // ������ ��� 3-�� ������
int main(void)
{
	double hours;
	double gross;
	double net;
	double taxes;
	printf("������� ���������� �����, ������������ �� ��� ������: ");
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
	printf("����� �����: $%.2f; ������: $%.2f; ������ �����: $%.2f\n", gross,
			taxes, net);
	return 0;
}
