#include <stdio.h>

int main()
{
	float speed, value;
	printf("������� �������� �������� � ��������� � �������:\n");
	fflush(stdout);
	scanf("%f", &speed);

	printf("������ ����� � ����������:\n");
	fflush(stdout);
	scanf("%f", &value);
	printf("�������� ��������: %0.2f ����/�\n"
			"������ �����: %0.2f �����\n"
			"����� ��������: %0.2f �\n", speed, value, value * 8 / speed);
	return 0;
}
