#include <stdio.h>
#include <unistd.h>
int main(void)
{
int digit, i;

printf ("¬ведите число.\n");
fflush (stdout);
scanf ("%d", &digit);
i = 10 * digit;

while ( digit <= i)
{
	printf ("%d ", digit++);

}

return 0;
}
