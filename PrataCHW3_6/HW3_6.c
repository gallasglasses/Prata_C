#include <stdio.h>
#include <math.h> /* for function ceil()*/

int main ()
{
	int quart;
	float WaterMass, amount, volume;
	printf("������� ����� ���� � �������:\n");
	fflush(stdout);
	scanf("%f", &volume);
	/*volume = 1;*/
	quart = 950;
	WaterMass = 3.0e-23;
	amount = volume * quart / WaterMass;
	printf("� %f ������ ���� ���������� %e ���������� ������� ����.\n", volume, amount);

	return 0;
}
