#include <stdio.h>

int main() {
 
  int x1, x2, x3, x4;
  scanf("%d %d %d %d", &x1, &x2, &x3, &x4);
  int max1 = 0, max2= 0;
  if(x1 > x2 && x1 > x3 && x1 > x4) max1 = x1;
  if(x2 > x1 && x2 > x3 && x2 > x4) max1 = x2;
  if (x3 > x1 && x3 > x2 && x3 > x4) max1 = x3;
  if( x4 > x1 && x4 > x2 && x4 > x3) max1 = x4;
  
  if(max1 == x1)  {
    if(x2 > x3 && x2 > x4) max2 = x2;
    if (x3 > x2 && x3 > x4) max2 = x3;
    if (x4 > x2 && x4 > x3) max2 = x4;
  }
  
  if(max1 == x2)  {
    if(x1 > x3 && x1 > x4) max2 = x1;
    if(x3 > x1 && x3 > x4) max2 = x3;
    if(x4 > x1 && x4 > x3) max2 = x4;
  }
  
  if(max1 == x3)  {
    if(x1 > x2 && x1 > x4) max2 = x1;
    if(x2 > x1 && x2 > x4) max2 = x2;
    if(x4 > x1 && x4 > x2) max2 = x4;
  }
  
 if(max1 == x4)  {
   if(x1 > x2 && x1 > x3) max2 = x1;
   if(x2 > x1 && x2 > x3) max2 = x2;
   if(x3 > x1 && x3 > x2) max2 = x3;
 }
 
  printf("max1 = %d\nmax2 = %d ", max1, max2);
  system ("pause");
  return 0;
}