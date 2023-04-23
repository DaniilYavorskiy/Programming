#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

void sumstr(int **A, int m){
    srand(time(0));
    int i, n;
    for (i = 0; i < m; i++){  
        int j = 0;
        n = 2 + rand() % 8;
        
        A[i] = new int[n+1];
        A[i][j] = n;
        
        for (j = 1; j < n+1; j++){   
            A[i][j] = rand() % 10;
        }
        n++;
    } 
}


int main(){
    int **A, m = 8;
    
    A = new int *[m];
    
    sumstr(A,m);
    
    for (int i = 0; i < m; i++){
        int sum = 0;
        cout << "["<<A[i][0]<<"] ";
        
        for (int j = 1; j <= A[i][0]; j++){
            sum += A[i][j];
            cout<<A[i][j] <<" ";
        }
        cout <<"sum: "<< sum <<"\n";
    }
}
