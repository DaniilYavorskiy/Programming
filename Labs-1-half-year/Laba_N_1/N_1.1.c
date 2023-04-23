#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]) {
	float y = 2;
	float z = 4;
	float t = 5 / (1 + powf(y, 2));
	float x = 2 * y + 3 * sinh(t) - z;
	printf("Otvet: X = %.2f", x);
	system ("pause");
	return 0;
}