#include <stdio.h>
#include <string.h>

int i, j, k, fam;
int main() {
  char st[1000];
  char stTemp[1000][1000];
 
  gets(st);
  fam = 0;
  for(i = 0; i < strlen(st); i++) if(st[i] == ' ') fam++;
  for(i = 0; i < 1000; i++) for (j = 0; j < 1000; j++) stTemp[i][j] ='\0';
  j = 0;
  for(i = 0; i < fam + 1; i++){
  k = 0;
    while(st[j] != ',' && st[j] != '\0') {
      stTemp[i][k] = st[j];
      k++;
      j++;
    }
    j+=2;
  }
  int poryadok[fam + 1];
  for(i = 0; i < fam + 1; i++) poryadok[i] = i;
  for(i = 0; i < fam + 1; i++)
  for(j = i; j < fam + 1; j++) {
    if(strcmp(stTemp[poryadok[i]], stTemp[poryadok[j]]) > 0) {
      int tmp = poryadok[i];
      poryadok[i] = poryadok[j];
      poryadok[j] = tmp;
    }
  } 
  for(i = 0; i < fam + 1; i++) puts(stTemp[poryadok[i]]);
 
  system ("pause");
  return 0;
}
