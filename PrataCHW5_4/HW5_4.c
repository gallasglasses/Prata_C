#include <stdio.h>

int main(void)
{
	const float INCH = 2.54;
	const int FOOT = 12;
int foot_height;
float cm, inch_height;
printf ("������� ����������� � ���� � �����.\n");
printf ("������� �����.\n");
fflush (stdout);
scanf ("%f", &cm);

while ( cm > 0.0 )
{
	inch_height = cm / INCH;
	foot_height = inch_height / FOOT;
	inch_height = inch_height - foot_height * FOOT;
	printf ("%.1f ����������� ��� %d ����� %.1f ������.\n", cm, foot_height, inch_height);
	printf ("������� ���������� (��� ������ ������� 0).\n");
	fflush (stdout);
	scanf ("%f", &cm);
}

printf("Ha ���� ���.\n");
return 0;
}
