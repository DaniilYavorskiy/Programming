#include <stdio.h>

int main() {
  
  int x1, x2, x3, x4;
  scanf("%d %d %d %d", &x1, &x2, &x3, &x4);
  int i = 0;
  if(x1 < x2 && x1 < x3 && x1 < x4) i = 1;
  if(x2 < x1 && x2 < x3 && x2 < x4) i = 2;
  if (x3 < x1 && x3 < x2 && x3 < x4) i = 3;
  if( x4 < x1 && x4 < x2 && x4 < x3) i = 4;
  printf("naim chislo stoit %d v ryady ", i);
  system ("pause");
  return 0;
}