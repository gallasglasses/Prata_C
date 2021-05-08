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
        case '�' : printf("��������� ������, ���������� ������.\n");
        		fflush(stdout);
                   break;
        case '�' : putchar('\a'); /* ANSI */
        		fflush(stdout);
                   break;
        case '�' : count();
        		fflush(stdout);
        			break;
        default : printf("������!\n");
        		fflush(stdout);
                  break;
        }
    }
    printf("��������� ���������.\n");
    fflush(stdout);
    return 0;
}

void count(void)
{
    int n,i;

    printf("�� ������ ������� ����� �������? ������� ����� �����:\n");
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
    printf("������� �����, ��������������� ���������� ��������:\n");
    printf("�. �����            �. ������ \n");
    printf("�. �������          �. �����\n");
    fflush(stdout);
    ch = get_first();
    while ( ch != '�' && ch != '�' && ch != '�' && ch != '�')
    {
        printf("�������� �, �, � ��� �.\n");
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
            putchar(ch);  // ��������� ������������ ����
        printf(" �� �������� �������������.\n������� ");
        printf("����� �����, ����� ��� 25, -178 ��� 3: ");
        fflush(stdout);
    }

    return input;
}
