#include <stdio.h>
#define DAY_TO_W 7
int main(void)
{
int days, week_time, day_time;
printf ("������� ���� � ������ � ���.\n");
printf ("������� �����.\n");
fflush (stdout);
scanf ("%d", &days);

while ( days > 0 )
{
	week_time = days / DAY_TO_W;
	day_time = days % DAY_TO_W;
	printf ("%d ���� ��� %d ������ %d ����.\n", days, week_time, day_time);
	printf ("������� ��� (��� ������ ������� 0).\n");
	fflush (stdout);
	scanf ("%d", &days);
}

printf("Ha ���� ���.\n");
return 0;
}
