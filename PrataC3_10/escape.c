/* escape.c -- использование управл€ющих последовательностей */
#include <stdio.h>
#include <unistd.h>
int main(void)
{
    float salary;

    printf("¬ведите желаемую сумму мес€чной зарплаты:");  /* 1 */
    printf(" $_______.\b\b\b\b\b\b\b\b\n");                      /* 2 */
    fflush(stdout);
    scanf("%f", &salary);
    fflush(stdout);
    printf("\n      $%.2f в мес€ц соответствует $%.2f в год.", salary, salary * 12.0);
    printf("\rќго!\n");
    getchar();
    getchar();

    return 0;
}
