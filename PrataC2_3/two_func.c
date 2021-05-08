#include <stdio.h>
void butler(void);
int main(void)
{
	printf("Я вызываю дворецкого.\n");
	butler();
	printf("Да. Принесите мне чай и газету.\n");

	return 0;
	}

void butler (void)
{
	printf("Вы звонили, сэр?\n");
}
