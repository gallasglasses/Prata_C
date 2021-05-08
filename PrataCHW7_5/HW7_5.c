#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	int mcount;
	mcount = 0;
	int pcount;
	pcount = 0;
	fflush(stdout);
	while ((ch = getchar ()) != '#')
	{
		switch (ch)
		{
			case '.': printf("!");
				pcount++;
				break;
			case '!': printf("!!");
				mcount++;
				break;
			default: printf("%c", ch);
		}
	}
	printf("the number of period substitutions: %d\n", pcount);
	printf("the number of exclamation mark substitutions: %d\n", mcount);
	printf("Done\n");
	fflush(stdout);
	return 0;
}
