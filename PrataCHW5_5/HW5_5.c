/* addemup.c -- п€ть видов операторов */
#include <stdio.h>
int main(void)                 /* находит сумму первых 20 целых чисел */
{
    int count, sum, digit;            /* оператор объ€влени€     */

    count = 0;                 /* оператор присваивани€   */
    sum = 0;                   /* оператор присваивани€   */
    printf("¬ведите число\n");
    fflush (stdout);
    scanf("%d",&digit);
    while (count++ < digit)       /* оператор                */
        sum = sum + count;     /*     while               */
    printf("sum = %d\n", sum); /* оператор вызова функции */
    return 0;                  /* оператор возврата       */
}
