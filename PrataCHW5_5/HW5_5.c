/* addemup.c -- ���� ����� ���������� */
#include <stdio.h>
int main(void)                 /* ������� ����� ������ 20 ����� ����� */
{
    int count, sum, digit;            /* �������� ����������     */

    count = 0;                 /* �������� ������������   */
    sum = 0;                   /* �������� ������������   */
    printf("������� �����\n");
    fflush (stdout);
    scanf("%d",&digit);
    while (count++ < digit)       /* ��������                */
        sum = sum + count;     /*     while               */
    printf("sum = %d\n", sum); /* �������� ������ ������� */
    return 0;                  /* �������� ��������       */
}
