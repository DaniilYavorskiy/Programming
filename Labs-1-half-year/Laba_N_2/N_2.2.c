#include <stdio.h>
#include<stdlib.h>

int main() {
	
  int x1, x2, x3, x4, x5;
  scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
  int sumOfPlus = 0;
  if (x1 >= 0) sumOfPlus += x1;
  if (x2 >= 0) sumOfPlus += x2;
  if (x3 >= 0) sumOfPlus += x3;
  if (x4 >= 0) sumOfPlus += x4;
  if (x5 >= 0) sumOfPlus += x5;
  printf("Summa plus chisel = %d", sumOfPlus);
  system ("pause");
  return 0;
}

