#include <stdio.h>
int main(void)
{
    int number = 50;
    int right_n = 101;
    int left_n = 0;
    int choice;
    printf("Выберите целое число в интервале от 1 до 100. Я попробую угадать ");
    printf("его.\nНажмите клавишу y, если моя догадка верна и ");
    printf("\nклавишу n в противном случае.\n");
    printf("Ваше число:\n");

    printf("1) Меньше %d?\n", number);
    printf("2) Больше %d?\n", number);
    printf("3) Является %d?\n", number);
    fflush(stdout);
    while ((scanf("%d", &choice)) == 1)
    {
        switch(choice)
        {

        	case 1: right_n = number;
        			number = right_n - (right_n - left_n) / 2;
        	        break;
        	case 2: left_n = number;
        	        number = (right_n - left_n) / 2 + number;
        	        break;
        	case 3: printf("Я знал, что у меня получится!\n");
        			fflush(stdout);
        			goto exit;
        			break;
        	default: printf("Введите еще раз варианты!\n");

        }
        printf("1) Меньше %d?\n", number);
        printf("2) Больше %d?\n", number);
        printf("3) Является %d?\n", number);
        fflush(stdout);
    }
   exit: printf("end!\n");

    return 0;
}
