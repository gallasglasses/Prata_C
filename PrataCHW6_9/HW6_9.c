#include <stdio.h>
float calculation(float x1, float x2);
int main(void)
{
	float num1, num2, val;
	printf("������� ������ � ������ �����:");
	fflush (stdout);

	while (scanf("%f%f", &num1, &num2) == 2)
		{
		val = calculation(num1, num2);
		printf(" (x-y)/(x*y) = %f\n", val);
		printf("������� ��������� ����� (��� ���������� ������� q):");
		fflush (stdout);
		}
	printf("������ ���������");
	return 0;
}

float calculation(float x1, float x2)
{
	float calc;
	calc = (x1 - x2)/(x1*x2);
	return calc;
}
