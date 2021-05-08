#include <stdio.h>

int main()
{
	float speed, value;
	printf("Введите скорость загрузки в мегабитах в секунду:\n");
	fflush(stdout);
	scanf("%f", &speed);

	printf("Размер файла в мегабайтах:\n");
	fflush(stdout);
	scanf("%f", &value);
	printf("Скорость загрузки: %0.2f Мбит/с\n"
			"Размер файла: %0.2f Мбайт\n"
			"Время загрузки: %0.2f с\n", speed, value, value * 8 / speed);
	return 0;
}
