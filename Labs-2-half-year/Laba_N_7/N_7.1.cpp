#include <iostream>

using namespace std;

void zerofunc(int *mass, int m){
    int min = 0, min2 = 0;
    
    for (int i = 0; i < m; i++){
        if (mass[min] > mass[i]){
            min = i;
        }
    }    
    
    for (int i = 0; i < m; i++){    
        if (mass[min2] >= mass[i]){
            if (min != i){
                min2 = i;
            }
        }
    }
    
    if (min > min2){
        for (int i = min2 + 1; i < min; i++){
            mass[i] = 0;
        }
    }    
    else if(min < min2){
        for (int i = min + 1; i < min2; i++){
            mass[i] = 0;
        }
    }
}

int main(){
    const int m = 17;
    int mass[m] = {2,4,2,1,5,3,1,5,6,2,7,4,2,2,2,4,5}; 
    
    for (int i = 0; i < m; i++){
        cout << mass[i]<<" ";
    }
    
    cout << "\n\nMassiv s obnuleniem:\n";
    zerofunc(mass, m);
    
    for (int i = 0; i < m; i++){
        cout << mass[i]<<" ";
    }
}
