#include <stdio.h>
#include <math.h>

int main() {

    float s = 0 , n;
    int i;
    scanf("%f", &n);
    for(i = 1; i < n+1; i++) {
          if (i % 2 !=0)
          s += i;
          else
          s -= i;
    }
    
    printf("%.3f", s);
    
    system ("pause");
    return 0;
}

