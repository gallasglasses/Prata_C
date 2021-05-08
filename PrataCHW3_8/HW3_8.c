#include <stdio.h>
#include <math.h> /* for function ceil()*/

int main ()
{
	float pint, cup, ounce, Tbsp, tsp;
	printf("Введите объем в чашках:\n");
	fflush(stdout);
	scanf("%f", &cup);
	/*volume = 1;*/
	pint = 2 * cup;
	ounce = 8 * cup;
	Tbsp = 16 * cup;
	tsp = 48 * cup;

	printf("Объем в чашках: %.2f.\n"
			"Объем в пинтах: %.2f.\n"
			"Объем в унциях: %.2f.\n"
			"Объем в столовых ложках: %.2f.\n"
			"Объем в чайных ложках: %.2f.\n"
			, cup, pint, ounce, Tbsp, tsp);

	return 0;
}
