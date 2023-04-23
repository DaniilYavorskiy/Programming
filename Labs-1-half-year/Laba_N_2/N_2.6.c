#include <stdio.h>

int main() {
	
  int x1, x2, x3, x4;
  scanf("%d %d %d %d", &x1, &x2, &x3, &x4);
  
  int min  = 0;
  if(x1 < x2 && x1 < x3 && x1 < x4) min = x1;
  if(x2 < x1 && x2 < x3 && x2 < x4) min = x2;
  if (x3 < x1 && x3 < x2 && x3 < x4) min = x3;
  if( x4 < x1 && x4 < x2 && x4 < x3) min = x4;
  
  int max = 0;
  if(x1 > x2 && x1 > x3 && x1 > x4) max = x1;
  if(x2 > x1 && x2 > x3 && x2 > x4) max = x2;
  if (x3 > x1 && x3 > x2 && x3 > x4) max = x3;
  if( x4 > x1 && x4 > x2 && x4 > x3) max = x4;
  printf("raznost = %d ", max - min);
  system ("pause");
  return 0;
}