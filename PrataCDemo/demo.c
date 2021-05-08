#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int high = 100;
	int low = 1;
	int guess = (high + low) / 2;
	char response;
	printf("�������� ����� ����� � ��������� �� 1 �� 100. � �������� ������� ");
	printf("���.\n������� ������� y, ���� ��� ������� �����,");
	printf("\n������� h, ���� ����� ������, � ������� l, ���� ��� ������.\n");
	printf("����� ������ �������� %d?\n", guess);
	fflush(stdout);
	while ((response = getchar()) != 'y') /* �������� ����� */
	{
		if (response == '\n')
			continue;
		if (response != 'h' && response != 'l')
		{
			printf("� �� ������� ���� �����. ������� h, ���� ����� ������,\n");
			printf("l - ���� ������ ��� y, ���� ����� �������.\n");
			fflush(stdout);
			continue;
		}
		if (response == 'h')
			high = guess - 1;
		else if (response == 'l')
			low = guess + 1;
		guess = (high + low) / 2;
		printf("�����, ����� ��� %d?\n", guess);
		fflush(stdout);
	}
	printf("� ����, ��� � ���� ���������!\n");
	fflush(stdout);
	return 0;
}
