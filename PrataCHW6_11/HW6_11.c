#include <stdio.h>
#define SIZE 8

int main(void)
{
	int i;
	int digits[SIZE];
	printf("¬ведите числа:\n");
	fflush(stdout);
	for(i=0; i < SIZE; i++)
	{
		scanf("%d", &digits[i]);
	}

	for(i=0; i < SIZE; i++)
	{
		printf("%d", digits[i]);
	}

	printf("\n");

	for(i=SIZE-1; i >= 0 ; i--)
	{
		printf("%d", digits[i]);
	}

	printf("\n");
	return 0;
}
