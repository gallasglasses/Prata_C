#include <stdio.h>
#include <string.h>

int main(void)
{
	int i, size;
	char word[40];
	printf("¬ведите слово:\n");
	fflush(stdout);
	scanf("%s", word);
	size = strlen(word);
	printf("%d\n", size);

	for(i=size; i >= 0; i--)
	{
		printf("%c", word[i]);
	}

	printf("\n");
	return 0;
}

