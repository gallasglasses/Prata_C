#include <stdio.h>
int main ()
{
	float input;
	printf("������� �����:\n");
	fflush(stdout);
	scanf("%f", &input);
	printf("����� � ������������� ������� %f, "
			"� ��� ���������������� ����� ������ %e.\n", input, input);
	printf("��� �������-���������������� ������������� %a\n", input);
	return 0;
}
