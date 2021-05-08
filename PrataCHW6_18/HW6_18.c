#include <stdio.h>
#define START 5
#define DUNBAR 150

int main(void)
{
	int week, friends;

	week = 0;
	friends = START;
	printf("%5s %15s\n", "Week", "Friends");
	printf("%5d %14d\n", week, friends);
	do {
		++week;
		friends -= week;
		friends *= 2;
		printf("%5d %14d\n", week, friends);
	} while (DUNBAR > friends);

	return 0;
}
