#include <iostream>

using namespace std;
int main() {
    int m, n;
    cout << "Vvedite m:";
    scanf("%d", &m);
    cout << "Vvedite n:";
    scanf("%d", &n); 
   
    int **A = new int* [m];
    for(int i = 0; i < m; i++)
        A[i] = new int[n];

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            A[i][j] = rand() % 20;

    int **D = new int* [m + 1];
    for(int i = 0; i < m + 1; i++)
        D[i] = new int[n + 1];

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            D[i][j] = A[i][j];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            D[m][i] += A[j][i];
        }
    }
    
	for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            D[i][n] += A[i][j];
        }
    } 
    
	for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            D[m][n] += D[i][j];
            
	for(int i = 0; i < m + 1; i++){
        for(int j = 0; j < n + 1; j++){
            printf("%4d ", D[i][j]);
        }
        printf("\n");
    }
    
	for (int i = 0; i < m+1; i++){
		delete D[i]; D[i] = NULL;
		} delete []D; D = NULL;
	
	for (int i = 0; i < m; i++){
		delete A[i]; A[i] = NULL;
		} delete []A; A = NULL;
    
	return 0;
} 