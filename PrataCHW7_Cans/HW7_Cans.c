/* paint.c -- использование условной операции */
#include <stdio.h>
#define COVERAGE 350        // число квадратных футов на одну банку краски
int main(void)
{
    int sq_feet;
    int cans;

    printf("Введите количество квадратных футов, которые необходимо покрасить:\n");
    fflush(stdout);
    while (scanf("%d", &sq_feet) == 1)
    {
    	if (sq_feet == 0)
    	{
    		printf("Тогда Вам краска не нужна :)\n");

    	}
    	else
    	{
        cans = sq_feet / COVERAGE;
        cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
        printf("Для этого потребуется %d %s краски.\n", cans,
                        ((cans % 100 > 4 && cans % 100 < 21) ? "банок" : ( (cans % 10 > 1 && cans % 10 < 5) ? "банки" : ( (cans % 10 == 0 || (cans % 10 >= 5 && cans % 10 <= 9)) ? "банок" : "банка"))));
        }
    	printf("Введите следующее значение (или q для завершения):\n");
    	fflush(stdout);
    }
    printf("Программа завершена.\n");
    return 0;
}

//((cans % 100 > 4 && cans % 100 < 21) ? "банок" : ( (cans % 10 > 1 && cans % 10 < 5) ? "банки" : ( (cans % 10 == 0 || (cans % 10 >= 5 && cans % 10 <= 9)) ? "банок" : "банка"))))
