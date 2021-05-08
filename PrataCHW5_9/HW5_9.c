#include <stdio.h>

void Temperatures(double);
const double FAHR_DEGREE = 1.8;
const double FREEZ_POINT = 32.0;
const double ABS_ZERO_CELV = 273.15;

int main (void)
{
	double degrees_fahr;
	printf ("Введите температуру по Фаренгейту:\n");
	fflush (stdout);

	while (scanf ("%le", &degrees_fahr) == 1)
	{
		Temperatures (degrees_fahr);
		printf ("Введите следующую температуру по Фаренгейту"
				" (для выхода введите \"q\"):\n");
		fflush (stdout);
		}
	printf("Ha этом все.\n");
	return 0;
}

void Temperatures(double x)
{
	double degrees_cels, degrees_celv;
	degrees_cels = (x - FREEZ_POINT) / FAHR_DEGREE;
	degrees_celv = degrees_cels + ABS_ZERO_CELV;
	printf ("Температура по Фаренгейту: %.2le F\n", x);
	printf ("Температура по Цельсию: %.2le C\n", degrees_cels);
	printf ("Температура по Кельвину: %.2le K\n", degrees_celv);

}
