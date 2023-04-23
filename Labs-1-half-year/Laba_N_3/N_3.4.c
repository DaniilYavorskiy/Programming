#include <stdio.h>

int main() {
printf("Vvedite nomer mecyaca i dnya:  ");
  int d, m;
  scanf("%d %d", &m, &d );
  int i = 0;
  switch(m){
    case 12: i +=30;
    case 11: i+= 31;
    case 10: i+= 30;
    case 9: i += 31;
    case 8: i+= 31;
    case 7: i+= 30;
    case 6: i += 31;
    case 5: i += 30;
    case 4: i+= 31;
    case 3: i += 28;
    case 2: i+= 31;
   break;
  }
  printf("N dnya v etom gody - %d ", i + d);
  system ("pause");
  return 0;
}