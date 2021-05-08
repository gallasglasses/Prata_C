#include <stdio.h>

int main(void)
{
	int i, start, end, square, cube;
	printf("¬ведите верхний предел:");
	fflush(stdout);
	scanf("%d",&start);
	printf("¬ведите нижний предел:");
	fflush(stdout);
	scanf("%d",&end);
	//start=10;
	//end=20;

	printf("%10s %10s %10s\n", "„исло", " вадрат", " уб");
	for(i=start; i <= end; i++)
		{
		square = i * i;
		cube = square * i;
		printf("%10d %10d %10d", i, square, cube);
		printf("\n");
		}
	return 0;
}
