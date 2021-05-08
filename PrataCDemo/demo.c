#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int high = 100;
	int low = 1;
	int guess = (high + low) / 2;
	char response;
	printf("Выберите целое число в интервале от 1 до 100. Я попробую угадать ");
	printf("его.\nНажмите клавишу y, если моя догадка верна,");
	printf("\nклавишу h, если число больше, и клавишу l, если оно меньше.\n");
	printf("Вашим числом является %d?\n", guess);
	fflush(stdout);
	while ((response = getchar()) != 'y') /* получить ответ */
	{
		if (response == '\n')
			continue;
		if (response != 'h' && response != 'l')
		{
			printf("Я не понимаю этот ответ. Нажмите h, если число больше,\n");
			printf("l - если меньше или y, если число угадано.\n");
			fflush(stdout);
			continue;
		}
		if (response == 'h')
			high = guess - 1;
		else if (response == 'l')
			low = guess + 1;
		guess = (high + low) / 2;
		printf("Ладно, тогда это %d?\n", guess);
		fflush(stdout);
	}
	printf("Я знал, что у меня получится!\n");
	fflush(stdout);
	return 0;
}
