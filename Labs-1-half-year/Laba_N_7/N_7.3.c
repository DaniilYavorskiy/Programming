#include <stdio.h>
#include <stdlib.h>
int main() {
  float a[19];
  float b[19];

  for(int i = 0; i<=19; i++) b[i] = 0;
  printf("Massiv A:\n");

  for(int i = 0; i<= 19; i++ ){

    a[i] = (float)rand() * (20)/RAND_MAX - 10;
    printf("%f\n",a[i]);
    if(a[i] > 0) b[i] = a[i];

  }

printf("\n\nMassiv B:\n");

for(int i = 0; i<=19; i++)

  if(b[i] > 0) printf("%f\n", b[i]);

  system ("pause");
  return 0;
}