#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

void fill_mas(int *A, int N){
    for(int i = 0; i < N; i++){
        A[i] = rand() % 100; 
    }
}
void BubbleSort(int *A, int N){
    int b = 0;
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N-i-1; j++) {
            if (A[j] < A[j + 1]) {
                swap(A[j], A[j + 1]);
            }
        }
    }
}

void goserch(int *A, int N, int x, int &pov){
    for(int i = 0; i < N; i++){
        pov++;
        if (A[i] == x){
            break;
        }
    }
}

void BSearch(int *A,int N,int x, int &pov){
    bool res = false;
    
    int L = 0;
    int R = N-1;
    int m;
    
    while(L<=R){
        
        m = (L+R)/2;
        if(A[m] == x){
            res = true;
            break;  
        }
        
        pov++;
        if(A[m]<x){
            L = m+1;
        }
        else  R = m-1;
    }
}


int main(){
    
    srand(time(0));    
    int *A,*B, N, x, pov = 0;
    pov = 0;
    
    cout << "Vvedite chislo: "; cin >> x;
    N = 100;
    A = new int [N];
    cout << "\nN = 100: \n\n";
    fill_mas(A,N);
    BubbleSort(A,N);
    BSearch(A,N,x,pov);
    cout <<"[BSearch] : "<<pov<<"\n";
    pov = 0;
    goserch(A,N,x,pov);
    cout <<"[Pryamoi] : "<< pov<<"\n\n";
    cout << "N = 1000: \n\n";
    N = 1000;
    B = new int[N];
    fill_mas(B,N);
    BubbleSort(B,N);
    BSearch(B,N,x,pov);
    cout <<"[BSearch] : "<<pov<<"\n";
    pov = 0;
    goserch(B,N,x,pov);
    cout <<"[Pryamoi] : "<< pov<<"\n";
    
    delete A;
    delete B;

}