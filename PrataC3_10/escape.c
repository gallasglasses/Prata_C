/* escape.c -- ������������� ����������� ������������������� */
#include <stdio.h>
#include <unistd.h>
int main(void)
{
    float salary;

    printf("������� �������� ����� �������� ��������:");  /* 1 */
    printf(" $_______.\b\b\b\b\b\b\b\b\n");                      /* 2 */
    fflush(stdout);
    scanf("%f", &salary);
    fflush(stdout);
    printf("\n      $%.2f � ����� ������������� $%.2f � ���.", salary, salary * 12.0);
    printf("\r���!\n");
    getchar();
    getchar();

    return 0;
}
