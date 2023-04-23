#include <iostream>
#define m 10

using namespace std;
int main() {
  int* A = new int[m];
  int k = 0;
  cout << "Vvedite k:";
  scanf("%d", &k);
  for(int i = 0; i < m; i++) A[i] = rand() % 100;
  int **B = new int*[m];
  for(int i = 0; i < m; i++)
    B[i] = new int[m];
    int c = 0;
  for(int i = 0; i < m; i++){
      for(int j = 0; j < k; j++){
          if(c < m) {B[i][j] = A[c]; c++;}
           else B[i][j] = 0;
      }
  }
  int newSize = m;
   for(int i = m - 1; i >=0; i--){
        int lineSum = 0;
      for(int j = k - 1; j >= 0; j--){
           lineSum += B[i][j];
      }
      if (lineSum == 0){
          delete[] B[i];
          B[i] = NULL;
          newSize--;
      }
   }
   for(int i = 0; i < newSize ; i++){
       for(int j = 0; j < k; j++){
           printf("%4d ", B[i][j]);
       }
       printf("\n");

   }
   delete [] A; A = NULL;
   for(int i = 0; i < m; i++){delete B[i]; B[i] = NULL;} delete[]B; B = NULL;
  
  return 0;
}