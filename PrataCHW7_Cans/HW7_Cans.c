/* paint.c -- ������������� �������� �������� */
#include <stdio.h>
#define COVERAGE 350        // ����� ���������� ����� �� ���� ����� ������
int main(void)
{
    int sq_feet;
    int cans;

    printf("������� ���������� ���������� �����, ������� ���������� ���������:\n");
    fflush(stdout);
    while (scanf("%d", &sq_feet) == 1)
    {
    	if (sq_feet == 0)
    	{
    		printf("����� ��� ������ �� ����� :)\n");

    	}
    	else
    	{
        cans = sq_feet / COVERAGE;
        cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
        printf("��� ����� ����������� %d %s ������.\n", cans,
                        ((cans % 100 > 4 && cans % 100 < 21) ? "�����" : ( (cans % 10 > 1 && cans % 10 < 5) ? "�����" : ( (cans % 10 == 0 || (cans % 10 >= 5 && cans % 10 <= 9)) ? "�����" : "�����"))));
        }
    	printf("������� ��������� �������� (��� q ��� ����������):\n");
    	fflush(stdout);
    }
    printf("��������� ���������.\n");
    return 0;
}

//((cans % 100 > 4 && cans % 100 < 21) ? "�����" : ( (cans % 10 > 1 && cans % 10 < 5) ? "�����" : ( (cans % 10 == 0 || (cans % 10 >= 5 && cans % 10 <= 9)) ? "�����" : "�����"))))
