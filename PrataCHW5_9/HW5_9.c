#include <stdio.h>

void Temperatures(double);
const double FAHR_DEGREE = 1.8;
const double FREEZ_POINT = 32.0;
const double ABS_ZERO_CELV = 273.15;

int main (void)
{
	double degrees_fahr;
	printf ("������� ����������� �� ����������:\n");
	fflush (stdout);

	while (scanf ("%le", &degrees_fahr) == 1)
	{
		Temperatures (degrees_fahr);
		printf ("������� ��������� ����������� �� ����������"
				" (��� ������ ������� \"q\"):\n");
		fflush (stdout);
		}
	printf("Ha ���� ���.\n");
	return 0;
}

void Temperatures(double x)
{
	double degrees_cels, degrees_celv;
	degrees_cels = (x - FREEZ_POINT) / FAHR_DEGREE;
	degrees_celv = degrees_cels + ABS_ZERO_CELV;
	printf ("����������� �� ����������: %.2le F\n", x);
	printf ("����������� �� �������: %.2le C\n", degrees_cels);
	printf ("����������� �� ��������: %.2le K\n", degrees_celv);

}
