#include <iostream>
#include "sortingfunctions.h"
int timer(int tip_sort(int[], int), int a[], int n){
    return tip_sort(a, n);
}
int timer(int tip_sort(float[], int), float a[], int n){
    return tip_sort(a, n);
}

int main() {
    int n = 1000;
    int mas1[n];
    fill_array(mas1, n);
    int bubblesort_time = timer(BubbleSort, mas1, n);
    fill_array(mas1, n);
    int shakersort_time = timer(ShakerSort, mas1, n);
    fill_array(mas1, n);
    int selectionsort_time = timer(SelectionSort, mas1, n);
    cout << bubblesort_time << " " << shakersort_time << " " << selectionsort_time << endl;
    
    int mas2[n];
    fill_array(mas2, n);
    bubblesort_time = timer(BubbleSort, mas2, n);
    fill_array(mas2, n);
    shakersort_time = timer(ShakerSort, mas2, n);
    fill_array(mas2, n);
    selectionsort_time = timer(SelectionSort, mas2, n);
    cout << bubblesort_time << " " << shakersort_time << " " << selectionsort_time << endl;
  
}