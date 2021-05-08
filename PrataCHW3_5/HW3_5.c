#include <stdio.h>
int main ()
{
	int ageY;
	double ageS;
	printf("Введите возраст:\n");
	fflush(stdout);
	scanf("%d", &ageY);

	ageS= ageY * 3.156e7;

	printf("Возраст в годах: %d.\n"
			"Возраст в днях: %d.\n", ageY, ageY*365);
	printf("Возраст в секундах %e\n", ageS);
	return 0;
}
