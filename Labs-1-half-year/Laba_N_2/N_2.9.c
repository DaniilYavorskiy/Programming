#include <stdio.h>

int main() {

  int x1, x2, x3;
  scanf("%d %d %d", &x1, &x2, &x3);
  int max = 0;
  int min = 0;
  
  if(x1 < x2 && x1 < x3) min = x1;
  if(x2 < x1 && x2 < x3) min = x2;
  if(x3 < x1 && x3 < x2) min = x3;
  
  if(x1 > x2 && x1 > x3) max = x1;
  if(x2 > x1 && x2 > x3) max = x2;
  if(x3 > x1 && x3 > x2) max = x3;
  int buffer = 0;
  if(max == x1 && min == x2){
    buffer = x1;
    x1 = x2;
    x2 = buffer;
  }
  
  if(max == x1 && min == x3){
    buffer = x1;
    x1 = x3;
    x3 = buffer;
  }
  
  if(max == x2 && min == x1){
    buffer = x2;
    x2 = x1;
    x1 = buffer;
  }
  
  if(max == x2 && min == x3){
    buffer = x2;
    x2 = x3;
    x3 = buffer;
  }
  
  if(max == x3 && min == x1){
    buffer = x3;
    x3 = x1;
    x1 = buffer;
  }
  
  if(max == x3 && min == x2){
    buffer = x3;
    x3 = x2;
    x2 = buffer;
  }
  printf("%d %d %d", x1, x2, x3);
  system ("pause");
  return 0;
}