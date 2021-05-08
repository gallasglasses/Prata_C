#include <stdio.h>

#include <string.h>  // for strlen
#define SIZE 256

int main(void)
{

char line[SIZE];
int i;

printf("¬ведите строку:\n");
fflush(stdout);
for (i = 0; scanf("%c", &line[i]) == 1 && line[i] != '\n'; i++)
    ;
line[i] = '\0';
for (i = strlen(line) - 1; i >= 0; i--)
    printf("%c", line[i]);

return 0;
}
