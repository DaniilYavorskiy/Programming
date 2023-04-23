#include <stdio.h>

int main() {
  int x = 1;
  double s = 0;
  int step = 1;
  for(double i = 0.18; i <= 0.36;i += 0.02){
     s += pow(i*x, step);
     step++;
  }
  printf("%3.3f", s);
  system ("pause");
  return 0;
}