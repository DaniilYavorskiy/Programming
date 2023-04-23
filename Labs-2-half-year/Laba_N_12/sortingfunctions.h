#pragma once
#ifndef _SORTINGFUNCTIONS_H_
#define _SORTINGFUNCTIONS_H_
#include <iostream>
using namespace std;

void fill_array(int mas[], int n){
    for(int i = 0; i < n; i++) mas[i] = rand() % 10000;
}

void fill_array(float mas[], int n){
    for(int i = 0; i < n; i++) mas[i] = rand() % 10000;
}



int BubbleSort(int mas[], int n){
    int C = 0; int M = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = n - 1; j > i; j--){
            C++;if(mas[j] < mas[j - 1]){ swap(mas[j], mas[j - 1]); M+=3;};
        }
    }
    return M + C;
}


int BubbleSort(float mas[], int n){
    int C = 0; int M = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = n - 1; j > i; j--){
            C++;if(mas[j] < mas[j - 1]){ swap(mas[j], mas[j - 1]); M+=3;};
        }
    }
    return M + C;
}


int SelectionSort(int mas[], int n) {
     int C = 0; int M = 0;
  int i, j, imin;
  for (i = 0; i < n - 1; i++) {
    imin = i;
    for (j = i + 1; j < n; j++){
      C++; if (mas[j] < mas[imin])
        imin = j;
    }
    swap(mas[i], mas[imin]); M+=3;
  }
  return M + C;
}


int SelectionSort(float mas[], int n) {
     int C = 0; int M = 0;
  int i, j, imin;
  for (i = 0; i < n - 1; i++) {
    imin = i;
    for (j = i + 1; j < n; j++){
      C++; if (mas[j] < mas[imin])
        imin = j;
    }
    swap(mas[i], mas[imin]); M+=3;
  }
  return M + C;
}


int ShakerSort(int mas[], int n) {
     int C = 0; int M = 0;
	int buff;
    int control=n;
	int left = 0;
	int right = n - 1;
do{
    for (int i = right; i > left; i--) {
			C++; if (mas[i] < mas[i - 1]) {
				swap(mas[i], mas[i-1]); M += 3;
                control=i;
			}
		}
		left = control;
		for (int i = left; i < right; i++) {
			C++; if (mas[i] > mas[i + 1]) {
				swap(mas[i], mas[i+1]); M+=3;
                control=i;
			}
		}
		right = control;
		
	} while (left < right);
    return M + C;
}


int ShakerSort(float mas[], int n) {
     int C = 0; int M = 0;
	int buff;
    int control=n;
	int left = 0;
	int right = n - 1;
do{
    for (int i = right; i > left; i--) {
			C++; if (mas[i] < mas[i - 1]) {
				swap(mas[i], mas[i-1]); M += 3;
                control=i;
			}
		}
		left = control;
		for (int i = left; i < right; i++) {
			C++; if (mas[i] > mas[i + 1]) {
				swap(mas[i], mas[i+1]); M+=3;
                control=i;
			}
		}
		right = control;
		
	} while (left < right);
    return M + C;
}

#endif