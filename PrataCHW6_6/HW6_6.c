#include <stdio.h>

int main(void)
{
	int i, start, end, square, cube;
	printf("������� ������� ������:");
	fflush(stdout);
	scanf("%d",&start);
	printf("������� ������ ������:");
	fflush(stdout);
	scanf("%d",&end);
	//start=10;
	//end=20;

	printf("%10s %10s %10s\n", "�����", "�������", "���");
	for(i=start; i <= end; i++)
		{
		square = i * i;
		cube = square * i;
		printf("%10d %10d %10d", i, square, cube);
		printf("\n");
		}
	return 0;
}
