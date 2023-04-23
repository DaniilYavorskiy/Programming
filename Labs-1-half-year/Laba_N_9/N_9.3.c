#include <stdio.h>
#include <stdlib.h>

int i, j;
int main() {
 int A[5][5];
 for(i = 0; i < 5; i++){
 for(j = 0; j < 5; j++){
 A[i][j] = rand() % 10;
 printf("%3d", A[i][j]);
 }
 printf("\n");
 }
 printf("\n\n\nTransponirovannaya matrica:\n\n");
 int buffer = 0;
for(i = 0; i < 5; i++)
for(j = i; j < 5; j++){
  buffer = A[i][j];
  A[i][j] = A[j][i];
  A[j][i] = buffer;
}
for(i = 0; i < 5; i++){
for(j = 0; j < 5; j++) printf("%3d", A[i][j]);
printf("\n");
}

system ("pause"); 
return 0;
}
