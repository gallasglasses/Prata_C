#include <stdio.h>
int main(void)
{
int x1, x2, val;
printf ("��� ��������� ��������� ���������� ������� �� ������.\n");
printf ("������� ����� �����, ������� ����� ������� ������ ���������:\n");
fflush (stdout);
scanf ("%d", &x2);
printf ("������ ������� ������ �������:\n");
fflush (stdout);
scanf ("%d", &x1);
while ( x1 > 0 )
{
	val = x1 % x2;
	printf ("%d %% %d ����� %d.\n", x1, x2, val);
	printf ("������� ��������� ����� ��� ������� �������� (<= � ��� ������ ��"
			"���������):\n");
	fflush (stdout);
	scanf ("%d", &x1);
}

printf("Ha ���� ���.\n");
return 0;
}
