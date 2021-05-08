#include <stdio.h>
void jolly(void);
void denny(void);

int main(void)
{

	jolly();
	jolly();
	jolly();
	denny();

	return 0;
}

void jolly(void)
{
	printf("Он веселый молодец!\n");
}

void denny(void)
{
	printf("Никто не может это отрицать!\n");
}
