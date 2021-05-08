#include <stdio.h>
#define SIZE 8

int main (void)
{
	double input [SIZE];
	double output [SIZE];
	int i;
	//input[0]= 1.0;
	//input[1]= 2.0;
	//input[2]= 3.0;
	//input[3]= 4.0;
	//input[4]= 5.0;
	//input[5]= 6.0;
	//input[6]= 7.0;
	//input[7]= 8.0;
	printf("Enter %d digits\n", SIZE);
	fflush(stdout);
	for (i=0; i < SIZE; i++)
	{
		scanf("%lf", &input[i]);
		fflush(stdout);
	}
	output[0] = input[0];
	for (i=1; i < SIZE; i++)
		output[i] = output[i-1] + input[i];

	i=0;
	printf("First array:\n");
	do
	{
		printf("%15lf", input[i]);
		i++;
	} while(i < SIZE);
	printf("\n");
	i=0;
	printf("Second array:\n");
	do
	{
		printf("%15lf", output[i]);
		i++;
	} while(i < SIZE);
	printf("\n");

	return 0;
}
