#include <stdio.h>
int main(void)
{
    int ch;
    int i = 0;
    while ((ch = getchar()) != EOF)
    	i++;

    printf("Количество символов: %d\n", i);

    return 0;
}
