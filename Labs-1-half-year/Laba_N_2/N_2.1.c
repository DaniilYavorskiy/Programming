#include <stdio.h>
#include <stdlib.h>

int main() {

  int x1, x2, x3, x4, x5, x6;
  scanf("%d %d %d %d %d %d", &x1, &x2, &x3, &x4, &x5, &x6);
  int sum = x1 + x2 + x3 + x4 + x5 + x6;
  int mul = x1 * x2 * x3 * x4 * x5 * x6;
  printf("summa = %d\n", sum);
  printf("proizvedenie = %d\n", mul);
  if (sum > mul) 
  {
  printf("raznost summi ot proizvedeniya %d", sum - mul);
} 
  else {
  printf("raznost proizvedeniya ot symmi %d", mul - sum);
}
  system ("pause");
  return 0;
}