#include <stdio.h>
#define MIN_TO_H 60
int main(void)
{
int min, hour_time, min_time;
printf ("������� ����� � ���� � ������.\n");
printf ("������� �����.\n");
fflush (stdout);
scanf ("%d", &min);

while ( min > 0 )
{
	hour_time = min / MIN_TO_H;
	min_time = min % MIN_TO_H;
	printf ("%d ����� ��� %d ����� %d �����.\n", min, hour_time, min_time);
	printf ("������� ������ (��� ������ ������� 0).\n");
	fflush (stdout);
	scanf ("%d", &min);
}

printf("Ha ���� ���.\n");
return 0;
}
