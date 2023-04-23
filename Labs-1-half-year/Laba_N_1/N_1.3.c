#include <stdio.h>
#include <math.h>  

int main (int argc, char *argv[]) {
     float x, y, t, z;
	 t = 1, z = 3;
     y = sin(t);
     x =  4 * (pow(y, 2))/(4*y*exp(z)- 2 * (pow(t, 3)));
    printf("Otvet: X = %.2f", x);
    system ("pause");
    return 0;
}

