#include <stdio.h>

int main() {
	
  int x1, x2, x3, x4;
  scanf("%d %d %d %d", &x1, &x2, &x3, &x4);
  x1 = x1 < 0 ? 0 : x1;
  x2 = x2 < 0 ? 0 : x2;
  x3 = x3 < 0 ? 0 : x3;
  x4 = x4 < 0 ? 0 : x4;
  printf("ZAMENA: %d %d %d %d", x1, x2, x3, x4);
  system ("pause");
  return 0;
}