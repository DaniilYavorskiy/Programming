#include <stdio.h>
#include <stdlib.h>

int i, j;
int main() {
 int A[10][20];
 for(i = 0; i < 10; i++){
 for (j = 0; j < 20; j++){
 A[i][j] = rand() % 20;
 printf("%3d", A[i][j]);
 }
 printf("\n");
 }
  printf("\n\n\n\n\n");
 for (i = 0; i < 10; i+= 2)
 for (j = 0 ; j < 20; j++)
 {
   int buffer = A[i][j];
   A[i][j] = A[i + 1][j];
   A[i+1][j] = buffer;
 }
 for(i = 0; i < 10; i++){
 for(j = 0; j < 20; j++){
   printf("%3d", A[i][j]);
 }
 printf("\n");
 }
  
  system ("pause");   
  return 0;
}
