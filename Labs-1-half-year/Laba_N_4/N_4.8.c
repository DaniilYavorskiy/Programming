#include <stdio.h>

int main() {
  int s = 1;
  for(int i = 2; i <= 12; i+=2) s*=i;
  printf("P = %d", s);
  system ("pause");
  return 0;
}