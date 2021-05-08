#include <stdio.h>

int main()
{
	float height;
	char name[30];
	printf("Введите Ваш рост в дюймах:\n");
	fflush(stdout);

	scanf("%f", &height);

	printf("Введите Ваше имя:\n");
	fflush(stdout);

	scanf("%s", name);

	printf("%s, ваш рост составляет %0.2f футов.\n", name, height / 12);

	return 0;

}
