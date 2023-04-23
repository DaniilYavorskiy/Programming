#include <stdio.h>

int main() {
  double a = 2.14;
  double b = -4.21;
  double c =3.25;
  double x_1 = -13.5;
  double x_2 = -4.5;
  double h = 0.5;
  double y = 0;
  double max = (a* x_1 * x_1 + b * x_1 +c) * sin(x_1);
  double min = (a* x_1 * x_1 + b * x_1 +c) * sin(x_1);
  while(x_1 != x_2){
    y = (a* x_1 * x_1 + b * x_1 +c) * sin(x_1);
    if (y < min) min = y;
    if (y > max) max = y;
    printf("%f\n", y);
    x_1 += 0.5;
  }
  printf("max = %f\nmin = %f", max, min);
  
  system ("pause");
  return 0;
}