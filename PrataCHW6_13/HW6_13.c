#include <stdio.h>

int main(void)
{
	int i, x, size, status;

	printf("Введите число:\n");
	fflush(stdout);
	status = scanf("%d", &x);

	printf("Введите максимальное число степени:\n");
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

		printf("\nВведите следующее число и максимальное число степени\n(для завершения нажмите q):\n");
		fflush (stdout);
		status = scanf("%d%d", &x, &size);

	}

	printf("Работа завершена\n");

	return 0;
}
