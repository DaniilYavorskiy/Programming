#include <stdio.h>

int main() {
	
  int k, m, n;
  scanf("%d %d %d", &k, &m, &n);
  int knew, mnew, nnew;
  if(k < m && k < n){
    if(m < n) printf("%d %d %d ", k, m, n);
    if(n < m) printf("%d %d %d ", k, n, m);
  }
  if(m < k && m < n){
    if(k < n) printf("%d %d %d ", m, k, n);
    if(k > n) printf("%d %d %d ", m, n, k);
  }
  if(n < k && n < m){
    if(m < k) printf("%d %d %d ", n, m, k);
    if(m > k) printf("%d %d %d ", n, k, m);
  }
  system ("pause");
  return 0;
}