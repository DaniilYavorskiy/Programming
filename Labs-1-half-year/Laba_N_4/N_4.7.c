#include <stdio.h>

int main() {
  int m = 0;
  int f = 1;
  scanf("%d", &m);
  for(int i = 1; i <= m; i++) f*=i;
  printf("P = %d", f);
  system ("pause");
  return 0;
}