#include <stdio.h>
int factorial(int a)
{
  if (a == 0 || a == 1) return 1;
   return factorial(a-1) * a;
 
}
int main(void) {
  int x = 5;
  int n = 0;
  float s = 0;
  scanf("%d", &n);
  for(int i = 0; i<=n; i++) s+= pow(x,i)/factorial(i);
  printf("%.2f", s);
  system ("pause");
  return 0;
}