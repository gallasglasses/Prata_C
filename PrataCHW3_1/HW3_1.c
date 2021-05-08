#include<stdio.h>
int main()
{
	int i=25601;
	long l=147305666;
	short s=24203;
	float f=5.5695;
	double d=6.9999434643213;
	printf("i: int %d, short %hi, float %f \n", i, i, i);
	printf("l: int %d, short %hi, float %f, long %ld \n", l, l, l, l);
	printf("s: int %d, short %hi, float %f \n", s, s, s);
	printf("f: int %d, short %hi, float %f, double %g \n", f, f, f, f);
	printf("d: int %d, short %hi, float %f, double %g \n", d, d, d, d);
	return 0;

}
