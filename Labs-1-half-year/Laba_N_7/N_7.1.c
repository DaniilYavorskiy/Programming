#include <stdio.h>
#include <stdlib.h>

int main () {
int i;
int j;
double y[58];
double b = -4.21;
double c = 3.21;
float h = 0.5;
double x_1 = -33.5;
double x_2 = -4.5;
float a = 2.14;

for(i = 0; i <= 58; i++, x_1 += h){
  y[i] = a * pow(x_1, 2) * sin(x_1) + b * x_1 + c;
  printf("x = %f y = %f\n", x_1, y[i] );
}

for(i = 1; i < 59; i++){
  for(j = i; j > 0; j--){
    if(y[j] > y[j-1]){
      double buffer = y[j-1];
      y[j-1] = y[j];
      y[j] = buffer;
    }
  }
}
printf("\n\nSortirovka:\n\n");
for(i = 0; i <= 58; i++) printf("%f\n", y[i]);

  system ("pause");
  return 0;
}
