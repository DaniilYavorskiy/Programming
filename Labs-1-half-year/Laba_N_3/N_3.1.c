#include <stdio.h>

int main() {
  int M;
  scanf("%d", &M);
  switch (M){
    case 1: case 2: case 3: printf("Kvartal 1 - "); break;
    case 4: case 5: case 6: printf ("Kvartal 2 - "); break;
    case 7: case 8: case 9: printf("Kvartal 3 - "); break;
    case 10: case 11: case 12: printf("Kvartal 4 - "); break;
  }
  
  switch(M){
    case 12: case 1: case 2: printf("Winter "); break;
    case 3: case 4: case 5: printf("Spring "); break;
    case 6: case 7: case 8: printf("Summer "); break;
    case 9: case 10: case 11: printf("Fall "); break;
  }
  system ("pause");
  return 0;
}