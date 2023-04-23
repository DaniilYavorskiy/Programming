#include <stdio.h>
#include <stdlib.h>

int i, j;
int main() {
  int N = 5;
  double a[N][N];
  for(i = 0; i < N; i++){
  for(j = 0; j < N; j++){
  a[i][j] = (double)(rand())/RAND_MAX * 10;
  printf("%10.4f", a[i][j]);
  }
  printf("\n");
  }
printf("\n\n\n\n\n");
  for(i = 0; i < N; i++){
  double sum = 0;
  for(j = 0; j < N; j++) sum += a[i][j];
  for(j = 0; j < N; j++) a[i][j] /= sum, printf("%10.4f", a[i][j]);
  printf("\n");  
  }
  
  system ("pause");   
  return 0;
}
