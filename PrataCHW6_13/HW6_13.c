#include <stdio.h>

int main(void)
{
	int i, x, size, status;

	printf("������� �����:\n");
	fflush(stdout);
	status = scanf("%d", &x);

	printf("������� ������������ ����� �������:\n");
	fflush(stdout);
	status += scanf("%d", &size);
	int digit[size];

	while (status == 2)
	{
		for(i=1, digit[0]=1 ; i < size; i++)
		{
			digit[i] = digit[i-1] * x;
		}

		i=0;

		do{
			printf("%d ", digit[i]);
			i++;
		} while (i < size);
		//for(i=0; i < size; i++)
		//{
			//printf("%d ", digit[i]);
		//}

		printf("\n������� ��������� ����� � ������������ ����� �������\n(��� ���������� ������� q):\n");
		fflush (stdout);
		status = scanf("%d%d", &x, &size);

	}

	printf("������ ���������\n");

	return 0;
}
