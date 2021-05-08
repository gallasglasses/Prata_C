#include <stdio.h>
int main ()
{
	float input;
	printf("Введите число:\n");
	fflush(stdout);
	scanf("%f", &input);
	printf("Число с фиксированной запятой %f, "
			"а это экспоненциальная форма записи %e.\n", input, input);
	printf("или двоично-экспоненциальное представление %a\n", input);
	return 0;
}
