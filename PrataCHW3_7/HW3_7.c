#include <stdio.h>

int main ()
{

	float MansHeight_cm, inch,	MansHeight_in;
	printf("������� ��� ���� � �����������:\n");
	fflush(stdout);
	scanf("%f", &MansHeight_cm);
	/*volume = 1;*/
	inch = 2.54;
	MansHeight_in = MansHeight_cm / inch;
	printf("��� ���� � ������: %f.\n", MansHeight_in);

	return 0;
}
