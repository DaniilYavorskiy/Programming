#include <stdio.h>
#include <stdlib.h>

int main() {
  int a[19];
  for(int i = 0; i<= 19; i++){
    a[i] = rand()%(10 - (-10) + 1) - 10;
    printf("%d\n", a[i]);
  }
printf("\n\n");
  for(int i = 0; i <= 19; i++){
    if(a[i] >= 0) printf("Pologit element: %d\n", a[i]);
  }
printf("\n\n");
   for(int i = 0; i <= 19; i++){
    if(a[i] < 0) printf("Otricat element: %d\n", a[i]);
  }
  
  system ("pause");
  return 0;
}