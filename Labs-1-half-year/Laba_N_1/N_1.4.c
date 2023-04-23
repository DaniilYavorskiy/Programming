#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[]) {
	float t, z, x, y;
	t = 2, z = 3, y = cos(t + z);
	x = 4 * log(pow(y, 3)) - z / t;
	printf("Otvet: X = %.2f", x);
	system ("pause");
	return 0;
}