#include <stdio.h>
int main ()
{
	int ageY;
	double ageS;
	printf("������� �������:\n");
	fflush(stdout);
	scanf("%d", &ageY);

	ageS= ageY * 3.156e7;

	printf("������� � �����: %d.\n"
			"������� � ����: %d.\n", ageY, ageY*365);
	printf("������� � �������� %e\n", ageS);
	return 0;
}
