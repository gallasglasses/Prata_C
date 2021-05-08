#include <stdio.h>

int main ()
{

	float MansHeight_cm, inch,	MansHeight_in;
	printf("Введите ваш рост в сантиметрах:\n");
	fflush(stdout);
	scanf("%f", &MansHeight_cm);
	/*volume = 1;*/
	inch = 2.54;
	MansHeight_in = MansHeight_cm / inch;
	printf("Ваш рост в дюймах: %f.\n", MansHeight_in);

	return 0;
}
