#include <stdio.h>

int main() {
  int s = 0;
  for(int i = 1; i <= 117; i++){
    s += i;
  }
  printf("s = %d", s);
  system ("pause");
  return 0;
}