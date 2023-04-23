#include <stdio.h>
#include <stdlib.h>

int main() {
  float C[20];
  for(int i = 0; i < 20; i++){
    C[i] = (float)rand() * (10) /RAND_MAX + 0; 
    printf("%d = %f\n", i+1, C[i]);
  }

  for(int i = 1; i < 19 ; i++) 
  if(C[i-1] < C[i] && C[i+1] < C[i]) 
  printf("\n%f\n\n", C[i]);
  
  system ("pause");
  return 0;
}