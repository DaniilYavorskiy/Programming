#include <stdio.h>
#include <stdlib.h>

int main() {
  int a[14];
  int i;

  for(i = 0; i <= 14; i++){
    a[i] = rand() % 11;
    printf("%d\n", a[i]);
  }
  printf("\n\nNepovtoryauchiesya elements: \n");
  int b[10];
  for(i = 0; i<= 10; i++) b[i] = 0;
  for(i = 0; i <= 14; i++){
    b[a[i]]++;
    if(b[a[i]] == 1) printf("%d\n", a[i]);
  }
  
  system("pause");
  return 0;
}
