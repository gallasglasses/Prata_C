#include <stdio.h>

int main()
{
	float number;
	printf("������� �����:\n");
	fflush(stdout);
	scanf("%f", &number);

	printf("���������� ����� ����� %0.1f, ���������������� ����� ����� %0.1e\n",
			number, number);
	printf("������� �����:\n");
		fflush(stdout);
		scanf("%f", &number);

		printf("���������� ����� ����� %+0.3f, ���������������� ����� ����� %0.3E\n",
				number, number);
}
