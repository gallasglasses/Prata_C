#include <stdio.h>
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);
int main(void)
{
    int choice;
    void count(void);

    while ( (choice = get_choice()) != 'q')
    {
        switch (choice)
        {
        case 'с' : printf("Покупайте дешево, продавайте дорого.\n");
        		fflush(stdout);
                   break;
        case 'з' : putchar('\a'); /* ANSI */
        		fflush(stdout);
                   break;
        case 'п' : count();
        		fflush(stdout);
        			break;
        default : printf("Ошибка!\n");
        		fflush(stdout);
                  break;
        }
    }
    printf("Программа завершена.\n");
    fflush(stdout);
    return 0;
}

void count(void)
{
    int n,i;

    printf("До какого предела вести подсчет? Введите целое число:\n");
    fflush(stdout);
    n = get_int();
    for (i = 1; i <= n; i++)
        {
    	printf("%d\n", i);
    	fflush(stdout);
        }
    while ( getchar() != '\n')
        continue;
}

char get_choice(void)
{
    int ch;
    printf("Введите букву, соответствующую выбранному варианту:\n");
    printf("с. совет            з. звонок \n");
    printf("п. подсчет          в. выход\n");
    fflush(stdout);
    ch = get_first();
    while ( ch != 'с' && ch != 'з' && ch != 'п' && ch != 'в')
    {
        printf("Выберите с, з, п или в.\n");
        fflush(stdout);
        ch = get_first();
    }

    return ch;
}
char get_first(void)
{
    int ch;
    ch = getchar();

    while (getchar() != '\n')
        continue;

    return ch;
}
int get_int(void)
{
    int input;
    char ch;

    while (scanf("%d", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch);  // отбросить неправильный ввод
        printf(" не является целочисленным.\nВведите ");
        printf("целое число, такое как 25, -178 или 3: ");
        fflush(stdout);
    }

    return input;
}
