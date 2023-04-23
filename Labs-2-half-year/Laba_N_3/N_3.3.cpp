#include <iostream>

using namespace std;

int main() {
  printf("Vvedite n: ");
  int n;
  cin >> n;
  int* a = new int[n + 1];
  for (int i = 0; i <= n; i++) a[i] = i;
  int m = 2;
  while(m <= n){
      if(a[m] != 0 ){
          int j = m * 2;
          while(j <= n){ a[j] = 0; j = j + m; }
      }
      m++;
  }
    for(int i = 2; i < n; i++ ) if(a[i] != 0) printf("%d ", a[i]);
    delete [] a;
  return 0;
}