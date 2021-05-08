#include <stdio.h>
int main(void)
{
int x1, x2, val;
printf ("Эта программа вычисляет результаты деления по модулю.\n");
printf ("Введите целое число, которое будет служить вторым операндом:\n");
fflush (stdout);
scanf ("%d", &x2);
printf ("Теперь введите первьй операнд:\n");
fflush (stdout);
scanf ("%d", &x1);
while ( x1 > 0 )
{
	val = x1 % x2;
	printf ("%d %% %d равно %d.\n", x1, x2, val);
	printf ("Введите следующее число для первого операнда (<= О для выхода из"
			"программы):\n");
	fflush (stdout);
	scanf ("%d", &x1);
}

printf("Ha этом все.\n");
return 0;
}
