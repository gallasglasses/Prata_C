#include <stdio.h>

int main(void)
{
	int i, j;
	char ch;
	for(ch = 'A', i=0; i <= 5; i++)
		{
		for (j=0; j <= i; j++)
			printf("%c", ch++);
		printf("\n");
		}
	return 0;
}

