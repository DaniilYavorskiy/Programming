#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i, j, k;
int main() {
  char st[50];
  char pris[10];
  char stTemp[50][50];
  gets(st);
  gets(pris);
  int word = 0;
  for(i = 0; i < strlen(st); i++) if(st[i] == ' ') word++;
  for(i = 0; i < 50; i++) for (j = 0; j < 50; j++) stTemp[i][j] ='\0';
  j = 0;
  for(i = 0; i < word + 1; i++) {
  k = 0;
    while(st[j] != ' ' && st[j] != '\0') {
      stTemp[i][k] = st[j];
      k++;
      j++;
    }
    j++;
  }
  for(i = 0; i < word + 1; i++) if (strncmp(stTemp[i], pris, strlen(pris)) == 0) puts(stTemp[i]);

  system ("pause");   
  return 0;
}
