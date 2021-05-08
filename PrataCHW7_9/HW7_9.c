#include<stdio.h>
#include<stdbool.h>

int main(void)
{
	int i, j;
	int number = 0;
	bool prime;
	printf("Enter the number:\n");
	fflush (stdout);

	while ( (scanf("%d", &number) == 1) && (number > 0))
	{
		if (number > 1)
			printf ("All the prime numbers smaller than or equal to %d:\n", number);
		else
			printf ("There is no the prime numbers");
		for(i=2; number >= i; i++)
		{
			for (j=2, prime = true; (j * j) <= i; j++)
				if ( i % j == 0 )
					prime = false;
			if ( prime )
				printf("%4d",i);
		}
		printf("\nEnter the number:\n");
		fflush (stdout);
	}
	return 0;
}
