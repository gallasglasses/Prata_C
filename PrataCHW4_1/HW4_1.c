#include <stdio.h>
int main ()
{
	char First_Name[40];
	char Last_Name[40];
	printf("Введите Ваши имя и фамилию.\n");
	fflush(stdout);
	scanf("%s %s", First_Name, Last_Name);
	printf("Ваши фамилия и имя: %s, %s.\n", Last_Name, First_Name);
	return 0;
}
