#include <stdio.h>
#define SIZE 26
int main(void)
{
	int i;
	char ch[SIZE];
	for(i=0; i < SIZE; i++)
	{
		ch[i] = 'A' + 1*i;
		printf("ch[%d] = %c\n", i, ch[i]);
	}
	return 0;
}

