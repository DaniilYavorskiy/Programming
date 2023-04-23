#include <stdio.h>
#include <math.h>  

int main (int argc, char *argv[]) {
     float x, y, t, z;
	 t = 0.5, z = 6;
     y = t+2*(1/tan(z));
     x = 3*y*y/(4*tan(z)-2*t*t);
    printf("Otvet: X = %.2f", x);
    system ("pause");
    return 0;
}

