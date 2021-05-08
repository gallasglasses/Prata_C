#include <stdio.h>

int main(void)
{
	const float INCH = 2.54;
	const int FOOT = 12;
int foot_height;
float cm, inch_height;
printf ("ѕеревод сантиметров в футы и дюймы.\n");
printf ("¬ведите число.\n");
fflush (stdout);
scanf ("%f", &cm);

while ( cm > 0.0 )
{
	inch_height = cm / INCH;
	foot_height = inch_height / FOOT;
	inch_height = inch_height - foot_height * FOOT;
	printf ("%.1f сантиметром это %d футов %.1f дюймов.\n", cm, foot_height, inch_height);
	printf ("¬ведите сантиметры (ƒл€ выхода введите 0).\n");
	fflush (stdout);
	scanf ("%f", &cm);
}

printf("Ha этом все.\n");
return 0;
}
