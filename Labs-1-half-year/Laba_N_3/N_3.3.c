#include <stdio.h>

int main() {
printf("Vvedite god:  ");
  int year;
  scanf("%d", &year);
  int year_name = (year - 4) % 12;
  switch(year_name){
    case 0: printf("Krisa "); break;
    case 1: printf("Korova "); break;
    case 2: printf("Tigr "); break;
    case 3: printf("Zayac "); break;
    case 4: printf("Drakon "); break;
    case 5: printf("Zmeya "); break;
    case 6: printf("Loshad "); break;
    case 7: printf("Ovca ");break;
    case 8: printf("Obezyana "); break;
    case 9: printf("Petyx "); break;
    case 10: printf("Sobaka "); break;
    case 11: printf("Svinya "); break;
  }
  system ("pause");
  return 0;
}