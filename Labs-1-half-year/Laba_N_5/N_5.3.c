#include <stdio.h>

int main() {
  int n = 0;
  scanf("%d", &n);
  int i = 2;
  int cout = 0;
  int _cout = 0;
  while(i <= n){
    int j = 2;
    while(i >= j){
      if(i % j == 0) cout++;
      j++;
    }
    if(cout == 1){ printf("%d\n", i);
    _cout++;}
    cout = 0;
    i++;
  }

  printf("\nKolichestvo = %d", _cout);
 
  system ("pause");
  return 0;
}