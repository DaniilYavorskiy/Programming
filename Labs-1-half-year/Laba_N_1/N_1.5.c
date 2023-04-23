#include <stdio.h>
#include <math.h>
 
int main (int argc, char *argv[]) {
    float x, y, z, t, q;
    y = 2; z = 4;
    t = sin(2 + z);
    q = 1 / (tan(z));
    x = 6 * (pow(t, 2)) - (q + 1) / pow(y, 2);
	printf("Otvet: X = %.4f", x);
	system ("pause");
    return 0;
}