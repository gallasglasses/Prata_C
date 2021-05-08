#include <stdio.h>
int calculation(int x1, int x2);

int main(void)
{
	int num1, num2, val;

	printf("Введите нижний и верхний целочисленные пределы:");
	fflush (stdout);
	scanf("%d%d", &num1, &num2);

	while (num2 > num1)
	{
		val = calculation(num1, num2);
		printf("Сумма квадратов целых чисел от %d до %d равна %d\n", num1, num2, val);
		printf("Введите следующие числа (для завершения нажмите q):");
		fflush (stdout);
		scanf("%d%d", &num1, &num2);
	}
	printf("Работа завершена");
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
