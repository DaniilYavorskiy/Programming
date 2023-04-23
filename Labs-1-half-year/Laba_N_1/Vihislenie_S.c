#include <stdlib.h>
#include <stdio.h>
#include <math.h>  

int main(int argc, char *argv[])
{
     float a,b,c,x, S;  
     printf ("vvedite c, x ");
     x=x/180*3.14159265;   //первод из градусов в радианы
     scanf ("%f%f",&c,&x);
     a=c*sin(x);
     b=c*cos(x);
     S=a*b/2;
     printf("\n Output: a=%7.2f     b=%7.2f      S=%7.2f ",a, b, S);
     system("PAUSE");
    return 0;
}
