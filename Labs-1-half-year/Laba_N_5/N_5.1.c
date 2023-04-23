#include <stdio.h>
#include <math.h>

int main() {
  float i = 1.0;
  double Pi = 0;
  float e = 0.00001;;
  while(pow(i * 2 - 1, -1) > e){
    Pi += pow(i * 2 - 1, -1) * pow(-1, i + 1);
    i++;
  }
  printf("%7.5f",  4 * Pi);
  
  system ("pause");
  return 0;
}