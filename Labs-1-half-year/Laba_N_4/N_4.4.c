#include <stdio.h>
#include <math.h>

int main() {
  double s = 0;
  for(float i = 0.1; i <= 2.1; i+= 0.2) s += log(i);
  printf("%f", s);
  system ("pause");
  return 0;
}