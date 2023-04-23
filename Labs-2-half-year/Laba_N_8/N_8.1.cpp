#include <iostream>
using namespace std;

struct School {
    int schoolNumber;
    int studentsFinal;
    int studentsUniversity;
};

void bubbleSort(School schools[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
    for (j = 0; j < n-i-1; j++)  
        if (((float) schools[j].studentsUniversity / schools[j].studentsFinal) * 100  < ((float) schools[j + 1].studentsUniversity / schools[j + 1].studentsFinal) * 100)  
            swap(schools[j], schools[j+1]);  
}  


int main() {
    int N = 20;
    School schools[N];
    for(int i = 0; i < N; i++) schools[i] = {rand() % 500 + 1, rand() % 100 + 50, rand() % 50};

    bubbleSort(schools, N);

    for(int i = 0; i < N; i++ ){
        printf("%4d     %5.2f%%\n", schools[i].schoolNumber, ((float) schools[i].studentsUniversity / schools[i].studentsFinal * 100));
    }
}