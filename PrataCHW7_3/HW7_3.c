#include <stdio.h>

int main(void)
{
	int num = 0;
	int even_sum, odd_sum, even_total, odd_total;
	float even_average_val, odd_average_val;
	even_sum = odd_sum = even_total = odd_total = even_average_val = odd_average_val = 0;

	printf("Enter numbers:\n");
	fflush(stdout);
	while ( (scanf("%d", &num) == 1) && num != 0)
	{
		if ( num % 2 == 0 )
			{
				even_sum+= num;
				even_total++;
			}
		else
			{
				odd_sum+= num;
				odd_total++;
			}
	}


	if (even_sum > 0)
	{
		even_average_val = ( float ) even_sum / even_total;
		printf("the total number of even integers: %d\n", even_total);
		printf("the average value of the even integers: %f\n", even_average_val);
	}
	if (odd_sum > 0)
		{
			odd_average_val = ( float ) odd_sum / odd_total;
			printf("the total number of odd integers: %d\n", odd_total);
			printf("the average value of the odd integers: %f\n", odd_average_val);
		}

	printf("Done.\n");
	fflush(stdout);
	return 0;

}
