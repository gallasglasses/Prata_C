
#include <stdio.h>
void cube (double x);
int main(void)
{
    double digit;

    printf("¬ведите число\n");
    fflush (stdout);
    scanf("%lf",&digit);
    cube (digit);
    return 0;
}

void cube (double x)
{
		printf("%lf\n", x * x * x);
	}
