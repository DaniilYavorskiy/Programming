#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
int** A = new int*[9];
for(int i = 0; i < 9; i++){
    A[i] = new int[i + 1];  
    for(int j = 0; j < i + 1; j++){
        A[i][j] = (i + 1) * (j + 1);
        printf("%d ", A[i][j]);
    }
    printf("\n");
}
for(int i = 0; i < 9; i++) {
delete A[i]; A[i] = NULL;} delete[]A; A = NULL;
}