#include <stdio.h>
#include <string.h>

int main ()
{
	char Name[40];
	int size, width;
	printf("Введите Ваше имя.\n");
	fflush(stdout);
	scanf("%s", Name);

	printf("\"%s\"\n", Name);

	printf("\"%20s\"\n", Name);

	printf("\"%-20s\"\n", Name);

	size = strlen (Name);
	width = size + 3;
	printf("%*s\n", width, Name);
	return 0;
}
