#include <stdio.h>

int main() {
  int a;
  scanf("%d", &a);
  switch(a <= 9 && a >= -9){
    case 1:
    switch(a){
      case -9: printf("minus nine "); break;
      case -8: printf("minus eight "); break;
      case -7: printf("minus seven "); break; 
      case -6: printf("minus six "); break;
      case -5: printf("minus five "); break;
      case -4: printf("minus four "); break;
      case -3: printf("minus three "); break;
      case -2: printf("minus two "); break;
      case -1: printf("minus one ");
      break;
      case 0: printf("zero "); break;
      case 1: printf("one "); break;
      case 2: printf("two "); break;
      case 3: printf("three "); break;
      case 4: printf("four "); break;
      case 5: printf("five "); break;
      case 6: printf("six "); break;
      case 7: printf("seven "); break;
      case 8: printf("eight "); break;
      case 9: printf("nine "); }   
    break;
    default: printf("Error ");
  }
  
  system ("pause");
  return 0;
}