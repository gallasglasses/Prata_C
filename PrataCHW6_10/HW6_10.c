#include <stdio.h>
int calculation(int x1, int x2);

int main(void)
{
	int num1, num2, val;

	printf("������� ������ � ������� ������������� �������:");
	fflush (stdout);
	scanf("%d%d", &num1, &num2);

	while (num2 > num1)
	{
		val = calculation(num1, num2);
		printf("����� ��������� ����� ����� �� %d �� %d ����� %d\n", num1, num2, val);
		printf("������� ��������� ����� (��� ���������� ������� q):");
		fflush (stdout);
		scanf("%d%d", &num1, &num2);
	}
	printf("������ ���������");
	return 0;
}

int calculation(int x1, int x2)
{
	int calc, i;
	calc = 0;
	for (i = x1; i <= x2; i++)
	{
		calc += i*i;
	}
	return calc;
}
