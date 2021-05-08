/* typesize.c -- ������� ������� ����� */
#include <stdio.h>
int main(void)
{
    /* � ��������� c99 ��� �������� ������������ ������������ %zd */
    printf("��� int ����� ������ %u ����(��).\n", sizeof(int));
    printf("��� char ����� ������ %u ����(��).\n", sizeof(char));
    printf("��� long ����� ������ %u ����(��).\n", sizeof(long));
    printf("��� long long ����� ������ %u ����(��).\n",
           sizeof(long long));
    printf("��� double ����� ������ %u ����(��).\n",
           sizeof(double));
    printf("��� long double ����� ������ %u ����(��).\n",
           sizeof(long double));
    return 0;
}
