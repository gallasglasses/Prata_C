#include <stdio.h>
int main ()
{
	int input;
	printf("Введите число:\n");
	fflush(stdout);
	scanf("%d", &input);
	printf("Когда символ %d равен %c.\n", input, input);
	return 0;
}
