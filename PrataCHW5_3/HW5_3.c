#include <stdio.h>
#define DAY_TO_W 7
int main(void)
{
int days, week_time, day_time;
printf ("ѕеревод дней в недели и дни.\n");
printf ("¬ведите число.\n");
fflush (stdout);
scanf ("%d", &days);

while ( days > 0 )
{
	week_time = days / DAY_TO_W;
	day_time = days % DAY_TO_W;
	printf ("%d дней это %d недель %d дней.\n", days, week_time, day_time);
	printf ("¬ведите дни (ƒл€ выхода введите 0).\n");
	fflush (stdout);
	scanf ("%d", &days);
}

printf("Ha этом все.\n");
return 0;
}
