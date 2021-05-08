#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	char pre_ch, cur_ch;
	int count;
	count = 0;
	printf("Enter text:\n");
	fflush(stdout);
	while ((ch = getchar ()) != '#')
	{
		cur_ch = ch;
		if ((pre_ch == 'e') && (cur_ch == 'i'))
			count++;
		pre_ch = ch;
	}
	printf("\nThe number of times that the sequence ei occurs: %d\n", count);
	printf("Done.\n");
	fflush(stdout);
	return 0;
}
