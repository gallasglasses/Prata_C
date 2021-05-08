#include <stdio.h>
#define MIN_TO_H 60
int main(void)
{
int min, hour_time, min_time;
printf ("ѕеревод минут в часы и минуты.\n");
printf ("¬ведите число.\n");
fflush (stdout);
scanf ("%d", &min);

while ( min > 0 )
{
	hour_time = min / MIN_TO_H;
	min_time = min % MIN_TO_H;
	printf ("%d минут это %d часов %d минут.\n", min, hour_time, min_time);
	printf ("¬ведите минуты (ƒл€ выхода введите 0).\n");
	fflush (stdout);
	scanf ("%d", &min);
}

printf("Ha этом все.\n");
return 0;
}
