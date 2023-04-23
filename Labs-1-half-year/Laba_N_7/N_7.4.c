#include <stdio.h>
#include <stdlib.h>

int main() {
  int i;
  int j;
  int k;
  int c[20];
  int d[20];
  int e[40];
  for(i = 0; i < 20; i++){
    c[i] = rand() % (21);
    d[i] = rand() % (21);
    
  }

  for(i = 0; i < 19; i++){
    for(j = i + 1; j < 20; j++){
      if(c[i] > c [j] ) {
        int buffer = c[i];
        c[i] = c[j];
        c[j] = buffer;
      }
       if(d[i] > d[j] ) {
        int buffer = d[i];
        d[i] = d[j];
        d[j] = buffer;
      }
      
    }
   
  }
  printf ("Massivs C D:\nC ---- D\n");
  
  for(i = 0; i <20; i++)
   printf ("%d ---- %d\n",c[i], d[i]);
   k = 0; i = 0; j = 0;

while (i < 20 && j < 20) {
   if (c[i] <= d[j]) {
       e[k++] = c[i++];
  } else {
        e[k++] = d[j++];
       }
}

while (i < 20) e[k++] = c[i++];
while (j < 20) e[k++] = d[j++];

  printf ("\nMassiv E: \n");
  for(i = 0; i < 40; i++) printf("%d\n", e[i]);
  system ("pause");
  return 0;
}
