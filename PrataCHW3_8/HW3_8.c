#include <stdio.h>
#include <math.h> /* for function ceil()*/

int main ()
{
	float pint, cup, ounce, Tbsp, tsp;
	printf("������� ����� � ������:\n");
	fflush(stdout);
	scanf("%f", &cup);
	/*volume = 1;*/
	pint = 2 * cup;
	ounce = 8 * cup;
	Tbsp = 16 * cup;
	tsp = 48 * cup;

	printf("����� � ������: %.2f.\n"
			"����� � ������: %.2f.\n"
			"����� � ������: %.2f.\n"
			"����� � �������� ������: %.2f.\n"
			"����� � ������ ������: %.2f.\n"
			, cup, pint, ounce, Tbsp, tsp);

	return 0;
}
