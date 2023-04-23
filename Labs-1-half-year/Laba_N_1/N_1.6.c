#include <stdio.h>
#include <math.h>
 
int main (int argc, char *argv[]) {
    float x, y, z, t;
	z = 1; t = 2;
    y = tan(t) + z;
    x = (8 * (pow(z, 2)) + 1) / (y * exp(t) + pow(t, 2));
	printf("Otvet: X = %.2f", x);
	system ("pause");
    return 0;
}