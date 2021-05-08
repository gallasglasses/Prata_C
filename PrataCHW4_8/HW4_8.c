#include <stdio.h>
int main()
{
	const float LITRE_PER_GALLON = 3.785;
	const float KM_PER_MILE = 1.609;
	float lpkm, mpg, mile, gallon;

	printf("Enter miles:\n");
	fflush(stdout);
	scanf("%f", &mile);

	printf("Enter gallones:\n");
	fflush(stdout);
	scanf("%f", &gallon);

	mpg = mile / gallon;

	printf("Mile per gallon: %.1f\n", mpg);

	lpkm = (100 * LITRE_PER_GALLON) / (mpg * KM_PER_MILE);

	printf("Converting fuel consumption from miles"
			"per gallon to liters per kilometers: %.1f\n", lpkm);

}
