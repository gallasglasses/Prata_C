#include <stdio.h>

int main(void)
{
	int i, size, status;
	float val1, val2;

	printf("Введите число элементов:\n");
	fflush(stdout);
	status = scanf("%d", &size);
	while (status == 1)
	{
		for(val1 = 0.0 , i=1; i <= size; i++)
		{
			val1 += 1.0/ (float) i;
		}
		for(i=1 , val2 = 0.0; i <= size; i+=2)
		{
			val2 += 1.0/ (float) i;
		}
		for(i=2 ; i <= size; i+=2)
		{

			val2 -= 1.0 / (float) i;
		}
		printf("Первая последовательность равна: %.1f\n", val1);
		printf("Вторая последовательность равна: %.1f\n", val2);

		printf("Введите следующее число (для завершения нажмите q):");
		fflush (stdout);
		status = scanf("%d", &size);
	}
	printf("Работа завершена");
	return 0;
}
