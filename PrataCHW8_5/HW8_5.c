#include <stdio.h>
int main(void)
{
    int number = 50;
    int right_n = 101;
    int left_n = 0;
    int choice;
    printf("�������� ����� ����� � ��������� �� 1 �� 100. � �������� ������� ");
    printf("���.\n������� ������� y, ���� ��� ������� ����� � ");
    printf("\n������� n � ��������� ������.\n");
    printf("���� �����:\n");

    printf("1) ������ %d?\n", number);
    printf("2) ������ %d?\n", number);
    printf("3) �������� %d?\n", number);
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
        	case 3: printf("� ����, ��� � ���� ���������!\n");
        			fflush(stdout);
        			goto exit;
        			break;
        	default: printf("������� ��� ��� ��������!\n");

        }
        printf("1) ������ %d?\n", number);
        printf("2) ������ %d?\n", number);
        printf("3) �������� %d?\n", number);
        fflush(stdout);
    }
   exit: printf("end!\n");

    return 0;
}
