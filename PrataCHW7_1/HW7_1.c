#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	int scount, ncount, ocount;
	scount = ncount = ocount = 0;
	while ((ch = getchar () ) != '#')
	{
		if (ch == ' ' )
			scount++;
		else if ( ch == '\n' )
			ncount++;
		else if (ispunct(ch))
			ocount++;
	}
	printf("Space: %d\nNew line: %d\nOther:%d\n", scount, ncount, ocount);
	fflush(stdout);
	return 0;
}
