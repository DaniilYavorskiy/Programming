#include <iostream>
#define n 5
typedef int rown[n];
typedef int rownn[n-1];
using namespace std;
int main() {
    int m;
    printf("Vvedite m: ");
    scanf("%d", &m); 
    rown* B = new rown[m]; 

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            B[i][j] = rand() % 50;
            printf("%4d ", B[i][j]);
        };   
        printf("\n");
    }
    int max_i; int max_j; int max = -1;
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            if(B[i][j] > max) {
                max = B[i][j];
                max_i = i;
                max_j = j;
            }
    rown* C = new rown [m - 1];

    for(int i = 0, C_i = 0; C_i < m - 1; i++, C_i++)
        for(int j = 0, C_j = 0; C_j < n - 1; j++, C_j++){
            if(max_i == i) i++;
            if(max_j == j) j++;
            C[C_i][C_j] = B[i][j];
        }
     printf("\n"); printf("\n"); printf("\n");
      for(int i = 0; i < m - 1; i++){
        for(int j = 0; j < n - 1; j++){
            printf("%4d ", C[i][j]);
        };   
        printf("\n");
    }

        delete [] C;
        C = NULL;
        delete[] B;
        B = NULL; 

    return 0;
}