#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	int count;
	count = 0;
	fflush(stdout);
	while ((ch = getchar ()) != '#')
	{

		if (ch == '.')
		{
			printf("!");
			count++;
		}
		else if (ch == '!')
		{
			printf("!!");
			count++;
		}
		else printf("%c", ch);
	}
	printf("the number of substitutions: %d\n", count);
	printf("Done\n");
	fflush(stdout);
	return 0;
}
