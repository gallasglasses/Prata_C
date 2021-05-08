// chcount.c -- ������������� ���������� �������� "�"
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#define STOP '|'
int main(void)
{
    char ch;
    char prech;
    long n_chars = 0L;
    int n_words = 0;
    int n_lines = 0;
    int p_lines = 0;
    bool inword = false;
    prech = '\n';
    printf("������� �����. (������� | ��� ����������):\n");
    fflush (stdout);
    while ((ch = getchar()) != STOP)
    {
    	n_chars++;

       	if ( ch == '\n')
    		n_lines++;

        if (!isspace(ch) && !inword)
        {
        	if (ispunct(ch))
        		inword = false;
        	if (isalnum(ch))
        	{
        		inword = true;
        		n_words++;
        	}

        }
        if (isspace(ch) && inword)
        	inword = false;


        prech = ch;
    }
    if (prech != '\n')
       	p_lines = 1;
    printf("�������� = %ld, ���� = %d, ����� = %d, ", n_chars, n_words, n_lines);
    printf("�������� ����� = %d, ", p_lines);

    return 0;
}
