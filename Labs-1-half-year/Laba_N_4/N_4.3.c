#include <stdio.h>

int main() {
  float s = 0;
  int n = 0;
  scanf("%d", &n);
  for(int i = 1; i <= n; i++){
    s += sin(2*i)/cos(2*i);
  }
  printf("s = %3.1f", s);
  system ("pause");  
    return 0;
}