#include <stdio.h>

int main(void)
{
	float num1, num2, val;
	printf("������� ������ � ������ �����:");
	fflush (stdout);

	while (scanf("%f%f", &num1, &num2) == 2)
		{
		val = (num1 - num2)/(num1*num2);
		printf(" (x-y)/(x*y) = %f\n", val);
		printf("������� ��������� ����� (��� ���������� ������� q):");
		fflush (stdout);
		}
	printf("������ ���������");
	return 0;
}
