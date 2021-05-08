#include <stdio.h>

int main(void)
{
	int i, j, x;
	char ch;
	printf("¬ведите прописную английскую букву:");
	fflush(stdout);
	scanf("%c",&ch);
	//ch='E';
	x = ch - 'A';
	for(i=0; i <= x; i++)
		{
		for (j=0; j < x-i; j++)
			printf(" ");
		for (j=x; j <= x+i; j++)
			printf("%c", ch-2*x+j);
		for (j=x; j < x+i; j++)
			printf("%c", ch-j+i-1);
		printf("\n");
		}
	return 0;
}

