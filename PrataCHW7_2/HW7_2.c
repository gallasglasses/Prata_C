#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	int dec, count;
	dec = 0;
	count = 1;
	fflush(stdout);
	while ((ch = getchar () ) != '#')
	{
		dec = ch;
		printf("Symbol: %c Code: %d ", ch, dec);
		fflush(stdout);
		if ((count % 8) == 0)
			{
			printf("\n");
			count = 1;
			}
		else count++;
	}
	printf("\nDone\n");
	fflush(stdout);
	return 0;
}
