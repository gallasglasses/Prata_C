#include <stdio.h>

int main()
{
	float height;
	char name[30];
	printf("������� ��� ���� � ������:\n");
	fflush(stdout);

	scanf("%f", &height);

	printf("������� ���� ���:\n");
	fflush(stdout);

	scanf("%s", name);

	printf("%s, ��� ���� ���������� %0.2f �����.\n", name, height / 12);

	return 0;

}
