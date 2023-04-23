#include <stdio.h>
#include <math.h>
#include <stdlib.h>

const float PI = 3.1415926535;

float cosinus(float x) {
    x = fmod(x, 2 * PI);
    int n = 1;
    float temp = 1.0;
    float result = 0.0;
    
    do {
        result += temp;
        temp *= -1 * powf(x, 2) / ((2 * n - 1) * (2 * n));
        n++;
    } while (fabs(temp) > 0.0001);
    return result;
}


int main(int argc, const char * argv[]) {
    float x;
    
    printf("Input x :");
    scanf("%f", &x);
    
    float y = cosinus(x);
    printf("My cos: %.4f\tMath.h cos: %.4f\n", y, cos(x));
    
    return 0;
}