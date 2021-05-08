#include <stdio.h>

int main()
{
	float number;
	printf("Введите число:\n");
	fflush(stdout);
	scanf("%f", &number);

	printf("Десятичная форма числа %0.1f, экспоненциальная форма числа %0.1e\n",
			number, number);
	printf("Введите число:\n");
		fflush(stdout);
		scanf("%f", &number);

		printf("Десятичная форма числа %+0.3f, экспоненциальная форма числа %0.3E\n",
				number, number);
}
