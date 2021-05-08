#include <stdio.h>
#include <string.h>

int main ()
{
	char First_Name[40], Last_Name[40];
	int Size_First_Name, Size_Last_Name;
	printf("¬ведите ¬аше им€.\n");
	fflush(stdout);
	scanf("%s", First_Name);
	Size_First_Name = strlen (First_Name);

	printf("¬ведите ¬ашу фамилию.\n");
	fflush(stdout);
	scanf("%s", Last_Name);
	Size_Last_Name = strlen (Last_Name);

	printf("%*s %*s\n", Size_First_Name, First_Name, Size_Last_Name, Last_Name);
	printf("%*d %*d\n", Size_First_Name, Size_First_Name, Size_Last_Name, Size_Last_Name);

	printf("%-*s %-*s\n", Size_First_Name, First_Name, Size_Last_Name, Last_Name);
	printf("%-*d %-*d\n", Size_First_Name, Size_First_Name, Size_Last_Name, Size_Last_Name);
	return 0;
}
