#include <stdio.h>

int main() {
  double s = 0;
  for(int i = 1; i <= 25; i++){
    s += sin(i);
  }
  printf("s = %7.3f", s);
  system ("pause");
  return 0;
}