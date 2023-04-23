#include <iostream>
#include <cmath>

long int factorial(long int i)
{
  if (i==0) return 1;
  else return i*factorial(i-1);
}

void veroya(int& m, int& n){
    float p = 0.45;
    float q = 1 - p;
	double c = factorial(n)/(factorial(m) * factorial(n - m));
    double girlveroya = c * pow(p, m) * pow(q, n - m);
    double boyveroya = c * pow(q, m) * pow(p, n - m);
    printf("girlveroya = %f\nboyveroya = %f", girlveroya, boyveroya);
}

int main() {
    int a = 0; int b = 0;
    printf("Vvedite m:");
    scanf("%d", &a);
    printf("Vvedite n:");
    scanf("%d", &b);
    veroya(a, b);
    return 0;
}