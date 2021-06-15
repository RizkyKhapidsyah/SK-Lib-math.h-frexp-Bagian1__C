/* frexp example */
#include <stdio.h>      /* printf */
#include <math.h>       /* frexp */
#include <conio.h>

/*	Source by CPlusPlus
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

int main() {
	double x, result;
	int n;

	x = 8.0;
	result = frexp(x, &n);
	printf("%f = %f * 2^%d\n", x, result, n);

	_getch();
	return 0;
}