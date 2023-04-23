#include <stdio.h>

int main() {
  int x1, x2, x3, x4, x5, x6, x7, x8;
  scanf("%d %d %d %d %d %d %d %d", &x1, &x2, &x3, &x4, &x5, &x6, &x7, &x8);
  int plus = 0;
  int notplus = 0;
  if(x1 >= 0) plus++; else notplus++;
  if(x2 >= 0) plus++; else notplus++;
  if(x3 >= 0) plus++; else notplus++;
  if(x4 >= 0) plus++; else notplus++;
  if(x5 >= 0) plus++; else notplus++;
  if(x6 >= 0) plus++; else notplus++;
  if(x7 >= 0) plus++; else notplus++;
  if(x8 >= 0) plus++; else notplus++;
  printf("plus = %d\n", plus);
  printf("not_plus = %d", notplus);
  system ("pause");
  return 0;
}