#include <stdio.h>
#include <float.h>

int main()
{
	double dbl = 1.0 / 3.0;
	float flt = 1.0 / 3.0;

	printf("double %.4f float %.4f\n", dbl, flt);
	printf("double %.12f float %.12f\n", dbl, flt);
	printf("double %.16f float %.16f\n", dbl, flt);
	printf("double %.25f float %.25f\n", dbl, flt);
	printf("double %d float %d\n", DBL_DIG, FLT_DIG);
	return 0;
}
