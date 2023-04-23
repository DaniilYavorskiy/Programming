#include <stdio.h>
#include <math.h>
//ВАРИАНТ 2: f(x)=(2.5x2-0.1)/(tg x+sin x)  a=4; b=6;
int main() {
  float d1 = (6-4)/10.0;
  float a[11];
  float d2 = (6-4)/100.0;
  float b[101];
  float d3 = (6-4)/1000.0;
  float c[1001];
  float x = 4;
  int i = 0;
  while(i<=10){
    a[i] = (2.5*x*x - 0.1)/(sin(x)/cos(x)+sin(x));
    x += d1;
    i++;
  }
  x=4, i=0;
  while(i<=100){
    b[i] = (2.5*x*x - 0.1)/(sin(x)/cos(x)+sin(x));
    x += d2;
    i++;
  }
  x=4, i=0;
  while(i<=1000){
    c[i] = (2.5*x*x - 0.1)/(sin(x)/cos(x)+sin(x));
    x += d3;
    i++;
  }
  printf("I(1) - Trapezoid formula, I(2) - Simpson's formula \n");
  float i1, i2;
  i1 = a[0]/2 + a[10]/2;
  for (i = 1; i<= 9; i++) {
    i1 += a[i];
  }
  printf("N=10, I(1) = %f\n", d1*i1);
  float sum = a[0] + a[10];
  for(i = 1; i <= 9; i+=2) sum += 4 * a[i];
  for(i = 2; i<=8; i+=2) sum+= 2 * a[i];
  i2 = (d1/3.0) * sum;
  printf("N=10, I(2) = %f\n", i2);
    i1 = b[0]/2 + b[100]/2;
  for (i = 1; i<= 99; i++){
    i1 += b[i];
  }
  printf("N=100, I(1) = %f\n", d2*i1);
  sum = b[0] + b[100];
  for(i = 1; i <= 99; i+=2) sum += 4 * b[i];
  for(i = 2; i<=98; i+=2) sum += 2 * b[i];
  i2 = (d2/3.0) * sum;
  printf("N=100, I(2) = %f\n", i2);
   i1 = c[0]/2 + c[1000]/2;
  for (i = 1; i<= 999; i++){
    i1 += c[i];
  }
  printf("N=1000, I(1) = %f\n", d3*i1);
  sum = c[0] + c[1000];
  for(i = 1; i <= 999; i+=2) sum += 4 * c[i];
  for(i = 2; i<=998; i+=2) sum+= 2 * c[i];
  i2 = (d3/3.0) * sum;
  printf("N=1000, I(2) = %f\n", i2);
  
  system ("pause");  
  return 0;
}